__int64 __fastcall sub_42DB50(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11)
{
  __m128 v11; // xmm0
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  const char *v15; // rsi
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // r14
  __int64 *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // r15
  __int64 *v25; // rax
  __int64 v26; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __m128 v32; // xmm4
  __m128 v33; // xmm5
  __int64 v34; // r12
  __int64 v35; // r14
  int v36; // eax
  char v37; // al
  const char *v38; // rdi
  __int64 v39; // rax
  int v40; // r11d
  __m128i v41; // xmm1
  char v42; // r10
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // [rsp-8h] [rbp-B8h]
  char v46; // [rsp+0h] [rbp-B0h]
  __int64 v47; // [rsp+8h] [rbp-A8h]
  char v48; // [rsp+13h] [rbp-9Dh]
  unsigned int v49; // [rsp+14h] [rbp-9Ch]
  int na; // [rsp+20h] [rbp-90h]
  size_t n; // [rsp+20h] [rbp-90h]
  void *v52; // [rsp+28h] [rbp-88h]
  _QWORD *v53; // [rsp+30h] [rbp-80h]
  __int64 v54; // [rsp+40h] [rbp-70h] BYREF
  __int128 v55; // [rsp+48h] [rbp-68h]
  __int64 v56; // [rsp+60h] [rbp-50h] BYREF
  __int128 v57; // [rsp+68h] [rbp-48h]
  unsigned __int64 v58; // [rsp+78h] [rbp-38h]

  v11 = 0;
  v58 = __readfsqword(0x28u);
  v13 = *(_QWORD *)(a11 + 8);
  v54 = 0;
  v56 = 0;
  v55 = 0;
  v57 = 0;
  if ( !v13 )
    return 1;
  v54 = qvector_reserve(&v54, 0, v13, 48);
  v14 = *(_QWORD *)(a11 + 8);
  if ( *((_QWORD *)&v57 + 1) < v14 )
    v56 = qvector_reserve(&v56, v56, v14, 48);
  v15 = (const char *)&v54;
  v16 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)a1 + 1192LL))(a1, &v54, a11, 139);
  if ( !(_BYTE)v16 )
    goto LABEL_5;
  v53 = sub_426230(a1, (const char *)&v54);
  v34 = v54 + 48 * v55;
  if ( v34 == v54 )
  {
    if ( (_QWORD)v57 )
    {
LABEL_26:
      sub_4355B0(&v56, v15, v28);
LABEL_5:
      v17 = v56;
      if ( !v56 )
        goto LABEL_12;
      if ( (_QWORD)v57 )
      {
        v18 = 0;
        v19 = v57;
        do
        {
          v20 = (__int64 *)(v17 + 48 * v18);
          v21 = *v20;
          if ( *v20 )
          {
            v20[1] = 0;
            qfree(v21, v15);
            v17 = v56;
          }
          ++v18;
        }
        while ( v19 != v18 );
      }
      goto LABEL_11;
    }
  }
  else
  {
    v35 = v54;
    v28 = 0;
    do
    {
      v36 = *(_DWORD *)(v35 + 24);
      if ( (v36 & 0x20) == 0 )
      {
        if ( (v36 & 2) != 0 && (v36 & 8) == 0 )
        {
          if ( (_QWORD)v57 )
            goto LABEL_26;
          sub_169630(
            (int)"No openable files have been found",
            (__int64)v15,
            v28,
            v29,
            v30,
            v31,
            v11,
            a3,
            a4,
            a5,
            v32,
            v33,
            a8,
            a9,
            v46);
          goto LABEL_5;
        }
        v15 = nullptr;
        v37 = sub_417670((__int64)v53, 0, 0, v35, 0, nullptr, 0, 1);
        v29 = v45;
        if ( v37 )
        {
          v52 = nullptr;
          v30 = *(_QWORD *)(v35 + 8);
          if ( v30 )
          {
            n = *(_QWORD *)(v35 + 8);
            v52 = (void *)qalloc_or_throw(n);
            memcpy(v52, *(const void **)v35, n);
            v30 = n;
          }
          v39 = v57;
          v40 = *(_DWORD *)(v35 + 24);
          v41 = _mm_cvtsi32_si128(*(_DWORD *)(v35 + 28));
          a4 = (__m128)_mm_cvtsi32_si128(*(_DWORD *)(v35 + 32));
          v31 = *(unsigned int *)(v35 + 36);
          v42 = *(_BYTE *)(v35 + 40);
          v43 = v56;
          if ( *((_QWORD *)&v57 + 1) < (unsigned __int64)(v57 + 1) )
          {
            v47 = v30;
            v48 = *(_BYTE *)(v35 + 40);
            v49 = *(_DWORD *)(v35 + 36);
            na = *(_DWORD *)(v35 + 24);
            v56 = qvector_reserve(&v56, v56, v57 + 1, 48);
            v43 = v56;
            v30 = v47;
            v39 = v57;
            v42 = v48;
            v31 = v49;
            a4 = (__m128)_mm_cvtsi32_si128(_mm_cvtsi128_si32((__m128i)a4));
            v41 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v41));
            v40 = na;
          }
          a3 = (__m128)_mm_unpacklo_epi32(v41, (__m128i)a4);
          v28 = v16;
          v11 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)(unsigned __int64)v30);
          v44 = v43 + 48 * v39;
          v15 = (const char *)v52;
          *(__m128 *)(v44 + 8) = v11;
          *(_QWORD *)v44 = v52;
          *(_DWORD *)(v44 + 24) = v40;
          *(_QWORD *)&v57 = v57 + 1;
          *(_DWORD *)(v44 + 36) = v31;
          *(_BYTE *)(v44 + 40) = v42;
          *(_QWORD *)(v44 + 28) = a3.m128_u64[0];
        }
        else
        {
          v28 = v16;
        }
      }
      v35 += 48;
    }
    while ( v34 != v35 );
    if ( (_QWORD)v57 )
      goto LABEL_26;
    if ( (_BYTE)v28 )
    {
      v38 = &s1;
      if ( *(_QWORD *)(v54 + 8) )
        v38 = *(const char **)v54;
      sub_44F870(v38);
      goto LABEL_5;
    }
  }
  v17 = v56;
  if ( v56 )
  {
LABEL_11:
    *(_QWORD *)&v57 = 0;
    qfree(v17, v15);
  }
LABEL_12:
  v22 = v54;
  if ( v54 )
  {
    if ( (_QWORD)v55 )
    {
      v23 = 0;
      v24 = v55;
      do
      {
        v25 = (__int64 *)(v22 + 48 * v23);
        v26 = *v25;
        if ( *v25 )
        {
          v25[1] = 0;
          qfree(v26, v15);
          v22 = v54;
        }
        ++v23;
      }
      while ( v24 != v23 );
    }
    *(_QWORD *)&v55 = 0;
    qfree(v22, v15);
  }
  return 1;
}
