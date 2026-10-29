/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BA38
// Address: 0x000000000008BA38

//----- (000000000008BA38) ----------------------------------------------------
__int64 __fastcall sub_8BA38(__int64 a1, __int64 a2)
{
  int v4; // w22
  int v5; // w4
  pthread_mutex_t ptr; // [xsp+0h] [xbp-50h] BYREF

  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  memset(&ptr, 0, 24);
  v4 = *(_DWORD *)(a1 + 24);
  sub_8B7E0((const char *)(a1 + 28), &ptr, v4 == 25);
  if ( v4 == 25 )
    v5 = -1;
  else
    v5 = *(_DWORD *)(a1 + 32);
  sub_3C748(a2, "%s|%d|%d|%s", *(const char **)a1, *(_DWORD *)(a1 + 24), v5, (const char *)ptr.__align);
  if ( ptr.__align )
  {
    *(&ptr.__align + 1) = 0;
    qfree((void *)ptr.__align);
    ptr.__align = 0;
    *(&ptr.__align + 2) = 0;
  }
  return 1;
}
