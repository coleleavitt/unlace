__int64 __fastcall sub_14D1670(
        const __m128i *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned __int8 a5,
        char a6,
        __m128i a7,
        __m128 a8,
        char a9,
        char a10,
        __int32 *a11,
        __int64 a12)
{
  __int64 v12; // r15
  int v16; // edx
  unsigned int v17; // r14d
  __int64 v18; // rdi
  int *m128i_i32; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  char v22; // al
  __int32 v23; // eax
  __int64 *v24; // rdi
  char v25; // al
  size_t v26; // r15
  __int64 *v27; // rdi
  unsigned int v28; // r12d
  char v29; // al
  __int64 v30; // rax
  int v31; // eax
  __int32 v33; // eax
  __int64 *v34; // rdi
  unsigned __int32 v35; // r14d
  char v36; // r9
  unsigned int v37; // eax
  __int32 v38; // r8d
  __int32 v40; // r8d
  unsigned __int8 v41; // al
  __int64 v42; // rax
  __int64 v43; // r15
  __int64 v44; // rsi
  unsigned int v45; // edx
  unsigned int v46; // eax
  __int64 v47; // rax
  int v48; // ecx
  int v49; // edx
  __int32 v50; // eax
  __int64 *v51; // rdi
  int *v52; // rsi
  __int16 v53; // ax
  __int64 v54; // rdi
  unsigned __int64 v55; // rax
  __int64 v56; // rax
  unsigned __int16 v57; // bp
  char v58; // al
  size_t v59; // rbp
  __int64 *v60; // rdi
  unsigned int v61; // r12d
  __int32 v62; // r8d
  __int64 v63; // rax
  unsigned __int32 v64; // r15d
  __int32 v65; // eax
  __int64 v66; // rax
  int v67; // r12d
  __int64 v68; // rax
  __int8 v69; // al
  __int64 v70; // rdi
  unsigned __int64 v71; // rax
  __int64 v72; // rax
  size_t v73; // rax
  unsigned int v74; // [rsp+0h] [rbp-208h]
  char v75; // [rsp+0h] [rbp-208h]
  unsigned __int8 v76; // [rsp+8h] [rbp-200h]
  unsigned __int32 v77; // [rsp+8h] [rbp-200h]
  unsigned __int8 v78; // [rsp+8h] [rbp-200h]
  char v80; // [rsp+10h] [rbp-1F8h]
  unsigned __int16 v82; // [rsp+1Ch] [rbp-1ECh]
  char v83; // [rsp+1Ch] [rbp-1ECh]
  __int16 v84; // [rsp+1Ch] [rbp-1ECh]
  char v85; // [rsp+1Ch] [rbp-1ECh]
  char v86; // [rsp+1Ch] [rbp-1ECh]
  __int8 v87; // [rsp+1Ch] [rbp-1ECh]
  __int64 v88; // [rsp+20h] [rbp-1E8h] BYREF
  char v89; // [rsp+28h] [rbp-1E0h]
  __int64 v90; // [rsp+2Ch] [rbp-1DCh]
  char v91; // [rsp+34h] [rbp-1D4h]
  void *v92; // [rsp+38h] [rbp-1D0h]
  __int64 v93; // [rsp+40h] [rbp-1C8h]
  _BYTE v94[24]; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v95; // [rsp+60h] [rbp-1A8h] BYREF
  char v96; // [rsp+68h] [rbp-1A0h]
  __int64 v97; // [rsp+6Ch] [rbp-19Ch]
  char v98; // [rsp+74h] [rbp-194h]
  void *v99; // [rsp+78h] [rbp-190h]
  __int64 v100; // [rsp+80h] [rbp-188h]
  _BYTE v101[16]; // [rsp+88h] [rbp-180h] BYREF
  char v102; // [rsp+98h] [rbp-170h]
  __int64 v103[45]; // [rsp+A0h] [rbp-168h] BYREF

  v12 = a3;
  v16 = a1[2].m128i_u16[0];
  if ( !a11 )
  {
    if ( (_WORD)v16 != 146 )
    {
      v74 = 0;
      v17 = 0;
      goto LABEL_3;
    }
LABEL_45:
    v33 = a1[1].m128i_i32[0];
    v34 = (__int64 *)a1->m128i_i64[1];
    v85 = a6;
    a1[2].m128i_i32[2] = v33;
    sub_14634E0(v34, a1[1].m128i_i32);
    v35 = a1[2].m128i_u32[2];
    sub_1564820(v103, a1, v35, 1920);
    v97 = 0;
    v98 = 0;
    v36 = v85;
    v99 = v101;
    v100 = 0;
    v101[0] = 0;
    v102 = 0;
    LODWORD(v95) = v35;
    HIDWORD(v95) = v35;
    v96 = 1;
    if ( v35 )
    {
      sub_14C6E00(v103, (unsigned __int64)&v95);
      v36 = v85;
      if ( v99 != v101 )
      {
        operator delete(v99);
        v36 = v85;
      }
    }
    v86 = v36;
    v17 = 0;
    sub_AEA040((__int64)v103);
    v16 = a1[2].m128i_u16[0];
    a6 = v86;
    v74 = 0;
LABEL_3:
    if ( (_WORD)v16 != 5 )
      goto LABEL_4;
LABEL_18:
    m128i_i32 = a1[1].m128i_i32;
    goto LABEL_19;
  }
  v74 = 0;
  v17 = 0;
  *a11 = 0;
  if ( (_WORD)v16 != 146 )
    goto LABEL_3;
  if ( !a3 && !*(_QWORD *)(a2 + 8) )
    goto LABEL_45;
  v23 = a1[1].m128i_i32[0];
  v24 = (__int64 *)a1->m128i_i64[1];
  v83 = a6;
  v17 = 1;
  a1[2].m128i_i32[2] = v23;
  sub_14634E0(v24, a1[1].m128i_i32);
  v16 = a1[2].m128i_u16[0];
  v74 = 1;
  a6 = v83;
  *a11 = a1[2].m128i_i32[2];
  if ( (_WORD)v16 == 5 )
    goto LABEL_18;
LABEL_4:
  if ( (_WORD)v16 == 418 )
  {
    v42 = sub_1565590(a1, &a1[1]);
    v43 = v42;
    if ( !*(_DWORD *)(v42 + 32) || (v17 = *(unsigned __int8 *)(v42 + 48), (_BYTE)v17) )
    {
      v50 = a1[1].m128i_i32[1];
      v51 = (__int64 *)a1->m128i_i64[1];
      v52 = a1[1].m128i_i32;
      v17 = 1;
      if ( !v50 )
        v50 = a1[1].m128i_i32[0];
    }
    else
    {
      if ( a9
        && (v44 = *(_QWORD *)(v42 + 8)) != 0
        && (v76 = sub_183B910(a1[6].m128i_i64[0], v44, *(_QWORD *)(a1[6].m128i_i64[0] + 608), a2)) != 0 )
      {
        if ( *(_QWORD *)(a2 + 8) )
        {
          sub_1564820(v103, a1, *(unsigned int *)(v43 + 4), 1831);
          sub_AE9DF0((unsigned __int8 **)v103, *(_QWORD *)(v43 + 8), 5u);
          v45 = *(_DWORD *)(v43 + 36);
          v46 = *(_DWORD *)(v43 + 40);
          v97 = 0;
          v98 = 0;
          v99 = v101;
          v100 = 0;
          v101[0] = 0;
          v102 = 0;
          v95 = __PAIR64__(v46, v45);
          v96 = 1;
          if ( v46 )
          {
            if ( v45 )
            {
              sub_14C6E00(v103, (unsigned __int64)&v95);
              if ( v99 != v101 )
                operator delete(v99);
            }
          }
          sub_AEA040((__int64)v103);
          v47 = sub_19B9F10(
                  a1[6].m128i_i64[0],
                  *(_QWORD *)(v43 + 8),
                  *(unsigned int *)(v43 + 4),
                  *(_QWORD *)(a1[6].m128i_i64[0] + 608),
                  a2,
                  a5);
          if ( !v47 )
            return v76;
          v48 = *(_DWORD *)(v43 + 4);
          v49 = *(_DWORD *)(v43 + 40);
          *(_DWORD *)a12 = 4;
          *(_DWORD *)(a12 + 24) = v48;
          *(_DWORD *)(a12 + 28) = v49;
          *(_QWORD *)(a12 + 8) = v47;
        }
        else
        {
          sub_15AB740(a12, v43);
        }
      }
      else
      {
        sub_15AB720(a12, v43);
        v64 = *(_DWORD *)v43;
        if ( v64 )
        {
          if ( a11 && (a3 || *(_QWORD *)(a2 + 8)) )
          {
            *a11 = v64;
          }
          else
          {
            sub_1564820(v103, a1, v64, 1920);
            v97 = 0;
            v98 = 0;
            v99 = v101;
            v100 = 0;
            v101[0] = 0;
            v102 = 0;
            LODWORD(v95) = v64;
            HIDWORD(v95) = v64;
            v96 = 1;
            sub_14C6E00(v103, (unsigned __int64)&v95);
            if ( v99 != v101 )
              operator delete(v99);
            sub_AEA040((__int64)v103);
          }
        }
      }
      v50 = a1[1].m128i_i32[1];
      v51 = (__int64 *)a1->m128i_i64[1];
      v52 = a1[1].m128i_i32;
      if ( !v50 )
        v50 = a1[1].m128i_i32[0];
    }
    a1[2].m128i_i32[2] = v50;
    sub_14634E0(v51, v52);
    return v17;
  }
  if ( (_WORD)v16 == 140 )
  {
    v37 = sub_14CF100((__int64)a1, a2, a12, a7, a8);
    if ( (_BYTE)v37 )
      return v37;
    v103[0] = 0;
    if ( (*(_DWORD *)a12 & 0xFFFFFFFD) != 1 || a1[2].m128i_i16[0] != 47 )
    {
      if ( (_BYTE)v17 )
        LOBYTE(v17) = (unsigned int)sub_1CE5E60(a1[6].m128i_i64[0], a5, (__int64)v103, 1) == 0;
      return v17;
    }
    v38 = 0;
    if ( a11 )
      v38 = *a11;
    return (unsigned int)sub_14CCD30((__int64)a1, (void **)a2, a3, a4, v38, 0, 0, a5, (_DWORD *)a12, v74);
  }
  v18 = a1->m128i_i64[1];
  m128i_i32 = a1[1].m128i_i32;
  if ( (*(_BYTE *)(*(_QWORD *)(v18 + 56) + 1LL) & 8) != 0 && (a6 || *(_QWORD *)(a2 + 8)) && (_WORD)v16 == 40 )
  {
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0((__int64 *)v18, a1[1].m128i_i32);
    if ( (_BYTE)v17 )
    {
      sub_1564820(v103, a1, (unsigned int)*a11, 1919);
      v65 = a1[1].m128i_i32[0];
      v96 = 1;
      LODWORD(v95) = v65;
      HIDWORD(v95) = v65;
      sub_AEC610(v103, &v95);
      sub_AEA040((__int64)v103);
      return v17;
    }
    v77 = a1[2].m128i_u32[2];
    v53 = a1[2].m128i_i16[0];
    if ( (!*(_DWORD *)a2 || !*(_DWORD *)(a2 + 4)) && !*(_QWORD *)(a2 + 8) && v53 == 163 )
    {
      sub_147A4A0((__int64)v103, (__int64)&a1[31].m128i_i64[1]);
      v67 = sub_14A27E0((__int64)a1, (__int64)v103);
      v68 = sub_19A7E30(a1[6].m128i_i64[0], v103, a3);
      if ( v68 )
      {
        *(_DWORD *)a12 = 6;
        *(_DWORD *)(a12 + 24) = v77;
        *(_DWORD *)(a12 + 28) = v67;
        *(_QWORD *)(a12 + 8) = v68;
      }
      else
      {
        v17 = 1;
      }
      sub_147A5F0((__int64)v103);
      return v17;
    }
    if ( v53 != 5 )
    {
      v17 = 1;
      sub_1564840(v103, a1, &a1[1], 1588);
      sub_AEA040((__int64)v103);
      return v17;
    }
    v54 = a1->m128i_i64[1];
    v55 = *(_QWORD *)(v54 + 2944);
    if ( v55 >= *(unsigned int *)(v54 + 2912) )
      v56 = sub_14180A0(v54, 1u);
    else
      v56 = *(_QWORD *)(v54 + 2904) + 24 * v55;
    v80 = 0;
    v75 = 0;
    if ( *(_WORD *)(v56 + 16) != 72 )
      goto LABEL_92;
    v69 = a1[127].m128i_i8[8];
    a1[127].m128i_i8[8] = 0;
    v87 = v69;
    if ( *(_QWORD *)(a2 + 8) )
    {
      sub_15655A0(a1, a2, 1);
      *(_QWORD *)a2 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 24) = 0;
    }
    if ( !(unsigned __int8)sub_14D0170(a1, a2, a3, a4, a5, nullptr, a7, 0, nullptr, 0, 0, 0) )
    {
      if ( !*(_DWORD *)a2 || (v12 = 0, !*(_DWORD *)(a2 + 4)) )
      {
        v12 = 0;
        if ( !*(_QWORD *)(a2 + 8) )
          v12 = a3;
      }
      if ( a1[2].m128i_i16[0] == 5 )
      {
        v70 = a1->m128i_i64[1];
        v71 = *(_QWORD *)(v70 + 2944);
        v72 = v71 >= *(unsigned int *)(v70 + 2912) ? sub_14180A0(v70, 1u) : *(_QWORD *)(v70 + 2904) + 24 * v71;
        if ( *(_WORD *)(v72 + 16) != 72 && *(_QWORD *)(a2 + 8) )
        {
          sub_1564820(v103, a1, v77, 1589);
          v91 = 0;
          v90 = 0;
          v92 = v94;
          v93 = 0;
          v94[0] = 0;
          v94[16] = 0;
          LODWORD(v88) = v77;
          HIDWORD(v88) = v77;
          v89 = 1;
          if ( v77 )
            sub_14C6E00(v103, (unsigned __int64)&v88);
          v73 = j__strlen("~");
          sub_9EC740((__int64)&v95, a1[1].m128i_i32[0], "~", v73, 0);
          if ( (_DWORD)v95 && HIDWORD(v95) )
            sub_14C6E00(v103, (unsigned __int64)&v95);
          if ( v99 != v101 )
            operator delete(v99);
          if ( v92 != v94 )
            operator delete(v92);
          sub_AEA040((__int64)v103);
          v75 = 0;
          v80 = sub_169D7E0(a1[6].m128i_i64[0], *(_QWORD *)(a1[6].m128i_i64[0] + 608), a2);
          if ( v80 )
          {
            sub_1564E40(a1, 0);
            v75 = sub_16A2FF0(a1[6].m128i_i64[0], *(_QWORD *)(a1[6].m128i_i64[0] + 608), a2) ^ 1;
          }
          a1[127].m128i_i8[8] = v87;
LABEL_92:
          v57 = a1[2].m128i_u16[0];
          v58 = sub_141A630(v57);
          if ( v57 == 1 || v58 )
            v59 = 0;
          else
            v59 = a1[1].m128i_u64[1];
          v60 = (__int64 *)a1->m128i_i64[1];
          a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
          sub_14634E0(v60, a1[1].m128i_i32);
          v61 = a1[2].m128i_u32[2];
          if ( a1[2].m128i_i16[0] == 47 )
          {
            v62 = 0;
            *(_DWORD *)a12 = 6;
            *(_DWORD *)(a12 + 24) = v77;
            *(_DWORD *)(a12 + 28) = v61;
            *(_QWORD *)(a12 + 8) = 0;
            if ( a11 )
              v62 = *a11;
            v17 = sub_14CCD30((__int64)a1, (void **)a2, v12, a4, v62, v59, v61, a5, (_DWORD *)a12, 0);
          }
          else
          {
            v66 = sub_19BBC70(a1[6].m128i_i64[0], v59, v61, *(_QWORD *)(a1[6].m128i_i64[0] + 608), a2, v12, a5);
            if ( v66 )
            {
              *(_DWORD *)a12 = 6;
              *(_DWORD *)(a12 + 24) = v77;
              *(_DWORD *)(a12 + 28) = v61;
              *(_QWORD *)(a12 + 8) = v66;
            }
            else
            {
              v17 = 1;
            }
          }
          if ( v75 )
            sub_169D850(a1[6].m128i_i64[0], *(_QWORD *)(a1[6].m128i_i64[0] + 608), a2);
          if ( v80 )
            sub_1564F70(a1);
          return v17;
        }
      }
      sub_1564820(v103, a1, v77, 1589);
      sub_AEA040((__int64)v103);
    }
    v17 = 1;
    a1[127].m128i_i8[8] = v87;
    return v17;
  }
  if ( (unsigned int)(v16 - 258) > 0xF
    || ((v20 = *(_QWORD *)(v18 + 2944), v20 >= *(unsigned int *)(v18 + 2912))
      ? (v21 = sub_14180A0(v18, 1u))
      : (v21 = *(_QWORD *)(v18 + 2904) + 24 * v20),
        *(_WORD *)(v21 + 16) == 22) )
  {
    v17 = 1;
    sub_1564840(v103, a1, &a1[1], 1659);
    sub_AE9DF0((unsigned __int8 **)v103, (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 8) != 0, 3u);
    sub_AEA040((__int64)v103);
    return v17;
  }
  a1[2].m128i_i16[0] = 5;
  sub_1564840(v103, a1, &a1[1], 2001);
  v82 = a1[2].m128i_u16[0];
  v22 = sub_141A630(v82);
  if ( v82 == 1 || v22 )
    BUG();
  sub_AEC220(
    (unsigned __int8 **)v103,
    (_BYTE *)(*(_QWORD *)(a1[1].m128i_i64[1] + 16) + 16LL),
    **(unsigned int **)(a1[1].m128i_i64[1] + 16));
  sub_AE9DF0((unsigned __int8 **)v103, 0, 2u);
  sub_AEA040((__int64)v103);
  LOWORD(v16) = a1[2].m128i_i16[0];
