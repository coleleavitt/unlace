__int64 __fastcall sub_8D0FA0(
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
  unsigned int v12; // ebx
  __int64 v14; // rax
  __m128i *v15; // rax
  __m128i v16; // xmm0
  size_t v17; // rbx
  __int64 v18; // rbp
  void *v19; // r15
  unsigned __int64 v20; // r14
  __int64 (*v21)(); // rax
  char *v22; // rsi
  __int64 v23; // rax
  size_t n; // [rsp+0h] [rbp-158h]
  void *v26; // [rsp+20h] [rbp-138h] BYREF
  __int128 v27; // [rsp+28h] [rbp-130h]
  void *ptr; // [rsp+40h] [rbp-118h] BYREF
  __int128 v29; // [rsp+48h] [rbp-110h]
  void *src; // [rsp+60h] [rbp-F8h] BYREF
  size_t v31[3]; // [rsp+68h] [rbp-F0h]
  void *v32; // [rsp+80h] [rbp-D8h] BYREF
  __int128 v33; // [rsp+88h] [rbp-D0h]
  __int64 v34; // [rsp+A8h] [rbp-B0h]
  __m128i v35; // [rsp+D0h] [rbp-88h] BYREF
  __m128i v36; // [rsp+E0h] [rbp-78h] BYREF
  __m128i v37; // [rsp+F0h] [rbp-68h] BYREF
  size_t v38; // [rsp+100h] [rbp-58h] BYREF
  __m128i v39; // [rsp+108h] [rbp-50h]
  unsigned __int64 v40; // [rsp+118h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v27 = 0;
  v26 = nullptr;
  if ( a3 )
  {
    v9 = strlen(a3);
    v10 = v9 + 1;
    v11 = v9;
    v26 = (void *)qvector_reserve(&v26, 0, v9 + 1, 1);
    *(_QWORD *)&v27 = v10;
    memmove(v26, a3, v11);
    *((_BYTE *)v26 + v11) = 0;
  }
  sub_8CC1A0((__int64)&v26, "\\", "/");
  ptr = nullptr;
  v29 = 0;
  if ( a4 )
  {
    n = strlen(a4);
    ptr = (void *)qvector_reserve(&ptr, 0, n + 1, 1);
    *(_QWORD *)&v29 = n + 1;
    memmove(ptr, a4, n);
    *((_BYTE *)ptr + n) = 0;
  }
  sub_8CC1A0((__int64)&ptr, "\\", "/");
  sub_7A4810();
  *(_OWORD *)v31 = 0;
  src = nullptr;
  v12 = sub_8D0470(a1, (__int64 *)&src, (__int64)a4, 0);
  if ( !v12 )
  {
    v37 = 0;
    v36 = (__m128i)0x41544C4544594F54uLL;
    v38 = v31[0];
    v39 = 0;
    sub_8DA800(&v35, src);
    v14 = *a1;
    v39 = _mm_load_si128(&v35);
    v12 = (*(__int64 (__fastcall **)(__int64 *, void **, const char *))(v14 + 96))(a1, &v32, a3);
    if ( !v12 )
    {
      v36.m128i_i64[1] = v34;
      v12 = sub_8DA4A0(a1, &v37, a3, 0, 0);
      if ( !v12 )
      {
        v33 = 0;
        v32 = nullptr;
        v32 = (void *)qvector_reserve(&v32, 0, 56, 1);
        memset((char *)v32 + v33, 0, 56 - v33);
        v15 = (__m128i *)v32;
        v16 = _mm_load_si128(&v36);
        *(_QWORD *)&v33 = 56;
        *(__m128i *)v32 = v16;
        v17 = v31[0];
        v15[1] = _mm_load_si128(&v37);
        v15[2] = _mm_load_si128((const __m128i *)&v38);
        v15[3].m128i_i64[0] = v39.m128i_i64[1];
        if ( !v17 )
          goto LABEL_21;
        v18 = v33;
        v19 = src;
        v20 = v33 + v17;
        if ( __CFADD__((_QWORD)v33, v17) )
        {
          if ( (unsigned __int64)v33 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (_QWORD)v33 != 0x7FFFFFFFFFFFFFFFLL )
              *(_QWORD *)&v33 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_20:
            memcpy((char *)v32 + v18, v19, v17);
LABEL_21:
            v12 = sub_8D0E00(a1, a2, (__int64 *)&v32, 0);
            if ( a7 )
            {
              if ( !v12 )
              {
                v21 = *(__int64 (**)())(*(_QWORD *)a7 + 8LL);
                if ( v21 != sub_8A46A0 )
                  ((void (__fastcall *)(__int64, __int64, size_t))v21)(a7, 1, v38);
              }
            }
            if ( v32 )
            {
              *(_QWORD *)&v33 = 0;
              qfree(v32);
            }
            goto LABEL_6;
          }
          v20 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v22 = (char *)v32;
        v23 = v33;
        if ( *((_QWORD *)&v33 + 1) < v20 )
        {
          v32 = (void *)qvector_reserve(&v32, v32, v20, 1);
          v22 = (char *)v32;
          v23 = v33;
        }
        memset(&v22[v23], 0, v20 - v23);
        *(_QWORD *)&v33 = v20;
        goto LABEL_20;
      }
    }
  }
LABEL_6:
  if ( src )
  {
    v31[0] = 0;
    qfree(src);
  }
  if ( ptr )
  {
    *(_QWORD *)&v29 = 0;
    qfree(ptr);
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  return v12;
}

