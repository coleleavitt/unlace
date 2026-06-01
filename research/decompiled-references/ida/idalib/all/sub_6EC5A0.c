__int64 __fastcall sub_6EC5A0(
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
  __int64 v21; // rbp
  __int64 v22; // rax
  char *v23; // rdx
  char *v24; // r8
  char *v25; // rsi
  char *v26; // rdi
  int v27; // eax
  bool v28; // zf
  int v29; // eax
  __m128 v30; // xmm0
  char *v31; // r8
  char *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r12
  __int64 v35; // rbp
  const char *v36; // rdi
  const char *v37; // rdi
  char *v38; // [rsp+0h] [rbp-D8h]
  const char *v39; // [rsp+0h] [rbp-D8h]
  __int64 v40; // [rsp+8h] [rbp-D0h]
  int v41; // [rsp+14h] [rbp-C4h]
  int ptr; // [rsp+18h] [rbp-C0h]
  char *ptra; // [rsp+18h] [rbp-C0h]
  __int64 v44; // [rsp+20h] [rbp-B8h] BYREF
  char v45[8]; // [rsp+28h] [rbp-B0h] BYREF
  char *s1; // [rsp+30h] [rbp-A8h] BYREF
  __m128 v47; // [rsp+38h] [rbp-A0h]
  char *s2; // [rsp+50h] [rbp-88h] BYREF
  __int64 v49; // [rsp+58h] [rbp-80h]
  unsigned __int64 v50; // [rsp+60h] [rbp-78h] BYREF
  void *v51; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v52[11]; // [rsp+80h] [rbp-58h] BYREF

  v52[3] = __readfsqword(0x28u);
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
  v16 = *(_BYTE *)(sub_B8EAA0() + 8) & 0x7F;
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
  if ( (unsigned __int8)sub_6DAB70(a1, a3) )
    return 1;
  sub_6D80F0((__int64)&s1, a1, a3, 1);
  v21 = *(_QWORD *)(a3 + 48);
  if ( (v21 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF || (*(_BYTE *)(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    goto LABEL_12;
  sub_6E4130(&v44, a1, *(_QWORD *)(a3 + 48), v18, a4, a5, a6, a7, v19, v20, a10, a11);
  if ( (_BYTE)v44 )
  {
    sub_6D9CC0(a1, (unsigned __int64 *)&v44, a3);
    v22 = **(_QWORD **)(a1 + 8);
    if ( (v22 & 0x100) == 0 || (v22 & 0x200) != 0 )
    {
      ptr = *(_DWORD *)(a1 + 120) & 0x1000000;
      v41 = ((**(_QWORD **)(a1 + 8) & 0xFLL) != 2) << 11;
      if ( (v22 & 0x1000) == 0 )
      {
        if ( (*(_DWORD *)(a1 + 120) & 0x1000000) == 0 )
          goto LABEL_21;
        goto LABEL_32;
      }
      if ( v47.m128_u64[0] )
      {
        v39 = s1;
        if ( s1 )
          goto LABEL_48;
      }
      else
      {
        if ( haystack )
        {
          v39 = haystack;
LABEL_48:
          v40 = *(_QWORD *)(a1 + 568);
          if ( v40 )
          {
            v34 = *(_QWORD *)(a1 + 560);
            v35 = 0;
            while ( 1 )
            {
              v36 = haystack;
              if ( *(_QWORD *)(v34 + 32) )
                v36 = *(const char **)(v34 + 24);
              if ( !strcmp(v36, v39) )
                break;
              ++v35;
              v34 += 56;
              if ( v40 == v35 )
                goto LABEL_59;
            }
            v37 = *(const char **)v34;
          }
          else
          {
LABEL_59:
            v37 = v39;
          }
LABEL_55:
          if ( !(ptr | strcmp(v37, v39)) )
          {
LABEL_21:
            sub_E70380(v45, *(_QWORD *)(a1 + 48));
            sub_E70430(&v51, v45, a3);
            sub_472300((__int64)&s2, (const char *)v51);
            if ( v51 != v52 )
              operator delete(v51, v52[0] + 1LL);
            v23 = s2;
            v24 = s1;
            if ( v49 )
            {
              v25 = s2;
              v26 = (char *)haystack;
              if ( !v47.m128_u64[0] )
              {
LABEL_26:
                ptra = s1;
                v38 = s2;
                v27 = strcmp(v26, v25);
                v24 = ptra;
                v28 = v27 == 0;
                v29 = 2048;
                if ( v28 )
                  v29 = v41;
                v23 = v38;
                v41 = v29;
                goto LABEL_29;
              }
            }
            else
            {
              v25 = (char *)haystack;
              if ( !v47.m128_u64[0] )
              {
LABEL_29:
                s1 = v23;
                v30 = _mm_loadh_ps((const double *)&v50);
                s2 = v24;
                v50 = v47.m128_u64[1];
                v47 = v30;
                if ( v24 )
                {
                  v49 = 0;
                  qfree(v24);
                }
                sub_E703F0(v45, v25, v23);
                goto LABEL_32;
              }
            }
            v26 = s1;
            goto LABEL_26;
          }
LABEL_32:
          if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
            sub_6D4540((__int64)&v44, a3);
          sub_6D7650((__int64)&s2, a1, a3);
          v31 = (char *)haystack;
          if ( v49 )
            v31 = s2;
          v32 = (char *)haystack;
          if ( v47.m128_u64[0] )
            v32 = s1;
          sub_6DF2F0(a1, &v44, 0, v32, v31, a3, v41);
          if ( a2 )
          {
            v33 = v44;
            v44 = *a2;
            *a2 = v33;
          }
          if ( s2 )
          {
            v49 = 0;
            qfree(s2);
          }
          goto LABEL_42;
        }
        v39 = nullptr;
      }
      v37 = nullptr;
      goto LABEL_55;
    }
  }
  else
  {
    sub_6DB090((_QWORD *)a1, (_BYTE *)a3, v21);
  }
LABEL_42:
  clear_tinfo_t(&v44);
LABEL_12:
  if ( s1 )
  {
    v47.m128_u64[0] = 0;
    qfree(s1);
  }
  return 1;
}
