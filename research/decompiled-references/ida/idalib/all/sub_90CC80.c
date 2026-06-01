__int64 __fastcall sub_90CC80(__int64 a1, const __m128i *a2, unsigned __int64 a3, unsigned __int64 a4, int a5, int a6)
{
  __int64 v9; // r8
  bool v10; // zf
  int v11; // ecx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbp
  __int64 v14; // r12
  int v15; // r15d
  unsigned __int64 v16; // rax
  size_t v17; // rdx
  __int64 v18; // r8
  void *v19; // rsi
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  bool v22; // cc
  __m128i v23; // xmm6
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  unsigned int v27; // eax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned int v31; // esi
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rbx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  void (__fastcall *v43)(__int64); // rax
  __int64 v44; // rdi
  __int64 (__fastcall *v45)(__int64, size_t); // rax
  char *v46; // rax
  unsigned __int64 v47; // rdx
  char *v48; // rcx
  char *v49; // rsi
  char *v50; // rax
  unsigned __int64 v51; // rsi
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rdx
  __int64 v54; // rax
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rdx
  size_t v60; // rdx
  unsigned int v61; // ecx
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rdi
  unsigned __int64 v64; // rsi
  unsigned __int64 v65; // rcx
  void *v66; // rdi
  unsigned int v67; // eax
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rsi
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rdx
  unsigned __int64 v74; // rdx
  size_t v75; // rdx
  void *v76; // rdi
  unsigned __int64 v77; // rcx
  __int64 v78; // [rsp+8h] [rbp-60h]
  int v79; // [rsp+10h] [rbp-58h]
  unsigned __int64 v81; // [rsp+18h] [rbp-50h]
  __int64 v82; // [rsp+20h] [rbp-48h]
  unsigned __int64 v83; // [rsp+20h] [rbp-48h]
  size_t v84; // [rsp+28h] [rbp-40h]
  size_t v85; // [rsp+28h] [rbp-40h]
  __int64 v86; // [rsp+28h] [rbp-40h]

  *(_DWORD *)(a1 + 944) = 1;
  v9 = a1 + 232;
  *(__m128i *)(a1 + 232) = _mm_loadu_si128(a2);
  v79 = a6;
  *(__m128i *)(a1 + 248) = _mm_loadu_si128(a2 + 1);
  *(__m128i *)(a1 + 264) = _mm_loadu_si128(a2 + 2);
  *(__m128i *)(a1 + 280) = _mm_loadu_si128(a2 + 3);
  *(__m128i *)(a1 + 296) = _mm_loadu_si128(a2 + 4);
  *(__m128i *)(a1 + 312) = _mm_loadu_si128(a2 + 5);
  *(__m128i *)(a1 + 328) = _mm_loadu_si128(a2 + 6);
  *(__m128i *)(a1 + 344) = _mm_loadu_si128(a2 + 7);
  *(__m128i *)(a1 + 360) = _mm_loadu_si128(a2 + 8);
  *(__m128i *)(a1 + 376) = _mm_loadu_si128(a2 + 9);
  *(__m128i *)(a1 + 392) = _mm_loadu_si128(a2 + 10);
  v10 = *(_DWORD *)(a1 + 328) == 1;
  *(__m128i *)(a1 + 408) = _mm_loadu_si128(a2 + 11);
  *(__m128i *)(a1 + 424) = _mm_loadu_si128(a2 + 12);
  *(_QWORD *)(a1 + 440) = a2[13].m128i_i64[0];
  if ( v10 )
  {
    LODWORD(a2) = a1 + 236;
    sub_958420(a1 + 328, a1 + 236);
    v9 = a1 + 232;
  }
  v11 = *(_DWORD *)(a1 + 236);
  v12 = 1LL << v11;
  if ( 1LL << v11 > a3 )
    v12 = a3;
  if ( !v12 )
    v12 = 1;
  v13 = v12;
  if ( *(_QWORD *)(a1 + 432) <= v12 )
    v13 = *(_QWORD *)(a1 + 432);
  if ( *(_QWORD *)(a1 + 424) || *(_DWORD *)(a1 + 252) == 3 )
    v81 = 3;
  else
    v81 = 4;
  v78 = 0;
  v14 = 0;
  if ( v79 == 1 )
  {
    a6 = *(_DWORD *)(a1 + 360);
    if ( !a6 )
    {
      v86 = v9;
      v83 = v12;
      v54 = sub_90B620(v13);
      v12 = v83;
      v9 = v86;
      v78 = v54 + 1;
    }
    v14 = v12 + v13;
    if ( *(_DWORD *)(a1 + 356) )
      v14 = 0;
  }
  v82 = sub_9584C0(v13, (_DWORD)a2, v12, v11, v9, a6, *(_QWORD *)(v9 + 96), *(_QWORD *)(v9 + 104));
  v15 = *(_QWORD *)(a1 + 3216) - *(_QWORD *)(a1 + 3224) > 0xDF000000 || a4 > 0x1FFFFFFF || *(_DWORD *)(a1 + 948) == 0;
  v16 = sub_90CB00(
          (unsigned int *)(a1 + 236),
          (const __m128i *)(a1 + 328),
          *(_QWORD *)(a1 + 904) != 0,
          *(_DWORD *)(a1 + 376),
          v14,
          v78,
          a3,
          *(_QWORD *)(a1 + 424) != 0,
          *(Elf64_Rela **)(a1 + 432));
  v17 = v16;
  if ( v16 > 0xFFFFFFFFFFFFFF88LL )
    return v17;
  v18 = *(_QWORD *)(a1 + 904);
  if ( !v18 )
    ++*(_DWORD *)(a1 + 740);
  v19 = *(void **)(a1 + 680);
  if ( 3 * v16 <= *(_QWORD *)(a1 + 720) - *(_QWORD *)(a1 + 704) && *(int *)(a1 + 740) > 128
    || v16 > *(_QWORD *)(a1 + 688) - (_QWORD)v19 )
  {
    if ( !v18 )
    {
      v43 = *(void (__fastcall **)(__int64))(a1 + 880);
      v44 = *(_QWORD *)(a1 + 888);
      *(_OWORD *)(a1 + 680) = 0;
      *(_OWORD *)(a1 + 696) = 0;
      *(_OWORD *)(a1 + 712) = 0;
      *(_OWORD *)(a1 + 728) = 0;
      *(_QWORD *)(a1 + 744) = 0;
      if ( v19 )
      {
        v84 = v17;
        if ( v43 )
          v43(v44);
        else
          free(v19);
        v44 = *(_QWORD *)(a1 + 888);
        v17 = v84;
      }
      v45 = *(__int64 (__fastcall **)(__int64, size_t))(a1 + 872);
      v85 = v17;
      v46 = v45 ? (char *)v45(v44, v17) : (char *)malloc(v17);
      if ( v46 )
      {
        v47 = (unsigned __int64)&v46[v85];
        *(_QWORD *)(a1 + 680) = v46;
        *(_QWORD *)(a1 + 688) = &v46[v85];
        *(_QWORD *)(a1 + 696) = v46;
        *(_QWORD *)(a1 + 728) = (unsigned __int64)&v46[v85] & 0xFFFFFFFFFFFFFFC0LL;
        *(_QWORD *)(a1 + 720) = (unsigned __int64)&v46[v85] & 0xFFFFFFFFFFFFFFC0LL;
        v48 = v46 + 5632;
        *(_QWORD *)(a1 + 712) = v46;
        *(_QWORD *)(a1 + 704) = v46;
        *(_BYTE *)(a1 + 736) = 0;
        *(_DWORD *)(a1 + 740) = 0;
        *(_QWORD *)(a1 + 744) = 0;
        if ( v46 + 5632 > &v46[v85] )
        {
          *(_BYTE *)(a1 + 736) = 1;
          v17 = -64;
          *(_QWORD *)(a1 + 3200) = 0;
          return v17;
        }
        v49 = v46 + 11264;
        *(_QWORD *)(a1 + 696) = v48;
        *(_QWORD *)(a1 + 704) = v48;
        *(_QWORD *)(a1 + 712) = v48;
        *(_QWORD *)(a1 + 3200) = v46;
        if ( (unsigned __int64)(v46 + 11264) > v47 )
        {
          *(_BYTE *)(a1 + 736) = 1;
          v17 = -64;
          *(_QWORD *)(a1 + 3208) = 0;
          return v17;
        }
        *(_QWORD *)(a1 + 696) = v49;
        *(_QWORD *)(a1 + 704) = v49;
        *(_QWORD *)(a1 + 712) = v49;
        *(_QWORD *)(a1 + 3208) = v48;
        if ( v46 != (char *)-5632LL )
        {
          v50 = v46 + 20184;
          if ( (unsigned __int64)v50 <= v47 )
          {
            *(_QWORD *)(a1 + 696) = v50;
            v15 = 1;
            *(_QWORD *)(a1 + 704) = v50;
            *(_QWORD *)(a1 + 712) = v50;
            *(_QWORD *)(a1 + 3520) = v49;
            goto LABEL_24;
          }
          *(_BYTE *)(a1 + 736) = 1;
          *(_QWORD *)(a1 + 3520) = 0;
        }
      }
    }
    return -64;
  }
  v20 = *(_QWORD *)(a1 + 696);
  v21 = *(_QWORD *)(a1 + 688) & 0xFFFFFFFFFFFFFFC0LL;
  v22 = *(_DWORD *)(a1 + 744) <= 1u;
  *(_BYTE *)(a1 + 736) = 0;
  *(_QWORD *)(a1 + 720) = v21;
  *(_QWORD *)(a1 + 704) = v20;
  if ( !v22 )
    *(_DWORD *)(a1 + 744) = 1;
LABEL_24:
  v23 = _mm_loadu_si128((const __m128i *)(a1 + 236));
  v24 = *(_QWORD *)(a1 + 252);
  *(_QWORD *)(a1 + 768) = 0;
  *(_QWORD *)(a1 + 776) = 0;
  *(_QWORD *)(a1 + 3488) = v24;
  LODWORD(v24) = *(_DWORD *)(a1 + 260);
  *(__m128i *)(a1 + 3472) = v23;
  *(_DWORD *)(a1 + 3496) = v24;
  *(_DWORD *)(a1 + 3512) = *(_DWORD *)(a1 + 408) == 1;
  *(_QWORD *)(a1 + 760) = a3 + 1;
  if ( a3 == -1 )
    *(_DWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 752) = v13;
  sub_903680((_QWORD *)(a1 + 784), 0);
  v25 = *(_QWORD *)(a1 + 3200);
  *(_DWORD *)a1 = 1;
  *(_DWORD *)(a1 + 664) = 0;
  *(_QWORD *)(a1 + 672) = 0;
  *(_QWORD *)(v25 + 5612) = 0x100000000LL;
  *(_DWORD *)(v25 + 2056) = 0;
  *(_QWORD *)(v25 + 5604) = 0;
  *(_QWORD *)(v25 + 5620) = 0x800000004LL;
  v17 = sub_90ABE0((__m128i *)(a1 + 3216), a1 + 680, (const __m128i *)(a1 + 236), *(_DWORD *)(a1 + 376), a5, v15, 1);
  if ( v17 <= 0xFFFFFFFFFFFFFF88LL )
  {
    v26 = v13 / v81;
    v27 = *(_DWORD *)(a1 + 744);
    v28 = (8 * (v13 / v81) + 63) & 0xFFFFFFFFFFFFFFC0LL;
    if ( v27 <= 1 )
    {
      if ( !v27 )
      {
        v51 = *(_QWORD *)(a1 + 688);
        v52 = *(_QWORD *)(a1 + 696);
        *(_QWORD *)(a1 + 712) = v52;
        *(_QWORD *)(a1 + 728) = v51 & 0xFFFFFFFFFFFFFFC0LL;
        v53 = v52 + (-(int)v52 & 0x3F);
        if ( v51 < v53 )
          goto LABEL_108;
        *(_QWORD *)(a1 + 696) = v53;
        *(_QWORD *)(a1 + 704) = v53;
        if ( v52 < v53 )
          *(_QWORD *)(a1 + 712) = v53;
      }
      *(_DWORD *)(a1 + 744) = 2;
    }
    if ( v28 )
    {
      v29 = *(_QWORD *)(a1 + 720) - v28;
      if ( v29 >= *(_QWORD *)(a1 + 704) )
      {
        if ( v29 < *(_QWORD *)(a1 + 712) )
          *(_QWORD *)(a1 + 712) = v29;
        *(_QWORD *)(a1 + 720) = v29;
LABEL_33:
        v10 = *(_DWORD *)(a1 + 328) == 1;
        *(_QWORD *)(a1 + 952) = v29;
        if ( !v10 )
          goto LABEL_34;
        v60 = 8LL << *(_DWORD *)(a1 + 332);
        v61 = *(_DWORD *)(a1 + 744);
        v62 = (v60 + 63) & 0xFFFFFFFFFFFFFFC0LL;
        if ( v61 <= 1 )
        {
          if ( !v61 )
          {
            v63 = *(_QWORD *)(a1 + 688);
            v64 = *(_QWORD *)(a1 + 696);
            *(_QWORD *)(a1 + 712) = v64;
            *(_QWORD *)(a1 + 728) = v63 & 0xFFFFFFFFFFFFFFC0LL;
            v65 = v64 + (-(int)v64 & 0x3F);
            if ( v63 < v65 )
              goto LABEL_182;
            *(_QWORD *)(a1 + 696) = v65;
            *(_QWORD *)(a1 + 704) = v65;
            if ( v64 < v65 )
              *(_QWORD *)(a1 + 712) = v65;
          }
          *(_DWORD *)(a1 + 744) = 2;
        }
        if ( v62 )
        {
          v66 = (void *)(*(_QWORD *)(a1 + 720) - v62);
          if ( (unsigned __int64)v66 >= *(_QWORD *)(a1 + 704) )
          {
            if ( (unsigned __int64)v66 < *(_QWORD *)(a1 + 712) )
              *(_QWORD *)(a1 + 712) = v66;
            *(_QWORD *)(a1 + 720) = v66;
LABEL_146:
            *(_QWORD *)(a1 + 1072) = v66;
            memset(v66, 0, v60);
            v67 = *(_DWORD *)(a1 + 744);
            v68 = (12 * v82 + 63) & 0xFFFFFFFFFFFFFFC0LL;
            if ( v67 <= 1 )
            {
              if ( !v67 )
              {
                v69 = *(_QWORD *)(a1 + 688);
                v70 = *(_QWORD *)(a1 + 696);
                *(_QWORD *)(a1 + 712) = v70;
                *(_QWORD *)(a1 + 728) = v69 & 0xFFFFFFFFFFFFFFC0LL;
                v71 = v70 + (-(int)v70 & 0x3F);
                if ( v69 < v71 )
                  goto LABEL_184;
                *(_QWORD *)(a1 + 696) = v71;
                *(_QWORD *)(a1 + 704) = v71;
                if ( v70 < v71 )
                  *(_QWORD *)(a1 + 712) = v71;
              }
              *(_DWORD *)(a1 + 744) = 2;
            }
            if ( v68 )
            {
              v72 = *(_QWORD *)(a1 + 720) - v68;
              if ( v72 >= *(_QWORD *)(a1 + 704) )
              {
                if ( v72 < *(_QWORD *)(a1 + 712) )
                  *(_QWORD *)(a1 + 712) = v72;
                *(_QWORD *)(a1 + 720) = v72;
                goto LABEL_157;
              }
              *(_BYTE *)(a1 + 736) = 1;
            }
LABEL_184:
            v72 = 0;
LABEL_157:
            *(_QWORD *)(a1 + 3144) = v72;
            *(_DWORD *)(a1 + 1068) = 0;
            *(_QWORD *)(a1 + 3152) = v82;
            *(_QWORD *)(a1 + 1040) = " ";
            *(_QWORD *)(a1 + 1048) = " ";
            *(_QWORD *)(a1 + 1032) = &unk_22D9D5B;
            *(_QWORD *)(a1 + 1056) = 0x200000002LL;
            *(_DWORD *)(a1 + 1064) = 0;
            *(_DWORD *)(a1 + 1080) = 0;
LABEL_34:
            if ( !*(_QWORD *)(a1 + 424) )
            {
              v31 = *(_DWORD *)(a1 + 744);
              goto LABEL_44;
            }
            v30 = sub_90CAE0(v13);
            v31 = *(_DWORD *)(a1 + 744);
            *(_QWORD *)(a1 + 5248) = v30;
            v32 = (16 * v30 + 63) & 0xFFFFFFFFFFFFFFC0LL;
            if ( v31 <= 1 )
            {
              if ( !v31 )
              {
                v55 = *(_QWORD *)(a1 + 688);
                v56 = *(_QWORD *)(a1 + 696);
                *(_QWORD *)(a1 + 712) = v56;
                *(_QWORD *)(a1 + 728) = v55 & 0xFFFFFFFFFFFFFFC0LL;
                v57 = v56 + (-(int)v56 & 0x3F);
                if ( v55 < v57 )
                {
                  *(_QWORD *)(a1 + 5240) = 0;
                  goto LABEL_127;
                }
                *(_QWORD *)(a1 + 696) = v57;
                *(_QWORD *)(a1 + 704) = v57;
                if ( v56 < v57 )
                  *(_QWORD *)(a1 + 712) = v57;
              }
              *(_DWORD *)(a1 + 744) = 2;
              v31 = 2;
            }
            if ( v32 )
            {
              v33 = *(_QWORD *)(a1 + 720) - v32;
              if ( v33 >= *(_QWORD *)(a1 + 704) )
              {
                if ( v33 < *(_QWORD *)(a1 + 712) )
                  *(_QWORD *)(a1 + 712) = v33;
                *(_QWORD *)(a1 + 720) = v33;
                goto LABEL_43;
              }
              *(_BYTE *)(a1 + 736) = 1;
            }
            v33 = 0;
LABEL_43:
            *(_QWORD *)(a1 + 5240) = v33;
LABEL_44:
            if ( v31 > 2 )
              goto LABEL_47;
            if ( v31 )
            {
LABEL_46:
              *(_DWORD *)(a1 + 744) = 3;
              v31 = 3;
LABEL_47:
              if ( v13 != -32 )
              {
                v34 = *(_QWORD *)(a1 + 720) + -32LL - v13;
                if ( v34 >= *(_QWORD *)(a1 + 704) )
                {
                  if ( v34 < *(_QWORD *)(a1 + 712) )
                    *(_QWORD *)(a1 + 712) = v34;
                  *(_QWORD *)(a1 + 720) = v34;
                  goto LABEL_52;
                }
                *(_BYTE *)(a1 + 736) = 1;
              }
              v34 = 0;
LABEL_52:
              *(_QWORD *)(a1 + 968) = v34;
              *(_QWORD *)(a1 + 1016) = v13;
              *(_DWORD *)(a1 + 3528) = v79;
              *(_QWORD *)(a1 + 3544) = v14;
              goto LABEL_53;
            }
            v55 = *(_QWORD *)(a1 + 688);
            v56 = *(_QWORD *)(a1 + 696);
LABEL_127:
            *(_QWORD *)(a1 + 712) = v56;
            *(_QWORD *)(a1 + 728) = v55 & 0xFFFFFFFFFFFFFFC0LL;
            v58 = v56 + (-(int)v56 & 0x3F);
            if ( v55 < v58 )
            {
              *(_QWORD *)(a1 + 1016) = v13;
              *(_QWORD *)(a1 + 968) = 0;
              *(_DWORD *)(a1 + 3528) = v79;
              *(_QWORD *)(a1 + 3544) = v14;
              *(_QWORD *)(a1 + 712) = v56;
              *(_QWORD *)(a1 + 728) = v55 & 0xFFFFFFFFFFFFFFC0LL;
              v73 = v56 + (-(int)v56 & 0x3F);
              if ( v55 < v73 )
              {
                *(_QWORD *)(a1 + 3536) = 0;
                *(_QWORD *)(a1 + 3584) = v78;
                *(_QWORD *)(a1 + 712) = v56;
                *(_QWORD *)(a1 + 728) = v55 & 0xFFFFFFFFFFFFFFC0LL;
                v74 = v56 + (-(int)v56 & 0x3F);
                if ( v55 < v74 )
                {
                  v10 = *(_DWORD *)(a1 + 328) == 1;
                  *(_QWORD *)(a1 + 3576) = 0;
                  if ( !v10 )
                  {
                    *(_QWORD *)(a1 + 3160) = 0;
                    *(_QWORD *)(a1 + 3184) = 0;
                    *(_QWORD *)(a1 + 3192) = 0;
                    *(_QWORD *)(a1 + 3168) = 0;
                    *(_QWORD *)(a1 + 3176) = 0;
                    *(_QWORD *)(a1 + 1008) = v26;
                    goto LABEL_132;
                  }
                  v75 = 1LL << (*(_BYTE *)(a1 + 332) - *(_BYTE *)(a1 + 336));
                  *(_QWORD *)(a1 + 712) = v56;
                  *(_QWORD *)(a1 + 728) = v55 & 0xFFFFFFFFFFFFFFC0LL;
                  v77 = v56 + (-(int)v56 & 0x3F);
                  if ( v55 < v77 )
                    goto LABEL_180;
                  *(_QWORD *)(a1 + 696) = v77;
                  *(_QWORD *)(a1 + 704) = v77;
                  if ( v56 < v77 )
                    *(_QWORD *)(a1 + 712) = v77;
                  *(_DWORD *)(a1 + 744) = 3;
LABEL_165:
                  if ( v75 )
                  {
                    v76 = (void *)(*(_QWORD *)(a1 + 720) - v75);
                    if ( (unsigned __int64)v76 >= *(_QWORD *)(a1 + 704) )
                    {
                      if ( (unsigned __int64)v76 < *(_QWORD *)(a1 + 712) )
                        *(_QWORD *)(a1 + 712) = v76;
                      *(_QWORD *)(a1 + 720) = v76;
                      goto LABEL_170;
                    }
                    *(_BYTE *)(a1 + 736) = 1;
                  }
LABEL_180:
                  v76 = nullptr;
LABEL_170:
                  *(_QWORD *)(a1 + 1088) = v76;
                  memset(v76, 0, v75);
                  v31 = *(_DWORD *)(a1 + 744);
                  goto LABEL_65;
                }
                *(_QWORD *)(a1 + 696) = v74;
                *(_QWORD *)(a1 + 704) = v74;
                if ( v56 < v74 )
                  *(_QWORD *)(a1 + 712) = v74;
                *(_DWORD *)(a1 + 744) = 3;
                v31 = 3;
LABEL_59:
                if ( v78 )
                {
                  v36 = *(_QWORD *)(a1 + 720) - v78;
                  if ( v36 >= *(_QWORD *)(a1 + 704) )
                  {
                    if ( v36 < *(_QWORD *)(a1 + 712) )
                      *(_QWORD *)(a1 + 712) = v36;
                    *(_QWORD *)(a1 + 720) = v36;
                    goto LABEL_64;
                  }
                  *(_BYTE *)(a1 + 736) = 1;
                }
                v36 = 0;
LABEL_64:
                v10 = *(_DWORD *)(a1 + 328) == 1;
                *(_QWORD *)(a1 + 3576) = v36;
                if ( !v10 )
                {
LABEL_65:
                  *(_QWORD *)(a1 + 3160) = 0;
                  *(_QWORD *)(a1 + 3184) = 0;
                  *(_QWORD *)(a1 + 3192) = 0;
                  *(_QWORD *)(a1 + 3168) = 0;
                  *(_QWORD *)(a1 + 3176) = 0;
                  *(_QWORD *)(a1 + 1008) = v26;
                  if ( v31 > 2 )
                  {
                    if ( v13 >= v81 )
                    {
LABEL_67:
                      v37 = *(_QWORD *)(a1 + 720);
                      v38 = -(__int64)v26;
                      v39 = v37 + v38;
                      if ( (unsigned __int64)(v37 + v38) < *(_QWORD *)(a1 + 704) )
                      {
                        *(_BYTE *)(a1 + 736) = 1;
                        v39 = 0;
                      }
                      else
                      {
                        if ( v39 < *(_QWORD *)(a1 + 712) )
                          *(_QWORD *)(a1 + 712) = v39;
                        *(_QWORD *)(a1 + 720) = v39;
                        v37 += v38;
                      }
                      *(_QWORD *)(a1 + 984) = v39;
                      v40 = v37 + v38;
                      if ( (unsigned __int64)(v37 + v38) < *(_QWORD *)(a1 + 704) )
                      {
                        *(_BYTE *)(a1 + 736) = 1;
                        v40 = 0;
                      }
                      else
                      {
                        if ( v40 < *(_QWORD *)(a1 + 712) )
                          *(_QWORD *)(a1 + 712) = v40;
                        *(_QWORD *)(a1 + 720) = v40;
                        v37 += v38;
                      }
                      *(_QWORD *)(a1 + 992) = v40;
                      v41 = v38 + v37;
                      if ( v41 < *(_QWORD *)(a1 + 704) )
                      {
                        *(_BYTE *)(a1 + 736) = 1;
                        v41 = 0;
                      }
                      else
                      {
                        if ( v41 < *(_QWORD *)(a1 + 712) )
                          *(_QWORD *)(a1 + 712) = v41;
                        *(_QWORD *)(a1 + 720) = v41;
                      }
                      goto LABEL_79;
                    }
LABEL_114:
                    *(_QWORD *)(a1 + 984) = 0;
                    v41 = 0;
                    *(_QWORD *)(a1 + 992) = 0;
LABEL_79:
                    *(_DWORD *)(a1 + 948) = 1;
                    *(_QWORD *)(a1 + 1000) = v41;
                    return 0;
                  }
                  if ( v31 )
                  {
LABEL_113:
                    *(_DWORD *)(a1 + 744) = 3;
                    if ( v13 >= v81 )
                      goto LABEL_67;
                    goto LABEL_114;
                  }
                  v55 = *(_QWORD *)(a1 + 688);
                  v56 = *(_QWORD *)(a1 + 696);
LABEL_132:
                  *(_QWORD *)(a1 + 712) = v56;
                  *(_QWORD *)(a1 + 728) = v55 & 0xFFFFFFFFFFFFFFC0LL;
                  v59 = v56 + (-(int)v56 & 0x3F);
                  if ( v55 < v59 )
                    goto LABEL_114;
                  *(_QWORD *)(a1 + 696) = v59;
                  *(_QWORD *)(a1 + 704) = v59;
                  if ( v56 < v59 )
                    *(_QWORD *)(a1 + 712) = v59;
                  goto LABEL_113;
                }
                v75 = 1LL << (*(_BYTE *)(a1 + 332) - *(_BYTE *)(a1 + 336));
                goto LABEL_165;
              }
              *(_QWORD *)(a1 + 696) = v73;
              *(_QWORD *)(a1 + 704) = v73;
              if ( v56 < v73 )
                *(_QWORD *)(a1 + 712) = v73;
              *(_DWORD *)(a1 + 744) = 3;
              v31 = 3;
LABEL_53:
              if ( v14 )
              {
                v35 = *(_QWORD *)(a1 + 720) - v14;
                if ( v35 >= *(_QWORD *)(a1 + 704) )
                {
                  if ( v35 < *(_QWORD *)(a1 + 712) )
                    *(_QWORD *)(a1 + 712) = v35;
                  *(_QWORD *)(a1 + 720) = v35;
                  goto LABEL_58;
                }
                *(_BYTE *)(a1 + 736) = 1;
              }
              v35 = 0;
LABEL_58:
              *(_QWORD *)(a1 + 3536) = v35;
              *(_QWORD *)(a1 + 3584) = v78;
              goto LABEL_59;
            }
            *(_QWORD *)(a1 + 696) = v58;
            *(_QWORD *)(a1 + 704) = v58;
            if ( v56 < v58 )
              *(_QWORD *)(a1 + 712) = v58;
            goto LABEL_46;
          }
          *(_BYTE *)(a1 + 736) = 1;
        }
LABEL_182:
        v66 = nullptr;
        goto LABEL_146;
      }
      *(_BYTE *)(a1 + 736) = 1;
    }
LABEL_108:
    v29 = 0;
    goto LABEL_33;
  }
  return v17;
}
