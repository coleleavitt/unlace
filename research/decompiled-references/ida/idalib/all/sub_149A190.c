__m128i *__fastcall sub_149A190(const __m128i *a1, __int64 a2)
{
  __int64 v3; // rax
  __int32 v4; // edx
  __m128i v5; // xmm0
  __m128 v6; // xmm1
  __m128i v7; // xmm2
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  bool v10; // zf
  __int8 v11; // al
  __int16 v12; // dx
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int16 v16; // ax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128i *result; // rax
  __int64 v22; // rdi
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int16 v25; // cx
  unsigned __int16 v26; // cx
  __int16 v27; // ax
  __int32 v28; // r13d
  unsigned __int32 v29; // r14d
  unsigned __int8 *v30; // rax
  __int64 *v31; // rdi
  int v32; // ecx
  __int64 *v33; // r14
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // r13
  int v36; // eax
  int v37; // eax
  __int64 *v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int16 v42; // ax
  __int64 v43; // rdx
  __int16 v44; // ax
  const __m128i *v45; // rbx
  unsigned __int64 v46; // rbp
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  char *v49; // rdi
  char *v50; // rax
  __int64 *v51; // rbp
  __int64 *v52; // rbx
  __int64 *v53; // rdi
  __int64 *v54; // rdi
  int v55; // ecx
  __int64 *v56; // rdi
  __int16 v57; // ax
  __int64 v58; // rax
  int v59; // edx
  __int64 v60; // rax
  __int64 *v61; // rdi
  __int64 v62; // r13
  size_t v63; // rax
  __int64 *v64; // rdi
  int *m128i_i32; // [rsp+0h] [rbp-FD8h]
  unsigned __int8 *v66; // [rsp+10h] [rbp-FC8h]
  __int64 *v67; // [rsp+10h] [rbp-FC8h]
  unsigned __int32 v68; // [rsp+1Ch] [rbp-FBCh]
  __m128i *v70; // [rsp+30h] [rbp-FA8h] BYREF
  __int8 v71; // [rsp+38h] [rbp-FA0h]
  const __m128i *v72; // [rsp+40h] [rbp-F98h]
  int v73; // [rsp+48h] [rbp-F90h]
  __int16 v74; // [rsp+4Ch] [rbp-F8Ch]
  __int64 (__fastcall *v75)(__int64); // [rsp+50h] [rbp-F88h]
  __int64 v76; // [rsp+58h] [rbp-F80h]
  __int64 v77; // [rsp+60h] [rbp-F78h]
  __int64 v78; // [rsp+70h] [rbp-F68h] BYREF
  void *v79; // [rsp+78h] [rbp-F60h] BYREF
  __int64 v80; // [rsp+80h] [rbp-F58h]
  void *v81[2]; // [rsp+88h] [rbp-F50h] BYREF
  __int8 *v82; // [rsp+98h] [rbp-F40h] BYREF
  void *ptr; // [rsp+A0h] [rbp-F38h] BYREF
  __int64 v84; // [rsp+A8h] [rbp-F30h]
  _BYTE v85[16]; // [rsp+B0h] [rbp-F28h] BYREF
  const __m128i *v86; // [rsp+C0h] [rbp-F18h] BYREF
  __m128i v87; // [rsp+C8h] [rbp-F10h]
  __m128 v88; // [rsp+D8h] [rbp-F00h]
  __int64 v89; // [rsp+E8h] [rbp-EF0h]
  __m128i v90; // [rsp+F0h] [rbp-EE8h]
  __int32 v91; // [rsp+100h] [rbp-ED8h]
  unsigned __int64 v92; // [rsp+108h] [rbp-ED0h]
  __int32 v93; // [rsp+110h] [rbp-EC8h]
  __int16 v94; // [rsp+114h] [rbp-EC4h]
  char v95; // [rsp+116h] [rbp-EC2h]
  __int64 v96; // [rsp+120h] [rbp-EB8h] BYREF
  unsigned __int32 v97; // [rsp+128h] [rbp-EB0h]
  __int64 v98; // [rsp+130h] [rbp-EA8h]
  void *v99[2]; // [rsp+138h] [rbp-EA0h] BYREF
  _BYTE v100[16]; // [rsp+148h] [rbp-E90h] BYREF
  __int8 *v101; // [rsp+158h] [rbp-E80h] BYREF
  void *v102[2]; // [rsp+160h] [rbp-E78h] BYREF
  _BYTE v103[16]; // [rsp+170h] [rbp-E68h] BYREF
  char v104; // [rsp+180h] [rbp-E58h]
  __int32 v105; // [rsp+188h] [rbp-E50h]
  __int64 *v106; // [rsp+190h] [rbp-E48h] BYREF
  __int64 v107; // [rsp+198h] [rbp-E40h]
  _BYTE v108[3640]; // [rsp+1A0h] [rbp-E38h] BYREF

  v3 = a1[5].m128i_i64[0];
  v4 = a1[5].m128i_i32[2];
  v5 = _mm_loadu_si128(a1 + 3);
  v6 = (__m128)_mm_loadu_si128(a1 + 4);
  v86 = a1;
  v89 = v3;
  v7 = _mm_loadu_si128(a1 + 1);
  v91 = a1[2].m128i_i32[0];
  v8 = a1[169].m128i_u32[2];
  v87 = v5;
  v92 = v8;
  LOWORD(v8) = a1[5].m128i_i16[6];
  v9 = a1->m128i_i64[1];
  v88 = v6;
  v94 = v8;
  v90 = v7;
  v93 = v4;
  sub_1418D30(v9, 0);
  v10 = a1[2].m128i_i16[0] == 20;
  v70 = (__m128i *)&a1[122];
  v11 = a1[122].m128i_i8[0];
  v95 = 1;
  v71 = v11;
  a1[122].m128i_i8[0] = 1;
  v72 = a1;
  v73 = 1376276;
  v74 = 63;
  v75 = sub_14789E0;
  v76 = 0;
  v77 = 0;
  if ( v10 )
  {
    if ( (unsigned int)a1[5].m128i_u16[5] >= *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 144LL) )
    {
      sub_1568800(&v70);
      if ( !(unsigned int)sub_155CBC0(a1, 0, 0) )
        goto LABEL_5;
LABEL_71:
      sub_14A1D90(a1);
      goto LABEL_5;
    }
    LODWORD(v77) = sub_14789E0((__int64)a1);
  }
  if ( (unsigned int)sub_155CBC0(a1, 0, 0) )
    goto LABEL_71;
