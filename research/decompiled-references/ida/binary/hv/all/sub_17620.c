unsigned __int64 __fastcall sub_17620(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v4; // rax
  char *v5; // rsi
  unsigned __int64 v6; // rdi
  void *v7; // r15
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  char *v10; // rax
  _BYTE *v11; // rax
  __int64 v12; // rax
  char *v13; // rsi
  unsigned __int64 v14; // rdi
  void *v15; // rbx
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  char *v18; // rax
  size_t v19; // r15
  void *v20; // rbx
  __int64 v21; // rdx
  char *v22; // rsi
  char *v23; // rax
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  char *v27; // rdx
  __int64 v28; // r12
  __int64 v29; // rbx
  char *v30; // rax
  void *v31; // rdi
  __m128i v32; // xmm0
  char *v33; // rax
  __m128i v34; // xmm0
  char *v35; // rax
  const char *v37; // rdx
  __m128i v39; // [rsp+8h] [rbp-A8h] BYREF
  void *ptr; // [rsp+18h] [rbp-98h] BYREF
  size_t n[3]; // [rsp+20h] [rbp-90h]
  void *v42; // [rsp+38h] [rbp-78h] BYREF
  __int128 v43; // [rsp+40h] [rbp-70h]
  void *v44; // [rsp+58h] [rbp-58h] BYREF
  __m128i v45; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v46; // [rsp+70h] [rbp-40h]

  v2 = 0;
  v46 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  ptr = nullptr;
  while ( sub_95D00(&ptr, a2) >= 0 )
  {
    ++v2;
    if ( n[0] > 1 && *(_BYTE *)ptr != 59 )
    {
      v42 = nullptr;
      v44 = nullptr;
      v43 = 0;
      v45 = 0;
      v44 = (void *)sub_96080(&v44, 0, 5, 1);
      v45.m128i_i64[0] = 5;
      strcpy((char *)v44, "filt");
      v4 = v43;
      v5 = (char *)v42;
      v6 = v43 + 1;
      if ( &v44 < v42 || &v44 >= (void **)((char *)v42 + 24 * *((_QWORD *)&v43 + 1)) )
      {
        if ( *((_QWORD *)&v43 + 1) < v6 )
        {
          v42 = (void *)sub_96080(&v42, v42, v43 + 1, 24);
          v5 = (char *)v42;
          v4 = v43;
        }
        v34 = _mm_loadu_si128(&v45);
        v35 = &v5[24 * v4];
        *(_QWORD *)v35 = v44;
        *(__m128i *)(v35 + 8) = v34;
        *(_QWORD *)&v43 = v43 + 1;
      }
      else
      {
        v7 = v44;
        v8 = _mm_loadl_epi64(&v45);
        v44 = nullptr;
        v9 = _mm_loadl_epi64((const __m128i *)&v45.m128i_u64[1]);
        v45 = 0;
        if ( *((_QWORD *)&v43 + 1) < v6 )
        {
          v39.m128i_i64[1] = v9.m128i_i64[0];
          v39.m128i_i64[0] = v8.m128i_i64[0];
          v42 = (void *)sub_96080(&v42, v42, v43 + 1, 24);
          v5 = (char *)v42;
          v9 = _mm_loadl_epi64((const __m128i *)&v39.m128i_u64[1]);
          v4 = v43;
          v8 = _mm_loadl_epi64(&v39);
        }
        v10 = &v5[24 * v4];
        *(_QWORD *)v10 = v7;
        *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64(v8, v9);
        *(_QWORD *)&v43 = v43 + 1;
        if ( v44 )
        {
          v45.m128i_i64[0] = 0;
          j__free(v44);
        }
      }
      v45 = 0;
      v44 = nullptr;
      v11 = (_BYTE *)sub_96080(&v44, 0, 4, 1);
      v44 = v11;
      v45.m128i_i64[0] = 4;
      *(_WORD *)v11 = 25697;
      v11[2] = 100;
      *((_BYTE *)v44 + 3) = 0;
      v12 = v43;
      v13 = (char *)v42;
      v14 = v43 + 1;
      if ( &v44 < v42 || &v44 >= (void **)((char *)v42 + 24 * *((_QWORD *)&v43 + 1)) )
      {
        if ( *((_QWORD *)&v43 + 1) < v14 )
        {
          v42 = (void *)sub_96080(&v42, v42, v43 + 1, 24);
          v13 = (char *)v42;
          v12 = v43;
        }
        v32 = _mm_loadu_si128(&v45);
        v20 = nullptr;
        v33 = &v13[24 * v12];
        *(_QWORD *)v33 = v44;
        *(__m128i *)(v33 + 8) = v32;
        v19 = n[0];
        *(_QWORD *)&v43 = v43 + 1;
        if ( n[0] )
        {
LABEL_31:
          v20 = (void *)sub_96030(v19);
          memcpy(v20, ptr, v19);
        }
      }
      else
      {
        v15 = v44;
        v16 = _mm_loadl_epi64(&v45);
        v44 = nullptr;
        v17 = _mm_loadl_epi64((const __m128i *)&v45.m128i_u64[1]);
        v45 = 0;
        if ( *((_QWORD *)&v43 + 1) < v14 )
        {
          v39.m128i_i64[1] = v17.m128i_i64[0];
          v39.m128i_i64[0] = v16.m128i_i64[0];
          v42 = (void *)sub_96080(&v42, v42, v43 + 1, 24);
          v13 = (char *)v42;
          v17 = _mm_loadl_epi64((const __m128i *)&v39.m128i_u64[1]);
          v12 = v43;
          v16 = _mm_loadl_epi64(&v39);
        }
        v18 = &v13[24 * v12];
        *(_QWORD *)v18 = v15;
        *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64(v16, v17);
        *(_QWORD *)&v43 = v43 + 1;
        if ( v44 )
        {
          v45.m128i_i64[0] = 0;
          j__free(v44);
        }
        v19 = n[0];
        v20 = nullptr;
        if ( n[0] )
          goto LABEL_31;
      }
      v21 = v43;
      v22 = (char *)v42;
      if ( *((_QWORD *)&v43 + 1) < (unsigned __int64)(v43 + 1) )
      {
        v42 = (void *)sub_96080(&v42, v42, v43 + 1, 24);
        v21 = v43;
        v22 = (char *)v42;
      }
      v23 = &v22[24 * v21];
      *(_QWORD *)v23 = v20;
      *(__m128i *)(v23 + 8) = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
      *(_QWORD *)&v43 = v43 + 1;
      if ( (unsigned int)sub_239C0(a1, &v42) )
      {
        v37 = haystack;
        if ( n[0] )
          LODWORD(v37) = (_DWORD)ptr;
        sub_708D0((unsigned int)"this error occurred on the line #%d: %s\n", v2, (_DWORD)v37, v24, v25, v26);
        sub_96FA0(1);
      }
      v27 = (char *)v42;
      if ( v42 )
      {
        v28 = v43;
        if ( (_QWORD)v43 )
        {
          v29 = 0;
          do
          {
            v30 = &v27[24 * v29];
            v31 = *(void **)v30;
            if ( *(_QWORD *)v30 )
            {
              *((_QWORD *)v30 + 1) = 0;
              j__free(v31);
              v27 = (char *)v42;
            }
            ++v29;
          }
          while ( v28 != v29 );
        }
        *(_QWORD *)&v43 = 0;
        j__free(v27);
      }
    }
  }
  if ( ptr )
  {
    n[0] = 0;
    j__free(ptr);
  }
  return v46 - __readfsqword(0x28u);
}

