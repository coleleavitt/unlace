/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100025B80
// Address: 0x0000000100025B80

//----- (0000000100025B80) ----------------------------------------------------
__int64 __fastcall sub_100025B80(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  FILE *v3; // rax
  int v4; // eax
  unsigned int v6; // [rsp+Ch] [rbp-14h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  if ( *((_QWORD *)&xmmword_1000AE250 + 1) > v2 && (v3 = *(FILE **)(xmmword_1000AE250 + 8 * v2)) != nullptr )
  {
    v4 = freadbytes(v3, (char *)&v6, 4, *(_QWORD *)(a1 + 40) != 0);
    *(_QWORD *)(a2 + 8) = v6 | (unsigned __int64)-(__int64)(v4 != 0);
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
  }
  return 0;
}
// 1000AE250: using guessed type __int128 xmmword_1000AE250;
