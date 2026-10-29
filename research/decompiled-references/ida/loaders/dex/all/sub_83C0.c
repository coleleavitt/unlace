_QWORD *__fastcall sub_83C0(_QWORD *a1, __int64 a2)
{
  bool v2; // cc
  const char *v3; // rsi
  char *v4; // rbp
  char *v5; // rax
  const void *v6; // rbp
  size_t v7; // rax
  size_t v8; // r13
  size_t v9; // r12
  void *v10; // rax
  size_t v11; // r12
  __int64 v12; // rcx
  _BYTE *v13; // rax
  _DWORD *v15; // rax
  void *v16; // rax
  char *v17; // rsi
  char *s; // [rsp+0h] [rbp-48h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-40h]
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 8) <= 1u;
  v20 = __readfsqword(0x28u);
  if ( v2 )
  {
    *a1 = 0;
    *(_OWORD *)(a1 + 1) = 0;
    v15 = (_DWORD *)qvector_reserve(a1, 0, 8, 1);
    *a1 = v15;
    a1[1] = 8;
    *v15 = 1852534389;
    *(_DWORD *)((char *)v15 + 3) = 1853321070;
    *(_BYTE *)(*a1 + 7LL) = 0;
    return a1;
  }
  v3 = *(const char **)a2;
  s = nullptr;
  *(_OWORD *)n = 0;
  sub_7640((size_t *)&s, v3);
  v4 = s;
  v5 = strrchr(s, 46);
  if ( v5 )
  {
    *a1 = 0;
    v6 = v5 + 1;
    *(_OWORD *)(a1 + 1) = 0;
    v7 = strlen(v5 + 1);
    v8 = v7 + 1;
    v9 = v7;
    v10 = (void *)qvector_reserve(a1, 0, v7 + 1, 1);
    *a1 = v10;
    a1[1] = v8;
    memmove(v10, v6, v9);
    *(_BYTE *)(*a1 + v9) = 0;
    v11 = a1[1];
    goto LABEL_4;
  }
  v11 = n[0];
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  if ( v11 )
  {
    v16 = (void *)qalloc_or_throw(v11);
    *a1 = v16;
    v17 = s;
    a1[2] = v11;
    memcpy(v16, v17, v11);
    a1[1] = v11;
LABEL_4:
    if ( v11 > 1 )
    {
      sub_57A0(a1);
      v12 = *a1;
      v13 = (_BYTE *)*a1;
      if ( a1[1] )
      {
        do
        {
          if ( (*v13 & 0xFD) == 0x3C )
          {
            *v13 = 95;
            v12 = *a1;
          }
          ++v13;
        }
        while ( v13 != (_BYTE *)(v12 + a1[1]) );
      }
    }
    v4 = s;
  }
  if ( v4 )
  {
    n[0] = 0;
    qfree(v4);
  }
  return a1;
}

