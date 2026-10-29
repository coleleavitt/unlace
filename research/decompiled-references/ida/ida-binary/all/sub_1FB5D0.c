unsigned __int64 __fastcall sub_1FB5D0(QT::QObject *a1, __int64 a2)
{
  void *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rbp
  size_t v9; // r13
  __int64 v10; // r14
  char *v11; // rax
  void *v12; // rdi
  __int64 v13; // rax
  void *v14; // rdx
  __m128i v15; // xmm0
  size_t v17; // r13
  size_t v18; // rbp
  size_t v19; // r14
  _BYTE *v20; // rsi
  void *v21; // rbp
  __int64 v22; // r13
  size_t v23; // r14
  __int64 v24; // r15
  void *dest; // [rsp+0h] [rbp-78h] BYREF
  __m128i v26; // [rsp+8h] [rbp-70h] BYREF
  void *src; // [rsp+20h] [rbp-58h] BYREF
  size_t n; // [rsp+28h] [rbp-50h]
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  dest = nullptr;
  v26 = 0;
  v3 = &stru_7360 + 11;
  dest = (void *)qvector_reserve(&dest, 0, 11, 1);
  v26.m128i_i64[0] = 11;
  strcpy((char *)dest, " bookmarks");
  if ( sub_194200(a1) )
  {
    v7 = v26.m128i_i64[0];
    v3 = dest;
    if ( v26.m128i_i64[0] )
    {
      v8 = v26.m128i_i64[0] + 7;
      v9 = v26.m128i_i64[0] - 1;
      v10 = v26.m128i_i64[0] + 6;
      if ( v26.m128i_i64[1] >= (unsigned __int64)(v26.m128i_i64[0] + 7) )
      {
        v26.m128i_i64[0] += 7;
        *((_BYTE *)dest + v10) = 0;
        if ( v7 == 1 )
        {
LABEL_5:
          v11 = (char *)dest;
          *(_DWORD *)dest = 1919181889;
          *(_DWORD *)(v11 + 3) = 1936942450;
          goto LABEL_6;
        }
LABEL_24:
        v3 = dest;
        memmove((char *)dest + 7, dest, v9);
        goto LABEL_5;
      }
    }
    else
    {
      if ( v26.m128i_i64[1] > 7uLL )
      {
        v26.m128i_i64[0] = 8;
        *((_BYTE *)dest + 7) = 0;
        goto LABEL_5;
      }
      v9 = 0;
      v8 = 8;
      v10 = 7;
    }
    v3 = (void *)qvector_reserve(&dest, dest, v8, 1);
    dest = v3;
    v26.m128i_i64[0] = v8;
    *((_BYTE *)v3 + v10) = 0;
    if ( !v9 )
      goto LABEL_5;
    goto LABEL_24;
  }
  if ( sub_194220(a1) )
  {
    v21 = dest;
    if ( v26.m128i_i64[0] )
    {
      v22 = v26.m128i_i64[0] + 11;
      v23 = v26.m128i_i64[0] - 1;
      v24 = v26.m128i_i64[0] + 10;
      if ( v26.m128i_i64[1] >= (unsigned __int64)(v26.m128i_i64[0] + 11) )
        goto LABEL_20;
    }
    else
    {
      if ( v26.m128i_i64[1] > 0xBuLL )
      {
        v26.m128i_i64[0] = 12;
        *((_BYTE *)dest + 11) = 0;
LABEL_27:
        qmemcpy(v21, "Local Types", 11);
        goto LABEL_6;
      }
      v23 = 0;
      v22 = 12;
      v24 = 11;
    }
    v3 = dest;
    dest = (void *)qvector_reserve(&dest, dest, v22, 1);
    v21 = dest;
LABEL_20:
    v26.m128i_i64[0] = v22;
    *((_BYTE *)v21 + v24) = 0;
    v21 = dest;
    if ( v23 )
    {
      v3 = dest;
      memmove((char *)dest + 11, dest, v23);
    }
    goto LABEL_27;
  }
  sub_1FA630((__int64)&src);
  v17 = n;
  v18 = (v26.m128i_i64[0] == 0) + v26.m128i_i64[0] - 1;
  v19 = v18;
  if ( n )
  {
    v17 = n - 1;
    v19 = n - 1 + v18;
  }
  v20 = dest;
  if ( v26.m128i_i64[1] < v19 + 1 )
  {
    dest = (void *)qvector_reserve(&dest, dest, v19 + 1, 1);
    v20 = dest;
  }
  v26.m128i_i64[0] = v19 + 1;
  v20[v19] = 0;
  if ( v18 )
    memmove((char *)dest + v17, dest, v18);
  v3 = src;
  memcpy(dest, src, v17);
  if ( src )
  {
    n = 0;
    qfree(src, (const char *)v3);
  }
LABEL_6:
  v13 = *(_QWORD *)(a2 + 16);
  v14 = dest;
  v15 = _mm_loadu_si128(&v26);
  dest = *(void **)a2;
  v12 = dest;
  *(_QWORD *)a2 = v14;
  v26.m128i_i64[1] = v13;
  *(__m128i *)(a2 + 8) = v15;
  if ( v12 )
    qfree(v12, (const char *)v3, v14, v4, v5, v6, dest, 0, v26.m128i_i64[1]);
  return v29 - __readfsqword(0x28u);
}
