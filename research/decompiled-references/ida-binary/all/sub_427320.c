__int64 __fastcall sub_427320(int a1, _QWORD *a2, int a3, int a4, int a5, __int64 a6)
{
  unsigned int v8; // edx
  unsigned int v9; // r12d
  _QWORD *v11; // r15
  size_t v12; // rax
  size_t v13; // r13
  char *v14; // rsi
  _QWORD *v15; // rbx
  _BYTE *v16; // rbp
  __m128i v17; // xmm0
  __int64 v18; // rdi
  __m128i v19; // xmm0
  _BYTE *v20; // rdi
  void *v21; // rdi
  __int64 v22; // rdx
  size_t v23; // rax
  __int64 v24; // r14
  size_t v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rax
  __m128i v28; // [rsp+0h] [rbp-88h] BYREF
  _BYTE *v29; // [rsp+10h] [rbp-78h] BYREF
  __m128i v30; // [rsp+18h] [rbp-70h] BYREF
  char s[8]; // [rsp+28h] [rbp-60h] BYREF
  __int64 src[3]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  LOBYTE(v8) = sub_42B510(
                 a1,
                 (_DWORD)a2,
                 a3,
                 a4,
                 a5,
                 a6,
                 v28.m128i_i32[0],
                 v28.m128i_i32[2],
                 (_DWORD)v29,
                 v30.m128i_i64[0],
                 v30.m128i_i64[1],
                 *(_DWORD *)s,
                 src[0])
             & (a6 != 0);
  v9 = v8;
  if ( (_BYTE)v8 )
  {
    pretty_print_size(s, 8, *(_QWORD *)(a6 + 40));
    v11 = (_QWORD *)*a2;
    v12 = strlen(s);
    v13 = v12;
    if ( v12 )
    {
      v21 = (void *)v11[3];
      v22 = v12 + 1;
      if ( v11[5] < v12 + 1 )
      {
        v26 = v11[3];
        v28.m128i_i64[0] = v12 + 1;
        v27 = qvector_reserve(v11 + 3, v26, v22, 1);
        v22 = v28.m128i_i64[0];
        v11[3] = v27;
        v21 = (void *)v27;
      }
      v11[4] = v22;
      memmove(v21, s, v13);
      *(_BYTE *)(v11[3] + v13) = 0;
    }
    else
    {
      v11[4] = 0;
    }
    if ( *(_DWORD *)(a6 + 64) )
    {
      qstrftime64(src, 20, "%F %T", *(_QWORD *)(a6 + 48));
      v29 = nullptr;
      v30 = 0;
      v23 = strlen((const char *)src);
      v24 = v23 + 1;
      v25 = v23;
      v14 = (char *)src;
      v29 = (_BYTE *)qvector_reserve(&v29, 0, v23 + 1, 1);
      v30.m128i_i64[0] = v24;
      memmove(v29, src, v25);
      v29[v25] = 0;
    }
    else
    {
      v14 = nullptr;
      v30 = 0;
      v29 = nullptr;
      v29 = (_BYTE *)qvector_reserve(&v29, 0, 1, 1);
      v30.m128i_i64[0] = 1;
      *v29 = 0;
    }
    v15 = (_QWORD *)*a2;
    v16 = v29;
    v29 = nullptr;
    v17 = _mm_loadu_si128(&v30);
    v30 = 0;
    v18 = v15[6];
    if ( v18 )
    {
      v15[7] = 0;
      v28 = v17;
      qfree(v18, v14);
      v19 = _mm_load_si128(&v28);
      v20 = v29;
      v15[6] = v16;
      *(__m128i *)(v15 + 7) = v19;
      if ( v20 )
      {
        v30.m128i_i64[0] = 0;
        qfree(v20, v14);
      }
    }
    else
    {
      v15[6] = v16;
      *(__m128i *)(v15 + 7) = v17;
    }
  }
  return v9;
}
