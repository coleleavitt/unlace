/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000259F0
// Address: 0x00000001000259F0

//----- (00000001000259F0) ----------------------------------------------------
__int64 __fastcall sub_1000259F0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  FILE *v4; // rdi
  int v5; // eax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = -1;
  if ( *((_QWORD *)&xmmword_1000AE250 + 1) > v2 )
  {
    v4 = *(FILE **)(xmmword_1000AE250 + 8 * v2);
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
// 1000AE250: using guessed type __int128 xmmword_1000AE250;
