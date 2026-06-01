__m128i *__fastcall sub_1BEC760(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        unsigned __int64 a10,
        unsigned __int8 a11)
{
  unsigned int v11; // r15d
  __int64 v13; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // bl
  __int64 v22; // r13
  unsigned __int8 v23; // al
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // r14
  unsigned __int64 v29; // rax
  __int64 v30; // r9
  unsigned __int64 v31; // rsi
  __int64 v32; // rcx
  _QWORD *v33; // r8
  __int64 v34; // rsi
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  __int64 v37; // rdi
  char v38; // r12
  int v39; // eax
  __int64 v40; // rcx
  char v41; // r15
  __int32 v42; // eax
  int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // r9
  unsigned __int64 v47; // r8
  __int64 v48; // rax
  char v49; // al
  void *v50; // r12
  unsigned __int64 v51; // rbx
  _QWORD *v52; // rdi
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  unsigned int v55; // ecx
  __int64 v56; // rdi
  __int64 v57; // rax
  unsigned int v58; // ecx
  unsigned int v59; // edi
  char v60; // al
  __int64 v61; // rdi
  unsigned __int64 v62; // [rsp+8h] [rbp-130h]
  int v63; // [rsp+10h] [rbp-128h]
  _QWORD *v64; // [rsp+10h] [rbp-128h]
  _QWORD *v65; // [rsp+18h] [rbp-120h]
  __int64 v66; // [rsp+18h] [rbp-120h]
  __int64 v67; // [rsp+28h] [rbp-110h] BYREF
  unsigned __int64 v68; // [rsp+38h] [rbp-100h] BYREF
  __int64 v69[4]; // [rsp+40h] [rbp-F8h] BYREF
  __m128i v70; // [rsp+60h] [rbp-D8h] BYREF
  unsigned __int64 v71; // [rsp+70h] [rbp-C8h]
  __int64 v72; // [rsp+78h] [rbp-C0h]
  void *ptr; // [rsp+80h] [rbp-B8h]
  unsigned __int64 v74; // [rsp+88h] [rbp-B0h]
  unsigned __int64 v75; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v76; // [rsp+98h] [rbp-A0h]

  v11 = a3;
  v13 = a2;
  v67 = a4;
  v16 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v16 + 16) == 42 || (v16 = sub_1BC7590(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4)) != 0 )
    v67 = *(_QWORD *)(v16 + 32);
  if ( !(unsigned __int8)sub_B981D0((_QWORD *)a6, a2) )
  {
    v25 = *(_QWORD *)(a9 + 48);
    if ( v25 )
    {
      v62 = v25 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v61 = *(_QWORD *)(a2 + 248);
      a2 = a9;
      v62 = sub_A7AA70(v61, a9, v17, v18, v19, v20);
    }
    v26 = *(_QWORD *)(a6 + 48) & 0xFFFFFFFFFFFFFFF0LL;
    v27 = *(_QWORD *)v26;
    if ( *(_BYTE *)(*(_QWORD *)v26 + 16LL) != 26 )
      v27 = sub_F63050(v27, a2, v17, v18);
    v28 = sub_A5DBE0(v27, a2, v17, v18, v19);
    if ( (*(_BYTE *)(a6 + 28) & 0x7F) == 0x24 || sub_B979F0((_QWORD *)a6) )
      v28 |= 5uLL;
    v29 = sub_A70F20(*(_QWORD *)(v13 + 248), v62, v28);
    v70.m128i_i32[0] = 6;
    v68 = v29;
    v71 = v71 & 0xFFFFF80400000000LL | 0x2000000000LL;
    v70.m128i_i64[1] = 0;
    v76 = 0;
    v31 = *(_QWORD *)&byte_8[v67 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v67 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v67) & 7;
    v32 = ((unsigned __int8)*(_QWORD *)&byte_8[v67 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v67) & 7;
    if ( ((*(_DWORD *)&byte_8[v29 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned int)v29) & 7) == (_DWORD)v32 )
    {
      v33 = (_QWORD *)(*(_QWORD *)&byte_8[v67 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      v46 = *(_QWORD *)(v13 + 248);
      v47 = *(_QWORD *)&byte_8[v67 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL;
      v48 = *(_QWORD *)&byte_8[v47];
      if ( (v48 & 8) != 0 && (*((_BYTE *)&qword_18 + (v48 & 0xFFFFFFFFFFFFFFF0LL)) & 8) != 0 )
      {
        v52 = *(_QWORD **)(v13 + 248);
        v66 = ((unsigned __int8)*(_QWORD *)&byte_8[v67 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v67) & 7;
        v69[0] = 0;
        v53 = sub_A725A0(v52, v31, v69, v32, v47);
        v69[0] &= ~8uLL;
        v54 = sub_A70F20((__int64)v52, v53, v69[0]);
        v47 = v31 & 0xFFFFFFFFFFFFFFF0LL;
        v32 = v66;
        v31 = v54;
        v46 = (__int64)v52;
      }
      v65 = (_QWORD *)v47;
      v63 = v32;
      v49 = sub_16A8D90((__int64 *)&v68, v31, v46, v32, v47);
      LODWORD(v32) = v63;
      v33 = v65;
      if ( !v49 )
        goto LABEL_38;
    }
    v34 = v33[1];
    if ( (v34 & 8) == 0 )
      goto LABEL_24;
    v34 = *(__int64 *)((char *)&qword_18 + (v33[1] & 0xFFFFFFFFFFFFFFF0LL)) | v33[1] & 7LL;
    v55 = v34 | v32;
    if ( (v55 & 0xFFFFFE00) == 0 )
      goto LABEL_24;
    LODWORD(v56) = 0;
    v57 = *(_QWORD *)&byte_8[v68 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v57 & 8) != 0 )
      v56 = *(__int64 *)((char *)&qword_18 + (v57 & 0xFFFFFFFFFFFFFFF0LL));
    v58 = v55 >> 9;
    v59 = (unsigned int)v56 >> 9;
    if ( v58 == v59 || (v34 = v58, v64 = v33, v60 = sub_F56A30(v59, v58, *(_QWORD *)(v13 + 248)), v33 = v64, v60) )
    {
LABEL_24:
      v35 = v62;
      v36 = *v33 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (*(_QWORD *)&byte_8[v62 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v62 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v62) & 7) == v36 )
      {
        v38 = 0;
      }
      else
      {
        v37 = v13;
        v34 = v11;
        v38 = 17;
        if ( !(unsigned __int8)sub_183BD10(v37, v11, v67, v62, (__int64)v33, v30)
          && !(unsigned __int8)sub_B981D0((_QWORD *)a6, v11) )
        {
          v50 = (void *)v67;
          v51 = v68;
          if ( (v70.m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != &v75 )
            free(ptr);
          LODWORD(v72) = 1;
          v70.m128i_i32[0] = v70.m128i_i32[0] & 0x80000000 | 5;
          goto LABEL_40;
        }
      }
      v39 = sub_1703830(a6, v34, v36, v35);
      if ( v39 == 1 )
      {
        v41 = a5 != 0;
        v42 = v70.m128i_i32[0] & 0x7FFFFFFF;
        if ( v28 != 1 && a5 )
        {
          v50 = (void *)v67;
          v51 = v68;
          if ( v42 == 3 && ptr != &v75 )
            free(ptr);
          LODWORD(v72) = 3;
          v70.m128i_i32[0] = v70.m128i_i32[0] & 0x80000000 | 5;
          goto LABEL_40;
        }
      }
      else if ( v39 == 2 )
      {
        v42 = v70.m128i_i32[0] & 0x7FFFFFFF;
        if ( !a5 )
        {
          v50 = (void *)v67;
          v51 = v68;
          if ( v42 == 3 && ptr != &v75 )
            free(ptr);
          LODWORD(v72) = 4;
          v70.m128i_i32[0] = v70.m128i_i32[0] & 0x80000000 | 5;
          goto LABEL_40;
        }
        v41 = 1;
      }
      else
      {
        v41 = a5 != 0;
        v42 = v70.m128i_i32[0] & 0x7FFFFFFF;
      }
      if ( v42 == 3 && ptr != &v75 )
        free(ptr);
      LOBYTE(v71) = 0;
      BYTE1(v71) = v38;
      v72 = v67;
      v70.m128i_i32[0] &= 0x80000000;
      ptr = (void *)v68;
      v74 = v68;
      v75 = v68;
      v76 = 0;
      v71 = v71 & 0xFFFFF8040000FFFFLL | 0x3800000000LL;
      v43 = sub_1703830(a6, v34, 0x3800000000LL, v40);
      LOBYTE(v43) = v43 != 2;
      BYTE4(v71) = (v41 << 7) | (32 * v43) | BYTE4(v71) & 0x5F;
      WORD2(v71) &= 0xFBBFu;
      v45 = sub_1703830(a6, v34, (unsigned int)(32 * v43), v44);
      BYTE5(v71) = (v45 == 0) | BYTE5(v71) & 0xFE;
      goto LABEL_12;
    }
LABEL_38:
    v50 = (void *)v67;
    v51 = v68;
    if ( (v70.m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != &v75 )
      free(ptr);
    LODWORD(v72) = 2;
    v70.m128i_i32[0] = v70.m128i_i32[0] & 0x80000000 | 5;
LABEL_40:
    v71 = 0;
    ptr = v50;
    v74 = v51;
    sub_1A0B340(a1, &v70);
    goto LABEL_13;
  }
  if ( (a10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    a10 = sub_B987D0((_QWORD *)a6, a2);
  v21 = (a5 == 1) + 1;
  if ( a5 >= 2u )
    v21 = 0;
  v22 = sub_C1BEF0((__int64)&v67, a2, v17, v18);
  LOWORD(v69[0]) = v69[0] & 0xFE00 | 0x1A;
  if ( unk_2CD7484 )
    sub_EE9B50(26);
  v69[1] = v22;
  v69[2] = 0;
  HIDWORD(v69[0]) = v11;
  BYTE1(v69[0]) = BYTE1(v69[0]) & 0xF9 | (2 * v21);
  *(_WORD *)((char *)v69 + 1) &= 0xF007u;
  v23 = sub_B62360((__int64)v69);
  BYTE1(v69[0]) = (v23 << 6) | BYTE1(v69[0]) & 0x3F;
  BYTE2(v69[0]) = BYTE2(v69[0]) & 0xF8 | (v23 >> 2) & 7;
  sub_1BEC520(&v70, a2, v69, a10, a11, 1u, a7, a8, 0, 0);
  if ( (v70.m128i_i32[0] & 0x7FFFFFFF) == 5 )
    v71 = 0;
LABEL_12:
  sub_1A0B340(a1, &v70);
LABEL_13:
  if ( (v70.m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != &v75 )
    free(ptr);
  return a1;
}
