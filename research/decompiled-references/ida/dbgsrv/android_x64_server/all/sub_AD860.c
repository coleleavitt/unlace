/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AD860
// Address: 0x00000000000AD860

//----- (00000000000AD860) ----------------------------------------------------
__int64 __fastcall sub_AD860(void **a1, __int64 a2, char a3)
{
  void **v3; // r14
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  char *v7; // r12
  void *v8; // r15
  unsigned __int64 v9; // rbx
  __int64 j; // rbp
  void *v11; // rdi
  __int64 v13; // r15
  __int64 v14; // r15
  char *v15; // rbx
  char *v16; // r12
  int v17; // ebx
  const char **v18; // r13
  char *v19; // rax
  unsigned __int64 v20; // rbp
  char *v21; // rcx
  __m128i v22; // xmm1
  const char *v23; // rax
  unsigned __int64 v24; // r12
  bool v25; // cc
  size_t v26; // r12
  const void *v27; // rsi
  char *v28; // rbp
  char **v29; // rbp
  char *v30; // r13
  unsigned __int64 v31; // rbx
  const char *v32; // r13
  unsigned __int64 v33; // rdx
  char *v34; // rax
  const char *v35; // r13
  const char *v36; // r12
  const char *v37; // rax
  char *v38; // rdi
  const char **v39; // r15
  _QWORD *v40; // rax
  __int128 v41; // xmm0
  void *v42; // rcx
  char *v43; // rax
  __int128 v44; // xmm0
  void *v45; // rcx
  char *v46; // rbp
  void *v47; // r13
  unsigned __int64 v48; // rbx
  __int64 i; // r12
  void *v50; // rdi
  char *v51; // rdi
  _BYTE *v52; // rax
  char *v53; // rdi
  __int16 v54; // r12
  __int16 v55; // r15
  void **v56; // rax
  __int128 v57; // xmm0
  void *v58; // rcx
  _QWORD *v59; // [rsp+8h] [rbp-C0h]
  int v60; // [rsp+8h] [rbp-C0h]
  char *v61; // [rsp+10h] [rbp-B8h]
  char *v62; // [rsp+10h] [rbp-B8h]
  const char **v63; // [rsp+18h] [rbp-B0h]
  __m128i v64; // [rsp+20h] [rbp-A8h] BYREF
  char *endptr[2]; // [rsp+38h] [rbp-90h] BYREF
  void *v66[4]; // [rsp+50h] [rbp-78h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v68; // [rsp+80h] [rbp-48h]
  char v69; // [rsp+8Fh] [rbp-39h] BYREF
  unsigned __int64 v70; // [rsp+90h] [rbp-38h]

  v3 = a1;
  v70 = __readfsqword(0x28u);
  if ( (a3 & 1) == 0 )
  {
    v4 = *a1;
    if ( *v3 )
    {
      v3[1] = nullptr;
      qfree(v4);
      *v3 = nullptr;
      v3[2] = nullptr;
    }
    *((_WORD *)v3 + 12) = 0;
    v5 = v3[4];
    if ( v5 )
    {
      v3[5] = nullptr;
      qfree(v5);
      v3[4] = nullptr;
      v3[6] = nullptr;
    }
    v6 = v3[7];
    if ( v6 )
    {
      v3[8] = nullptr;
      qfree(v6);
      v3[7] = nullptr;
      v3[9] = nullptr;
    }
  }
  if ( *(_QWORD *)(a2 + 8) < 2u )
  {
    LODWORD(v3) = 0;
    return (unsigned int)v3;
  }
  *(_OWORD *)ptr = 0;
  v68 = 0;
  sub_AE0A0(a2, (__int64)ptr, "@", 0);
  if ( ptr[1] >= (char *)&dword_0 + 3 )
    goto LABEL_11;
  if ( ptr[1] != (char *)&dword_0 + 2 )
  {
    v13 = 0;
LABEL_27:
    memset(v66, 0, 24);
    v14 = 3 * v13;
    v15 = (char *)ptr[0] + 8 * v14;
    if ( *((_QWORD *)v15 + 1) )
      v16 = *(char **)v15;
    else
      v16 = (char *)s1;
    v59 = ptr[0];
    v18 = (const char **)((char *)ptr[0] + 8 * v14 + 8);
    if ( *v16 != 91 )
    {
      v63 = (const char **)((char *)ptr[0] + 8 * v14 + 8);
      v29 = (char **)((char *)ptr[0] + 8 * v14);
      if ( !strncasecmp(v16, "::ffff:", 7u) && strchr(v16, 46) )
        v16 += 7;
      v30 = strchr(v16, 58);
      v21 = nullptr;
      v31 = 0;
      goto LABEL_45;
    }
    v19 = strchr(v16, 93);
    if ( v19 && v19 != v16 + 1 )
    {
      v20 = v19 - v16;
      sub_4ABC0((__int64)endptr, v16 + 1, v19 - v16 - 1);
      v21 = endptr[0];
      v22 = _mm_loadu_si128((const __m128i *)&endptr[1]);
      *(_OWORD *)endptr = 0;
      v66[0] = v21;
      *(__m128i *)&v66[1] = v22;
      v23 = *v18;
      v24 = (unsigned __int64)(*v18 - 1);
      if ( !*v18 )
        v24 = 0;
      if ( v20 && v24 )
      {
        v25 = v24 <= v20;
        v26 = v24 - v20;
        v64 = v22;
        if ( v25 )
        {
          v26 = 0;
        }
        else
        {
          v27 = (const void *)(*(_QWORD *)v15 + v20);
          v28 = v21;
          memmove(*(void **)v15, v27, v26);
          v22.m128i_i64[0] = _mm_load_si128(&v64).m128i_u64[0];
          v21 = v28;
        }
        if ( v59[v14 + 2] >= v26 + 1 )
        {
          v52 = *(_BYTE **)v15;
        }
        else
        {
          v62 = v21;
          v52 = qvector_reserve((__int64)v15, *(char **)v15, v26 + 1, 1u);
          *(_QWORD *)v15 = v52;
          v21 = v62;
          v22.m128i_i64[0] = _mm_load_si128(&v64).m128i_u64[0];
        }
        *v18 = (const char *)(v26 + 1);
        v52[v26] = 0;
        v23 = *v18;
      }
      v63 = v18;
      v29 = (char **)v15;
      if ( v23 )
        v16 = *(char **)v15;
      else
        v16 = (char *)s1;
      v31 = v22.m128i_i64[0];
      v30 = v16;
      if ( *v16 != 58 )
      {
LABEL_90:
        v56 = v66;
        if ( v31 < 2 )
          v56 = (void **)v29;
        v57 = *(_OWORD *)v3;
        v58 = v3[2];
        *v3 = *v56;
        v3[1] = v56[1];
        v3[2] = v56[2];
        *(_OWORD *)v56 = v57;
        v56[2] = v58;
        LOBYTE(v3) = 1;
        v51 = (char *)v66[0];
        if ( v66[0] )
          goto LABEL_93;
        goto LABEL_12;
      }
LABEL_45:
      if ( !v30 )
        goto LABEL_90;
      v61 = v21;
      v32 = v30 + 1;
      v33 = strtoul(v32, endptr, 10);
      v34 = endptr[0];
      if ( v32 != endptr[0] )
      {
        while ( *v34 == 32 )
          ++v34;
        if ( !*v34 )
        {
          endptr[0] = v34;
          v35 = &v32[~(unsigned __int64)v16];
          if ( v35 )
          {
            v36 = v35 + 1;
            v37 = *v63;
            if ( *v63 >= v35 + 1 )
            {
              if ( *v63 != v35 + 1 )
              {
                v55 = v33;
                v69 = 0;
                sub_5F0D0((__int64)v29, (unsigned __int64)(v35 + 1), &v69);
                LOWORD(v33) = v55;
              }
            }
            else
            {
              v64.m128i_i64[0] = v33;
              if ( v59[v14 + 2] >= (unsigned __int64)v36 )
              {
                v38 = *v29;
                v39 = v63;
              }
              else
              {
                v38 = (char *)qvector_reserve((__int64)v29, *v29, (unsigned __int64)(v35 + 1), 1u);
                *v29 = v38;
                v39 = v63;
                v37 = *v63;
              }
              memset(&v38[(_QWORD)v37], 0, v36 - v37);
              *v39 = v36;
              LOWORD(v33) = v64.m128i_i16[0];
            }
            v35[(_QWORD)*v29] = 0;
          }
          else
          {
            v53 = *v29;
            if ( *v29 )
            {
              v54 = v33;
              *v63 = nullptr;
              qfree(v53);
              *v29 = nullptr;
              v59[v14 + 2] = 0;
              LOWORD(v33) = v54;
            }
          }
          *((_WORD *)v3 + 12) = v33;
          goto LABEL_90;
        }
        endptr[0] = v34;
      }
      LODWORD(v3) = 0;
      v51 = v61;
      if ( v61 )
      {
LABEL_93:
        v66[1] = nullptr;
        qfree(v51);
        v66[0] = nullptr;
        v66[2] = nullptr;
      }
LABEL_12:
      v7 = (char *)ptr[0];
      if ( !ptr[0] )
        return (unsigned int)v3;
      goto LABEL_13;
    }
LABEL_11:
    LODWORD(v3) = 0;
    goto LABEL_12;
  }
  v7 = (char *)ptr[0];
  if ( *((_QWORD *)ptr[0] + 1) >= 2u )
  {
    memset(v66, 0, 24);
    sub_AE0A0((__int64)ptr[0], (__int64)v66, ":", 0);
    if ( v66[1] < (char *)&dword_0 + 3 )
    {
      v40 = v66[0];
      v41 = *((_OWORD *)v3 + 2);
      v42 = v3[6];
      v3[4] = *(void **)v66[0];
      v3[5] = (void *)v40[1];
      v3[6] = (void *)v40[2];
      *(_OWORD *)v40 = v41;
      v40[2] = v42;
      v17 = 0;
      if ( v66[1] == (char *)&dword_0 + 2 )
      {
        v43 = (char *)v66[0];
        v44 = *(_OWORD *)(v3 + 7);
        v45 = v3[9];
        v3[7] = *((void **)v66[0] + 3);
        v3[8] = *((void **)v43 + 4);
        v3[9] = *((void **)v43 + 5);
        *(_OWORD *)(v43 + 24) = v44;
        *((_QWORD *)v43 + 5) = v45;
      }
      v13 = 1;
    }
    else
    {
      v17 = 1;
      v13 = 0;
    }
    v46 = (char *)v66[0];
    if ( v66[0] )
    {
      v47 = v66[1];
      if ( v66[1] )
      {
        v60 = v17;
        v48 = 1;
        for ( i = 0; ; i += 24 )
        {
          v50 = *(void **)&v46[i];
          if ( v50 )
          {
            *(_QWORD *)&v46[i + 8] = 0;
            qfree(v50);
            *(_QWORD *)&v46[i] = 0;
            *(_QWORD *)&v46[i + 16] = 0;
          }
          if ( v48 >= (unsigned __int64)v47 )
            break;
          v46 = (char *)v66[0];
          ++v48;
        }
        v46 = (char *)v66[0];
        v17 = v60;
      }
      v66[1] = nullptr;
      qfree(v46);
      v66[0] = nullptr;
      v66[2] = nullptr;
    }
    if ( v17 )
      goto LABEL_11;
    goto LABEL_27;
  }
  LODWORD(v3) = 0;
  if ( !ptr[0] )
    return (unsigned int)v3;
LABEL_13:
  v8 = ptr[1];
  if ( ptr[1] )
  {
    v9 = 1;
    for ( j = 0; ; j += 24 )
    {
      v11 = *(void **)&v7[j];
      if ( v11 )
      {
        *(_QWORD *)&v7[j + 8] = 0;
        qfree(v11);
        *(_QWORD *)&v7[j] = 0;
        *(_QWORD *)&v7[j + 16] = 0;
      }
      if ( v9 >= (unsigned __int64)v8 )
        break;
      v7 = (char *)ptr[0];
      ++v9;
    }
    v7 = (char *)ptr[0];
  }
  ptr[1] = nullptr;
  qfree(v7);
  ptr[0] = nullptr;
  v68 = 0;
  return (unsigned int)v3;
}
// 0: using guessed type int dword_0;
