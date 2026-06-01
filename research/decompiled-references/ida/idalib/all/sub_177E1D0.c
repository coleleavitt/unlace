__int64 __fastcall sub_177E1D0(__int64 *a1, __int64 a2, __m128 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  void **v10; // rax
  void *v11; // rdx
  __int64 v12; // rdi
  unsigned __int64 v13; // r9
  __int64 v14; // rax
  void **v16; // rax

  v8 = *(_QWORD *)(a2 + 8);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 56) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v8 + 56) & 4) != 0 )
      v9 = *(_QWORD *)(v9 + 32);
    if ( v9 )
    {
      v10 = sub_176A140(a1, (void **)v9, a3);
      LODWORD(v9) = (_DWORD)v10;
      if ( !v10 )
        return 1;
      v11 = *v10;
    }
    else
    {
      v16 = sub_176A2F0(a1, *(_QWORD *)(v8 + 48), a3);
      LODWORD(v11) = (_DWORD)v16;
      if ( ((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 1;
    }
    v12 = *(_QWORD *)(*a1 + 736);
    v13 = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v8 + 40) & 7) != 0 )
      LODWORD(v13) = 0;
    v8 = sub_189F870(v12, v9, (_DWORD)v11, *(_DWORD *)(v8 + 64), *(_DWORD *)(v8 + 24), v13, 0);
    if ( !v8 )
      return 1;
  }
  v14 = sub_177B9C0(a1, *(unsigned __int16 **)(a2 + 16), 0, *(double *)a3.m128_u64, a5, a6, a7);
  if ( v14 == 1 )
    return 1;
  return sub_1A86080(
           *(_QWORD *)(*a1 + 736),
           *(unsigned int *)(a2 + 24),
           *(unsigned int *)(a2 + 28),
           v8,
           v14 & 0xFFFFFFFFFFFFFFFELL);
}
