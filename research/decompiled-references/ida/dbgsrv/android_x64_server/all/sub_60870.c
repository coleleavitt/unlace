/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60870
// Address: 0x0000000000060870

//----- (0000000000060870) ----------------------------------------------------
__int64 __fastcall sub_60870(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  FILE *v4; // rdi
  int v5; // eax
  unsigned __int16 v7; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 8);
  if ( *((_QWORD *)&xmmword_155780 + 1) > v2 && (v4 = *(FILE **)(xmmword_155780 + 8 * v2)) != nullptr )
  {
    v5 = freadbytes(v4, (char *)&v7, 2u, *(_QWORD *)(a1 + 40) != 0);
    *(_QWORD *)(a2 + 8) = v7 | (unsigned __int64)-(__int64)(v5 != 0);
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
  }
  return 0;
}
// 155780: using guessed type __int128 xmmword_155780;
