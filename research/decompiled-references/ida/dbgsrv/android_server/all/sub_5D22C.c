/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5D22C
// Address: 0x000000000005D22C

//----- (000000000005D22C) ----------------------------------------------------
__int64 __fastcall sub_5D22C(__int64 a1, __int64 a2)
{
  __int128 v2; // q0
  __int64 v4; // x21
  __int64 v5; // x8
  __int64 v6; // x8
  pthread_mutex_t ptr; // [xsp+0h] [xbp-50h] BYREF
  __int64 v9; // [xsp+28h] [xbp-28h]

  v2 = 0u;
  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  memset(&ptr, 0, 24);
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 < 1 )
  {
    v6 = 0;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 8);
    *(&ptr.__align + 1) = 0;
    ptr.__size[36] = v5;
    sub_5C6B0(&ptr, v4 + 1, &ptr.__size[36]);
    *(_BYTE *)(ptr.__align + v4) = 0;
    v2 = *(_OWORD *)&ptr.__lock;
    v6 = *(&ptr.__align + 2);
  }
  *(_OWORD *)(a2 + 8) = v2;
  *(_QWORD *)(a2 + 24) = v6;
  *(_BYTE *)a2 = 7;
  return 0;
}
