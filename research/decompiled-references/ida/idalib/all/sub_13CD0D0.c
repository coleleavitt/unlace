__int64 __fastcall sub_13CD0D0(__int64 *a1, unsigned int a2, char a3)
{
  __int64 v3; // r14
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // r11
  char v11; // al
  __int64 v12; // rsi
  char v13; // dl
  char *v14; // r8
  __int64 v15; // r9
  char *v16; // rdi
  char *v17; // rax
  unsigned __int64 v18; // rsi
  char *v19; // rdi
  char *v20; // rax
  char *v21; // rcx
  unsigned __int8 v22; // dl
  unsigned int v23; // r13d
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // r11
  __m128i *v27; // rdx
  __int64 v28; // r15
  __int64 v29; // rax
  const char *v30; // rax
  _WORD *v31; // rdi
  size_t v32; // rdx
  size_t v33; // rcx
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  __m128i *v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rsi
  char *v39; // r8
  __int64 v40; // r9
  char *v41; // rdi
  char *v42; // rax
  char *v43; // rax
  char *v44; // rcx
  char *v45; // rax
  char *v47; // r12
  const void *v48; // rsi
  char v49; // dl
  __int64 v50; // rsi
  char *v51; // r8
  __int64 v52; // r9
  char *v53; // rdi
  char *v54; // rax
  char *v55; // rax
  char *v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  __m128i si128; // xmm0
  __m128i v60; // xmm0
  unsigned __int64 v61; // rdx
  __m128i v62; // xmm0
  __int64 v64; // [rsp+8h] [rbp-180h]
  size_t v65; // [rsp+8h] [rbp-180h]
  unsigned int v66; // [rsp+18h] [rbp-170h]
  void *v68; // [rsp+30h] [rbp-158h] BYREF
  __int64 v69; // [rsp+38h] [rbp-150h]
  int v70; // [rsp+40h] [rbp-148h]
  char v71; // [rsp+44h] [rbp-144h]
  char v72; // [rsp+48h] [rbp-140h] BYREF
  void *v73; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v74; // [rsp+98h] [rbp-F0h]
  int v75; // [rsp+A0h] [rbp-E8h]
  char v76; // [rsp+A4h] [rbp-E4h]
  char v77; // [rsp+A8h] [rbp-E0h] BYREF
  void *ptr; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v79; // [rsp+F8h] [rbp-90h]
  int v80; // [rsp+100h] [rbp-88h]
  char v81; // [rsp+104h] [rbp-84h]
  char v82; // [rsp+108h] [rbp-80h] BYREF

  v3 = *a1;
  v68 = &v72;
  v73 = &v77;
  ptr = &v82;
  v4 = a1[1];
  v70 = 0;
  v69 = 8;
  v71 = 1;
  v74 = 8;
  v75 = 0;
  v76 = 1;
  v79 = 8;
  v80 = 0;
  v81 = 1;
  v66 = 0;
  if ( (v4 - v3) >> 5 == a2 )
    goto LABEL_57;
  v5 = a2;
  v7 = v3;
  v8 = a2;
  do
  {
    v9 = 32 * v8;
    v10 = v7 + v9;
    v11 = (*(_BYTE *)(v7 + v9 + 16) >> 3) & 3;
    if ( v11 )
    {
      if ( v11 != 1 )
      {
        v12 = 0;
        if ( v11 == 2 )
          v12 = *(_QWORD *)(v10 + 8);
        v13 = v81;
        if ( !v81 )
          goto LABEL_60;
        v14 = (char *)ptr;
        v15 = 8LL * HIDWORD(v79);
        v16 = (char *)ptr + v15;
        if ( ptr != (char *)ptr + v15 )
        {
          v17 = (char *)ptr;
          if ( v12 == *(_QWORD *)ptr )
          {
LABEL_76:
            v13 = 0;
            goto LABEL_15;
          }
          while ( 1 )
          {
            v17 += 8;
            if ( v16 == v17 )
              break;
            if ( v12 == *(_QWORD *)v17 )
              goto LABEL_76;
          }
        }
        if ( HIDWORD(v79) < (unsigned int)v79 )
        {
          ++HIDWORD(v79);
          *(_QWORD *)v16 = v12;
          v14 = (char *)ptr;
          v17 = (char *)ptr + v15;
        }
        else
        {
LABEL_60:
          v17 = (char *)sub_2236760(&ptr, v12);
          v10 = v7 + v9;
          v14 = (char *)ptr;
          if ( !v81 )
          {
            v18 = (unsigned int)v79;
            v19 = (char *)ptr + 8 * (unsigned int)v79;
            goto LABEL_16;
          }
        }
LABEL_15:
        v18 = HIDWORD(v79);
        v19 = &v14[8 * HIDWORD(v79)];
LABEL_16:
        if ( v19 != v17 && *(_QWORD *)v17 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v20 = v17 + 8;
          do
          {
            v21 = v20;
            if ( v20 == v19 )
              break;
            v20 += 8;
          }
          while ( *(_QWORD *)v21 >= 0xFFFFFFFFFFFFFFFELL );
        }
        goto LABEL_21;
      }
      v50 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL);
      v13 = v76;
      if ( v76 )
      {
        v51 = (char *)v73;
        v52 = 8LL * HIDWORD(v74);
        v53 = (char *)v73 + v52;
        if ( v73 != (char *)v73 + v52 )
        {
          v54 = (char *)v73;
          if ( v50 == *(_QWORD *)v73 )
          {
LABEL_101:
            v13 = 0;
            goto LABEL_102;
          }
          while ( 1 )
          {
            v54 += 8;
            if ( v53 == v54 )
              break;
            if ( v50 == *(_QWORD *)v54 )
              goto LABEL_101;
          }
        }
        if ( HIDWORD(v74) < (unsigned int)v74 )
        {
          ++HIDWORD(v74);
          *(_QWORD *)v53 = v50;
          v18 = HIDWORD(v74);
          v54 = (char *)v73 + v52;
          v19 = (char *)v73 + 8 * HIDWORD(v74);
          goto LABEL_88;
        }
      }
      v54 = (char *)sub_2236760(&v73, v50);
      v10 = v7 + v9;
      v51 = (char *)v73;
      if ( !v76 )
      {
        v18 = (unsigned int)v74;
        v19 = (char *)v73 + 8 * (unsigned int)v74;
LABEL_88:
        if ( v19 != v54 && *(_QWORD *)v54 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v55 = v54 + 8;
          do
          {
            v56 = v55;
            if ( v19 == v55 )
              break;
            v55 += 8;
          }
          while ( *(_QWORD *)v56 >= 0xFFFFFFFFFFFFFFFELL );
        }
LABEL_21:
        if ( v13 )
          goto LABEL_51;
        goto LABEL_22;
      }
LABEL_102:
      v18 = HIDWORD(v74);
      v19 = &v51[8 * HIDWORD(v74)];
      goto LABEL_88;
    }
    v38 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL);
    v13 = v71;
    if ( v71 )
    {
      v39 = (char *)v68;
      v40 = 8LL * HIDWORD(v69);
      v41 = (char *)v68 + v40;
      if ( v68 != (char *)v68 + v40 )
      {
        v42 = (char *)v68;
        if ( v38 == *(_QWORD *)v68 )
        {
LABEL_77:
          v13 = 0;
LABEL_78:
          v18 = HIDWORD(v69);
          v19 = &v39[8 * HIDWORD(v69)];
          goto LABEL_45;
        }
        while ( 1 )
        {
          v42 += 8;
          if ( v41 == v42 )
            break;
          if ( v38 == *(_QWORD *)v42 )
            goto LABEL_77;
        }
      }
      if ( HIDWORD(v69) < (unsigned int)v69 )
      {
        ++HIDWORD(v69);
        *(_QWORD *)v41 = v38;
        v18 = HIDWORD(v69);
        v42 = (char *)v68 + v40;
        v19 = (char *)v68 + 8 * HIDWORD(v69);
        goto LABEL_45;
      }
    }
    v42 = (char *)sub_2236760(&v68, v38);
    v39 = (char *)v68;
    v10 = v7 + v9;
    if ( v71 )
      goto LABEL_78;
    v18 = (unsigned int)v69;
    v19 = (char *)v68 + 8 * (unsigned int)v69;
