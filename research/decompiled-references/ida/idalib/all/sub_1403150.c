__int64 __fastcall sub_1403150(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  __int64 v5; // rax
  __int64 v6; // r15
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  int v11; // ebp
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  _QWORD *v14; // r14
  unsigned __int32 v15; // ebp
  unsigned __int64 *v16; // r13
  int v17; // eax
  _QWORD *v18; // rdx
  _QWORD *v19; // rbx
  _QWORD *v20; // rbp
  unsigned __int64 v21; // rdi
  __int64 v22; // rdx
  unsigned __int64 v24; // rbp
  char *v25; // r13
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdx
  unsigned int v29; // ecx
  __int64 *v30; // rsi
  __int64 v31; // r9
  __int64 *v32; // r15
  _QWORD *v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  int v38; // edx
  int v39; // esi
  __int64 v40; // rbp
  __int64 i; // r13
  char *v42; // r13
  char *v43; // r15
  _QWORD *v44; // rdi
  __m128i v45; // xmm0
  unsigned __int8 *v46; // rax
  unsigned __int8 *v47; // rdx
  unsigned __int8 *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  void *v51; // rdi
  __m128i v52; // xmm4
  _QWORD *v53; // rdx
  __int64 j; // rax
  unsigned __int64 v55; // rax
  unsigned __int8 *v56; // rax
  unsigned __int8 *v57; // rdx
  unsigned __int8 *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  int v61; // r9d
  _QWORD *v62; // rdi
  __m128i v63; // xmm1
  unsigned __int8 *v64; // rax
  unsigned __int8 *v65; // rdx
  unsigned __int8 *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  __m128i si128; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v70; // [rsp+10h] [rbp-B8h]
  _QWORD *v71; // [rsp+18h] [rbp-B0h]
  void **p_ptr; // [rsp+20h] [rbp-A8h]
  _BYTE *v73; // [rsp+28h] [rbp-A0h]
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  __int64 v75; // [rsp+38h] [rbp-90h]
  _BYTE v76[16]; // [rsp+40h] [rbp-88h] BYREF
  void *v77; // [rsp+50h] [rbp-78h] BYREF
  __m128i v78; // [rsp+58h] [rbp-70h]
  _BYTE v79[96]; // [rsp+68h] [rbp-60h] BYREF

  v3 = a2;
  v70 = a3;
  v71 = (_QWORD *)a2;
  while ( 1 )
  {
    v5 = *(_QWORD *)(a2 + 8);
    if ( !v5 )
      break;
    a2 = v5 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v5 & 4) == 0 || !a2 )
      goto LABEL_5;
  }
  a2 = 0;
