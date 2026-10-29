unsigned __int64 __fastcall sub_8B9FB0(__int64 a1)
{
  size_t *v2; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdx
  _QWORD *v8; // rax

  v2 = *(size_t **)a1;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *v2;
  v5 = *v2 * *(unsigned int *)(a1 + 40);
  if ( v3 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = v6 + 24 * v3;
    v8 = (_QWORD *)(v7 - 24);
    if ( v6 == v7 )
      v8 = *(_QWORD **)(a1 + 88);
    v4 = v8[2] + 4LL * (v8[1] - *v8);
  }
  if ( v5 != v4 )
  {
    if ( v4 >= v5 )
      sub_8B8620(v2);
    sub_8BCD60(v2, v4, 0);
  }
  sub_8B8A00((size_t **)a1);
  return sub_8B9ED0(a1);
}
