__int64 __fastcall sub_1420400(__int64 a1, const __m128i *a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rbp
  char v10; // r12
  __int64 v11; // r8
  __int64 v12; // r9
  __int16 v13; // cx
  __int64 v14; // r14
  __m128i v15; // xmm0
  int v16; // edx
  __m128i *v17; // r15
  unsigned int v18; // ecx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __m128i *v21; // rsi
  unsigned __int64 v22; // rax
  __m128i *v23; // rcx
  char v24; // al
  char v25; // r15
  bool v26; // zf
  _BYTE *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // r15
  char *v32; // rcx
  __int64 v34; // rsi
  char v35; // r15
  char v36; // r15
  unsigned __int64 v37; // rdi
  char v38; // al
  __int16 v39; // cx
  __int64 v40; // rdx
  _BYTE *v41; // r15
  unsigned __int64 v42; // rdx
  __m128i *v43; // rcx
  __m128i *v44; // rax
  unsigned int v45; // r15d
  char v46; // al
  __int64 v47; // rcx
  char v48; // r15
  char v49; // dl
  char v50; // r15
  __int64 v51; // rax
  __int32 v52; // r15d
  unsigned __int64 v53; // rdx
  char v54; // dl
  bool v55; // r15
  unsigned __int16 v56; // dx
  unsigned int v57; // r15d
  char v58; // al
  __int64 v59; // rax
  _QWORD *v60; // rdi
  _QWORD *v61; // rsi
  _QWORD *v62; // rax
  unsigned __int64 v63; // rdx
  __m128i *v64; // rcx
  __m128i *v65; // rax
  char v66; // al
  char v67; // dl
  __m128i v68; // xmm5
  __int64 v69; // rbx
  unsigned __int16 v70; // r12
  char v71; // al
  __int64 v72; // rax
  __int32 v73; // r15d
  char v74; // al
  char v75; // al
  char v76; // r12
  __int64 v77; // rsi
  int v78; // ecx
  char v79; // dl
  __int64 v80; // [rsp+0h] [rbp-2C8h]
  __int32 v82; // [rsp+8h] [rbp-2C0h]
  __int64 v83; // [rsp+10h] [rbp-2B8h]
  __int64 v84; // [rsp+10h] [rbp-2B8h]
  unsigned __int16 v85; // [rsp+10h] [rbp-2B8h]
  __int64 v86; // [rsp+10h] [rbp-2B8h]
  bool v87; // [rsp+10h] [rbp-2B8h]
  _BYTE *v88; // [rsp+10h] [rbp-2B8h]
  __int16 v89; // [rsp+1Ch] [rbp-2ACh]
  __int16 v90; // [rsp+1Ch] [rbp-2ACh]
  __int64 v91; // [rsp+20h] [rbp-2A8h]
  __m128i v92; // [rsp+30h] [rbp-298h] BYREF
  __int64 v93; // [rsp+40h] [rbp-288h]
  __m128i v94; // [rsp+50h] [rbp-278h] BYREF
  int v95; // [rsp+60h] [rbp-268h]
  void *ptr; // [rsp+70h] [rbp-258h] BYREF
  __int64 v97; // [rsp+78h] [rbp-250h]
  _BYTE v98[32]; // [rsp+80h] [rbp-248h] BYREF
  __int64 v99; // [rsp+A0h] [rbp-228h]
  unsigned __int8 *v100[10]; // [rsp+B0h] [rbp-218h] BYREF
  void *src; // [rsp+100h] [rbp-1C8h] BYREF
  __int64 v102; // [rsp+108h] [rbp-1C0h]
  _BYTE v103[440]; // [rsp+110h] [rbp-1B8h] BYREF

  v7 = a2->m128i_i32[0];
  v93 = a2[1].m128i_i64[0];
  v91 = a1 + 128;
  v8 = *(_QWORD *)(a1 + 128);
  v92 = _mm_loadu_si128(a2);
  *(_QWORD *)(a1 + 208) += 40LL;
  v9 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(a1 + 136) >= (unsigned __int64)(v9 + 40) && v8 )
    *(_QWORD *)(a1 + 128) = v9 + 40;
  else
    v9 = sub_986170(a1 + 128, 40, 40, 4, a5, a6);
  sub_13F1090(v9, v7);
  v10 = *(_BYTE *)(a1 + 544);
  *(_BYTE *)(a1 + 544) = v10 | 0x20;
  sub_14634E0(a1, &v94);
  v13 = v95;
  v14 = *(_QWORD *)(a1 + 320);
  *(_BYTE *)(a1 + 544) = (32 * ((v10 & 0x20) != 0)) | *(_BYTE *)(a1 + 544) & 0xDF;
  v80 = *(_QWORD *)(a1 + 328);
  if ( v13 == 2 )
  {
    if ( a3 )
    {
      v69 = *(_QWORD *)(a1 + 1120);
      v70 = a2[1].m128i_u16[0];
      v82 = a2->m128i_i32[0];
      v71 = sub_141A630(v70);
      if ( v70 == 1 || v71 )
        v72 = 0;
      else
        v72 = a2->m128i_i64[1];
      *(_QWORD *)(v69 + 48) = v72;
      *(_DWORD *)(v69 + 60) = v82;
    }
    goto LABEL_29;
  }
  if ( (v95 & 0x20000) == 0 )
  {
    if ( v13 == 22 )
    {
      *(_BYTE *)(v9 + 36) |= 2u;
      if ( (unsigned __int8)sub_141FDC0(a1, v9, (__int64)&v92) )
      {
        v9 = 0;
        goto LABEL_20;
      }
      v75 = (*(_BYTE *)(v9 + 36) & 4) != 0;
      if ( (*(_BYTE *)(v9 + 36) & 4) != 0 )
      {
        v26 = (*(_BYTE *)(v14 + 3) & 0x1A) == 0;
        *(_BYTE *)(v14 + 3) &= ~0x20u;
        v79 = v75;
        if ( v26 )
          v79 = (*(_BYTE *)(v14 + 4) & 0x30) != 0;
        *(_BYTE *)(v14 + 3) = (v79 << 7) | *(_BYTE *)(v14 + 3) & 0x7F;
        v26 = (*(_BYTE *)(v80 + 3) & 0x1A) == 0;
        *(_BYTE *)(v80 + 3) &= ~0x20u;
        if ( v26 )
          v75 = (*(_BYTE *)(v80 + 4) & 0x30) != 0;
        *(_BYTE *)(v80 + 3) = *(_BYTE *)(v80 + 3) & 0x7F | (v75 << 7);
      }
      v76 = *(_BYTE *)(a1 + 544);
      *(_BYTE *)(a1 + 544) = v76 | 0x20;
      sub_14634E0(a1, &v94);
      *(_BYTE *)(a1 + 544) = (32 * ((v76 & 0x20) != 0)) | *(_BYTE *)(a1 + 544) & 0xDF;
    }
    else
    {
      v34 = *(_QWORD *)(a1 + 48);
      if ( (**(_WORD **)(a1 + 56) & 0x1001) != 0 )
      {
        sub_FC70B0((__int64)&src, v34, v94.m128i_i32[0], 1208);
        sub_AEA040((__int64)&src);
      }
      else if ( v13 && v13 != 73 )
      {
        sub_FC70B0((__int64)&src, v34, v94.m128i_i32[0], 1359);
        sub_AEA040((__int64)&src);
      }
      else
      {
        sub_FC70B0((__int64)&src, v34, v94.m128i_i32[0], 1226);
        sub_AEA040((__int64)&src);
      }
    }
    v13 = v95;
    if ( (_WORD)v95 != 2 )
      goto LABEL_7;
LABEL_29:
    v27 = v103;
    src = v103;
    v102 = 0x1000000000LL;
    if ( (*(_BYTE *)(v9 + 36) & 2) == 0 )
    {
LABEL_13:
      *(_DWORD *)(v9 + 4) = v92.m128i_i32[0];
      v28 = (unsigned int)v102;
      if ( (_DWORD)v102 )
      {
        *(_DWORD *)(v9 + 28) = v102;
        v29 = 3 * v28;
        v30 = *(_QWORD *)(a1 + 128);
        v31 = 8 * v29;
        *(_QWORD *)(a1 + 208) += v31;
        v32 = (char *)((v30 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( *(_QWORD *)(a1 + 136) >= (unsigned __int64)&v32[v31] && v30 )
          *(_QWORD *)(a1 + 128) = &v32[v31];
        else
          v32 = (char *)sub_986170(v91, v31, v31, 3, v11, v12);
        *(_QWORD *)(v9 + 16) = memmove(v32, v27, v31);
        v27 = src;
      }
      goto LABEL_18;
    }
    ptr = v98;
    v97 = 0x800000000LL;
    v99 = *(_QWORD *)(a1 + 328);
LABEL_31:
    if ( ptr != v98 )
      free(ptr);
LABEL_12:
    v27 = src;
    goto LABEL_13;
  }
  HIWORD(v95) &= ~2u;
LABEL_7:
  v15 = _mm_load_si128(&v94);
  v16 = v95;
  v17 = (__m128i *)v103;
  src = v103;
  v92 = v15;
  LODWORD(v93) = v95;
  v102 = 0x1000000000LL;
  if ( (*(_BYTE *)(v9 + 36) & 2) == 0 )
  {
    v18 = 16;
    v19 = 0;
    while ( 1 )
    {
      LODWORD(v93) = v16;
      v20 = v19 + 1;
      v21 = (__m128i *)((char *)v17 + 24 * v19);
      v22 = v18;
      v92 = v15;
      v23 = &v94;
      if ( v20 > v22 )
      {
        if ( v17 > &v94 || v21 <= &v94 )
        {
          sub_2237220(&src, v103, v20, 24);
          v23 = &v94;
          v21 = (__m128i *)((char *)src + 24 * (unsigned int)v102);
        }
        else
        {
          sub_2237220(&src, v103, v20, 24);
          v23 = (__m128i *)((char *)src + (char *)&v94 - (char *)v17);
          v21 = (__m128i *)((char *)src + 24 * (unsigned int)v102);
        }
      }
      *v21 = _mm_loadu_si128(v23);
      v21[1].m128i_i64[0] = v23[1].m128i_i64[0];
      v24 = *(_BYTE *)(a1 + 544);
      LODWORD(v102) = v102 + 1;
      *(_BYTE *)(a1 + 544) = v24 | 0x20;
      v25 = 32 * ((v24 & 0x20) != 0);
      sub_14634E0(a1, &v94);
      v26 = (_WORD)v95 == 2;
      *(_BYTE *)(a1 + 544) = v25 | *(_BYTE *)(a1 + 544) & 0xDF;
      if ( v26 )
        break;
      v19 = (unsigned int)v102;
      v18 = HIDWORD(v102);
      v17 = (__m128i *)src;
      v15 = _mm_load_si128(&v94);
      v16 = v95;
    }
    goto LABEL_12;
  }
  ptr = v98;
  v97 = 0x800000000LL;
  v99 = *(_QWORD *)(a1 + 328);
  while ( 1 )
  {
    v92 = v15;
    LODWORD(v93) = v16;
    if ( (unsigned __int16)(v13 - 67) <= 2u )
      break;
    v41 = src;
    v42 = (unsigned int)v102 + 1LL;
    v43 = (__m128i *)((char *)src + 24 * (unsigned int)v102);
    v44 = &v94;
    if ( v42 > HIDWORD(v102) )
    {
      if ( src > &v94 || v43 <= &v94 )
      {
        sub_2237220(&src, v103, v42, 24);
        v43 = (__m128i *)((char *)src + 24 * (unsigned int)v102);
        v44 = &v94;
      }
      else
      {
        sub_2237220(&src, v103, v42, 24);
        v44 = (__m128i *)((char *)src + (char *)&v94 - v41);
        v43 = (__m128i *)((char *)src + 24 * (unsigned int)v102);
      }
    }
    *v43 = _mm_loadu_si128(v44);
    v43[1].m128i_i64[0] = v44[1].m128i_i64[0];
    v45 = v102 + 1;
    LODWORD(v102) = v102 + 1;
    v84 = v99;
    if ( !v99 )
    {
      v47 = (unsigned int)v97;
LABEL_55:
      if ( (_DWORD)v47 )
      {
        if ( (_WORD)v95 == 23 )
        {
          LODWORD(v97) = v47 - 1;
          if ( (_DWORD)v47 == 1 && *((_WORD *)src + 12 * v45 - 16) == 68 )
          {
            v77 = *(_QWORD *)(a1 + 48);
            v78 = 1202;
            goto LABEL_115;
          }
        }
        else if ( (_WORD)v95 == 22 )
        {
          v73 = v94.m128i_i32[0];
          if ( v47 + 1 > (unsigned __int64)HIDWORD(v97) )
          {
            sub_2237220(&ptr, v98, v47 + 1, 4);
            v47 = (unsigned int)v97;
          }
          *((_DWORD *)ptr + v47) = v73;
          LODWORD(v97) = v97 + 1;
        }
      }
LABEL_59:
      v48 = *(_BYTE *)(a1 + 544);
      *(_BYTE *)(a1 + 544) = v48 | 0x20;
      sub_14634E0(a1, &v94);
      v49 = 32 * ((v48 & 0x20) != 0);
LABEL_60:
      v13 = v95;
      *(_BYTE *)(a1 + 544) = v49 | *(_BYTE *)(a1 + 544) & 0xDF;
      goto LABEL_66;
    }
    v89 = v95;
    v46 = sub_141A630((unsigned __int16)v95);
    v47 = (unsigned int)v97;
    if ( v89 == 1 || v46 || v84 != v94.m128i_i64[1] )
      goto LABEL_55;
    if ( (_DWORD)v97 )
    {
      v77 = *(_QWORD *)(a1 + 48);
      v78 = 1179;
      goto LABEL_115;
    }
    v50 = *(_BYTE *)(a1 + 544);
    *(_BYTE *)(a1 + 544) = v50 | 0x20;
    sub_14634E0(a1, &v94);
    v26 = (_WORD)v95 == 22;
    *(_BYTE *)(a1 + 544) = (32 * ((v50 & 0x20) != 0)) | *(_BYTE *)(a1 + 544) & 0xDF;
    if ( !v26 )
    {
      v77 = *(_QWORD *)(a1 + 48);
      v78 = 1155;
      goto LABEL_115;
    }
    sub_141B840((__int64)&src, &v94);
    v51 = (unsigned int)v97;
    v52 = v94.m128i_i32[0];
    v53 = (unsigned int)v97 + 1LL;
    if ( v53 > HIDWORD(v97) )
    {
      sub_2237220(&ptr, v98, v53, 4);
      v51 = (unsigned int)v97;
    }
    *((_DWORD *)ptr + v51) = v52;
    v54 = *(_BYTE *)(a1 + 544);
    LODWORD(v97) = v97 + 1;
    *(_BYTE *)(a1 + 544) = v54 | 0x20;
    v55 = (v54 & 0x20) != 0;
    sub_14634E0(a1, &v94);
    v13 = v95;
    *(_BYTE *)(a1 + 544) = (32 * v55) | *(_BYTE *)(a1 + 544) & 0xDF;
    if ( v13 == 68 )
    {
      v77 = *(_QWORD *)(a1 + 48);
      v78 = 1203;
LABEL_115:
      sub_FC70B0((__int64)v100, v77, v94.m128i_i32[0], v78);
      sub_AEA040((__int64)v100);
      goto LABEL_47;
    }
LABEL_66:
    if ( v13 == 2 )
      goto LABEL_106;
    v15 = _mm_load_si128(&v94);
    v16 = v95;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 14LL) & 4) != 0 )
  {
    LOWORD(v95) = 0;
    sub_141B840((__int64)&src, &v94);
    goto LABEL_59;
  }
  v35 = *(_BYTE *)(a1 + 544) >> 5;
  *(_BYTE *)(a1 + 544) |= 0x20u;
  v36 = v35 & 1;
  if ( v13 != 68 )
  {
    sub_14634E0(a1, &v94);
    v37 = (unsigned __int16)v95;
    v83 = v99;
    v26 = v99 == 0;
    *(_BYTE *)(a1 + 544) = *(_BYTE *)(a1 + 544) & 0xDF | (32 * (v36 & 1));
    if ( v26 )
    {
      v74 = sub_141A630(v37);
      v39 = v37;
      if ( (_WORD)v37 == 1 || v74 )
        goto LABEL_42;
      v40 = v94.m128i_i64[1];
    }
    else
    {
      v38 = sub_141A630(v37);
      v39 = v37;
      if ( (_WORD)v37 == 1 || v38 )
        goto LABEL_42;
      v40 = v94.m128i_i64[1];
      if ( v83 == v94.m128i_i64[1] )
        goto LABEL_86;
    }
    if ( !v40 )
      goto LABEL_42;
    v60 = *(_QWORD **)(v9 + 8);
    v61 = &v60[*(unsigned int *)(v9 + 24)];
    if ( v60 == v61 )
      goto LABEL_42;
    if ( v40 != *v60 )
    {
      v62 = *(_QWORD **)(v9 + 8);
      while ( v61 != ++v62 )
      {
        if ( v40 == *v62 )
        {
          if ( (unsigned int)(v62 - v60) == -1 )
            break;
          goto LABEL_86;
        }
      }
LABEL_42:
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 4LL) & 2) == 0 || v39 == 2 )
      {
        sub_FC70B0((__int64)v100, *(_QWORD *)(a1 + 48), v94.m128i_i32[0], 1169);
        sub_AE9DF0(v100, (_WORD)v93 == 69, 2u);
        sub_AEA040((__int64)v100);
        goto LABEL_47;
      }
      LOWORD(v93) = 0;
