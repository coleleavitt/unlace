char **__fastcall sub_1CB4750(char **a1, __int64 a2, unsigned __int64 a3, __m128 a4, double a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  __int64 v7; // rbx
  unsigned __int64 v8; // r14
  unsigned __int64 *v9; // rbx
  unsigned __int64 *v10; // r13
  __int64 v11; // rbp
  char *v12; // r15
  __int16 v13; // ax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 *v19; // r9
  __m128i v20; // rax
  __m128i v21; // xmm1
  _BYTE *v22; // r12
  __int64 v23; // rbx
  char *v24; // rsi
  char *v25; // rax
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // edi
  const char *v34; // rax
  size_t v35; // rdx
  size_t v36; // rbp
  const char *v37; // r13
  unsigned __int64 v38; // r13
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // r9
  unsigned __int64 v43; // r13
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v47; // [rsp+8h] [rbp-110h]
  unsigned __int64 v48; // [rsp+18h] [rbp-100h]
  __m128i v49; // [rsp+20h] [rbp-F8h] BYREF
  __int64 (__fastcall **v50)(); // [rsp+30h] [rbp-E8h] BYREF
  __m128i v51; // [rsp+38h] [rbp-E0h]
  void *src; // [rsp+50h] [rbp-C8h] BYREF
  size_t n; // [rsp+58h] [rbp-C0h]
  _BYTE v54[16]; // [rsp+60h] [rbp-B8h] BYREF
  void *ptr; // [rsp+70h] [rbp-A8h] BYREF
  __int64 i; // [rsp+78h] [rbp-A0h]
  _BYTE v57[32]; // [rsp+80h] [rbp-98h] BYREF
  __int64 (__fastcall **v58)(); // [rsp+A0h] [rbp-78h] BYREF
  int v59; // [rsp+A8h] [rbp-70h]
  __int128 v60; // [rsp+B0h] [rbp-68h]
  __int64 v61; // [rsp+C0h] [rbp-58h]
  char v62; // [rsp+C8h] [rbp-50h]
  int v63; // [rsp+CCh] [rbp-4Ch]
  void **p_src; // [rsp+D0h] [rbp-48h]

  v47 = a3;
  v5 = sub_BFBAE0(a3);
  if ( ((*(_WORD *)v5 + 394) & 0x1FFu) > 1 )
    goto LABEL_2;
  if ( ((*(_WORD *)(v5 + 2) >> 3) & 0x3F) != 0x14 )
    goto LABEL_2;
  v29 = sub_BFBAE0(*(_QWORD *)(v5 + 16));
  if ( ((*(_WORD *)v29 + 394) & 0x1FFu) > 1 )
    goto LABEL_2;
  if ( ((*(_WORD *)(v29 + 2) >> 3) & 0x3F) != 0xE )
    goto LABEL_2;
  if ( (**(_WORD **)(v29 + 24) & 0x1FF) != 0x34 )
    goto LABEL_2;
  v33 = *(_DWORD *)(v29 + 4);
  if ( v33 >= 0 )
    goto LABEL_2;
  v34 = sub_13DC120(
          v33,
          *(_QWORD *)(*(_QWORD *)(a2 + 240) + 88LL),
          *(_QWORD *)(*(_QWORD *)(a2 + 240) + 56LL),
          (__m128i)a4,
          a5,
          v30,
          v31,
          v32);
  v36 = v35;
  v37 = v34;
  if ( v35 != j__strlen("CONCEPT_REQUIRES") )
  {
    if ( v36 != j__strlen("CONCEPT_REQUIRES_") )
      goto LABEL_2;
    if ( !v36 )
      goto LABEL_45;
LABEL_44:
    if ( !memcmp(v37, "CONCEPT_REQUIRES_", v36) )
    {
LABEL_45:
      v47 = *(_QWORD *)(v5 + 24);
      goto LABEL_2;
    }
    goto LABEL_2;
  }
  if ( !v36 || !memcmp(v37, "CONCEPT_REQUIRES", v36) )
    goto LABEL_45;
  if ( v36 == j__strlen("CONCEPT_REQUIRES_") )
    goto LABEL_44;
LABEL_2:
  v6 = v47;
  v7 = 0;
  ptr = v57;
  for ( i = 0x400000000LL; ; LODWORD(i) = i + 1 )
  {
    v8 = sub_BFBAE0(v6);
    if ( ((*(_WORD *)v8 + 394) & 0x1FFu) > 1 || ((*(_WORD *)(v8 + 2) >> 3) & 0x3F) != 0x13 )
      break;
    v27 = *(_QWORD *)(v8 + 16);
    while ( 1 )
    {
      v28 = sub_BFBAE0(v27);
      if ( ((*(_WORD *)v28 + 394) & 0x1FFu) > 1 || ((*(_WORD *)(v28 + 2) >> 3) & 0x3F) != 0x13 )
        break;
      v38 = *(_QWORD *)(v28 + 16);
      while ( 1 )
      {
        v39 = sub_BFBAE0(v38);
        if ( ((*(_WORD *)v39 + 394) & 0x1FFu) > 1 || ((*(_WORD *)(v39 + 2) >> 3) & 0x3F) != 0x13 )
          break;
        v40 = *(_QWORD *)(v39 + 16);
        while ( 1 )
        {
          v48 = v39;
          v41 = sub_BFBAE0(v40);
          v42 = v48;
          v43 = v41;
          if ( ((*(_WORD *)v41 + 394) & 0x1FFu) > 1 || ((*(_WORD *)(v41 + 2) >> 3) & 0x3F) != 0x13 )
            break;
          sub_1CB0C90(*(_QWORD *)(v41 + 16), (__int64)&ptr);
          v40 = *(_QWORD *)(v43 + 24);
          v39 = v48;
        }
        v44 = (unsigned int)i;
        v45 = (unsigned int)i + 1LL;
        if ( v45 > HIDWORD(i) )
        {
          sub_2237220(&ptr, v57, v45, 8);
          v44 = (unsigned int)i;
          v42 = v48;
        }
        *((_QWORD *)ptr + v44) = v40;
        v38 = *(_QWORD *)(v42 + 24);
        v7 = (unsigned int)(i + 1);
        LODWORD(i) = i + 1;
      }
      if ( v7 + 1 > (unsigned __int64)HIDWORD(i) )
      {
        sub_2237220(&ptr, v57, v7 + 1, 8);
        v7 = (unsigned int)i;
      }
      *((_QWORD *)ptr + v7) = v38;
      v27 = *(_QWORD *)(v28 + 24);
      v7 = (unsigned int)(i + 1);
      LODWORD(i) = i + 1;
    }
    if ( v7 + 1 > (unsigned __int64)HIDWORD(i) )
    {
      sub_2237220(&ptr, v57, v7 + 1, 8);
      v7 = (unsigned int)i;
    }
    *((_QWORD *)ptr + v7) = v27;
    v6 = *(_QWORD *)(v8 + 24);
    v7 = (unsigned int)(i + 1);
  }
  if ( v7 + 1 > (unsigned __int64)HIDWORD(i) )
  {
    sub_2237220(&ptr, v57, v7 + 1, 8);
    v7 = (unsigned int)i;
  }
  *((_QWORD *)ptr + v7) = v6;
  v9 = (unsigned __int64 *)ptr;
  v10 = (unsigned __int64 *)((char *)ptr + 8 * (unsigned int)(i + 1));
  LODWORD(i) = i + 1;
  if ( ptr != v10 )
  {
    do
    {
      v11 = *v9;
      v12 = (char *)sub_BFBAE0(*v9);
      v13 = *(_WORD *)v12 & 0x1FF;
      if ( v13 != 115 && v13 != 52 )
      {
        sub_18C74E0(a2, 4, 0, 4);
        if ( (unsigned __int8)sub_C3D850(v11, &v58, *(_QWORD *)(a2 + 248), 0, v14, v15) && !(_BYTE)v58 )
        {
          sub_190D5E0(a2, a4);
          goto LABEL_14;
        }
        sub_190D5E0(a2, a4);
      }
      ++v9;
    }
    while ( v10 != v9 );
  }
  v12 = (char *)sub_BFBAE0(v47);
LABEL_14:
  v54[0] = 0;
  src = v54;
  v60 = 0;
  v62 = 0;
  v58 = &off_2BEBE68;
  n = 0;
  v59 = 0;
  v63 = 1;
  v61 = 0;
  p_src = &src;
  sub_227B8B0(&v58, 0, 0, 0);
  v20.m128i_i64[0] = sub_16043A0(*(_QWORD **)(a2 + 248), *(_QWORD **)(a2 + 240), v16, v17, v18, v19);
  v49 = v20;
  v49.m128i_i8[5] = v20.m128i_i8[5] | 1;
  v21 = _mm_load_si128(&v49);
  v50 = &off_2BE43D8;
  v51 = v21;
  sub_F07C00(v12, (__int64)&v58, (__int64)&v50, &v49, 0, 0, "\n", 1);
  v50 = &off_2BE43D8;
  nullsub_551();
  v58 = &off_2BEBE68;
  sub_227B7A0(&v58);
  v22 = src;
  v23 = n;
  v24 = (char *)src;
  v25 = (char *)(a1 + 3);
  *a1 = v12;
  a1[1] = (char *)(a1 + 3);
  if ( &v24[v23] && !v22 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v23 > 0xF )
  {
    if ( v23 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v25 = (char *)operator new(v23 + 1);
    a1[1] = v25;
    a1[3] = (char *)v23;
LABEL_28:
    memcpy(v25, v22, v23);
    v25 = a1[1];
    goto LABEL_19;
  }
  if ( v23 == 1 )
  {
    *((_BYTE *)a1 + 24) = *v22;
    goto LABEL_19;
  }
  if ( v23 )
    goto LABEL_28;
LABEL_19:
  a1[2] = (char *)v23;
  v25[v23] = 0;
  if ( src != v54 )
    operator delete(src);
  if ( ptr != v57 )
    free(ptr);
  return a1;
}
