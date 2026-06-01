unsigned __int64 __fastcall sub_8964D0(__int64 a1)
{
  size_t *v2; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx

  v2 = *(size_t **)a1;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *v2;
  v5 = *v2 * *(unsigned int *)(a1 + 40);
  if ( v3 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = v6 + 16 * v3;
    v8 = v7 - 16;
    if ( v6 == v7 )
      v8 = *(_QWORD *)(a1 + 80);
    v4 = *(_QWORD *)(v8 + 8) + 4LL * (unsigned int)(*(_DWORD *)(v8 + 4) - *(_DWORD *)v8);
  }
  if ( v5 != v4 )
  {
    if ( v4 >= v5 )
      sub_894C60();
    sub_899020(v2, v4, 0);
  }
  sub_895050((size_t **)a1);
  return sub_8963F0(a1);
}

