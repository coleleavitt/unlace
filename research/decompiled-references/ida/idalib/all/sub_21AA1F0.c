__int64 *__fastcall sub_21AA1F0(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  const __m128i *v6; // r15
  unsigned int v7; // r14d
  char *v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edx
  bool v14; // dl
  int v15; // r15d
  int v16; // r14d
  bool v17; // r12
  unsigned __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r12d
  __int64 v24; // rax
  char *v26; // rsi
  int v27; // r15d
  __m128i *v28; // r14
  __m128i v29; // xmm3
  signed __int64 v30; // r15
  int v31; // eax
  __m128i v32; // xmm4
  __int64 v33; // rax
  char *v34; // rax
  __m128i *v35; // r12
  char *v36; // rcx
  __m128i v37; // xmm0
  void *v38; // r15
  signed __int64 v39; // r9
  char *v40; // rax
  char *v41; // rdi
  char *v42; // rsi
  char v43; // r9
  char *v44; // rax
  unsigned int v45; // ecx
  unsigned __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rdx
  const char *v49; // rdi
  unsigned int v50; // eax
  unsigned int v51; // eax
  int v52; // eax
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 *v55; // r13
  __int64 *v56; // r12
  __int64 v57; // rax
  const __m128i *v58; // rdx
  __int32 v59; // ecx
  __int32 v60; // ecx
  __m128i v61; // xmm2
  __int64 v62; // rcx
  __int64 v63; // rsi
  __int64 v64; // rcx
  __int64 v65; // rsi
  __int64 v66; // rcx
  void *v67; // rdi
  __int64 v68; // r12
  unsigned int v69; // [rsp+8h] [rbp-100h]
  __int64 v70; // [rsp+8h] [rbp-100h]
  __int64 v71; // [rsp+10h] [rbp-F8h]
  __m128i v72; // [rsp+18h] [rbp-F0h] BYREF
  __int64 *v73; // [rsp+28h] [rbp-E0h]
  const __m128i *v74; // [rsp+30h] [rbp-D8h]
  __int64 v75; // [rsp+38h] [rbp-D0h]
  __int64 v76; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v77[6]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v78; // [rsp+80h] [rbp-88h] BYREF
  int v79; // [rsp+88h] [rbp-80h]
  __m128i v80; // [rsp+90h] [rbp-78h] BYREF
  __m128i v81; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v82; // [rsp+B0h] [rbp-58h]
  void *src[2]; // [rsp+B8h] [rbp-50h] BYREF
  void *v84; // [rsp+C8h] [rbp-40h]

  v73 = a1;
  v5 = sub_21A2A40(a3);
  v6 = *(const __m128i **)(a2 + 472);
  v75 = a2 + 472;
  v7 = v5;
  if ( v5 > 0xCCCCCCCCCCCCCCCDLL * ((__int64)(*(_QWORD *)(a2 + 488) - (_QWORD)v6) >> 4) )
  {
    v53 = *(_QWORD *)(a2 + 480);
    v72.m128i_i64[0] = 80LL * v5;
    v71 = v53 - (_QWORD)v6;
    if ( v5 )
    {
      v72.m128i_i64[1] = v53;
      v54 = operator new(80LL * v5);
      v53 = v72.m128i_i64[1];
      v55 = *(__int64 **)(a2 + 480);
      v70 = v54;
      v56 = *(__int64 **)(a2 + 472);
      if ( v6 == (const __m128i *)v72.m128i_i64[1] )
        goto LABEL_76;
    }
    else
    {
      v70 = 0;
      v55 = (__int64 *)v53;
      v56 = (__int64 *)v6;
      if ( v6 == (const __m128i *)v53 )
      {
LABEL_80:
        if ( v55 )
          operator delete(v55);
        *(_QWORD *)(a2 + 472) = v70;
        v68 = v72.m128i_i64[0] + v70;
        *(_QWORD *)(a2 + 480) = v70 + v71;
        *(_QWORD *)(a2 + 488) = v68;
        goto LABEL_2;
      }
    }
    v57 = v70;
    v58 = v6;
    do
    {
      v59 = v58->m128i_i32[0];
      v58 += 5;
      v57 += 80;
      *(_DWORD *)(v57 - 80) = v59;
      *(_DWORD *)(v57 - 76) = v58[-5].m128i_i32[1];
      v60 = v58[-5].m128i_i32[2];
      *(__m128i *)(v57 - 64) = _mm_loadu_si128(v58 - 4);
      v61 = _mm_loadu_si128(v58 - 3);
      *(_DWORD *)(v57 - 72) = v60;
      *(__m128i *)(v57 - 48) = v61;
      v62 = v58[-2].m128i_i64[0];
      *(_QWORD *)(v57 - 16) = 0;
      *(_QWORD *)(v57 - 8) = 0;
      *(_QWORD *)(v57 - 24) = 0;
      *(_QWORD *)(v57 - 32) = v62;
      *(_QWORD *)(v57 - 24) = v58[-2].m128i_i64[1];
      v63 = v58[-1].m128i_i64[0];
      v58[-2].m128i_i64[1] = 0;
      v64 = *(_QWORD *)(v57 - 16);
      *(_QWORD *)(v57 - 16) = v63;
      v65 = v58[-1].m128i_i64[1];
      v58[-1].m128i_i64[0] = v64;
      v66 = *(_QWORD *)(v57 - 8);
      *(_QWORD *)(v57 - 8) = v65;
      v58[-1].m128i_i64[1] = v66;
    }
    while ( (const __m128i *)v53 != v58 );
LABEL_76:
    if ( v55 != v56 )
    {
      do
      {
        while ( 1 )
        {
          v67 = (void *)v56[7];
          if ( !v67 )
            break;
          operator delete(v67);
          v56 += 10;
          if ( v56 == v55 )
            goto LABEL_79;
        }
        v56 += 10;
      }
      while ( v56 != v55 );
LABEL_79:
      v55 = *(__int64 **)(a2 + 472);
    }
    goto LABEL_80;
  }
LABEL_2:
  v69 = v7 - 1;
  if ( !v7 )
  {
LABEL_36:
    if ( *(_QWORD *)(a3 + 8) == *(_QWORD *)(a3 + 16) )
    {
      *v73 = 0;
    }
    else
    {
      sub_21A2C10(&v78, "elem section ended prematurely");
      *v73 = v78;
    }
    return v73;
  }
  v74 = (const __m128i *)&v78;
  v72.m128i_i64[1] = (__int64)src;
  while ( 1 )
  {
    v8 = *(char **)(a3 + 16);
    v81.m128i_i64[1] = 0;
    v82 = 0;
    *(_OWORD *)src = 0;
    v84 = nullptr;
    v9 = sub_21A29A0((char **)(a3 + 8), v8);
    if ( v9 > 0xFFFFFFFF )
      goto LABEL_90;
    LODWORD(v78) = v9;
    if ( (v9 & 0xFFFFFFF8) != 0 )
    {
      sub_21A2C10(v77, "Unsupported flags for element segment");
      *v73 = v77[0];
      goto LABEL_21;
    }
    v13 = v9 & 2;
    if ( (v9 & 1) != 0 )
    {
      v15 = v9 & 4;
      v16 = (v13 != 0) + 1;
      if ( (v9 & 3) == 0 )
      {
        v10 = 0;
        v17 = 0;
LABEL_9:
        HIDWORD(v78) = 0;
        v18 = 0;
        goto LABEL_10;
      }
      v14 = 0;
    }
    else
    {
      v14 = v13 != 0;
      v15 = v9 & 4;
      v16 = 0;
      if ( (v9 & 3) == 0 )
      {
        v10 = 0;
        v17 = 0;
        if ( !v14 )
          goto LABEL_9;
        goto LABEL_41;
      }
    }
    LOBYTE(v10) = v15 == 0;
    v17 = v15 != 0;
    if ( !v14 )
      goto LABEL_9;
LABEL_41:
    v72.m128i_i8[0] = v10;
    LODWORD(v18) = sub_21A2A40(a3);
    v10 = v72.m128i_u8[0];
    HIDWORD(v78) = v18;
    v18 = (unsigned int)v18;
LABEL_10:
    if ( (unsigned __int64)*(unsigned int *)(a2 + 676) + ((__int64)(*(_QWORD *)(a2 + 336) - *(_QWORD *)(a2 + 328)) >> 6) <= v18 )
      break;
    if ( v16 )
    {
      v80.m128i_i8[0] = 0;
      v80.m128i_i8[8] = 65;
      v81.m128i_i32[0] = 0;
      if ( !(_BYTE)v10 )
        goto LABEL_13;
    }
    else
    {
      v72.m128i_i8[0] = v10;
      sub_21A3AE0(v77, (__int64)v74[1].m128i_i64, a3, v10, v11, v12);
      v24 = v77[0];
      if ( v77[0] )
        goto LABEL_20;
      if ( !v72.m128i_i8[0] )
      {
LABEL_13:
        if ( !v17 )
          goto LABEL_14;
        v51 = sub_21A2A40(a3);
        v79 = sub_21A2B80(a3, v51);
        goto LABEL_15;
      }
    }
    v50 = sub_21A2A40(a3);
    if ( (v78 & 4) == 0 )
    {
      if ( v50 )
        goto LABEL_64;
LABEL_14:
      v79 = 112;
      goto LABEL_15;
    }
    v52 = sub_21A2B80(a3, v50);
    v79 = v52;
    if ( v52 != 255 && v52 != 105 && (unsigned int)(v52 - 111) > 1 )
    {
LABEL_64:
      sub_21A2C10(v77, "invalid elem type");
      v24 = v77[0];
LABEL_20:
      *v73 = v24;
      goto LABEL_21;
    }
LABEL_15:
    v19 = sub_21A2A40(a3);
    if ( v15 )
    {
      v23 = v19 - 1;
      if ( v19 )
      {
        do
        {
          v77[3] = 0;
          v77[4] = 0;
          sub_21A3AE0(&v76, (__int64)v77, a3, v20, v21, v22);
          v24 = v76;
          if ( v76 )
            goto LABEL_20;
        }
        while ( --v23 != -1 );
      }
    }
    else
    {
      v27 = v19 - 1;
      if ( v19 )
      {
        v41 = *(char **)(a3 + 16);
        while ( 1 )
        {
          v42 = *(char **)(a3 + 8);
          if ( v41 == v42 )
          {
LABEL_52:
            v49 = "malformed uleb128, extends past end";
LABEL_53:
            sub_2221C70(v49, 1);
          }
          v43 = *v42;
          v44 = *(char **)(a3 + 8);
          v45 = 0;
          v46 = 0;
          v47 = *v42 & 0x7F;
          while ( 1 )
          {
            v48 = v47 << v45;
            ++v44;
            v45 += 7;
            v46 += v48;
            if ( v43 >= 0 )
              break;
            if ( v41 == v44 )
              goto LABEL_52;
            v43 = *v44;
            v47 = *v44 & 0x7F;
            if ( v45 > 0x3E )
            {
              if ( v45 == 63 )
              {
                if ( v47 != (v43 & 1) )
                {
LABEL_51:
                  v49 = "uleb128 too big for uint64";
                  goto LABEL_53;
                }
              }
              else if ( (*v44 & 0x7F) != 0 )
              {
                goto LABEL_51;
              }
            }
          }
          *(_QWORD *)(a3 + 8) = &v42[(_DWORD)v44 - (_DWORD)v42];
          if ( v46 > 0xFFFFFFFF )
            break;
          LODWORD(v77[0]) = v46;
          v26 = (char *)src[1];
          if ( src[1] == v84 )
          {
            --v27;
            sub_ECFD20(v72.m128i_i64[1], src[1], (int *)v77);
            if ( v27 == -1 )
              goto LABEL_27;
            v41 = *(char **)(a3 + 16);
          }
          else
          {
            *(_DWORD *)src[1] = v46;
            --v27;
            src[1] = v26 + 4;
            if ( v27 == -1 )
              goto LABEL_27;
          }
        }
LABEL_90:
        sub_2221C70("LEB is outside Varuint32 range", 1);
      }
    }
LABEL_27:
    v28 = *(__m128i **)(a2 + 480);
    if ( v28 == *(__m128i **)(a2 + 488) )
    {
      sub_21A8880(v75, *(const __m128i **)(a2 + 480), v74);
      v38 = src[0];
    }
    else
    {
      v29 = _mm_load_si128(&v80);
      v30 = (char *)src[1] - (char *)src[0];
      v28->m128i_i64[0] = v78;
      v31 = v79;
      v28[1] = v29;
      v32 = _mm_load_si128(&v81);
      v28->m128i_i32[2] = v31;
      v28[2] = v32;
      v33 = v82;
      v28[3].m128i_i64[1] = 0;
      v28[3].m128i_i64[0] = v33;
      v28[4].m128i_i64[0] = 0;
      v28[4].m128i_i64[1] = 0;
      if ( v30 >> 2 )
      {
        if ( (unsigned __int64)(v30 >> 2) > 0x3FFFFFFFFFFFFFFFLL )
          std::__throw_bad_alloc();
        v34 = (char *)operator new(v30);
        v35 = *(__m128i **)(a2 + 480);
        v36 = v34;
      }
      else
      {
        v35 = v28;
        v36 = nullptr;
      }
      v72.m128i_i64[0] = (__int64)v36;
      v37 = _mm_loadl_epi64(&v72);
      v28[4].m128i_i64[1] = (__int64)&v36[v30];
      *(__m128i *)((char *)v28 + 56) = _mm_unpacklo_epi64(v37, v37);
      v38 = src[0];
      v39 = (char *)src[1] - (char *)src[0];
      if ( src[1] != src[0] )
      {
        v72.m128i_i64[0] = (char *)src[1] - (char *)src[0];
        v40 = (char *)memmove(v36, src[0], (char *)src[1] - (char *)src[0]);
        v39 = v72.m128i_i64[0];
        v36 = v40;
      }
      v28[4].m128i_i64[0] = (__int64)&v36[v39];
      *(_QWORD *)(a2 + 480) = v35 + 5;
    }
    if ( v38 )
    {
      operator delete(v38);
      if ( --v69 == -1 )
        goto LABEL_36;
    }
    else if ( --v69 == -1 )
    {
      goto LABEL_36;
    }
  }
  sub_21A2C10(v77, "invalid TableNumber");
  *v73 = v77[0];
LABEL_21:
  if ( src[0] )
    operator delete(src[0]);
  return v73;
}
