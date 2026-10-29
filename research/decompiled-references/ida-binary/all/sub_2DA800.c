__int64 __fastcall sub_2DA800(__int64 a1, __int64 *a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rbx
  size_t v9; // rax
  const char *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r15
  __m128i si128; // xmm6
  __int64 v16; // r14
  __m128i v17; // xmm2
  double v18; // xmm0_8
  void *v19; // rdx
  void **v20; // rbx
  void **v21; // rbp
  const char *v23; // rsi
  char v24; // al
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 i; // rbx
  __int64 *v28; // rax
  __int64 v29; // rdi
  bool v30; // zf
  char *v31; // rdi
  char *v32; // rax
  char *v33; // rdi
  void *v34; // rcx
  __int64 v35; // rax
  __m128 v36; // xmm0
  void *v37; // rax
  __m128i v38; // xmm3
  char *v39; // rsi
  __int64 v40; // rax
  __m128i *v41; // r13
  __m128i v42; // xmm5
  __int64 v43; // rdi
  unsigned __int64 v44; // rcx
  void *v45; // rcx
  __int64 v46; // rdx
  char *v47; // rax
  __m128 v48; // xmm0
  __m128 v49; // [rsp+0h] [rbp-C8h] BYREF
  void **v50; // [rsp+10h] [rbp-B8h]
  __int64 v51; // [rsp+18h] [rbp-B0h]
  __int64 v52; // [rsp+20h] [rbp-A8h]
  void *v53; // [rsp+28h] [rbp-A0h] BYREF
  void *src[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v55; // [rsp+40h] [rbp-88h]
  void *ptr[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v57; // [rsp+60h] [rbp-68h]
  void *v58; // [rsp+70h] [rbp-58h] BYREF
  void *v59; // [rsp+78h] [rbp-50h]
  __int64 v60; // [rsp+80h] [rbp-48h]
  unsigned __int64 v61; // [rsp+88h] [rbp-40h]

  v52 = a1;
  v61 = __readfsqword(0x28u);
  if ( (debug & 0x80000) != 0 && (::a6[0] & 0x10) != 0 )
    sub_4F7CB0(16, (unsigned int)"AccessibleListingDataProvider2QString\n", a3, a4, a5, a6);
  v55 = 0;
  v6 = *a2;
  *(_OWORD *)src = 0;
  if ( v6 )
  {
    if ( *(_BYTE *)(v6 + 68) )
      goto LABEL_6;
    v23 = (const char *)(v6 + 40);
    v24 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 520LL))(v6, v6 + 40);
    *(_BYTE *)(v6 + 68) = v24;
    if ( v24 )
      goto LABEL_6;
    v25 = *(_QWORD *)(v6 + 40);
    if ( !v25 )
    {
      *(_DWORD *)(v6 + 64) = -1;
      goto LABEL_23;
    }
    v26 = *(_QWORD *)(v6 + 48);
    if ( v26 )
    {
      for ( i = 0; i != v26; ++i )
      {
        v28 = (__int64 *)(v25 + 24 * i);
        v29 = *v28;
        if ( *v28 )
        {
          v28[1] = 0;
          qfree(v29, v23);
          v25 = *(_QWORD *)(v6 + 40);
        }
      }
    }
    *(_QWORD *)(v6 + 48) = 0;
    qfree(v25, v23);
    v30 = *(_BYTE *)(v6 + 68) == 0;
    *(_QWORD *)(v6 + 40) = 0;
    *(_QWORD *)(v6 + 56) = 0;
    *(_DWORD *)(v6 + 64) = -1;
    if ( !v30 )
    {
LABEL_6:
      v7 = *(_QWORD *)(v6 + 48);
      if ( (int)v7 > 0 )
      {
        v8 = 0;
        v51 = 8 * (3LL * (unsigned int)(v7 - 1) + 3);
        v50 = ptr;
        while ( 1 )
        {
          v9 = 0;
          v10 = &s1;
          v11 = v8 + *(_QWORD *)(v6 + 40);
          if ( *(_QWORD *)(v11 + 8) )
          {
            v10 = *(const char **)v11;
            if ( *(_QWORD *)v11 )
            {
              if ( *v10 )
                v9 = strlen(v10 + 1) + 1;
            }
          }
          QT::QString::fromLocal8Bit(v50, v9, v10);
          v14 = v55;
          if ( !src[0] )
            break;
          if ( *(int *)src[0] > 1 )
            goto LABEL_14;
          v33 = (char *)src[1];
          v34 = (void *)(((unsigned __int64)src[0] + 31) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *((_QWORD *)src[0] + 1) - 0xAAAAAAAAAAAAAAABLL * (((char *)src[1] - (char *)v34) >> 3) == v55 )
          {
            if ( v55 )
            {
              v45 = ptr[1];
              v16 = v57;
              *(_OWORD *)ptr = 0;
              v53 = v45;
              v57 = 0;
              v49 = _mm_loadh_ps((const double *)&v53);
            }
            else
            {
              if ( src[1] != v34 )
              {
                v35 = v57;
                v57 = 0;
                v36 = _mm_loadh_ps((const double *)&ptr[1]);
                *(_OWORD *)ptr = 0;
                *((_QWORD *)src[1] - 1) = v35;
                *(__m128 *)(v33 - 24) = v36;
                src[1] = (char *)src[1] - 24;
                ++v55;
                goto LABEL_16;
              }
LABEL_14:
              si128 = _mm_load_si128((const __m128i *)ptr);
              v16 = v57;
              v53 = ptr[1];
              v57 = 0;
              v49 = (__m128)si128;
              *(_OWORD *)ptr = 0;
              LOBYTE(v13) = 0;
            }
            if ( *(int *)src[0] > 1 )
            {
LABEL_60:
              sub_1B21C0((__m128i *)src, 0, 1, 0, v12, v13);
              v31 = (char *)src[1];
              goto LABEL_61;
            }
            v39 = (char *)src[1];
            v43 = *((_QWORD *)src[0] + 1);
            v13 = (__int64)src[1] - (((unsigned __int64)src[0] + 31) & 0xFFFFFFFFFFFFFFF0LL);
            v44 = 0xAAAAAAAAAAAAAAABLL * (v13 >> 3);
            v40 = v55;
            if ( (__int64)(v43 - v55 - v44) <= 0 )
            {
              if ( v13 <= 0 )
                goto LABEL_60;
              v13 = 3 * v55;
              if ( 3 * v55 >= 2 * v43 )
                goto LABEL_60;
              v13 = 0;
              v31 = (char *)src[1] - 24 * v44;
              if ( v55 && v31 != src[1] && src[1] && v31 )
              {
                LOBYTE(v53) = 0;
                v32 = (char *)memmove(v31, src[1], 24 * v55);
                v13 = (unsigned __int8)v53;
                v31 = v32;
              }
              src[1] = v31;
              if ( (_BYTE)v13 )
              {
                v17 = _mm_load_si128((const __m128i *)&v49);
                *((_QWORD *)v31 - 1) = v16;
                *(__m128i *)(v31 - 24) = v17;
                src[1] = (char *)src[1] - 24;
                ++v55;
                goto LABEL_16;
              }
LABEL_61:
              v40 = v55;
              v39 = v31;
            }
LABEL_58:
            v41 = (__m128i *)&v39[24 * v14];
            memmove(&v41[1].m128i_u64[1], v41, 24 * (v40 - v14));
            v42 = _mm_load_si128((const __m128i *)&v49);
            v41[1].m128i_i64[0] = v16;
            *v41 = v42;
            ++v55;
            goto LABEL_16;
          }
          v46 = v57;
          v47 = (char *)src[1] + 24 * v55;
          v48 = _mm_loadh_ps((const double *)&ptr[1]);
          v57 = 0;
          *((_QWORD *)v47 + 2) = v46;
          *(__m128 *)v47 = v48;
          *(_OWORD *)ptr = 0;
          ++v55;
LABEL_16:
          if ( !src[0] || *(int *)src[0] > 1 )
            sub_1B21C0((__m128i *)src, 0, 0, 0, v12, v13);
          if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
            free(ptr[0]);
          v8 += 24;
          if ( v8 == v51 )
            goto LABEL_23;
        }
        v37 = ptr[1];
        v38 = _mm_load_si128((const __m128i *)ptr);
        v16 = v57;
        *(_OWORD *)ptr = 0;
        v53 = v37;
        v57 = 0;
        v49 = (__m128)v38;
        sub_1B21C0((__m128i *)src, 0, 1, 0, v12, v13);
        v39 = (char *)src[1];
        v40 = v55;
        goto LABEL_58;
      }
    }
  }
LABEL_23:
  v18 = QT::QString::fromUtf8(&v58, 1, "\n");
  v19 = v59;
  if ( !v59 )
    v19 = &QT::QString::_empty;
  QT::QtPrivate::QStringList_join(v52, src, v19, v60, v18);
  if ( v58 && !_InterlockedSub((volatile signed __int32 *)v58, 1u) )
    free(v58);
  if ( src[0] && !_InterlockedSub((volatile signed __int32 *)src[0], 1u) )
  {
    v20 = (void **)src[1];
    v21 = (void **)((char *)src[1] + 24 * v55);
    if ( src[1] != v21 )
    {
      do
      {
        if ( *v20 && !_InterlockedSub((volatile signed __int32 *)*v20, 1u) )
          free(*v20);
        v20 += 3;
      }
      while ( v21 != v20 );
    }
    free(src[0]);
  }
  return v52;
}
