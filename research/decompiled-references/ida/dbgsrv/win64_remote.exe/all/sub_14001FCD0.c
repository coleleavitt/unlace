/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001FCD0
// Address: 0x000000014001FCD0

//----- (000000014001FCD0) ----------------------------------------------------
__int64 __fastcall sub_14001FCD0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  FILE *v4; // rcx
  int v5; // eax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 < qword_1400CAFB0 && (v4 = *((FILE **)qword_1400CAFA8 + v2)) != nullptr )
  {
    v5 = sub_140064900(v4);
    if ( v5 == -1 )
      *(_QWORD *)(a2 + 8) = -1;
    else
      *(_QWORD *)(a2 + 8) = (unsigned __int8)v5;
    return 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
    return 0;
  }
}
// 1400CAFB0: using guessed type __int64 qword_1400CAFB0;
