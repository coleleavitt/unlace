int __fastcall sub_224D790(__int64 a1, int a2, char a3)
{
  int v3; // r9d
  __int64 v4; // rax
  size_t v5; // rcx
  const void *v6; // rbp
  size_t v8; // [rsp+8h] [rbp-20h]

  v3 = a2;
  v4 = *(_QWORD *)(a1 + 120);
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(const void **)v4;
  if ( a3
    || !*(_BYTE *)(a1 + 168)
    || *(_QWORD *)(a1 + 144) != v5
    || v5
    && (v8 = *(_QWORD *)(v4 + 8), LODWORD(v4) = memcmp(*(const void **)(a1 + 136), v6, v5), v5 = v8, v3 = a2, (_DWORD)v4) )
  {
    LODWORD(v4) = sub_2212BD0(a1 + 176, a1, v6, v5, a1 + 128, v3);
  }
  return v4;
}
