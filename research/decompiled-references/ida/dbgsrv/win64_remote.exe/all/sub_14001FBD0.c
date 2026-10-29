/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001FBD0
// Address: 0x000000014001FBD0

//----- (000000014001FBD0) ----------------------------------------------------
__int64 __fastcall sub_14001FBD0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 < qword_1400CAFB0 && (v3 = *((_QWORD *)qword_1400CAFA8 + v2)) != 0 )
  {
    *(_BYTE *)a2 = 9;
    *(_QWORD *)(a2 + 8) = sub_140064BE0(v3);
    return 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
    return 0;
  }
}
// 1400CAFB0: using guessed type __int64 qword_1400CAFB0;
