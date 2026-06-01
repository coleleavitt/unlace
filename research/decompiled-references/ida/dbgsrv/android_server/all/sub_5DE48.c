/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5DE48
// Address: 0x000000000005DE48

//----- (000000000005DE48) ----------------------------------------------------
__int64 __fastcall sub_5DE48(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // x8
  FILE *v4; // x8
  int v5; // w0
  __int64 v6; // x8
  unsigned int v8; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v9; // [xsp+8h] [xbp-28h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(_QWORD *)(a1 + 8);
  if ( qword_166A50 > v3 && (v4 = *(FILE **)(qword_166A48 + 8 * v3)) != nullptr )
  {
    v5 = freadbytes(v4, (char *)&v8, 4, *(_QWORD *)(a1 + 40) != 0);
    v6 = v8;
    if ( v5 )
      v6 = -1;
  }
  else
  {
    v6 = -1;
  }
  *(_QWORD *)(a2 + 8) = v6;
  return 0;
}
// 166A48: using guessed type __int64 qword_166A48;
// 166A50: using guessed type __int64 qword_166A50;
