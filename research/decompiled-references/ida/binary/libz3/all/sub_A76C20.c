__int64 __fastcall sub_A76C20(__int64 a1, __int64 a2)
{
  char **exception; // r12
  _QWORD *v4; // r14
  __int64 v5; // rax
  unsigned int v6; // r12d
  __int64 v7; // rax
  _DWORD *v8; // rdi
  int v9; // edx
  _DWORD *v10; // rcx
  __int64 v11; // rdx
  _DWORD *v12; // rsi
  _DWORD *v13; // rax
  int v14; // edx
  _DWORD *v15; // rsi
  unsigned int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdi
  _QWORD *v24; // rax
  void *v25; // rbp
  int v27; // edx
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // ebp
  __m128i *v35; // rax
  __m128i *v36; // r13
  __m128i *v37; // rdx
  __m128i *v38; // rax
  __int64 v39; // rdx
  __m128i *v40; // rdi
  const __m128i *v41; // rax
  __int64 v42; // rbp
  __int64 v43; // rdx
  __m128i *v44; // rsi
  __m128i *v45; // rdx
  __int64 v46; // rbp
  unsigned int v47; // r15d
  char v48; // al
  char v49; // si
  int v50; // edi
  int v51; // ecx
  __int64 v52; // rcx
  char v53; // r11
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 *v56; // r13
  __int64 v57; // rbp
  __int64 v58; // rax
  unsigned int v59; // edx
  __int64 v60; // r15
  _QWORD *v61; // r8
  _QWORD *v62; // rdx
  unsigned int v63; // eax
  __int64 v64; // rcx
  int v65; // eax
  _QWORD *v66; // rcx
  _DWORD *v67; // r13
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rbp
  unsigned int v71; // ecx
  size_t v72; // rsi
  unsigned int *v73; // rax
  __int64 v74; // rbp
  __int64 v75; // rbp
  _QWORD *v76; // rdx
  __m128i *v77; // [rsp+0h] [rbp-A8h]
  unsigned int v78; // [rsp+0h] [rbp-A8h]
  __m128i *v79; // [rsp+8h] [rbp-A0h]
  unsigned int v80; // [rsp+8h] [rbp-A0h]
  _QWORD *v81; // [rsp+8h] [rbp-A0h]
  _QWORD *v82; // [rsp+8h] [rbp-A0h]
  void *v83; // [rsp+10h] [rbp-98h]
  void *v84; // [rsp+10h] [rbp-98h]
  unsigned int v85; // [rsp+10h] [rbp-98h]
  __int64 v86; // [rsp+20h] [rbp-88h] BYREF
  _QWORD *v87; // [rsp+28h] [rbp-80h] BYREF
  int v88[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v89; // [rsp+38h] [rbp-70h]
  __int64 v90; // [rsp+40h] [rbp-68h] BYREF
  __int64 v91; // [rsp+48h] [rbp-60h]
  char *v92; // [rsp+50h] [rbp-58h] BYREF
  __int64 v93; // [rsp+58h] [rbp-50h]
  int v94; // [rsp+60h] [rbp-48h] BYREF
  char v95; // [rsp+64h] [rbp-44h]
  __int64 v96; // [rsp+68h] [rbp-40h]

  v4 = *(_QWORD **)(a1 + 64);
  v90 = 1;
  *(_QWORD *)v88 = 0;
  v5 = *v4;
  v89 = 0;
  v91 = 0;
  v6 = sub_B67520(*(_QWORD *)(v5 + 16), a2);
  v7 = *((unsigned int *)v4 + 56);
  v8 = (_DWORD *)v4[27];
  v9 = v7 - 1;
  v7 *= 24;
  v10 = (_DWORD *)((char *)v8 + v7);
  v11 = 24LL * (v6 & v9);
  v12 = &v8[(unsigned __int64)v11 / 4];
  if ( v11 == v7 )
  {
LABEL_17:
    if ( v8 != v12 )
    {
      v13 = (_DWORD *)v4[27];
      while ( 1 )
      {
        v27 = v13[1];
        if ( v27 == 2 )
        {
          if ( v6 == *v13 && v6 == v13[2] )
            goto LABEL_8;
        }
        else if ( !v27 )
        {
          goto LABEL_12;
        }
        v13 += 6;
        if ( v12 == v13 )
          goto LABEL_12;
      }
    }
    goto LABEL_12;
  }
  v13 = &v8[(unsigned __int64)v11 / 4];
  while ( 1 )
  {
    v14 = v13[1];
    if ( v14 != 2 )
    {
      if ( !v14 )
        goto LABEL_12;
      goto LABEL_4;
    }
    if ( v6 == *v13 && v6 == v13[2] )
      break;
LABEL_4:
    v13 += 6;
    if ( v10 == v13 )
      goto LABEL_17;
  }
LABEL_8:
  v15 = v13 + 6;
  if ( v10 == v13 + 6 )
    v15 = (_DWORD *)v4[27];
  v16 = *((_DWORD *)v4 + 57) - 1;
  if ( !v15[1] )
  {
    v13[1] = 0;
    *((_DWORD *)v4 + 57) = v16;
    goto LABEL_12;
  }
  v13[1] = 1;
  v32 = *((_DWORD *)v4 + 58);
  *((_DWORD *)v4 + 57) = v16;
  v33 = v32 + 1;
  if ( v16 < 0x40 )
    v16 = 64;
  *((_DWORD *)v4 + 58) = v33;
  if ( v16 < v33 && !(unsigned __int8)sub_186AF10(v8) )
  {
    v34 = *((_DWORD *)v4 + 56);
    v35 = (__m128i *)sub_186B270(24LL * v34);
    v36 = v35;
    if ( v34 )
    {
      if ( v34 == 1 )
        goto LABEL_42;
      v37 = v35;
      v38 = &v35[3 * (v34 >> 1)];
      do
      {
        v37->m128i_i64[0] = 0;
        v37 += 3;
        v37[-2].m128i_i64[1] = 0;
      }
      while ( v37 != v38 );
      if ( (v34 & 1) != 0 )
      {
        v35 = (__m128i *)((char *)v36 + 24 * (v34 & 0xFFFFFFFE));
LABEL_42:
        v35->m128i_i64[0] = 0;
      }
    }
    v39 = *((unsigned int *)v4 + 56);
    v40 = (__m128i *)v4[27];
    v41 = v40;
    v42 = 24 * v39;
    LODWORD(v83) = v39 - 1;
    v77 = (__m128i *)((char *)v40 + 24 * v39);
    v79 = (__m128i *)((char *)v36 + 24 * v39);
    if ( v40 != v77 )
    {
      do
      {
        if ( v41->m128i_i32[1] == 2 )
        {
          v43 = 24LL * (v41->m128i_i32[0] & (unsigned int)v83);
          v44 = (__m128i *)((char *)v36 + v43);
          if ( v42 == v43 )
          {
LABEL_109:
            if ( v36 == v44 )
            {
LABEL_114:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v45 = v36;
            while ( v45->m128i_i32[1] )
            {
              v45 = (__m128i *)((char *)v45 + 24);
              if ( v44 == v45 )
                goto LABEL_114;
            }
          }
          else
          {
            v45 = (__m128i *)((char *)v36 + v43);
            while ( v45->m128i_i32[1] )
            {
              v45 = (__m128i *)((char *)v45 + 24);
              if ( v79 == v45 )
                goto LABEL_109;
            }
          }
          *v45 = _mm_loadu_si128(v41);
          v45[1].m128i_i64[0] = v41[1].m128i_i64[0];
        }
        v41 = (const __m128i *)((char *)v41 + 24);
      }
      while ( v77 != v41 );
      v40 = (__m128i *)v4[27];
    }
    if ( v40 )
      sub_186B220(v40);
    v4[27] = v36;
    *((_DWORD *)v4 + 58) = 0;
  }
LABEL_12:
  sub_8F1CE0(*(_QWORD *)(*v4 + 16LL), v6, *(_DWORD *)(*v4 + 8LL));
  if ( *(_WORD *)(a2 + 4) || (v21 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr || *v21 != 5 )
  {
LABEL_15:
    v22 = *v4;
    v86 = a2;
    v23 = *(_QWORD *)(v22 + 16);
    v24 = (_QWORD *)sub_180C100(v23 + 8400, 16);
    v24[1] = v4 + 23;
    *v24 = off_1C55478;
    v87 = v24;
    sub_A73EF0((_QWORD *)(v23 + 9456), &v87);
    sub_A74DF0(v4 + 23, &v86);
    goto LABEL_16;
  }
  if ( v21[1] != 2 || *(_DWORD *)(a2 + 24) != 2 )
  {
LABEL_26:
    if ( v21[1] == 3 && *(_DWORD *)(a2 + 24) == 2 )
    {
      v70 = *(_QWORD *)(a2 + 32);
      if ( (unsigned __int8)sub_16679C0((int)v4 + 16, *(_QWORD *)(a2 + 40), (int)v88, v18, v19, v20, v77, v79, v83)
        && !*(_WORD *)(v70 + 4) )
      {
        goto LABEL_83;
      }
      if ( *(_WORD *)(a2 + 4) )
        goto LABEL_15;
      v21 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( !v21 || *v21 != 5 )
        goto LABEL_15;
    }
    if ( v21[1] == 2 && *(_DWORD *)(a2 + 24) == 2 )
    {
      v75 = *(_QWORD *)(a2 + 40);
      if ( (unsigned __int8)sub_16679C0((int)v4 + 16, *(_QWORD *)(a2 + 32), (int)v88, v18, v19, v20, v77, v79, v83)
        && !*(_WORD *)(v75 + 4) )
      {
LABEL_83:
        v78 = sub_A986A0((_DWORD)v4);
        v47 = 0;
        goto LABEL_60;
      }
      if ( *(_WORD *)(a2 + 4) )
        goto LABEL_15;
      v21 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( !v21 || *v21 != 5 )
        goto LABEL_15;
    }
    if ( v21[1] == 3 && *(_DWORD *)(a2 + 24) == 2 )
    {
      v74 = *(_QWORD *)(a2 + 40);
      if ( (unsigned __int8)sub_16679C0((int)v4 + 16, *(_QWORD *)(a2 + 32), (int)v88, v18, v19, v20, v77, v79, v83)
        && !*(_WORD *)(v74 + 4) )
      {
        goto LABEL_59;
      }
      if ( *(_WORD *)(a2 + 4) )
        goto LABEL_15;
      v21 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( !v21 || *v21 != 5 )
        goto LABEL_15;
    }
    if ( v21[1] != 20 )
      goto LABEL_15;
    sub_A72EC0(v4, (unsigned int *)a2, v17, v18, v19, v20);
    if ( !(unsigned int)sub_8E7030(*(_QWORD *)(*v4 + 16LL)) )
      sub_A8A870((_DWORD)v4, a2, v28, v29, v30, v31, (_DWORD)v77, (_DWORD)v79, (_DWORD)v83);
    goto LABEL_16;
  }
  v46 = *(_QWORD *)(a2 + 32);
  if ( !(unsigned __int8)sub_16679C0((int)v4 + 16, *(_QWORD *)(a2 + 40), (int)v88, v18, v19, v20, v77, v79, v83)
    || *(_WORD *)(v46 + 4) )
  {
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_15;
    v21 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v21 || *v21 != 5 )
      goto LABEL_15;
    goto LABEL_26;
  }
LABEL_59:
  v78 = sub_A986A0((_DWORD)v4);
  v47 = 1;
LABEL_60:
  if ( (unsigned __int8)sub_A72E00(**(_QWORD **)(*(_QWORD *)(*v4 + 32LL) + 8LL * v78))
    && ((v90 & 0x100000000LL) != 0 || (_DWORD)v90 != 1) )
  {
    if ( v47 == 1 )
    {
      sub_992C20((__int64)&v92, (__int64)v88);
      v48 = v95;
      v50 = v94;
      v49 = v95 & 1;
    }
    else
    {
      BYTE4(v92) &= 0xFCu;
      v95 &= 0xFCu;
      LODWORD(v92) = 0;
      v93 = 0;
      v94 = 1;
      v96 = 0;
      v84 = qword_1C7F2C0;
      sub_1849700(qword_1C7F2C0, v88, &v92);
      sub_182CBA0(v84, &v94);
      v48 = v95;
      v49 = 0;
      v50 = 1;
    }
    v51 = (int)v92;
    LODWORD(v92) = v88[0];
    v88[0] = v51;
    v52 = v93;
    v93 = v89;
    v89 = v52;
    v53 = BYTE4(v92) & 1;
    LOBYTE(v52) = v88[1] & 0xFC | BYTE4(v92) & 2;
    BYTE4(v92) = v88[1] & 1 | BYTE4(v92) & 0xFC | v88[1] & 2;
    LOBYTE(v88[1]) = v53 | v52;
    v94 = v90;
    v54 = v91;
    v91 = v96;
    v96 = v54;
    LODWORD(v90) = v50;
    v95 = v48 & 0xFC | BYTE4(v90) & 3;
    BYTE4(v90) = BYTE4(v90) & 0xFC | v49 | v48 & 2;
    sub_25A130((char *)&v92);
  }
  v55 = sub_A8C0A0(v4, v6, v78, v47, v88);
  v56 = (__int64 *)(v4[30] + 8LL * v78);
  v57 = v55;
  v58 = *v56;
  if ( !*v56 || (v59 = *(_DWORD *)(v58 - 4), v59 == *(_DWORD *)(v58 - 8)) )
  {
    sub_A8E970(v56);
    v58 = *v56;
    v59 = *(_DWORD *)(*v56 - 4);
  }
  *(_QWORD *)(v58 + 8LL * v59) = v57;
  *(_DWORD *)(v58 - 4) = v59 + 1;
  v60 = *(_QWORD *)(*v4 + 16LL);
  v80 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*(_DWORD *)(v4[31] + 4LL * v78)));
  v61 = (_QWORD *)sub_180C100(v60 + 8400, 24);
  *v61 = off_1C55270;
  v61[1] = v4 + 31;
  v62 = *(_QWORD **)(v60 + 9456);
  v61[2] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v78), _mm_cvtsi32_si128(v80)).m128i_u64[0];
  if ( v62 )
  {
    v63 = *((_DWORD *)v62 - 1);
    if ( v63 == *((_DWORD *)v62 - 2) )
    {
      v71 = (3 * v63 + 1) >> 1;
      v72 = 8 * v71 + 8;
      if ( 8 * v63 + 8 >= (unsigned int)v72 || v63 >= v71 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_137C7A(&v92);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v92);
        sub_233E40((__int64)&v92);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v85 = (3 * v63 + 1) >> 1;
      v81 = v61;
      v73 = (unsigned int *)sub_186B300(v62 - 1, v72);
      v62 = v73 + 2;
      v61 = v81;
      *(_QWORD *)(v60 + 9456) = v73 + 2;
      *v73 = v85;
      LODWORD(v73) = v73[1];
      v66 = &v62[(unsigned int)v73];
      v65 = (_DWORD)v73 + 1;
    }
    else
    {
      v64 = v63;
      v65 = v63 + 1;
      v66 = &v62[v64];
    }
  }
  else
  {
    v82 = v61;
    v76 = (_QWORD *)sub_186B270(0x18u);
    *v76 = 2;
    v61 = v82;
    v65 = 1;
    v62 = v76 + 1;
    *(_QWORD *)(v60 + 9456) = v62;
    v66 = v62;
  }
  *v66 = v61;
  v67 = (_DWORD *)(v4[31] + 4LL * v78);
  *((_DWORD *)v62 - 1) = v65;
  v68 = v4[32];
  ++*v67;
  if ( !v68 || (v69 = *(unsigned int *)(v68 - 4), (_DWORD)v69 == *(_DWORD *)(v68 - 8)) )
  {
    sub_2FD3F0((unsigned int **)v4 + 32);
    v68 = v4[32];
    v69 = *(unsigned int *)(v68 - 4);
  }
  *(_DWORD *)(v68 + 4 * v69) = v78;
  ++*(_DWORD *)(v68 - 4);
  LODWORD(v92) = v6;
  v93 = v57;
  sub_A901E0(v4 + 27, &v92);
  sub_A8EA40((char)v4, v57);
LABEL_16:
  v25 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v88);
  sub_182CBA0(v25, &v90);
  return 1;
}

