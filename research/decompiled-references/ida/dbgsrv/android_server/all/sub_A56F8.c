/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A56F8
// Address: 0x00000000000A56F8

//----- (00000000000A56F8) ----------------------------------------------------
__int64 __fastcall sub_A56F8(_BYTE *a1, int a2, char *a3, __int128 *a4)
{
  int v4; // w8
  unsigned int v5; // w19
  __int128 v9; // q0
  char *v10; // x8
  char *v11; // x21
  size_t v12; // x0
  void *v13; // x0
  __int64 v14; // x19
  __int128 v16[2]; // [xsp+0h] [xbp-90h] BYREF
  void *v17; // [xsp+28h] [xbp-68h] BYREF
  __int64 v18; // [xsp+30h] [xbp-60h]
  __int64 v19; // [xsp+38h] [xbp-58h]
  pthread_mutex_t ptr; // [xsp+40h] [xbp-50h] BYREF

  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a1[68] )
  {
    if ( under_debugger )
    {
      __break(1u);
      sub_39134(a1);
    }
    interr(1621);
LABEL_25:
    exit(1);
  }
  if ( a2 <= 0 )
    v4 = 52;
  else
    v4 = 54;
  if ( a2 )
    v5 = v4;
  else
    v5 = 53;
  sub_A640C(v5, &ptr);
  v18 = 0;
  v19 = 0;
  v17 = nullptr;
  v9 = a4[1];
  v16[0] = *a4;
  v16[1] = v9;
  sub_4A3C0((__int64)&v17, a3, v16);
  if ( v18 )
    v10 = (char *)v17;
  else
    v10 = &byte_F154B;
  if ( v10 )
    v11 = v10;
  else
    v11 = "";
  v12 = strlen(v11);
  sub_545E8(&ptr, v11, v12 + 1);
  v13 = (void *)(*(__int64 (__fastcall **)(_BYTE *, _QWORD, pthread_mutex_t *))(*(_QWORD *)a1 + 16LL))(a1, v5, &ptr);
  qfree(v13);
  if ( v5 == 52 )
    goto LABEL_25;
  if ( v18 )
    v14 = v18 - 1;
  else
    v14 = 0;
  if ( v17 )
  {
    v18 = 0;
    qfree(v17);
    v17 = nullptr;
    v19 = 0;
  }
  if ( ptr.__align )
  {
    *(&ptr.__align + 1) = 0;
    qfree((void *)ptr.__align);
    ptr.__align = 0;
    *(&ptr.__align + 2) = 0;
  }
  return v14;
}
// F154B: using guessed type char byte_F154B;
// 168DF0: using guessed type char under_debugger;
