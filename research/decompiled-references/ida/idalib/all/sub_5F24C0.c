unsigned __int64 __fastcall sub_5F24C0(__int64 a1, __int64 a2, int a3)
{
  size_t v5; // r12
  size_t v6; // rbp
  size_t v7; // r13
  _BYTE *v8; // rsi
  __int64 v9; // rax
  void *src; // [rsp+0h] [rbp-48h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( a3 != -1 && (*(_BYTE *)(a1 + 746) & 4) != 0 )
  {
    src = nullptr;
    *(_OWORD *)n = 0;
    sub_35A790((char **)&src);
    v5 = n[0];
    v6 = (*(_QWORD *)(a2 + 8) == 0) + *(_QWORD *)(a2 + 8) - 1LL;
    v7 = v6;
    if ( n[0] )
    {
      v5 = n[0] - 1;
      v7 = n[0] - 1 + v6;
    }
    v8 = *(_BYTE **)a2;
    if ( *(_QWORD *)(a2 + 16) < v7 + 1 )
    {
      v9 = qvector_reserve(a2, v8, v7 + 1, 1);
      *(_QWORD *)a2 = v9;
      v8 = (_BYTE *)v9;
    }
    *(_QWORD *)(a2 + 8) = v7 + 1;
    v8[v7] = 0;
    if ( v6 )
      memmove((void *)(*(_QWORD *)a2 + v5), *(const void **)a2, v6);
    memcpy(*(void **)a2, src, v5);
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
  }
  return v12 - __readfsqword(0x28u);
}