LABEL_5:
  v12 = a1[2].m128i_i16[0];
  if ( v12 != 5 && v12 != 27 )
    goto LABEL_11;
  v22 = a1->m128i_i64[1];
  v23 = *(_QWORD *)(v22 + 2944);
  if ( *(unsigned int *)(v22 + 2912) <= v23 )
  {
    v24 = sub_14180A0(v22, 1u);
    v12 = a1[2].m128i_i16[0];
  }
  else
  {
    v24 = *(_QWORD *)(v22 + 2904) + 24 * v23;
  }
  v25 = *(_WORD *)(v24 + 16);
  LOBYTE(v24) = v25 == 158;
  v26 = v25 - 5;
  if ( v26 <= 0x3Du )
    LODWORD(v24) = (0x2000000000418001uLL >> v26) & 1 | v24;
  if ( !(_BYTE)v24 )
  {
LABEL_11:
    if ( v12 != 21
      || ((v13 = a1->m128i_i64[1], v14 = *(_QWORD *)(v13 + 2944), v14 >= *(unsigned int *)(v13 + 2912))
        ? (v15 = sub_14180A0(v13, 1u))
        : (v15 = *(_QWORD *)(v13 + 2904) + 24 * v14),
          (v16 = *(_WORD *)(v15 + 16), v16 != 64) && v16 != 24) )
    {
      sub_147B460((__int64)&v86);
      sub_1499640(a1, a2, *(double *)v5.m128i_i64, v6, v17, v18, v19, v20);
      goto LABEL_13;
    }
    v12 = a1[2].m128i_i16[0];
  }
  v106 = (__int64 *)v108;
  v107 = 0x2000000000LL;
  if ( v12 == 21 )
  {
LABEL_102:
    v38 = (__int64 *)a1;
    sub_1564820(&v96, a1, a1[1].m128i_u32[0], 1967);
    sub_AEA040((__int64)&v96);
    goto LABEL_51;
  }
  v68 = 0;
  m128i_i32 = a1[1].m128i_i32;
  while ( 1 )
  {
    if ( (unsigned int)sub_155CBC0(a1, 0, 0) )
      sub_14A1D90(a1);
    v27 = a1[2].m128i_i16[0];
    v28 = 0;
    if ( v27 != 27 )
    {
      if ( v27 != 5 )
        goto LABEL_74;
      goto LABEL_25;
    }
    v55 = -((*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 2LL) & 2) == 0);
    LOBYTE(v55) = v55 & 0x6F;
    sub_1564840(&v96, a1, m128i_i32, (unsigned int)(v55 + 2105));
    sub_AEA040((__int64)&v96);
    if ( v68 )
      break;
    v28 = a1[1].m128i_i32[0];
    v56 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = v28;
    sub_14634E0(v56, m128i_i32);
    v68 = v28;
    if ( a1[2].m128i_i16[0] != 5 )
    {
LABEL_74:
      sub_1564840(&v96, a1, m128i_i32, 14);
      v38 = (_QWORD *)&byte_5;
      sub_AE9DF0((unsigned __int8 **)&v96, 5, 4u);
      sub_AEA040((__int64)&v96);
      v57 = a1[2].m128i_i16[0];
      goto LABEL_75;
    }