LABEL_45:
      sub_141B840((__int64)&src, &v92);
      v13 = v95;
      goto LABEL_66;
    }
LABEL_86:
    v63 = (unsigned int)v102 + 1LL;
    v64 = (__m128i *)((char *)src + 24 * (unsigned int)v102);
    v65 = &v92;
    if ( v63 > HIDWORD(v102) )
    {
      v88 = src;
      if ( src > &v92 || v64 <= &v92 )
      {
        sub_2237220(&src, v103, v63, 24);
        v64 = (__m128i *)((char *)src + 24 * (unsigned int)v102);
        v65 = &v92;
      }
      else
      {
        sub_2237220(&src, v103, v63, 24);
        v65 = (__m128i *)((char *)src + (char *)&v92 - v88);
        v64 = (__m128i *)((char *)src + 24 * (unsigned int)v102);
      }
    }
    *v64 = _mm_loadu_si128(v65);
    v64[1].m128i_i64[0] = v65[1].m128i_i64[0];
    LODWORD(v102) = v102 + 1;
    v86 = v99;
    if ( !v99
      || (v90 = v95, v66 = sub_141A630((unsigned __int16)v95), v13 = v90, v90 == 1)
      || v66
      || v86 != v94.m128i_i64[1] )
    {
      sub_141B840((__int64)&src, &v94);
      v67 = *(_BYTE *)(a1 + 544);
      v68 = _mm_load_si128(&v94);
      LODWORD(v93) = v95;
      v92 = v68;
      *(_BYTE *)(a1 + 544) = v67 | 0x20;
      v87 = (v67 & 0x20) != 0;
      sub_14634E0(a1, &v94);
      v49 = 32 * v87;
      goto LABEL_60;
    }
    goto LABEL_66;
  }
  sub_14634E0(a1, &v94);
  v56 = v95;
  *(_BYTE *)(a1 + 544) = *(_BYTE *)(a1 + 544) & 0xDF | (32 * v36);
  if ( v56 != 2 )
  {
    v57 = v102;
    if ( (_DWORD)v102 )
    {
      v85 = v56;
      v58 = sub_141A630(v56);
      if ( v85 == 1 || v58 )
        v59 = 0;
      else
        v59 = v94.m128i_i64[1];
      if ( *(_QWORD *)(a1 + 320) == v59 && *((_WORD *)src + 12 * v57 - 4) == 66 )
        *(_BYTE *)(v9 + 36) |= 0x20u;
    }
    goto LABEL_45;
  }
  sub_141B840((__int64)&src, &v92);
LABEL_106:
  if ( !(_DWORD)v97 )
    goto LABEL_31;
  sub_FC70B0((__int64)v100, *(_QWORD *)(a1 + 48), v94.m128i_i32[0], 1120);
  sub_AE9DF0(v100, (unsigned __int16)v93, 4u);
  sub_AE9DF0(v100, 23, 4u);
  sub_AEA040((__int64)v100);
  sub_FC70B0((__int64)v100, *(_QWORD *)(a1 + 48), *((_DWORD *)ptr + (unsigned int)v97 - 1), 109);
  sub_AE9DF0(v100, 22, 4u);
  sub_AEA040((__int64)v100);
LABEL_47:
  if ( ptr != v98 )
    free(ptr);
  v27 = src;
  v9 = 0;
LABEL_18:
  if ( v27 != v103 )
    free(v27);
LABEL_20:
  *(_BYTE *)(v14 + 3) |= 0xA0u;
  *(_BYTE *)(v80 + 3) |= 0xA0u;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 1112) + 24LL) )
    sub_141A820(a1, (unsigned int *)v100);
  return v9;
}
