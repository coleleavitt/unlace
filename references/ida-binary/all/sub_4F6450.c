__int64 *__fastcall sub_4F6450(__int64 *a1, const char *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rax
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // r12
  unsigned __int64 v7; // rbp
  size_t v8; // r13
  __int64 v10; // r12
  size_t v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rax
  void *src; // [rsp+0h] [rbp-48h] BYREF
  __int128 v15; // [rsp+8h] [rbp-40h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v2 = (_QWORD *)qvector_reserve(a1, 0, 9, 1);
  *a1 = (__int64)v2;
  a1[1] = 9;
  *v2 = 0x5C79726F74736948LL;
  v3 = *a1;
  src = nullptr;
  *(_BYTE *)(v3 + 8) = 0;
  v15 = 0;
  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = v4 + 1;
    v6 = v4;
    src = (void *)qvector_reserve(&src, 0, v4 + 1, 1);
    *(_QWORD *)&v15 = v5;
    memmove(src, a2, v6);
    *((_BYTE *)src + v6) = 0;
    v7 = v15;
    if ( (_QWORD)v15 )
    {
      v8 = v15 - 1;
      if ( (_QWORD)v15 != 1 )
      {
        v10 = a1[1];
        v11 = v15 - 1;
        if ( v10 )
        {
          --v10;
          v11 = v8 + v10;
          v7 = v15 + v10;
        }
        v12 = *a1;
        if ( a1[2] < v7 )
        {
          v13 = qvector_reserve(a1, v12, v7, 1);
          *a1 = v13;
          v12 = v13;
        }
        a1[1] = v7;
        *(_BYTE *)(v12 + v11) = 0;
        a2 = (const char *)src;
        memcpy((void *)(v10 + *a1), src, v8);
      }
    }
    if ( src )
    {
      *(_QWORD *)&v15 = 0;
      qfree(src, a2);
    }
  }
  return a1;
}
