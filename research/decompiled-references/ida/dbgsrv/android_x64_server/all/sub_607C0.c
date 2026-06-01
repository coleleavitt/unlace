/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_607C0
// Address: 0x00000000000607C0

//----- (00000000000607C0) ----------------------------------------------------
__int64 __fastcall sub_607C0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  FILE *v5; // rsi

  v3 = *(_QWORD *)(a1 + 40);
  v4 = -1;
  if ( *((_QWORD *)&xmmword_155780 + 1) > v3 )
  {
    v5 = *(FILE **)(xmmword_155780 + 8 * v3);
    if ( v5 )
      v4 = qfputc(*(char *)(a1 + 8), v5);
  }
  *(_QWORD *)(a2 + 8) = v4;
  return 0;
}
// 155780: using guessed type __int128 xmmword_155780;
