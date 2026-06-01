void __fastcall sub_2212C90(__int64 a1, int a2, char a3)
{
  int v3; // r9d
  size_t v4; // rcx
  const void *v5; // rbp
  int v6; // eax
  size_t v7; // [rsp+8h] [rbp-20h]

  v3 = a2;
  v4 = *(_QWORD *)(a1 + 128);
  v5 = *(const void **)(a1 + 120);
  if ( a3
    || !*(_BYTE *)(a1 + 192)
    || *(_QWORD *)(a1 + 168) != v4
    || v4 && (v7 = *(_QWORD *)(a1 + 128), v6 = memcmp(*(const void **)(a1 + 160), v5, v4), v4 = v7, v3 = a2, v6) )
  {
    sub_2212BD0(a1 + 200, a1, v5, v4, a1 + 152, v3);
  }
}
