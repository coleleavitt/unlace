__int64 __fastcall sub_176DAE0(__int64 *a1, __int64 a2, __m128 a3)
{
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  __int64 v10; // rbp
  void **v12; // rax
  __int64 v13; // rdi

  v5 = *(_QWORD *)(a2 + 16);
  if ( (v5 & 4) == 0 )
  {
    v6 = *a1;
    sub_18C74E0(*a1, 0, 0, 4);
    v7 = sub_175B800(a1, (unsigned __int16 *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL));
    if ( v7 == 1 )
    {
      v10 = 1;
    }
    else
    {
      v8 = *a1;
      v9 = v7 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_DWORD *)(*a1 + 12632) || (v10 = a2, v9 != (*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL)) )
        v10 = sub_19BEAF0(v8, *(_QWORD *)(a2 + 8), *(unsigned int *)(a2 + 32), v9, *(unsigned int *)(a2 + 36));
    }
    sub_190D5E0(v6);
    return v10;
  }
  v12 = sub_176A140(a1, (void **)(v5 & 0xFFFFFFFFFFFFFFF8LL), a3);
  if ( !v12 )
    return 1;
  v13 = *a1;
  if ( !*(_DWORD *)(*a1 + 12632) )
  {
    v10 = a2;
    if ( v12 == (void **)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL) )
      return v10;
  }
  return sub_19BE8F0(v13, *(_QWORD *)(a2 + 8), *(unsigned int *)(a2 + 32), v12, *(unsigned int *)(a2 + 36));
}
