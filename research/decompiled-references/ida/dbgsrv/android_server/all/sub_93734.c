/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93734
// Address: 0x0000000000093734

//----- (0000000000093734) ----------------------------------------------------
__int64 __fastcall sub_93734(__int64 a1, unsigned int *a2, unsigned int a3)
{
  __int64 v3; // x19
  pthread_mutex_t *v6; // x0
  unsigned int v7; // w19
  __int64 v9; // x30
  __int64 v10; // x8
  __int64 v11; // x0
  pthread_mutex_t ptr; // [xsp+8h] [xbp-58h] BYREF
  __int64 v13; // [xsp+58h] [xbp-8h]

  v10 = *(_QWORD *)(a1 + 400);
  if ( v10 )
    v11 = v10 - 192;
  else
    v11 = 0;
  v13 = v9;
  v3 = v11;
  ptr.__list.__next = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_A640C(55, &ptr);
  sub_9F8B4(&ptr, a2);
  v6 = pack_dd((pthread_mutex_t *)(&ptr.__align + 3), (unsigned __int64)&ptr.__align + 29, a3);
  sub_545E8(&ptr, &ptr.__align + 3, (char *)v6 - (char *)(&ptr.__align + 3));
  v7 = sub_9EAB8(v3 + 192, (__int64)&ptr, 0xFFFFFFFF, 0);
  if ( ptr.__align )
  {
    *(&ptr.__align + 1) = 0;
    qfree((void *)ptr.__align);
    ptr.__align = 0;
    *(&ptr.__align + 2) = 0;
  }
  return v7;
}
// 93604: variable 'v9' is possibly undefined
