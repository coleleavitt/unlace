/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5CCB8
// Address: 0x000000000005CCB8

//----- (000000000005CCB8) ----------------------------------------------------
__int64 __fastcall sub_5CCB8(__int64 a1, __int64 a2)
{
  char *v3; // x0
  void *ptr[2]; // [xsp+0h] [xbp-40h] BYREF
  __int64 v6; // [xsp+10h] [xbp-30h]
  __int64 v7; // [xsp+18h] [xbp-28h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  ptr[1] = nullptr;
  v6 = 0;
  ptr[0] = nullptr;
  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(char **)(a1 + 8);
  else
    v3 = &byte_F154B;
  qgetenv(v3, (__int64)ptr);
  *(_BYTE *)a2 = 7;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)ptr;
  *(_QWORD *)(a2 + 24) = v6;
  return 0;
}
// F154B: using guessed type char byte_F154B;
