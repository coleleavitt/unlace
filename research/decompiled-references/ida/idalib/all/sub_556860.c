_QWORD *__fastcall sub_556860(__int64 a1)
{
  _QWORD *v1; // r14
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rbp
  __int64 v10; // r13
  size_t v11; // rdx
  _BYTE *v12; // rsi
  size_t v13; // rbx
  const char *v14; // rsi
  __int64 v15; // r15
  void *v16; // rax
  void *src; // [rsp+0h] [rbp-58h] BYREF
  __int128 v18; // [rsp+8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v1 = *(_QWORD **)(a1 + 128);
  if ( !v1 )
  {
    v3 = *(_QWORD *)(qword_2CCB598 + 1656);
    v4 = *(__int64 **)(v3 + 16);
    v5 = &v4[*(_QWORD *)(v3 + 24)];
    if ( v5 != v4 )
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *(_QWORD *)(a1 + 120) == *(_QWORD *)(*v4 + 48) )
          break;
        if ( v5 == ++v4 )
          return v1;
      }
      if ( !v6 )
        return nullptr;
      v7 = operator new(0x30u);
      *(_DWORD *)(v7 + 8) = 0;
      v8 = v7;
      *(_QWORD *)(v7 + 16) = 0;
      *(_OWORD *)(v7 + 24) = 0;
      *(_QWORD *)v7 = &off_2B2E580;
      *(_QWORD *)(v7 + 40) = a1;
      v1 = (_QWORD *)operator new(8u);
      *v1 = create_dirtree(v1, v8);
      *(_QWORD *)(a1 + 128) = v1;
      v9 = *(_QWORD *)(v6 + 56);
      v10 = v9 + 24LL * *(_QWORD *)(v6 + 64);
      if ( v10 != v9 )
      {
        while ( 1 )
        {
          src = nullptr;
          v12 = nullptr;
          v15 = 2;
          v18 = 0;
          v13 = *(_QWORD *)(v9 + 8);
          if ( v13 )
          {
            v15 = v13 + 1;
            v16 = (void *)qalloc_or_throw(*(_QWORD *)(v9 + 8));
            *((_QWORD *)&v18 + 1) = v13;
            src = v16;
            memcpy(v16, *(const void **)v9, v13);
            *(_QWORD *)&v18 = v13;
            v12 = src;
            v11 = v13 - 1;
            if ( *((_QWORD *)&v18 + 1) >= v13 + 1 )
              goto LABEL_11;
            --v13;
          }
          src = (void *)qvector_reserve(&src, v12, v15, 1);
          v11 = v13;
          v12 = src;
          ++v13;
LABEL_11:
          *(_QWORD *)&v18 = v15;
          v12[v13] = 0;
          if ( v11 )
            memmove((char *)src + 1, src, v11);
          v14 = haystack;
          *(_BYTE *)src = 47;
          if ( (_QWORD)v18 )
            v14 = (const char *)src;
          dirtree_link(**(_QWORD **)(a1 + 128), v14, 1);
          if ( src )
          {
            *(_QWORD *)&v18 = 0;
            qfree(src);
          }
          v9 += 24;
          if ( v10 == v9 )
            return *(_QWORD **)(a1 + 128);
        }
      }
    }
  }
  return v1;
}
