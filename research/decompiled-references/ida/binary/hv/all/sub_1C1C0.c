unsigned __int64 __fastcall sub_1C1C0(__int64 *a1, const char **a2, __int64 a3, __int64 a4, __m128 a5)
{
  const char **i; // rbx
  const char **v7; // rbp
  __int64 v8; // rax
  const char **v9; // rbp
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r13
  size_t v13; // rax
  size_t v14; // r13
  unsigned __int64 v15; // r13
  const char *v16; // rax
  const char *v17; // rsi
  const char *v18; // rdi
  unsigned __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  void **v23; // rcx
  __int64 v24; // r15
  void **v25; // rbp
  __int64 v26; // r13
  void **v27; // r14
  void *v28; // rdi
  char *v29; // rdx
  __int64 v30; // r13
  __int64 v31; // rbp
  char *v32; // rax
  void *v33; // rdi
  _QWORD *v35; // rbp
  _BYTE *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // r15
  char *v40; // rdx
  char *v41; // rsi
  size_t v42; // r13
  void *v43; // rax
  char *v44; // rdi
  size_t v45; // r14
  __int64 v46; // rax
  const char *v47; // r14
  char *v48; // rax
  const char *v49; // r14
  char *v50; // rax
  const char *v51; // r14
  char *v52; // rax
  const char *v53; // r14
  void *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // [rsp+8h] [rbp-C0h]
  const void **v58; // [rsp+10h] [rbp-B8h]
  const char **v59; // [rsp+18h] [rbp-B0h]
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  __int128 v62; // [rsp+38h] [rbp-90h]
  char v63[24]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v64; // [rsp+88h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  v59 = &a2[13 * a3];
  if ( v59 != a2 )
  {
    for ( i = a2; v59 != i; i += 13 )
    {
      sub_65BE0(v63, 20, "%F", *(double *)a5.m128_u64);
      v62 = 0;
      ptr = nullptr;
      ptr = (void *)sub_96080(&ptr, 0, 6, 24);
      v7 = (const char **)ptr;
      if ( (unsigned __int64)v62 <= 5 )
      {
        v8 = 3 * v62;
        do
        {
          v9 = &v7[v8];
          v8 += 3;
          *v9 = nullptr;
          *(_OWORD *)(v9 + 1) = 0;
          v7 = (const char **)ptr;
        }
        while ( v8 != 18 );
      }
      *(_QWORD *)&v62 = 6;
      if ( v7 != i )
      {
        v10 = (unsigned __int64)i[1];
        if ( v10 > 1 )
        {
          v53 = *i;
          v54 = (void *)*v7;
          if ( (unsigned __int64)v7[2] < v10 )
          {
            v56 = sub_96080(v7, *v7, i[1], 1);
            *v7 = (const char *)v56;
            v54 = (void *)v56;
          }
          v7[1] = (const char *)v10;
          memmove(v54, v53, v10 - 1);
          (*v7)[v10 - 1] = 0;
          v7 = (const char **)ptr;
        }
        else
        {
          v7[1] = nullptr;
        }
      }
      if ( v7 + 3 != i + 3 )
      {
        v11 = (unsigned __int64)i[4];
        if ( v11 > 1 )
        {
          v49 = i[3];
          v50 = (char *)v7[3];
          if ( (unsigned __int64)v7[5] < v11 )
          {
            v50 = (char *)sub_96080(v7 + 3, v7[3], i[4], 1);
            v7[3] = v50;
          }
          v7[4] = (const char *)v11;
          memmove(v50, v49, v11 - 1);
          v7[3][v11 - 1] = 0;
          v7 = (const char **)ptr;
        }
        else
        {
          v7[4] = nullptr;
        }
      }
      if ( v7 + 6 != i + 9 )
      {
        v12 = (unsigned __int64)i[10];
        if ( v12 > 1 )
        {
          v51 = i[9];
          v52 = (char *)v7[6];
          if ( (unsigned __int64)v7[8] < v12 )
          {
            v52 = (char *)sub_96080(v7 + 6, v7[6], i[10], 1);
            v7[6] = v52;
          }
          v7[7] = (const char *)v12;
          memmove(v52, v51, v12 - 1);
          v7[6][v12 - 1] = 0;
          v7 = (const char **)ptr;
        }
        else
        {
          v7[7] = nullptr;
        }
      }
      v13 = strlen(v63);
      v14 = v13;
      if ( v13 )
      {
        v44 = (char *)v7[9];
        v45 = v13 + 1;
        if ( (unsigned __int64)v7[11] < v13 + 1 )
        {
          v55 = sub_96080(v7 + 9, v7[9], v45, 1);
          v7[9] = (const char *)v55;
          v44 = (char *)v55;
        }
        v7[10] = (const char *)v45;
        memmove(v44, v63, v14);
        v7[9][v14] = 0;
        v7 = (const char **)ptr;
      }
      else
      {
        v7[10] = nullptr;
      }
      if ( v7 + 12 != i + 6 )
      {
        v15 = (unsigned __int64)i[7];
        if ( v15 > 1 )
        {
          v47 = i[6];
          v48 = (char *)v7[12];
          if ( (unsigned __int64)v7[14] < v15 )
          {
            v48 = (char *)sub_96080(v7 + 12, v7[12], i[7], 1);
            v7[12] = v48;
          }
          v7[13] = (const char *)v15;
          memmove(v48, v47, v15 - 1);
          v7[12][v15 - 1] = 0;
        }
        else
        {
          v7[13] = nullptr;
        }
      }
      v16 = i[1];
      if ( *(_QWORD *)(a4 + 8) )
      {
        v17 = *(const char **)a4;
        v18 = haystack;
        if ( !v16 )
          goto LABEL_23;
      }
      else
      {
        v17 = haystack;
        if ( !v16 )
        {
LABEL_44:
          v35 = ptr;
          v36 = *((_BYTE **)ptr + 15);
          if ( *((_QWORD *)ptr + 17) <= 1u )
          {
            v46 = sub_96080((char *)ptr + 120, v36, 2, 1);
            v35[15] = v46;
            v36 = (_BYTE *)v46;
          }
          v35[16] = 2;
          *v36 = 42;
          *(_BYTE *)(v35[15] + 1LL) = 0;
          goto LABEL_24;
        }
      }
      v18 = *i;
LABEL_23:
      if ( !strcmp(v18, v17) )
        goto LABEL_44;
LABEL_24:
      v57 = 0;
      v19 = v62;
      if ( (_QWORD)v62 )
      {
        v57 = sub_96030(24 * v62);
        v38 = v57;
        v39 = 0;
        do
        {
          v40 = (char *)ptr;
          *(_QWORD *)v38 = 0;
          *(_OWORD *)(v38 + 8) = 0;
          v41 = &v40[24 * v39];
          v42 = *((_QWORD *)v41 + 1);
          if ( v42 )
          {
            v58 = (const void **)&v40[24 * v39];
            v43 = (void *)sub_96030(*((_QWORD *)v41 + 1));
            *(_QWORD *)v38 = v43;
            *(_QWORD *)(v38 + 16) = v42;
            memcpy(v43, *v58, v42);
            *(_QWORD *)(v38 + 8) = v42;
          }
          ++v39;
          v38 += 24;
        }
        while ( v19 != v39 );
      }
      v20 = a1[1];
      v21 = *a1;
      if ( a1[2] < (unsigned __int64)(v20 + 1) )
      {
        v37 = sub_96080(a1, v21, v20 + 1, 24);
        *a1 = v37;
        v20 = a1[1];
        v21 = v37;
      }
      v22 = v21 + 24 * v20;
      *(_OWORD *)(v22 + 8) = 0;
      *(_QWORD *)v22 = 0;
      a5 = (__m128)_mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
      ++a1[1];
      v23 = *(void ***)v22;
      v24 = *(_QWORD *)(v22 + 8);
      *(_QWORD *)v22 = v57;
      *(__m128 *)(v22 + 8) = a5;
      if ( v23 )
      {
        v25 = v23;
        v26 = 0;
        v27 = v23;
        if ( v24 )
        {
          do
          {
            v28 = *v25;
            if ( *v25 )
            {
              v25[1] = nullptr;
              j__free(v28);
            }
            ++v26;
            v25 += 3;
          }
          while ( v24 != v26 );
          v23 = v27;
        }
        j__free(v23);
      }
      v29 = (char *)ptr;
      if ( ptr )
      {
        v30 = v62;
        if ( (_QWORD)v62 )
        {
          v31 = 0;
          do
          {
            v32 = &v29[24 * v31];
            v33 = *(void **)v32;
            if ( *(_QWORD *)v32 )
            {
              *((_QWORD *)v32 + 1) = 0;
              j__free(v33);
              v29 = (char *)ptr;
            }
            ++v31;
          }
          while ( v30 != v31 );
        }
        *(_QWORD *)&v62 = 0;
        j__free(v29);
      }
    }
  }
  return v64 - __readfsqword(0x28u);
}