LABEL_45:
    if ( v19 == v42 || *(_QWORD *)v42 < 0xFFFFFFFFFFFFFFFELL )
      goto LABEL_21;
    v43 = v42 + 8;
    while ( 1 )
    {
      v44 = v43;
      if ( v43 == v19 )
        break;
      v43 += 8;
      if ( *(_QWORD *)v44 < 0xFFFFFFFFFFFFFFFELL )
        goto LABEL_21;
    }
    if ( v13 )
    {
LABEL_51:
      v8 = v5 + 1;
      v7 = *a1;
      v45 = (char *)a1[1];
      ++v5;
      continue;
    }
LABEL_22:
    v22 = *(_BYTE *)(v10 + 16);
    v8 = v5;
    if ( (v22 & 7) == 0 )
      goto LABEL_23;
    v7 = *a1;
    v23 = a2;
    v49 = (v22 >> 3) & 3;
    if ( v49 == 2 )
    {
      while ( 1 )
      {
        v24 = 32LL * v23;
        v19 = (char *)(v7 + v24);
        if ( ((*(_BYTE *)(v7 + v24 + 16) >> 3) & 3) == 2 && *(_QWORD *)(v10 + 8) == *((_QWORD *)v19 + 1) )
          break;
        ++v23;
      }
    }
    else if ( v49 )
    {
      if ( v49 == 1 )
      {
        while ( 1 )
        {
          v24 = 32LL * v23;
          v19 = (char *)(v7 + v24);
          if ( ((*(_BYTE *)(v7 + v24 + 16) >> 3) & 3) == 1
            && *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL) == *(_QWORD *)(*((_QWORD *)v19 + 1) + 8LL) )
          {
            break;
          }
          ++v23;
        }
      }
      else
      {
        while ( 1 )
        {
          v24 = 32LL * v23;
          v19 = (char *)(v7 + v24);
          if ( v49 == ((*(_BYTE *)(v7 + v24 + 16) >> 3) & 3) )
            break;
          ++v23;
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v24 = 32LL * v23;
        v19 = (char *)(v7 + v24);
        if ( (*(_BYTE *)(v7 + v24 + 16) & 0x18) == 0
          && *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL) == *(_QWORD *)(*((_QWORD *)v19 + 1) + 8LL) )
        {
          break;
        }
        ++v23;
      }
    }
    if ( (v19[16] & 7) != 0 )
    {
LABEL_23:
      v23 = v5;
      v24 = 32LL * v5;
      if ( !a3 )
        goto LABEL_62;
    }
    else if ( !a3 )
    {
      if ( v5 == v23 )
        goto LABEL_63;
      goto LABEL_74;
    }
    v64 = v10;
    v25 = sub_227D6D0(v19, v18);
    v26 = v64;
    v27 = *(__m128i **)(v25 + 32);
    v28 = v25;
    if ( *(_QWORD *)(v25 + 24) - (_QWORD)v27 > 0x1Du )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA490);
      qmemcpy(&v27[1], "te directory \"", 14);
      *v27 = si128;
      *(_QWORD *)(v25 + 32) += 30LL;
    }
    else
    {
      v18 = (unsigned __int64)"ignoring duplicate directory \"";
      v29 = sub_227BF10(v25, "ignoring duplicate directory \"", 30);
      v26 = v64;
      v28 = v29;
    }
    v30 = sub_13C04B0(v26 + 8);
    v31 = *(_WORD **)(v28 + 32);
    v33 = v32;
    v34 = *(_QWORD *)(v28 + 24) - (_QWORD)v31;
    if ( v34 < v33 )
    {
      v18 = (unsigned __int64)v30;
      v57 = sub_227BF10(v28, v30, v33);
      v31 = *(_WORD **)(v57 + 32);
      v28 = v57;
      if ( *(_QWORD *)(v57 + 24) - (_QWORD)v31 <= 1u )
        goto LABEL_30;
    }
    else
    {
      if ( v33 )
      {
        v18 = (unsigned __int64)v30;
        v65 = v33;
        memcpy(v31, v30, v33);
        v58 = *(_QWORD *)(v28 + 24);
        v31 = (_WORD *)(*(_QWORD *)(v28 + 32) + v65);
        *(_QWORD *)(v28 + 32) = v31;
        v34 = v58 - (_QWORD)v31;
      }
      if ( v34 <= 1 )
      {
LABEL_30:
        v18 = (unsigned __int64)"\"\n";
        v31 = (_WORD *)v28;
        sub_227BF10(v28, "\"\n", 2);
        goto LABEL_31;
      }
    }
    *v31 = 2594;
    *(_QWORD *)(v28 + 32) += 2LL;
