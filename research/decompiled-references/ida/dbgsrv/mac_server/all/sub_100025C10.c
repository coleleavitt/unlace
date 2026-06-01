/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100025C10
// Address: 0x0000000100025C10

//----- (0000000100025C10) ----------------------------------------------------
__int64 __fastcall sub_100025C10(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  FILE *v3; // rax
  __int16 v5; // [rsp+Eh] [rbp-12h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  if ( *((_QWORD *)&xmmword_1000AE250 + 1) > v2 && (v3 = *(FILE **)(xmmword_1000AE250 + 8 * v2)) != nullptr )
  {
    v5 = *(_WORD *)(a1 + 40);
    *(_QWORD *)(a2 + 8) = (int)fwritebytes(v3, (char *)&v5, 2u, *(_QWORD *)(a1 + 72) != 0);
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
  }
  return 0;
}
// 1000AE250: using guessed type __int128 xmmword_1000AE250;
