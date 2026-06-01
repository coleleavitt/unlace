unsigned __int64 __fastcall sub_7A5FF0(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r12
  size_t v9; // r14
  unsigned __int64 v10; // r13
  size_t v11; // r15
  _BYTE *v12; // rsi
  _BYTE *v13; // rsi
  __int16 v14; // cx
  unsigned __int64 v15; // rbx
  size_t v16; // r13
  __int64 v17; // r12
  size_t v18; // r14
  _BYTE *v19; // rsi
  void *v20; // rdi
  __int64 v21; // rax
  void *v22; // rdx
  __m128i v23; // xmm0
  __int16 v25; // r12
  _BYTE *v26; // rsi
  __int64 v27; // r15
  size_t v28; // r12
  const char *v29; // rbx
  void *dest; // [rsp+0h] [rbp-78h] BYREF
  __m128i v31; // [rsp+8h] [rbp-70h] BYREF
  void *src; // [rsp+20h] [rbp-58h] BYREF
  __int128 v33; // [rsp+28h] [rbp-50h]
  unsigned __int64 v34; // [rsp+38h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 <= 1 )
    return v34 - __readfsqword(0x28u);
  dest = nullptr;
  v6 = v3;
  v31 = 0;
  if ( (a3 & 1) == 0 || (v7 = *(_QWORD *)(a1 + 40), v7 <= 1) )
  {
    if ( (a3 & 2) == 0 )
    {
      v25 = *(_WORD *)(a1 + 24);
      src = nullptr;
      v33 = 0;
      if ( v25 )
        goto LABEL_30;
      v28 = v3 - 1;
      goto LABEL_42;
    }
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 <= 1 )
      goto LABEL_47;
    v9 = v8 - 1;
    v10 = 0;
    v11 = v8 - 1;
    goto LABEL_7;
  }
  dest = (void *)qvector_reserve(&dest, 0, *(_QWORD *)(a1 + 40), 1);
  v31.m128i_i64[0] = v7;
  *((char *)dest + v7 - 1) = 0;
  memcpy(dest, *(const void **)(a1 + 32), v7 - 1);
  v10 = v31.m128i_i64[0];
  if ( (a3 & 2) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 > 1 )
    {
      v11 = v8 - 1;
      if ( v31.m128i_i64[0] <= 1uLL )
        goto LABEL_39;
      v26 = dest;
      v27 = v31.m128i_i64[0] - 1;
      if ( v31.m128i_i64[1] < (unsigned __int64)(v31.m128i_i64[0] + 1) )
      {
        dest = (void *)qvector_reserve(&dest, dest, v31.m128i_i64[0] + 1, 1);
        v26 = dest;
      }
      v31.m128i_i64[0] = v10 + 1;
      v26[v27] = 58;
      *((_BYTE *)dest + v10) = 0;
      v8 = *(_QWORD *)(a1 + 64);
      v10 = v31.m128i_i64[0];
      if ( v8 )
      {
        v11 = v8 - 1;
        if ( v8 != 1 )
        {
LABEL_39:
          if ( v10 )
          {
            v9 = --v10 + v11;
            v8 = v10 + v11 + 1;
          }
          else
          {
            v9 = v11;
          }
LABEL_7:
          v12 = dest;
          if ( v31.m128i_i64[1] < v8 )
          {
            dest = (void *)qvector_reserve(&dest, dest, v8, 1);
            v12 = dest;
          }
          v31.m128i_i64[0] = v8;
          v12[v9] = 0;
          memcpy((char *)dest + v10, *(const void **)(a1 + 56), v11);
          v10 = v31.m128i_i64[0];
        }
      }
    }
  }
  if ( v10 <= 1 )
  {
    v3 = *(_QWORD *)(a1 + 8);
LABEL_47:
    v6 = v3;
    goto LABEL_14;
  }
  v13 = dest;
  if ( v31.m128i_i64[1] < v10 + 1 )
  {
    dest = (void *)qvector_reserve(&dest, dest, v10 + 1, 1);
    v13 = dest;
  }
  v31.m128i_i64[0] = v10 + 1;
  v13[v10 - 1] = 64;
  *((_BYTE *)dest + v10) = 0;
  v6 = *(_QWORD *)(a1 + 8);
LABEL_14:
  v14 = *(_WORD *)(a1 + 24);
  src = nullptr;
  v33 = 0;
  if ( v14 )
  {
    if ( !v6 )
    {
LABEL_16:
      sub_3573A0((char **)&src);
      goto LABEL_17;
    }
LABEL_30:
    if ( **(_BYTE **)a1 != 91 )
      strchr(*(const char **)a1, 58);
    goto LABEL_16;
  }
  if ( v6 )
  {
    v28 = v6 - 1;
    if ( v6 != 1 )
    {
LABEL_42:
      v29 = *(const char **)a1;
      src = (void *)qvector_reserve(&src, 0, v6, 1);
      *(_QWORD *)&v33 = v6;
      memmove(src, v29, v28);
      *((_BYTE *)src + v28) = 0;
LABEL_17:
      v15 = v33;
      if ( (_QWORD)v33 )
      {
        v16 = v33 - 1;
        if ( (_QWORD)v33 != 1 )
        {
          v17 = v31.m128i_i64[0];
          v18 = v33 - 1;
          if ( v31.m128i_i64[0] )
          {
            v17 = v31.m128i_i64[0] - 1;
            v18 = v16 + v31.m128i_i64[0] - 1;
            v15 = v33 + v31.m128i_i64[0] - 1;
          }
          v19 = dest;
          if ( v31.m128i_i64[1] < v15 )
          {
            dest = (void *)qvector_reserve(&dest, dest, v15, 1);
            v19 = dest;
          }
          v31.m128i_i64[0] = v15;
          v19[v18] = 0;
          memcpy((char *)dest + v17, src, v16);
        }
      }
      if ( src )
      {
        *(_QWORD *)&v33 = 0;
        qfree(src);
      }
    }
  }
  v21 = *(_QWORD *)(a2 + 16);
  v22 = dest;
  v23 = _mm_loadu_si128(&v31);
  dest = *(void **)a2;
  v20 = dest;
  *(_QWORD *)a2 = v22;
  v31.m128i_i64[1] = v21;
  *(__m128i *)(a2 + 8) = v23;
  if ( v20 )
  {
    v31.m128i_i64[0] = 0;
    qfree(v20);
  }
  return v34 - __readfsqword(0x28u);
}

