_QWORD *__fastcall sub_53D6E0(__int64 a1)
{
  _QWORD *v1; // r14
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbp
  __int64 v14; // r13
  size_t v15; // rdx
  _BYTE *v16; // rsi
  size_t v17; // rbx
  const char *v18; // rsi
  __int64 v19; // r15
  void *v20; // rax
  void *src; // [rsp+0h] [rbp-58h] BYREF
  __int128 v22; // [rsp+8h] [rbp-50h]
  unsigned __int64 v23; // [rsp+18h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v1 = *(_QWORD **)(a1 + 128);
  if ( !v1 )
  {
    v3 = *(_QWORD *)(qword_2CA1698 + 1464);
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
      *(_QWORD *)v7 = &off_2B045C0;
      *(_QWORD *)(v7 + 40) = a1;
      v1 = (_QWORD *)operator new(8u);
      *v1 = create_dirtree(v1, v8);
      *(_QWORD *)(a1 + 128) = v1;
      v13 = *(_QWORD *)(v6 + 56);
      v14 = v13 + 24LL * *(_QWORD *)(v6 + 64);
      if ( v14 != v13 )
      {
        while ( 1 )
        {
          src = nullptr;
          v16 = nullptr;
          v19 = 2;
          v22 = 0;
          v17 = *(_QWORD *)(v13 + 8);
          if ( v17 )
          {
            v19 = v17 + 1;
            v20 = (void *)qalloc_or_throw(*(_QWORD *)(v13 + 8), nullptr, v9, v10, v11, v12, src, v22, v23);
            *((_QWORD *)&v22 + 1) = v17;
            src = v20;
            memcpy(v20, *(const void **)v13, v17);
            *(_QWORD *)&v22 = v17;
            v16 = src;
            v15 = v17 - 1;
            if ( *((_QWORD *)&v22 + 1) >= v17 + 1 )
              goto LABEL_11;
            --v17;
          }
          src = (void *)qvector_reserve(&src, v16, v19, 1);
          v15 = v17;
          v16 = src;
          ++v17;
LABEL_11:
          *(_QWORD *)&v22 = v19;
          v16[v17] = 0;
          if ( v15 )
            memmove((char *)src + 1, src, v15);
          v18 = haystack;
          *(_BYTE *)src = 47;
          if ( (_QWORD)v22 )
            v18 = (const char *)src;
          dirtree_link(**(_QWORD **)(a1 + 128), v18, 1);
          if ( src )
          {
            *(_QWORD *)&v22 = 0;
            qfree(src);
          }
          v13 += 24;
          if ( v14 == v13 )
            return *(_QWORD **)(a1 + 128);
        }
      }
    }
  }
  return v1;
}

