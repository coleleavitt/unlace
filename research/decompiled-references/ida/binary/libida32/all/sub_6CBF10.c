__int64 __fastcall sub_6CBF10(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  double v19; // xmm4_8
  double v20; // xmm5_8
  __int64 v21; // r12
  __int64 v22; // rax
  char *v23; // r8
  char *v24; // rcx
  char *v25; // rdx
  char *v26; // rsi
  char *v27; // rdi
  int v28; // eax
  bool v29; // zf
  int v30; // eax
  __m128 v31; // xmm0
  char *v32; // r8
  char *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r14
  __int64 v36; // r12
  const char *v37; // rdi
  const char *v38; // rdi
  size_t na; // [rsp+0h] [rbp-D8h]
  char *n; // [rsp+0h] [rbp-D8h]
  char *v41; // [rsp+8h] [rbp-D0h]
  __int64 v42; // [rsp+8h] [rbp-D0h]
  int v43; // [rsp+14h] [rbp-C4h]
  int src; // [rsp+18h] [rbp-C0h]
  char *srca; // [rsp+18h] [rbp-C0h]
  char *srcb; // [rsp+18h] [rbp-C0h]
  __int64 v47; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v48[8]; // [rsp+28h] [rbp-B0h] BYREF
  char *s1; // [rsp+30h] [rbp-A8h] BYREF
  __m128 v50; // [rsp+38h] [rbp-A0h]
  char *s2; // [rsp+50h] [rbp-88h] BYREF
  __int128 v52; // [rsp+58h] [rbp-80h] BYREF
  char *s; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v54[11]; // [rsp+80h] [rbp-58h] BYREF

  v54[3] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a3 + 28) & 0x7F) != 0x28 )
    return 1;
  v15 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a3 + 16) & 4) == 0 )
  {
    if ( v15 )
      goto LABEL_5;
LABEL_8:
    if ( (*(_BYTE *)(a3 + 98) & 1) != 0 )
      return 1;
    goto LABEL_9;
  }
  if ( !*(_QWORD *)(v15 + 8) )
    goto LABEL_8;
LABEL_5:
  v16 = *(_BYTE *)(sub_B6AD60() + 8) & 0x7F;
  if ( (unsigned __int8)v16 > 0x12u )
  {
    if ( (((_BYTE)v16 + 94) & 0x7Fu) <= 5 )
      return 1;
  }
  else
  {
    v17 = 262530;
    if ( _bittest64(&v17, v16) )
      return 1;
  }
  if ( (*(_BYTE *)(a3 + 28) & 0x7F) != 0x2B )
    goto LABEL_8;
LABEL_9:
  if ( (unsigned __int8)sub_6BA590(a1, a3) )
    return 1;
  sub_6B7B10((__int64)&s1, a1, a3, 1);
  v21 = *(_QWORD *)(a3 + 48);
  if ( (v21 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF || (*(_BYTE *)(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    goto LABEL_12;
  sub_6C3AF0(&v47, a1, *(_QWORD *)(a3 + 48), v18, a4, a5, a6, a7, v19, v20, a10, a11);
  if ( (_BYTE)v47 )
  {
    sub_6B96E0(a1, &v47, a3);
    v22 = **(_QWORD **)(a1 + 8);
    if ( (v22 & 0x100) == 0 || (v22 & 0x200) != 0 )
    {
      src = *(_DWORD *)(a1 + 120) & 0x1000000;
      v43 = ((**(_QWORD **)(a1 + 8) & 0xFLL) != 2) << 11;
      if ( (v22 & 0x1000) == 0 )
      {
        if ( (*(_DWORD *)(a1 + 120) & 0x1000000) == 0 )
        {
LABEL_21:
          sub_E4C640(v48, *(_QWORD *)(a1 + 48));
          sub_E4C6F0(&s, v48, a3);
          v23 = s;
          s2 = nullptr;
          v52 = 0;
          if ( !s
            || (srca = s,
                na = strlen(s),
                s2 = (char *)qvector_reserve(&s2, 0, na + 1, 1),
                *(_QWORD *)&v52 = na + 1,
                memmove(s2, srca, na),
                s2[na] = 0,
                v23 = s,
                s != (char *)v54) )
          {
            operator delete(v23, v54[0] + 1LL);
          }
          v24 = s2;
          v25 = s1;
          if ( (_QWORD)v52 )
          {
            v26 = s2;
            v27 = (char *)haystack;
            if ( !v50.m128_u64[0] )
            {
LABEL_27:
              srcb = s1;
              v41 = s2;
              v28 = strcmp(v27, v26);
              v25 = srcb;
              v24 = v41;
              v29 = v28 == 0;
              v30 = 2048;
              if ( v29 )
                v30 = v43;
              v43 = v30;
              goto LABEL_30;
            }
          }
          else
          {
            v26 = (char *)haystack;
            if ( !v50.m128_u64[0] )
            {
LABEL_30:
              s1 = v24;
              v31 = _mm_loadh_ps((const double *)&v52 + 1);
              s2 = v25;
              *((_QWORD *)&v52 + 1) = v50.m128_u64[1];
              v50 = v31;
              if ( v25 )
              {
                *(_QWORD *)&v52 = 0;
                qfree(v25);
              }
              sub_E4C6B0(v48, v26, v25);
              goto LABEL_33;
            }
          }
          v27 = s1;
          goto LABEL_27;
        }
LABEL_33:
        if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
          sub_6B3FA0((__int64)&v47, a3);
        sub_6B7070((__int64)&s2, a1, a3);
        v32 = (char *)haystack;
        if ( (_QWORD)v52 )
          v32 = s2;
        v33 = (char *)haystack;
        if ( v50.m128_u64[0] )
          v33 = s1;
        sub_6BED00(a1, &v47, 0, v33, v32, a3, v43);
        if ( a2 )
        {
          v34 = v47;
          v47 = *a2;
          *a2 = v34;
        }
        if ( s2 )
        {
          *(_QWORD *)&v52 = 0;
          qfree(s2);
        }
        goto LABEL_43;
      }
      if ( v50.m128_u64[0] )
      {
        n = s1;
        if ( s1 )
          goto LABEL_49;
      }
      else
      {
        if ( haystack )
        {
          n = (char *)haystack;
LABEL_49:
          v42 = *(_QWORD *)(a1 + 568);
          if ( v42 )
          {
            v35 = *(_QWORD *)(a1 + 560);
            v36 = 0;
            while ( 1 )
            {
              v37 = haystack;
              if ( *(_QWORD *)(v35 + 32) )
                v37 = *(const char **)(v35 + 24);
              if ( !strcmp(v37, n) )
                break;
              ++v36;
              v35 += 56;
              if ( v42 == v36 )
                goto LABEL_60;
            }
            v38 = *(const char **)v35;
          }
          else
          {
LABEL_60:
            v38 = n;
          }
LABEL_56:
          if ( !(src | strcmp(v38, n)) )
            goto LABEL_21;
          goto LABEL_33;
        }
        n = nullptr;
      }
      v38 = nullptr;
      goto LABEL_56;
    }
  }
  else
  {
    sub_6BAAB0((_QWORD *)a1, (_BYTE *)a3, v21);
  }
LABEL_43:
  clear_tinfo_t(&v47);
LABEL_12:
  if ( s1 )
  {
    v50.m128_u64[0] = 0;
    qfree(s1);
  }
  return 1;
}

