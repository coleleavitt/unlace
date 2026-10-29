/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67140
// Address: 0x0000000000067140

//----- (0000000000067140) ----------------------------------------------------
__int64 __fastcall sub_67140(__int64 a1, __int64 a2)
{
  void *ptr[2]; // [xsp+0h] [xbp-40h] BYREF
  __int64 v5; // [xsp+10h] [xbp-30h]
  __int64 v6; // [xsp+18h] [xbp-28h]

  v6 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  ptr[0] = nullptr;
  ptr[1] = nullptr;
  v5 = 0;
  sub_66600(sub_671E8, ptr, a1);
  *(_BYTE *)a2 = 7;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)ptr;
  *(_QWORD *)(a2 + 24) = v5;
  return 0;
}
// 66600: using guessed type __int64 __fastcall sub_66600(_QWORD, _QWORD, _QWORD);