LABEL_5:
  sub_1402D90(a1, a2);
  v6 = *(unsigned int *)(a1 + 384);
  if ( (_DWORD)v6 )
  {
    v7 = *(_QWORD **)(a1 + 368);
    v8 = v3;
    while ( 1 )
    {
      v9 = *(_QWORD *)(v8 + 8);
      if ( !v9 )
      {
LABEL_10:
        v11 = -1916529075;
        goto LABEL_12;
      }
      v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v9 & 4) == 0 )
        break;
      v8 = v9 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v10 )
        goto LABEL_10;
    }
    v12 = HIDWORD(v10);
    v13 = 0x9DDFEA08EB382D69LL * (v12 ^ (((8 * v9) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
    v11 = -348639895
        * ((-348639895 * (v13 ^ v12 ^ (v13 >> 47)))
         ^ ((unsigned int)((0x9DDFEA08EB382D69LL * (v13 ^ v12 ^ (v13 >> 47))) >> 32) >> 15));
LABEL_12:
    si128.m128i_i32[0] = 1;
    v14 = v7;
    LODWORD(p_ptr) = v6 - 1;
    v15 = (v6 - 1) & v11;
    while ( 1 )
    {
      v16 = &v14[4 * v15];
      LOBYTE(v17) = sub_FEE490(v3, *v16);
      if ( (_BYTE)v17 )
        break;
      if ( sub_FEE490(*v16, 0xFFFFFFFFFFFFF000LL) )
        goto LABEL_31;
      v15 = (unsigned int)p_ptr & (si128.m128i_i32[0] + v15);
      ++si128.m128i_i32[0];
    }
    v18 = v14;
    LODWORD(v14) = v17;
    if ( v16 && v16 != &v18[4 * v6] )
    {
      v19 = (_QWORD *)v16[1];
      v20 = &v19[*((unsigned int *)v16 + 4)];
      if ( v19 != v20 )
      {
        if ( v70 )
        {
          while ( 1 )
          {
            if ( (*v19 & 7LL) != 4 )
            {
              v21 = *v19 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (*(_BYTE *)(v21 + 904) & 4) != 0 )
              {
                if ( (unsigned __int8)sub_FEEE10(v21, v70) )
                  break;
              }
            }
            if ( v20 == ++v19 )
              return (unsigned int)v14;
          }
        }
        else
        {
          while ( 1 )
          {
            v22 = *v19 & 7LL;
            if ( v22 != 4 && (*(_BYTE *)((*v19 & 0xFFFFFFFFFFFFFFF8LL) + 904) & 4) != 0 && v22 != 2 )
              break;
            if ( ++v19 == v20 )
              return (unsigned int)v14;
          }
        }
        LODWORD(v14) = 0;
      }
      return (unsigned int)v14;
    }
  }
LABEL_31:
  v14 = *(_QWORD **)(v3 + 16);
  p_ptr = &ptr;
  v75 = 0x200000000LL;
  v24 = *v14;
  v25 = (char *)(v14 + 4);
  ptr = v76;
  si128.m128i_i64[0] = a1 + 440;
  v73 = v76;
  while ( 1 )
  {
    v26 = *(unsigned int *)(a1 + 456);
    v27 = v14[1];
    v28 = *(_QWORD *)(a1 + 440);
    if ( (_DWORD)v26 )
    {
      v29 = (v26 - 1) & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
      v30 = (__int64 *)(v28 + 16LL * v29);
      v31 = *v30;
      if ( v27 == *v30 )
        goto LABEL_34;
      v39 = 1;
      if ( v31 != -4096 )
      {
        while ( 1 )
        {
          v61 = v39 + 1;
          v29 = (v26 - 1) & (v29 + v39);
          v30 = (__int64 *)(v28 + 16LL * v29);
          if ( v27 == *v30 )
            break;
          if ( *v30 == -4096 )
            goto LABEL_46;
          v39 = v61;
        }
LABEL_34:
        sub_13F9A40((__m128 *)&v77, v30, (_QWORD *)(16 * v26 + v28), si128.m128i_i64[0], 1);
        v32 = (__int64 *)v77;
        goto LABEL_35;
      }
    }
LABEL_46:
    sub_13F9A40(
      (__m128 *)&v77,
      (_QWORD *)(v28 + 16LL * (unsigned int)v26),
      (_QWORD *)(v28 + 16LL * (unsigned int)v26),
      si128.m128i_i64[0],
      1);
    v32 = (__int64 *)v77;
LABEL_35:
    v33 = (_QWORD *)(*(_QWORD *)(a1 + 440) + 16LL * *(unsigned int *)(a1 + 456));
    sub_13F9A40((__m128 *)&v77, v33, v33, si128.m128i_i64[0], 1);
    if ( v32 != v77 )
      break;
    v34 = (unsigned int)v75;
    v35 = (unsigned int)v75 + 1LL;
    if ( v35 > HIDWORD(v75) )
    {
      sub_2237220(p_ptr, v73, v35, 8);
      v34 = (unsigned int)v75;
    }
    *((_QWORD *)ptr + v34) = v14;
    LODWORD(v75) = v75 + 1;
    v25 = (char *)sub_228A4B0(v25, v24, 0);
    v24 = v36;
    if ( !v36 )
    {
      LODWORD(v14) = 0;
      goto LABEL_41;
    }
    sub_FD9440((__int64)&v77, *(_QWORD *)(*(_QWORD *)a1 + 16LL), v25, v36, 1);
    v37 = sub_A05D80(&v77);
    LODWORD(v14) = v38;
    if ( !(_BYTE)v38 )
    {
      sub_A04D70((__int64 *)&v77);
      goto LABEL_41;
    }
    v14 = (_QWORD *)v37;
    sub_A04D70((__int64 *)&v77);
    if ( !v14 )
      goto LABEL_41;
  }
  v40 = v32[1];
  if ( (*(_BYTE *)(v40 + 904) & 4) == 0 && (!v70 || (unsigned __int8)sub_FEEE10(v32[1], v70)) )
  {
LABEL_64:
    LODWORD(v14) = 1;
    goto LABEL_41;
  }
  for ( i = v40; !sub_FEF250(i) && *(_QWORD *)(i + 40); i = *(_QWORD *)(i + 40) )
    ;
  if ( (*(_BYTE *)(i + 905) & 2) == 0 )
  {
LABEL_75:
    LODWORD(v14) = 0;
    if ( (*(_BYTE *)(v40 + 904) & 4) != 0 )
      goto LABEL_41;
    if ( v70 )
    {
      LODWORD(v14) = sub_FEEE10(v40, v70);
      goto LABEL_41;
    }
    goto LABEL_64;
  }
  v42 = (char *)ptr;
  v43 = (char *)ptr + 8 * (unsigned int)v75;
  if ( ptr == v43 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
LABEL_68:
    v52 = _mm_load_si128(&si128);
    v53 = v71;
    v77 = v79;
    v78 = v52;
    for ( j = v71[1]; j; j = *(_QWORD *)(v55 + 8) )
    {
      if ( (j & 4) == 0 )
        break;
      v55 = j & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v55 )
        break;
      v53 = (_QWORD *)v55;
    }
    v56 = (unsigned __int8 *)sub_228AAA0(v53 + 4, *v53, 0);
    v58 = sub_13F4A30(v56, v57, (unsigned __int8 **)&v77);
    v60 = sub_13F8D70(a1, (__int64)v58, v59, v40);
    v51 = v77;
    v40 = v60;
    if ( !v60 )
    {
      LODWORD(v14) = 0;
      if ( v77 == v79 )
        goto LABEL_41;
LABEL_63:
      free(v51);
      goto LABEL_41;
    }
    if ( v77 != v79 )
      free(v77);
    goto LABEL_75;
  }
  if ( v70 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    while ( 1 )
    {
      v44 = *((_QWORD **)v43 - 1);
      v45 = _mm_load_si128(&si128);
      v77 = v79;
      v78 = v45;
      v46 = (unsigned __int8 *)sub_228AAA0(v44 + 4, *v44, 0);
      v48 = sub_13F4A30(v46, v47, (unsigned __int8 **)&v77);
      v50 = sub_13F8D70(a1, (__int64)v48, v49, v40);
      v40 = v50;
      if ( !v50 )
        break;
      if ( (*(_BYTE *)(v50 + 904) & 4) == 0 && (unsigned __int8)sub_FEEE10(v50, v70) )
        goto LABEL_61;
      if ( v77 == v79 )
      {
        v43 -= 8;
        if ( v42 == v43 )
          goto LABEL_68;
      }
      else
      {
        free(v77);
        v43 -= 8;
        if ( v42 == v43 )
          goto LABEL_68;
      }
    }
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    while ( 1 )
    {
      v62 = *((_QWORD **)v43 - 1);
      v63 = _mm_load_si128(&si128);
      v77 = v79;
      v78 = v63;
      v64 = (unsigned __int8 *)sub_228AAA0(v62 + 4, *v62, 0);
      v66 = sub_13F4A30(v64, v65, (unsigned __int8 **)&v77);
      v68 = sub_13F8D70(a1, (__int64)v66, v67, v40);
      v40 = v68;
      if ( !v68 )
        break;
      if ( (*(_BYTE *)(v68 + 904) & 4) == 0 )
      {
LABEL_61:
        LODWORD(v14) = 1;
        goto LABEL_62;
      }
      if ( v77 == v79 )
      {
        v43 -= 8;
        if ( v42 == v43 )
          goto LABEL_68;
      }
      else
      {
        free(v77);
        v43 -= 8;
        if ( v42 == v43 )
          goto LABEL_68;
      }
    }
  }
  LODWORD(v14) = 0;
LABEL_62:
  v51 = v77;
  if ( v77 != v79 )
    goto LABEL_63;
LABEL_41:
  if ( ptr != p_ptr + 2 )
    free(ptr);
  return (unsigned int)v14;
}
