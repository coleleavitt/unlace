__int64 __fastcall sub_14C51E0(__int64 a1, unsigned __int8 a2, __m128i a3, double a4)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // rbp
  __int64 *v8; // rdi
  unsigned int v9; // r14d
  unsigned __int64 v10; // rax

  v5 = sub_14C4E30(a1, a2, a3, a4);
  if ( v5 <= 1 )
    return 1;
  v7 = v5;
  if ( *(_WORD *)(a1 + 32) == 59 )
  {
    while ( 1 )
    {
      v8 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v8, (int *)(a1 + 16));
      v9 = *(_DWORD *)(a1 + 40);
      v10 = sub_14C4E30(a1, a2, a3, a4);
      if ( v10 <= 1 )
        break;
      v7 = sub_192A3E0(
             *(_QWORD *)(a1 + 96),
             *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
             v9,
             59,
             v7 & 0xFFFFFFFFFFFFFFFELL,
             v10 & 0xFFFFFFFFFFFFFFFELL);
      if ( v7 <= 1 )
        break;
      if ( *(_WORD *)(a1 + 32) != 59 )
        return v7;
    }
    return 1;
  }
  return v7;
}
