/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001FD90
// Address: 0x000000014001FD90

//----- (000000014001FD90) ----------------------------------------------------
__int64 __fastcall sub_14001FD90(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 < qword_1400CAFB0 && (v4 = *((_QWORD *)qword_1400CAFA8 + v3)) != 0 )
  {
    --*(_QWORD *)(a2 + 8);
    v5 = (int)sub_1400357C0((__int64 (__fastcall *)(__int64, _QWORD))sub_140020460, v4, a1 + 32, a2);
    *(_QWORD *)(a2 + 8) = v5;
    return 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
    return 0;
  }
}
// 1400CAFB0: using guessed type __int64 qword_1400CAFB0;
