/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8EDD0
// Address: 0x000000000008EDD0

//----- (000000000008EDD0) ----------------------------------------------------
__int64 __fastcall sub_8EDD0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // w20
  __int64 v5; // x0
  int v6; // w0
  unsigned int v7; // w0
  pthread_mutex_t ptr; // [xsp+0h] [xbp-40h] BYREF

  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_BYTE *)(a1 + 288) )
  {
    return 0;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 440);
    *(_BYTE *)(a1 + 289) = 0;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v5 + 136LL))(v5, a1 + 368, a2);
    *(_BYTE *)(a1 + 288) = v6 > 0;
    if ( v6 < 1 )
    {
      v2 = 0;
      *(_BYTE *)(a1 + 289) = 1;
    }
    else
    {
      sub_A640C(4, &ptr);
      sub_9F8B4(&ptr, (unsigned int *)(a1 + 368));
      v7 = sub_A5940(a1 + 192, &ptr.__align);
      *(_BYTE *)(a1 + 288) = 0;
      v2 = v7;
      if ( ptr.__align )
      {
        *(&ptr.__align + 1) = 0;
        qfree((void *)ptr.__align);
        ptr.__align = 0;
        *(&ptr.__align + 2) = 0;
      }
    }
  }
  return v2;
}
