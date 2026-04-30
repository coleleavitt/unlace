unsigned __int64 __fastcall sub_1BA9A0(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  size_t v12; // rax
  const char *v13; // r12
  size_t v14; // rdx
  __m128 v15; // xmm0
  __m128 si128; // xmm1
  __int64 v17; // rdx
  const QT::QObject *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  __int64 v25; // rbp
  size_t v26; // r10
  __int64 v27; // r9
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // rdx
  __int64 v30; // rsi
  unsigned __int64 v31; // r12
  unsigned __int64 v32; // rdx
  __int64 v33; // r12
  __int64 v34; // rdx
  __int64 v35; // rbp
  __int64 v36; // rbx
  __int64 *v37; // rax
  __int64 v38; // rdi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r8
  char v43; // [rsp-8h] [rbp-C8h]
  unsigned __int64 v44; // [rsp+0h] [rbp-C0h]
  unsigned __int64 v45; // [rsp+8h] [rbp-B8h]
  __int64 v46; // [rsp+10h] [rbp-B0h]
  size_t v47; // [rsp+18h] [rbp-A8h]
  __int64 v48; // [rsp+20h] [rbp-A0h]
  void *v49[2]; // [rsp+28h] [rbp-98h] BYREF
  __int64 v50; // [rsp+38h] [rbp-88h]
  __int64 v51; // [rsp+48h] [rbp-78h] BYREF
  __int128 v52; // [rsp+50h] [rbp-70h]
  void *ptr[2]; // [rsp+60h] [rbp-60h] BYREF
  __int64 v54; // [rsp+70h] [rbp-50h]
  unsigned __int64 v55; // [rsp+80h] [rbp-40h]

  v10 = *(_QWORD *)(a1 + 192);
  v55 = __readfsqword(0x28u);
  v52 = 0;
  v51 = 0;
  v54 = 0;
  *(_OWORD *)ptr = 0;
  if ( v10 )
  {
    v12 = v10 - 1;
    v13 = *(const char **)(a1 + 184);
    v14 = v12 >> 63;
  }
  else
  {
    LOBYTE(v14) = 0;
    v12 = 0;
    v13 = &s1;
  }
  if ( !v13 || (_BYTE)v14 )
  {
    v12 = 0;
    if ( v13 )
      v12 = strlen(v13);
  }
  QT::QString::fromUtf8(v49, v12, v13);
  v15 = (__m128)_mm_loadu_si128((const __m128i *)ptr);
  si128 = (__m128)_mm_load_si128((const __m128i *)v49);
  v17 = v54;
  *(__m128 *)ptr = si128;
  v54 = v50;
  v50 = v17;
  *(__m128 *)v49 = v15;
  if ( v15.m128_u64[0] && !_InterlockedSub((volatile signed __int32 *)v15.m128_u64[0], 1u) )
    free(v49[0]);
  sub_1BA700(&v51, *(const QT::QObject **)(a1 + 264));
  sub_1BA700(&v51, *(const QT::QObject **)(a1 + 272));
  sub_1BA700(&v51, *(const QT::QObject **)(a1 + 280));
  sub_1BA700(&v51, *(const QT::QObject **)(a1 + 288));
  sub_1BA700(&v51, *(const QT::QObject **)(a1 + 296));
  sub_1BA700(&v51, *(const QT::QObject **)(a1 + 320));
  sub_1BA700(&v51, *(const QT::QObject **)(a1 + 304));
  sub_1BA700(&v51, *(const QT::QObject **)(a1 + 312));
  v18 = *(const QT::QObject **)(a1 + 328);
  sub_1BA700(&v51, v18);
  if ( (debug[3] & 1) != 0 )
    sub_16B860(
      (int)"Themes: Computed user overrides:\n",
      (__int64)v18,
      v19,
      v20,
      v21,
      v22,
      v15,
      si128,
      a5,
      a6,
      v23,
      v24,
      a9,
      a10,
      v43);
  v25 = 0;
  if ( (_QWORD)v52 )
  {
    while ( 1 )
    {
      v31 = *(_QWORD *)(a2 + 8);
      if ( v31 > 1 )
      {
        v18 = *(const QT::QObject **)a2;
        v32 = v31 + 1;
        if ( *(_QWORD *)(a2 + 16) < v31 + 1 )
        {
          v40 = qvector_reserve(a2, v18, v32, 1);
          *(_QWORD *)a2 = v40;
          v32 = v31 + 1;
          v18 = (const QT::QObject *)v40;
        }
        *(_QWORD *)(a2 + 8) = v32;
        *((_BYTE *)v18 + v31 - 1) = 10;
        *(_BYTE *)(*(_QWORD *)a2 + v31) = 0;
      }
      v33 = 24 * v25;
      v42 = 24 * v25 + v51;
      v29 = *(_QWORD *)(v42 + 8);
      if ( !v29 )
      {
        if ( (debug[3] & 1) == 0 )
          goto LABEL_21;
LABEL_28:
        v18 = (const QT::QObject *)&s1;
        goto LABEL_20;
      }
      v26 = v29 - 1;
      if ( v29 == 1 )
      {
        if ( (debug[3] & 1) != 0 )
          goto LABEL_19;
        if ( ++v25 >= (unsigned __int64)v52 )
          break;
      }
      else
      {
        v27 = *(_QWORD *)(a2 + 8);
        v28 = v29 - 1;
        if ( v27 )
        {
          --v27;
          v28 = v26 + v27;
          v29 += v27;
        }
        v30 = *(_QWORD *)a2;
        if ( *(_QWORD *)(a2 + 16) < v29 )
        {
          v48 = v27;
          v47 = v26;
          v46 = 24 * v25 + v51;
          v45 = v28;
          v44 = v29;
          v41 = qvector_reserve(a2, v30, v29, 1);
          v27 = v48;
          v26 = v47;
          *(_QWORD *)a2 = v41;
          v30 = v41;
          v42 = v46;
          v28 = v45;
          v29 = v44;
        }
        *(_QWORD *)(a2 + 8) = v29;
        *(_BYTE *)(v30 + v28) = 0;
        v18 = *(const QT::QObject **)v42;
        memcpy((void *)(v27 + *(_QWORD *)a2), *(const void **)v42, v26);
        if ( (debug[3] & 1) == 0 )
          goto LABEL_21;
        v42 = v33 + v51;
        if ( !*(_QWORD *)(v33 + v51 + 8) )
          goto LABEL_28;
LABEL_19:
        v18 = *(const QT::QObject **)v42;
LABEL_20:
        sub_16B860((int)"Themes: \t%s\n", (__int64)v18, v29, v20, v42, v22, v15, si128, a5, a6, v23, v24, a9, a10, v43);
LABEL_21:
        if ( ++v25 >= (unsigned __int64)v52 )
          break;
      }
    }
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v34 = v51;
  if ( v51 )
  {
    v35 = v52;
    if ( (_QWORD)v52 )
    {
      v36 = 0;
      do
      {
        v37 = (__int64 *)(v34 + 24 * v36);
        v38 = *v37;
        if ( *v37 )
        {
          v37[1] = 0;
          qfree(v38, (const char *)v18);
          v34 = v51;
        }
        ++v36;
      }
      while ( v35 != v36 );
    }
    *(_QWORD *)&v52 = 0;
    qfree(v34, (const char *)v18);
  }
  return v55 - __readfsqword(0x28u);
}