LABEL_25:
    v29 = a1[1].m128i_u32[0];
    v30 = (unsigned __int8 *)a1[1].m128i_i64[1];
    v31 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = v29;
    v66 = v30;
    sub_14634E0(v31, m128i_i32);
    if ( a1[2].m128i_i16[0] == 27 && !v68 )
    {
      sub_154FF40(a1, a1[1].m128i_u32[0], v29, v28 != 0, 1);
      v28 = a1[1].m128i_i32[0];
      v64 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = v28;
      sub_14634E0(v64, m128i_i32);
    }
    v78 = 0;
    v79 = v81;
    v82 = &a1[31].m128i_i8[8];
    v80 = 0x200000000LL;
    ptr = v85;
    v84 = 0x200000000LL;
    if ( (unsigned int)sub_155CBC0(a1, 0, 0) )
    {
      v32 = -((*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 2LL) & 2) == 0);
      LOBYTE(v32) = v32 & 0x72;
      sub_1564840(&v96, a1, m128i_i32, (unsigned int)(v32 + 2106));
      sub_AEA040((__int64)&v96);
      if ( (unsigned __int16)(a1[2].m128i_i16[0] - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
        sub_14AB020(a1, &v78);
    }
    v97 = v29;
    v99[1] = (void *)0x200000000LL;
    v96 = (__int64)v66;
    v98 = v78;
    v99[0] = v100;
    if ( (_DWORD)v80 )
      sub_147FF00((char ***)v99, (char ***)&v79);
    v102[1] = (void *)0x200000000LL;
    v101 = v82;
    v102[0] = v103;
    if ( (_DWORD)v84 )
      sub_147FF00((char ***)v102, (char ***)&ptr);
    v105 = v28;
    v33 = &v96;
    v104 = 1;
    v34 = (unsigned int)v107 + 1LL;
    v35 = (unsigned __int64)&v106[14 * (unsigned int)v107];
    if ( v34 > HIDWORD(v107) )
    {
      if ( v106 <= &v96 && v35 > (unsigned __int64)&v96 )
      {
        v67 = v106;
        sub_1499FD0((__int64)&v106, v34);
        v33 = (__int64 *)((char *)v106 + (char *)&v96 - (char *)v67);
        v35 = (unsigned __int64)&v106[14 * (unsigned int)v107];
      }
      else
      {
        sub_1499FD0((__int64)&v106, v34);
        v35 = (unsigned __int64)&v106[14 * (unsigned int)v107];
      }
    }
    *(_QWORD *)v35 = *v33;
    v36 = *((_DWORD *)v33 + 2);
    *(_BYTE *)(v35 + 96) = 0;
    *(_DWORD *)(v35 + 8) = v36;
    if ( *((_BYTE *)v33 + 96) )
    {
      v58 = v33[2];
      *(_QWORD *)(v35 + 32) = 0x200000000LL;
      *(_QWORD *)(v35 + 16) = v58;
      v59 = *((_DWORD *)v33 + 8);
      *(_QWORD *)(v35 + 24) = v35 + 40;
      if ( v59 )
        sub_147FF00((char ***)(v35 + 24), (char ***)v33 + 3);
      v60 = v33[7];
      *(_QWORD *)(v35 + 72) = 0x200000000LL;
      *(_QWORD *)(v35 + 56) = v60;
      *(_QWORD *)(v35 + 64) = v35 + 80;
      if ( *((_DWORD *)v33 + 18) )
        sub_147FF00((char ***)(v35 + 64), (char ***)v33 + 8);
      *(_BYTE *)(v35 + 96) = 1;
    }
    v37 = *((_DWORD *)v33 + 26);
    LODWORD(v107) = v107 + 1;
    *(_DWORD *)(v35 + 104) = v37;
    if ( v104 )
    {
      sub_15DCED0(v101, &v101);
      if ( v102[0] != v103 )
        free(v102[0]);
      if ( v99[0] != v100 )
        free(v99[0]);
    }
    v38 = (__int64 *)&v82;
    sub_15DCED0(v82, &v82);
    if ( ptr != v85 )
      free(ptr);
    if ( v79 != v81 )
      free(v79);
    v42 = a1[2].m128i_i16[0];
    v43 = (unsigned int)v107;
    if ( v42 == 21 )
      goto LABEL_50;
    if ( (_DWORD)v107 )
    {
      if ( v42 == 66 )
        goto LABEL_86;
      if ( v42 == 5 )
      {
        v62 = (unsigned int)sub_15658F0(a1);
        sub_1564820(&v96, a1, v62, 14);
        sub_AE9DF0((unsigned __int8 **)&v96, 66, 4u);
        v63 = j__strlen(",");
        sub_9EC740((__int64)&v78, v62, ",", v63, 0);
        if ( (_DWORD)v78 && HIDWORD(v78) )
          sub_1480470(&v96, (unsigned __int64)&v78);
        if ( v81[0] != &v82 )
          operator delete(v81[0]);
      }
      else
      {
        sub_1564840(&v96, a1, m128i_i32, 1610);
      }
      sub_AEA040((__int64)&v96);
      v38 = &v96;
      v96 = 0x1B000500420015LL;
      sub_15680D0(a1, &v96, 4, 3);
      v44 = a1[2].m128i_i16[0];
      if ( v44 == 66 )
      {
LABEL_86:
        v61 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v61, m128i_i32);
      }
      else if ( v44 == 21 )
      {
        goto LABEL_49;
      }
    }
  }
  sub_1564840(&v96, a1, m128i_i32, 1569);
  sub_AEA040((__int64)&v96);
  v38 = (__int64 *)a1;
  sub_1564820(&v96, a1, v68, 2054);
  sub_AEA040((__int64)&v96);
  v57 = a1[2].m128i_i16[0];
