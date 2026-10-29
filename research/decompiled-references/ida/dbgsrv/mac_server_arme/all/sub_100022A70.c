/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100022A70
// Address: 0x0000000100022A70

//----- (0000000100022A70) ----------------------------------------------------
__int64 __fastcall sub_100022A70(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // x8
  FILE *v3; // x8
  int v5; // [xsp+4h] [xbp-1Ch] BYREF

  v2 = a1[1];
  if ( qword_1000A5928 > v2 && (v3 = *(FILE **)(qword_1000A5920 + 8 * v2)) != nullptr )
  {
    v5 = a1[5];
    *(_QWORD *)(a2 + 8) = (int)fwritebytes(v3, (char *)&v5, 4u, a1[9] != 0);
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
  }
  return 0;
}
// 1000A5920: using guessed type __int64 qword_1000A5920;
// 1000A5928: using guessed type __int64 qword_1000A5928;
