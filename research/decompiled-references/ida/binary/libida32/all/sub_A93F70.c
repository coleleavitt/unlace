unsigned __int64 __fastcall sub_A93F70(
        _QWORD *a1,
        __int64 a2,
        char *a3,
        __int64 a4,
        void *a5,
        __int64 a6,
        unsigned __int64 a7)
{
  __int64 v7; // r15
  __int64 v8; // r14
  unsigned __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rbp
  char v15; // al
  int v16; // r10d
  unsigned __int64 v17; // rbp
  unsigned __int64 result; // rax
  __int64 v19; // rax
  size_t v20; // r8
  char *v21; // rdi
  unsigned __int64 v22; // r15
  unsigned int v23; // eax
  __m128i *v24; // rsi
  int v25; // eax
  char *v26; // r14
  char *v27; // r13
  __int64 v28; // rdx
  char *v29; // rcx
  const __m128i *v30; // rax
  __int64 v31; // r9
  __int64 v32; // r8
  char *v33; // rsi
  __m128i v34; // xmm0
  __m128i *v35; // rdi
  __int8 *v36; // rsi
  __int64 v37; // rdx
  char *v38; // rax
  char *v39; // rcx
  __m128i v40; // xmm1
  void *srca; // [rsp+8h] [rbp-160h]
  void *v43; // [rsp+10h] [rbp-158h]
  unsigned int v44; // [rsp+10h] [rbp-158h]
  __int64 v45; // [rsp+18h] [rbp-150h]
  unsigned __int64 v46; // [rsp+20h] [rbp-148h]
  char v47; // [rsp+28h] [rbp-140h]
  signed __int64 n; // [rsp+30h] [rbp-138h]
  size_t na; // [rsp+30h] [rbp-138h]
  __int64 v50; // [rsp+38h] [rbp-130h]
  __int64 v51; // [rsp+40h] [rbp-128h]
  __int64 v52; // [rsp+48h] [rbp-120h] BYREF
  void *ptr; // [rsp+50h] [rbp-118h] BYREF
  unsigned __int64 v54; // [rsp+58h] [rbp-110h]
  _BYTE v55[96]; // [rsp+60h] [rbp-108h] BYREF
  void *v56; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+C8h] [rbp-A0h]
  _BYTE v58[152]; // [rsp+D0h] [rbp-98h] BYREF

  v7 = (__int64)a5;
  v8 = a6;
  v52 = a2;
  v11 = a7;
  v43 = a5;
  v45 = a6;
  v12 = sub_EFEE90(&v52, 1);
  v13 = 24 * a4;
  v14 = 24 * a4;
  if ( v12 )
  {
    v46 = a7 & 0xFFFFFFFFFFFFFFF0LL;
    v15 = sub_B99E90(v12);
    v13 = 24 * a4;
    if ( v15 )
    {
      if ( v46 )
      {
        v14 += 8;
        v16 = 1;
LABEL_7:
        v44 = v16;
        v17 = sub_A4C290(a1 + 294, v14 + 48, 4u);
        sub_F3A8A0(v17, v52, v44, a3, a4, v11);
        sub_A469E0((__int64)(a1 + 1), v17);
        return v17 & 0xFFFFFFFFFFFFFFF0LL;
      }
    }
    else if ( v46 )
    {
LABEL_6:
      v16 = 0;
      goto LABEL_7;
    }
  }
  else
  {
    v16 = 0;
    if ( (a7 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      goto LABEL_7;
  }
  n = v13;
  v19 = sub_A92560(a1, v52, 1u);
  v20 = n;
  v50 = v19;
  v47 = v52 != v19;
  ptr = v55;
  v54 = 0x400000000LL;
  if ( !v8 )
  {
    v57 = 0x400000000LL;
    v21 = v58;
    v22 = 0xAAAAAAAAAAAAAAABLL * (n >> 3);
    v56 = v58;
    v23 = -1431655765 * (n >> 3);
    if ( v22 > 4 )
    {
      sub_22134E0(&v56, v58, 0xAAAAAAAAAAAAAAABLL * (n >> 3), 24);
      v25 = v57;
      v20 = n;
      v24 = (__m128i *)v56;
      v21 = (char *)v56 + 24 * (unsigned int)v57;
      if ( !n )
      {
LABEL_14:
        v23 = v22 + v25;
        LODWORD(v22) = v23;
        LODWORD(v57) = v23;
        if ( v24 != (__m128i *)v58 )
        {
          if ( ptr != v55 )
          {
            free(ptr);
            v24 = (__m128i *)v56;
            LODWORD(v22) = v57;
          }
          ptr = v24;
          v54 = __PAIR64__(HIDWORD(v57), v22);
LABEL_18:
          v47 |= sub_A93370(a1, v24, (unsigned int)v22);
          v43 = ptr;
          v45 = (unsigned int)v54;
          goto LABEL_19;
        }
LABEL_32:
        v28 = v23;
        if ( v23 <= (unsigned __int64)(unsigned int)v54 )
        {
          v35 = (__m128i *)v58;
          if ( !v23 )
            goto LABEL_41;
          v38 = (char *)ptr;
          v39 = (char *)ptr + 24 * v28;
          do
          {
            v40 = _mm_loadu_si128(v35);
            v38 += 24;
            v35 = (__m128i *)((char *)v35 + 24);
            *(__m128i *)(v38 - 24) = v40;
            *((_QWORD *)v38 - 1) = v35[-1].m128i_i64[1];
          }
          while ( v38 != v39 );
        }
        else
        {
          if ( v23 > (unsigned __int64)HIDWORD(v54) )
          {
            LODWORD(v54) = 0;
            sub_22134E0(&ptr, v55, v23, 24);
            v35 = (__m128i *)v56;
            v29 = (char *)ptr;
            v32 = 0;
            v28 = (unsigned int)v57;
            v36 = (__int8 *)v56;
          }
          else
          {
            v29 = (char *)ptr;
            if ( (_DWORD)v54 )
            {
              v30 = (const __m128i *)v58;
              v31 = 24LL * (unsigned int)v54;
              v32 = v31;
              v33 = (char *)ptr + v31;
              do
              {
                v34 = _mm_loadu_si128(v30);
                v29 += 24;
                v30 = (const __m128i *)((char *)v30 + 24);
                *(__m128i *)(v29 - 24) = v34;
                *((_QWORD *)v29 - 1) = v30[-1].m128i_i64[1];
              }
              while ( v29 != v33 );
              v35 = (__m128i *)v56;
              v28 = (unsigned int)v57;
              v36 = (char *)v56 + v31;
              v29 = (char *)ptr + v31;
            }
            else
            {
              v36 = v58;
              v32 = 0;
              v35 = (__m128i *)v58;
            }
          }
          v37 = 24 * v28;
          if ( v36 == &v35->m128i_i8[v37] )
            goto LABEL_41;
          memcpy(v29, v36, v37 - v32);
        }
        v35 = (__m128i *)v56;
LABEL_41:
        LODWORD(v54) = v22;
        LODWORD(v57) = 0;
        if ( v35 != (__m128i *)v58 )
          free(v35);
        v24 = (__m128i *)ptr;
        LODWORD(v22) = v54;
        goto LABEL_18;
      }
    }
    else if ( !n )
    {
      LODWORD(v57) = 0;
      goto LABEL_32;
    }
    memcpy(v21, a3, v20);
    v24 = (__m128i *)v56;
    v25 = v57;
    goto LABEL_14;
  }
  if ( 24 * v8 != n )
  {
LABEL_28:
    v11 = sub_A54370((__int64)a1, v50, v7, v8);
LABEL_29:
    if ( ptr != v55 )
      free(ptr);
    goto LABEL_6;
  }
  if ( a3 != &a3[n] )
  {
    v51 = v8;
    v26 = a3;
    v27 = &a3[n];
    na = v7;
    while ( (unsigned __int8)sub_EF9EB0(v26, v7) )
    {
      v26 += 24;
      v7 += 24;
      if ( v27 == v26 )
        goto LABEL_19;
    }
    v7 = na;
    v8 = v51;
    goto LABEL_28;
  }
LABEL_19:
  result = sub_A54370((__int64)a1, v50, (__int64)v43, v45);
  v11 = result;
  if ( v47 )
    goto LABEL_29;
  if ( ptr != v55 )
  {
    srca = (void *)result;
    free(ptr);
    return (unsigned __int64)srca;
  }
  return result;
}