LABEL_75:
  if ( v57 != 21 )
  {
    sub_156E210(&v70);
    goto LABEL_52;
  }
LABEL_49:
  v43 = (unsigned int)v107;
LABEL_50:
  if ( !(_DWORD)v43 )
    goto LABEL_102;
LABEL_51:
  sub_14808E0((__int64)&v70, v38, v43, v39, v40, v41);
LABEL_52:
  v45 = v86;
  v46 = v92;
  v47 = v86[169].m128i_u32[2];
  if ( v92 != v47 )
  {
    if ( v92 < v47 )
    {
      v86[169].m128i_i32[2] = v92;
    }
    else
    {
      if ( v92 > v86[169].m128i_u32[3] )
      {
        sub_2237220(&v86[169], &v86[170], v92, 8);
        v47 = v45[169].m128i_u32[2];
      }
      v48 = v45[169].m128i_i64[0];
      v49 = (char *)(v48 + 8 * v47);
      v50 = (char *)(v48 + 8 * v46);
      if ( v49 != v50 )
        memset(v49, 0, 8 * ((unsigned __int64)(v50 - 8 - v49) >> 3) + 8);
      v45[169].m128i_i32[2] = v46;
      v45 = v86;
    }
  }
  sub_1417B70(v45->m128i_i64[1]);
  v95 = 0;
  sub_15B0B40(a2, (unsigned int)v77, v106, (unsigned int)v107, HIDWORD(v77));
  v51 = v106;
  v52 = &v106[14 * (unsigned int)v107];
  if ( v106 != v52 )
  {
    do
    {
      while ( 1 )
      {
        v52 -= 14;
        if ( *((_BYTE *)v52 + 96) )
        {
          sub_15DCED0(v52[7], v52 + 7);
          v53 = (__int64 *)v52[8];
          if ( v53 != v52 + 10 )
            free(v53);
          v54 = (__int64 *)v52[3];
          if ( v54 != v52 + 5 )
            break;
        }
        if ( v51 == v52 )
          goto LABEL_67;
      }
      free(v54);
    }
    while ( v51 != v52 );
LABEL_67:
    v52 = v106;
  }
  if ( v52 != (__int64 *)v108 )
    free(v52);
LABEL_13:
  result = v70;
  v70->m128i_i8[0] = v71;
  return result;
}