LABEL_19:
  v84 = v16;
  v25 = sub_141A630((unsigned __int16)v16);
  if ( v84 == 1 || v25 )
    v26 = 0;
  else
    v26 = a1[1].m128i_u64[1];
  v27 = (__int64 *)a1->m128i_i64[1];
  a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
  sub_14634E0(v27, m128i_i32);
  v28 = a1[2].m128i_u32[2];
  v29 = *(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL);
  if ( (v29 & 8) == 0 )
  {
    v17 = 0;
    *(_DWORD *)a12 = 0;
    *(_QWORD *)(a12 + 8) = v26;
    *(_DWORD *)(a12 + 28) = v28;
    *(_DWORD *)(a12 + 24) = v28;
    return v17;
  }
  v88 = 0;
  if ( !a9 )
    goto LABEL_24;
  v41 = sub_183B910(a1[6].m128i_i64[0], v26, *(_QWORD *)(a1[6].m128i_i64[0] + 608), a2);
  if ( !v41 )
  {
    v29 = *(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL);
LABEL_24:
    if ( (v29 & 0x40) == 0
      || !a10
      || *(_DWORD *)a2 && *(_DWORD *)(a2 + 4)
      || *(_QWORD *)(a2 + 8)
      || !(unsigned __int8)sub_1CE5630(a1[6].m128i_i64[0]) )
    {
      *(_DWORD *)a12 = 0;
      *(_QWORD *)(a12 + 8) = v26;
      *(_DWORD *)(a12 + 28) = v28;
      *(_DWORD *)(a12 + 24) = v28;
    }
    else
    {
      *(_DWORD *)a12 = 9;
      v30 = v88;
      *(_DWORD *)(a12 + 28) = v28;
      *(_QWORD *)(a12 + 8) = v30;
      *(_DWORD *)(a12 + 24) = v28;
    }
    goto LABEL_32;
  }
  v78 = v41;
  v63 = sub_19B9F10(a1[6].m128i_i64[0], v26, v28, *(_QWORD *)(a1[6].m128i_i64[0] + 608), a2, a5);
  if ( !v63 )
    return v78;
  *(_DWORD *)a12 = 4;
  *(_DWORD *)(a12 + 24) = v28;
  *(_DWORD *)(a12 + 28) = v28;
  *(_QWORD *)(a12 + 8) = v63;
LABEL_32:
  v95 = 0;
  if ( a1[2].m128i_i16[0] == 47 )
  {
    v40 = 0;
    if ( a11 )
      v40 = *a11;
    return (unsigned int)sub_14CCD30((__int64)a1, (void **)a2, a3, a4, v40, v26, v28, a5, (_DWORD *)a12, v74);
  }
  if ( !(_BYTE)v17 )
    return 0;
  v31 = sub_1CE5E60(a1[6].m128i_i64[0], a5, (__int64)&v95, 1);
  if ( v31 )
  {
    if ( ((unsigned int)(v31 - 3) <= 1 || v31 == 1) && a1[2].m128i_i16[0] != 47 )
    {
      sub_1564820(v103, a1, v28, 2027);
      sub_AEA040((__int64)v103);
    }
    return 0;
  }
  return v17;
}
