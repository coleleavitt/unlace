/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020AA8
// Address: 0x0000000100020AA8

//----- (0000000100020AA8) ----------------------------------------------------
__int64 __fastcall sub_100020AA8(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // x8
  FILE *v3; // x8
  __int16 v5; // [xsp+6h] [xbp-1Ah] BYREF

  v2 = a1[1];
  if ( qword_10009D928 > v2 && (v3 = *(FILE **)(qword_10009D920 + 8 * v2)) != nullptr )
  {
    v5 = a1[5];
    *(_QWORD *)(a2 + 8) = (int)fwritebytes(v3, (char *)&v5, 2u, a1[9] != 0);
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
  }
  return 0;
}
// 10009D920: using guessed type __int64 qword_10009D920;
// 10009D928: using guessed type __int64 qword_10009D928;
