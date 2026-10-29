/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100022854
// Address: 0x0000000100022854

//----- (0000000100022854) ----------------------------------------------------
__int64 __fastcall sub_100022854(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // x8
  FILE *v3; // x8
  int v5; // w0
  __int64 v6; // x8
  unsigned __int16 v8; // [xsp+6h] [xbp-1Ah] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  if ( qword_1000A5928 > v2 && (v3 = *(FILE **)(qword_1000A5920 + 8 * v2)) != nullptr )
  {
    v5 = freadbytes(v3, (char *)&v8, 2, *(_QWORD *)(a1 + 40) != 0);
    v6 = v8;
    if ( v5 )
      v6 = -1;
    *(_QWORD *)(a2 + 8) = v6;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
  }
  return 0;
}
// 1000A5920: using guessed type __int64 qword_1000A5920;
// 1000A5928: using guessed type __int64 qword_1000A5928;
