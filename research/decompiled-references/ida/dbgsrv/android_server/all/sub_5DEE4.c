/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5DEE4
// Address: 0x000000000005DEE4

//----- (000000000005DEE4) ----------------------------------------------------
__int64 __fastcall sub_5DEE4(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // x8
  FILE *v4; // x8
  __int64 v5; // x8
  char v7[4]; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v8; // [xsp+8h] [xbp-28h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = a1[1];
  if ( qword_166A50 > v3 && (v4 = *(FILE **)(qword_166A48 + 8 * v3)) != nullptr )
  {
    *(_WORD *)v7 = a1[5];
    v5 = (int)fwritebytes(v4, v7, 2u, a1[9] != 0);
  }
  else
  {
    v5 = -1;
  }
  *(_QWORD *)(a2 + 8) = v5;
  return 0;
}
// 166A48: using guessed type __int64 qword_166A48;
// 166A50: using guessed type __int64 qword_166A50;
