/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C6E0
// Address: 0x000000000008C6E0

//----- (000000000008C6E0) ----------------------------------------------------
__int64 __fastcall sub_8C6E0(int a1, __int64 a2, char *a3, _OWORD *a4)
{
  unsigned __int64 StatusReg; // x23
  int v5; // w8
  unsigned int v6; // w19
  __int128 v10; // q0
  __int64 v11; // x0
  void *v12; // x0
  __int64 v13; // x19
  _OWORD v15[2]; // [xsp+0h] [xbp-480h] BYREF
  pthread_mutex_t ptr[26]; // [xsp+20h] [xbp-460h] BYREF
  __int64 v17; // [xsp+438h] [xbp-48h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  if ( a1 <= 0 )
    v5 = 52;
  else
    v5 = 54;
  if ( a1 )
    v6 = v5;
  else
    v6 = 53;
  v17 = *(_QWORD *)(StatusReg + 40);
  sub_A640C(v6, ptr);
  v10 = a4[1];
  v15[0] = *a4;
  v15[1] = v10;
  qvsnprintf((pthread_mutex_t *)(&ptr[0].__align + 3), 1024, a3, v15);
  v11 = __strlen_chk(&ptr[0].__align + 3, 1024);
  sub_545E8(ptr, &ptr[0].__align + 3, v11 + 1);
  v12 = (void *)(*(__int64 (__fastcall **)(__int64, _QWORD, pthread_mutex_t *))(*(_QWORD *)a2 + 16LL))(a2, v6, ptr);
  qfree(v12);
  if ( v6 == 52 )
    exit(1);
  v13 = __strlen_chk(&ptr[0].__align + 3, 1024);
  if ( ptr[0].__align )
  {
    *(&ptr[0].__align + 1) = 0;
    qfree((void *)ptr[0].__align);
    ptr[0].__align = 0;
    *(&ptr[0].__align + 2) = 0;
  }
  return v13;
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