LABEL_31:
    if ( v5 == v23 )
    {
LABEL_62:
      v7 = *a1;
      v19 = (char *)(*a1 + v24);
      goto LABEL_63;
    }
    v35 = sub_227D6D0(v31, v18);
    v36 = *(__m128i **)(v35 + 32);
    if ( *(_QWORD *)(v35 + 24) - (_QWORD)v36 > 0x31u )
    {
      v60 = _mm_load_si128((const __m128i *)&xmmword_23AA4A0);
      v36[3].m128i_i16[0] = 8307;
      *v36 = v60;
      v36[1] = _mm_load_si128((const __m128i *)&xmmword_23AA4B0);
      v36[2] = _mm_load_si128((const __m128i *)&xmmword_23AA4C0);
      v37 = *(_QWORD *)(v35 + 32) + 50LL;
      v61 = *(_QWORD *)(v35 + 24) - v37;
      *(_QWORD *)(v35 + 32) = v37;
      if ( v61 > 0x12 )
      {
LABEL_111:
        v62 = _mm_load_si128((const __m128i *)&xmmword_23AA4D0);
        *(_BYTE *)(v37 + 18) = 10;
        *(_WORD *)(v37 + 16) = 31090;
        *(__m128i *)v37 = v62;
        *(_QWORD *)(v35 + 32) += 19LL;
        goto LABEL_35;
      }
    }
    else
    {
      v35 = sub_227BF10(v35, "  as it is a non-system directory that duplicates ", 50);
      v37 = *(_QWORD *)(v35 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v35 + 24) - v37) > 0x12 )
        goto LABEL_111;
    }
    sub_227BF10(v35, "a system directory\n", 19);
LABEL_35:
    v7 = *a1;
    v19 = (char *)(*a1 + v24);
LABEL_74:
    ++v66;
LABEL_63:
    v47 = (char *)a1[1];
    v48 = v19 + 32;
    if ( v47 != v19 + 32 && v47 - (_BYTE *)v48 > 0 )
      memmove(v19, v48, v47 - (_BYTE *)v48);
    v45 = v47 - 32;
    a1[1] = (__int64)(v47 - 32);
  }
  while ( (__int64)&v45[-v7] >> 5 != v8 );
  if ( !v81 )
    free(ptr);
  if ( !v76 )
    free(v73);
LABEL_57:
  if ( !v71 )
    free(v68);
  return v66;
}
