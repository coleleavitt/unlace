__int64 __fastcall sub_5B220(
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
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  const char *v15; // rdx
  const char *v16; // rsi
  unsigned int v17; // ebx
  __int64 v19; // rax
  __m128i *v20; // rax
  __m128i v21; // xmm0
  size_t v22; // rbx
  __int64 v23; // rbp
  void *v24; // r15
  unsigned __int64 v25; // r14
  __int64 (*v26)(); // rax
  char *v27; // rsi
  __int64 v28; // rax
  size_t n; // [rsp+0h] [rbp-158h]
  void *v31; // [rsp+20h] [rbp-138h] BYREF
  __int128 v32; // [rsp+28h] [rbp-130h]
  void *v33; // [rsp+40h] [rbp-118h] BYREF
  __int128 v34; // [rsp+48h] [rbp-110h]
  void *ptr; // [rsp+60h] [rbp-F8h] BYREF
  size_t v36[3]; // [rsp+68h] [rbp-F0h]
  void *v37; // [rsp+80h] [rbp-D8h] BYREF
  __int128 v38; // [rsp+88h] [rbp-D0h]
  __int64 v39; // [rsp+A8h] [rbp-B0h]
  __m128i v40; // [rsp+D0h] [rbp-88h] BYREF
  __m128i v41; // [rsp+E0h] [rbp-78h] BYREF
  __m128i v42; // [rsp+F0h] [rbp-68h] BYREF
  size_t v43; // [rsp+100h] [rbp-58h] BYREF
  __m128i v44; // [rsp+108h] [rbp-50h]
  unsigned __int64 v45; // [rsp+118h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v32 = 0;
  v31 = nullptr;
  if ( a3 )
  {
    v9 = strlen(a3);
    v10 = v9 + 1;
    v11 = v9;
    v31 = (void *)sub_96080(&v31, 0, v9 + 1, 1);
    *(_QWORD *)&v32 = v10;
    memmove(v31, a3, v11);
    *((_BYTE *)v31 + v11) = 0;
  }
  sub_56380((__int64)&v31, "\\", "/");
  v33 = nullptr;
  v34 = 0;
  if ( a4 )
  {
    n = strlen(a4);
    v33 = (void *)sub_96080(&v33, 0, n + 1, 1);
    *(_QWORD *)&v34 = n + 1;
    memmove(v33, a4, n);
    *((_BYTE *)v33 + n) = 0;
  }
  sub_56380((__int64)&v33, "\\", "/");
  v15 = haystack;
  if ( (_QWORD)v34 )
    LODWORD(v15) = (_DWORD)v33;
  v16 = haystack;
  if ( (_QWORD)v32 )
    LODWORD(v16) = (_DWORD)v31;
  sub_708D0((unsigned int)"build_delta: %s -> %s\n", (_DWORD)v16, (_DWORD)v15, v12, v13, v14);
  *(_OWORD *)v36 = 0;
  ptr = nullptr;
  v17 = sub_5A6F0(a1, (__int64 *)&ptr, (__int64)a4, 0);
  if ( !v17 )
  {
    v42 = 0;
    v41 = (__m128i)0x41544C4544594F54uLL;
    v43 = v36[0];
    v44 = 0;
    sub_64C70(&v40, ptr);
    v19 = *a1;
    v44 = _mm_load_si128(&v40);
    v17 = (*(__int64 (__fastcall **)(__int64 *, void **, const char *))(v19 + 96))(a1, &v37, a3);
    if ( !v17 )
    {
      v41.m128i_i64[1] = v39;
      v17 = sub_64910(a1, &v42, a3, 0, 0);
      if ( !v17 )
      {
        v38 = 0;
        v37 = nullptr;
        v37 = (void *)sub_96080(&v37, 0, 56, 1);
        memset((char *)v37 + v38, 0, 56 - v38);
        v20 = (__m128i *)v37;
        v21 = _mm_load_si128(&v41);
        *(_QWORD *)&v38 = 56;
        *(__m128i *)v37 = v21;
        v22 = v36[0];
        v20[1] = _mm_load_si128(&v42);
        v20[2] = _mm_load_si128((const __m128i *)&v43);
        v20[3].m128i_i64[0] = v44.m128i_i64[1];
        if ( !v22 )
          goto LABEL_25;
        v23 = v38;
        v24 = ptr;
        v25 = v38 + v22;
        if ( __CFADD__((_QWORD)v38, v22) )
        {
          if ( (unsigned __int64)v38 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (_QWORD)v38 != 0x7FFFFFFFFFFFFFFFLL )
              *(_QWORD *)&v38 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_24:
            memcpy((char *)v37 + v23, v24, v22);
LABEL_25:
            v17 = sub_5B080(a1, a2, (__int64 *)&v37, 0);
            if ( a7 )
            {
              if ( !v17 )
              {
                v26 = *(__int64 (**)())(*(_QWORD *)a7 + 8LL);
                if ( v26 != sub_34740 )
                  ((void (__fastcall *)(__int64, __int64, size_t))v26)(a7, 1, v43);
              }
            }
            if ( v37 )
            {
              *(_QWORD *)&v38 = 0;
              j__free(v37);
            }
            goto LABEL_10;
          }
          v25 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v27 = (char *)v37;
        v28 = v38;
        if ( *((_QWORD *)&v38 + 1) < v25 )
        {
          v37 = (void *)sub_96080(&v37, v37, v25, 1);
          v27 = (char *)v37;
          v28 = v38;
        }
        memset(&v27[v28], 0, v25 - v28);
        *(_QWORD *)&v38 = v25;
        goto LABEL_24;
      }
    }
  }
LABEL_10:
  if ( ptr )
  {
    v36[0] = 0;
    j__free(ptr);
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    j__free(v33);
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    j__free(v31);
  }
  return v17;
}

