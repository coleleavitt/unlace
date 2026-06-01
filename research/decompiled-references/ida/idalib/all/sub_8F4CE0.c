__int64 __fastcall sub_8F4CE0(
        __int64 *a1,
        __int64 a2,
        const char *a3,
        const char *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  size_t v9; // rax
  size_t v10; // r14
  size_t v11; // r13
  const char *v12; // rdx
  const char *v13; // rsi
  unsigned int v14; // ebx
  __int64 v16; // rax
  __m128i *v17; // rax
  __m128i v18; // xmm0
  size_t v19; // rbx
  __int64 v20; // rbp
  void *v21; // r15
  unsigned __int64 v22; // r14
  __int64 (*v23)(); // rax
  char *v24; // rsi
  __int64 v25; // rax
  size_t n; // [rsp+0h] [rbp-158h]
  void *v28; // [rsp+20h] [rbp-138h] BYREF
  __int128 v29; // [rsp+28h] [rbp-130h]
  void *ptr; // [rsp+40h] [rbp-118h] BYREF
  __int128 v31; // [rsp+48h] [rbp-110h]
  void *src; // [rsp+60h] [rbp-F8h] BYREF
  size_t v33[3]; // [rsp+68h] [rbp-F0h]
  void *v34; // [rsp+80h] [rbp-D8h] BYREF
  __int128 v35; // [rsp+88h] [rbp-D0h]
  __int64 v36; // [rsp+A8h] [rbp-B0h]
  __m128i v37; // [rsp+D0h] [rbp-88h] BYREF
  __m128i v38; // [rsp+E0h] [rbp-78h] BYREF
  __m128i v39; // [rsp+F0h] [rbp-68h] BYREF
  size_t v40; // [rsp+100h] [rbp-58h] BYREF
  __m128i v41; // [rsp+108h] [rbp-50h]
  unsigned __int64 v42; // [rsp+118h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v29 = 0;
  v28 = nullptr;
  if ( a3 )
  {
    v9 = strlen(a3);
    v10 = v9 + 1;
    v11 = v9;
    v28 = (void *)qvector_reserve(&v28, 0, v9 + 1, 1);
    *(_QWORD *)&v29 = v10;
    memmove(v28, a3, v11);
    *((_BYTE *)v28 + v11) = 0;
  }
  sub_8EFEE0((__int64)&v28, "\\", "/");
  ptr = nullptr;
  v31 = 0;
  if ( a4 )
  {
    n = strlen(a4);
    ptr = (void *)qvector_reserve(&ptr, 0, n + 1, 1);
    *(_QWORD *)&v31 = n + 1;
    memmove(ptr, a4, n);
    *((_BYTE *)ptr + n) = 0;
  }
  sub_8EFEE0((__int64)&ptr, "\\", "/");
  v12 = haystack;
  if ( (_QWORD)v31 )
    v12 = (const char *)ptr;
  v13 = haystack;
  if ( (_QWORD)v29 )
    v13 = (const char *)v28;
  sub_7C7C70((__int64)"build_delta: %s -> %s\n", v13, v12);
  *(_OWORD *)v33 = 0;
  src = nullptr;
  v14 = sub_8F41B0(a1, (__int64 *)&src, (__int64)a4, 0);
  if ( !v14 )
  {
    v39 = 0;
    v38 = (__m128i)0x41544C4544594F54uLL;
    v40 = v33[0];
    v41 = 0;
    sub_8FE540(&v37, src);
    v16 = *a1;
    v41 = _mm_load_si128(&v37);
    v14 = (*(__int64 (__fastcall **)(__int64 *, void **, const char *))(v16 + 96))(a1, &v34, a3);
    if ( !v14 )
    {
      v38.m128i_i64[1] = v36;
      v14 = sub_8FE1E0(a1, &v39, a3, 0, 0);
      if ( !v14 )
      {
        v35 = 0;
        v34 = nullptr;
        v34 = (void *)qvector_reserve(&v34, 0, 56, 1);
        memset((char *)v34 + v35, 0, 56 - v35);
        v17 = (__m128i *)v34;
        v18 = _mm_load_si128(&v38);
        *(_QWORD *)&v35 = 56;
        *(__m128i *)v34 = v18;
        v19 = v33[0];
        v17[1] = _mm_load_si128(&v39);
        v17[2] = _mm_load_si128((const __m128i *)&v40);
        v17[3].m128i_i64[0] = v41.m128i_i64[1];
        if ( !v19 )
          goto LABEL_25;
        v20 = v35;
        v21 = src;
        v22 = v35 + v19;
        if ( __CFADD__((_QWORD)v35, v19) )
        {
          if ( (unsigned __int64)v35 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (_QWORD)v35 != 0x7FFFFFFFFFFFFFFFLL )
              *(_QWORD *)&v35 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_24:
            memcpy((char *)v34 + v20, v21, v19);
LABEL_25:
            v14 = sub_8F4B40(a1, a2, (__int64 *)&v34, 0);
            if ( a7 )
            {
              if ( !v14 )
              {
                v23 = *(__int64 (**)())(*(_QWORD *)a7 + 8LL);
                if ( v23 != sub_8C83E0 )
                  ((void (__fastcall *)(__int64, __int64, size_t))v23)(a7, 1, v40);
              }
            }
            if ( v34 )
            {
              *(_QWORD *)&v35 = 0;
              qfree(v34);
            }
            goto LABEL_10;
          }
          v22 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v24 = (char *)v34;
        v25 = v35;
        if ( *((_QWORD *)&v35 + 1) < v22 )
        {
          v34 = (void *)qvector_reserve(&v34, v34, v22, 1);
          v24 = (char *)v34;
          v25 = v35;
        }
        memset(&v24[v25], 0, v22 - v25);
        *(_QWORD *)&v35 = v22;
        goto LABEL_24;
      }
    }
  }
LABEL_10:
  if ( src )
  {
    v33[0] = 0;
    qfree(src);
  }
  if ( ptr )
  {
    *(_QWORD *)&v31 = 0;
    qfree(ptr);
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  return v14;
}
