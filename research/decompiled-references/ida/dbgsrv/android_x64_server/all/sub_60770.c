/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60770
// Address: 0x0000000000060770

//----- (0000000000060770) ----------------------------------------------------
__int64 __fastcall sub_60770(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  FILE *v4; // rdi
  int v5; // eax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = -1;
  if ( *((_QWORD *)&xmmword_155780 + 1) > v2 )
  {
    v4 = *(FILE **)(xmmword_155780 + 8 * v2);
    if ( v4 )
    {
      v5 = qfgetc(v4);
      if ( v5 != -1 )
        v3 = (unsigned __int8)v5;
    }
  }
  *(_QWORD *)(a2 + 8) = v3;
  return 0;
}
// 155780: using guessed type __int128 xmmword_155780;
