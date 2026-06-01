unsigned __int64 __fastcall sub_1F18150(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r12
  __m128i si128; // xmm0
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rbx
  int v18; // r15d
  int v19; // r13d
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rbx
  __int64 v27; // r12
  __int64 v28; // rbx
  int v29; // r8d
  int v30; // r15d
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // r13
  __int64 v34; // rax
  __int64 v35; // r15
  int v36; // r15d
  __int64 v37; // r8
  unsigned __int64 v38; // rdx
  unsigned int v39; // r8d
  unsigned __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // r13
  __int64 v43; // rax
  int v44; // edx
  __int64 v45; // r14
  __int64 v46; // r8
  int v47; // r15d
  __int64 v48; // r11
  __int64 v49; // r10
  __int64 v50; // rax
  __int64 v51; // r9
  __int64 v52; // rdi
  __int64 v53; // rdx
  __int16 v54; // r11
  __int64 v55; // rcx
  __int16 v56; // cx
  __int16 v57; // ax
  __int16 v58; // ax
  void *v59; // rax
  __m128i v60; // xmm2
  unsigned __int64 v61; // rbx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rax
  int v68; // [rsp+10h] [rbp-2D8h]
  int v69; // [rsp+18h] [rbp-2D0h]
  void *v70; // [rsp+18h] [rbp-2D0h]
  void *v71; // [rsp+28h] [rbp-2C0h]
  __int64 v72; // [rsp+30h] [rbp-2B8h]
  __int16 v73; // [rsp+38h] [rbp-2B0h]
  __int64 v74; // [rsp+40h] [rbp-2A8h]
  bool v75; // [rsp+4Dh] [rbp-29Bh]
  bool v76; // [rsp+4Eh] [rbp-29Ah]
  bool v77; // [rsp+4Fh] [rbp-299h]
  __int64 *v78; // [rsp+50h] [rbp-298h]
  unsigned __int64 v79; // [rsp+58h] [rbp-290h]
  int v80; // [rsp+60h] [rbp-288h]
  int v81; // [rsp+68h] [rbp-280h]
  void *v82; // [rsp+68h] [rbp-280h]
  __int64 v83; // [rsp+70h] [rbp-278h]
  __int64 v84; // [rsp+80h] [rbp-268h]
  __int64 v85; // [rsp+88h] [rbp-260h]
  __int64 v86; // [rsp+90h] [rbp-258h]
  __int64 v87; // [rsp+98h] [rbp-250h]
  __int64 v88; // [rsp+A0h] [rbp-248h]
  __int64 v89; // [rsp+A8h] [rbp-240h]
  __m128i v90; // [rsp+B0h] [rbp-238h] BYREF
  __m128i v91; // [rsp+C0h] [rbp-228h] BYREF
  void *v92; // [rsp+D0h] [rbp-218h] BYREF
  __m128i v93; // [rsp+D8h] [rbp-210h]
  char v94[8]; // [rsp+E8h] [rbp-200h] BYREF
  void *v95; // [rsp+F0h] [rbp-1F8h] BYREF
  __m128i v96; // [rsp+F8h] [rbp-1F0h]
  _BYTE v97[16]; // [rsp+108h] [rbp-1E0h] BYREF
  __int64 v98; // [rsp+118h] [rbp-1D0h]
  __int64 v99; // [rsp+120h] [rbp-1C8h]
  void *v100[2]; // [rsp+140h] [rbp-1A8h] BYREF
  _BYTE v101[64]; // [rsp+150h] [rbp-198h] BYREF
  void *v102[2]; // [rsp+190h] [rbp-158h] BYREF
  _BYTE v103[64]; // [rsp+1A0h] [rbp-148h] BYREF
  void *ptr; // [rsp+1E0h] [rbp-108h] BYREF
  __int64 v105; // [rsp+1E8h] [rbp-100h]
  _BYTE v106[64]; // [rsp+1F0h] [rbp-F8h] BYREF
  __m128i v107; // [rsp+230h] [rbp-B8h] BYREF
  int v108; // [rsp+240h] [rbp-A8h]
  int v109; // [rsp+248h] [rbp-A0h]
  __int64 v110; // [rsp+250h] [rbp-98h]
  __int64 v111; // [rsp+258h] [rbp-90h]
  __int64 v112; // [rsp+260h] [rbp-88h]
  __int64 v113; // [rsp+268h] [rbp-80h]
  __int64 v114; // [rsp+270h] [rbp-78h]
  void *v115; // [rsp+278h] [rbp-70h]
  int v116; // [rsp+280h] [rbp-68h]
  __m128i v117; // [rsp+288h] [rbp-60h]
  __m128i v118; // [rsp+298h] [rbp-50h]

  v2 = *a1;
  v3 = *(_QWORD *)(v2 + 32);
  v4 = *(unsigned int *)(v2 + 24);
  v77 = *(_QWORD *)(v3 + 8 * v4) != 0;
  v72 = *(_QWORD *)v2;
  v5 = *(_DWORD *)(v2 + 24);
  v76 = *(_QWORD *)(v3 + 8LL * (unsigned int)(v4 + 1)) != 0;
  v6 = *(_QWORD *)(v3 + 8LL * (unsigned int)(v4 + 3));
  v75 = *(_QWORD *)(v3 + 8LL * (unsigned int)(v4 + 2)) != 0;
  v7 = *(_QWORD *)(v3 + 8LL * (unsigned int)(v4 + 4));
  v100[0] = v101;
  v8 = *(_QWORD *)(v3 + 8LL * (unsigned int)(v5 + 5));
  v74 = v6;
  v80 = v7;
  v100[1] = (void *)0x800000000LL;
  *(_DWORD *)(v2 + 24) = v4 + 6;
  v68 = v8;
  if ( (_DWORD)v8 == 2 )
  {
    v64 = sub_1F18050(v2, (unsigned int *)v100);
    v9 = *a1;
    v88 = 0;
    v98 = v64;
    v99 = v65;
    v86 = v64;
    v84 = v65;
    v87 = 0;
    v85 = 0;
  }
  else
  {
    v9 = v2;
    if ( (unsigned int)(v8 - 6) <= 2 )
    {
      v63 = sub_1F68F80(*(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 16));
      v9 = *a1;
      v88 = 0;
      v85 = v63;
      v87 = 0;
      v84 = 0;
      v86 = 0;
    }
    else if ( (_DWORD)v8 == 10 )
    {
      v87 = sub_1EE1670(v2);
      v66 = sub_1EE1670(v2);
      v9 = *a1;
      v85 = 0;
      v88 = v66;
      v84 = 0;
      v86 = 0;
    }
    else
    {
      if ( (_DWORD)v8 == 9 )
      {
        v67 = sub_1EE1670(v2);
        v9 = *a1;
        v88 = 0;
        v87 = v67;
      }
      else
      {
        v88 = 0;
        v87 = 0;
      }
      v85 = 0;
      v84 = 0;
      v86 = 0;
    }
  }
  v10 = 0;
  v102[0] = v103;
  v102[1] = (void *)0x800000000LL;
  v11 = sub_1F18050(v9, (unsigned int *)v102);
  v12 = *a1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
  v78 = (__int64 *)v11;
  v14 = *(unsigned int *)(*a1 + 24);
  v79 = v15;
  v93 = si128;
  *(_DWORD *)(v12 + 24) = v14 + 1;
  v16 = *(_QWORD *)(v12 + 32);
  v92 = v94;
  v17 = *(_QWORD *)(v16 + 8 * v14);
  v18 = v17;
  if ( (unsigned int)v17 > 8uLL )
  {
    sub_2236E10(&v92, v94, (unsigned int)v17, 1);
    v10 = v93.m128i_i64[0];
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
  }
  if ( (_DWORD)v17 )
  {
    v19 = 0;
    do
    {
      while ( 1 )
      {
        v20 = *(unsigned int *)(v12 + 24);
        *(_DWORD *)(v12 + 24) = v20 + 1;
        v21 = *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8 * v20);
        if ( (unsigned __int64)(v10 + 1) > v93.m128i_i64[1] )
          break;
        ++v19;
        *((_BYTE *)v92 + v10) = v21;
        v10 = ++v93.m128i_i64[0];
        if ( v18 == v19 )
          goto LABEL_14;
      }
      ++v19;
      sub_2236E10(&v92, v94, v10 + 1, 1);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
      *((_BYTE *)v92 + v93.m128i_i64[0]) = v21;
      v10 = ++v93.m128i_i64[0];
    }
    while ( v18 != v19 );
  }
LABEL_14:
  v22 = *a1;
  v23 = *(unsigned int *)(*a1 + 24);
  v24 = *(_QWORD *)(*a1 + 32);
  v71 = v92;
  v25 = *(_DWORD *)(*a1 + 24);
  v26 = *(_QWORD *)(v24 + 8 * v23);
  v96 = si128;
  v95 = v97;
  v27 = *(_QWORD *)(v24 + 8LL * (unsigned int)(v25 + 1));
  v73 = v26;
  v28 = 0;
  *(_DWORD *)(v22 + 24) = v23 + 2;
  v29 = v27;
  if ( (unsigned int)v27 > 8uLL )
  {
    sub_2236E10(&v95, v97, (unsigned int)v27, 1);
    v28 = v96.m128i_i64[0];
    v29 = v27;
  }
  if ( (_DWORD)v27 )
  {
    v30 = 0;
    do
    {
      while ( 1 )
      {
        v31 = *(unsigned int *)(v22 + 24);
        *(_DWORD *)(v22 + 24) = v31 + 1;
        v32 = *(_QWORD *)(*(_QWORD *)(v22 + 32) + 8 * v31);
        if ( (unsigned __int64)(v28 + 1) > v96.m128i_i64[1] )
          break;
        ++v30;
        *((_BYTE *)v95 + v28) = v32;
        v28 = ++v96.m128i_i64[0];
        if ( v29 == v30 )
          goto LABEL_21;
      }
      v81 = v29;
      ++v30;
      sub_2236E10(&v95, v97, v28 + 1, 1);
      v29 = v81;
      *((_BYTE *)v95 + v96.m128i_i64[0]) = v32;
      v28 = ++v96.m128i_i64[0];
    }
    while ( v81 != v30 );
  }
LABEL_21:
  v33 = *a1;
  v82 = v95;
  v105 = 0x800000000LL;
  v34 = *(unsigned int *)(v33 + 24);
  ptr = v106;
  *(_DWORD *)(v33 + 24) = v34 + 1;
  v35 = *(_QWORD *)(*(_QWORD *)(v33 + 32) + 8 * v34);
  v69 = v35;
  if ( (unsigned int)v35 <= 8uLL )
  {
    if ( (_DWORD)v35 )
      goto LABEL_23;
LABEL_52:
    v39 = v105;
    goto LABEL_27;
  }
  sub_2237220(&ptr, v106, (unsigned int)v35, 8);
  if ( !(_DWORD)v35 )
    goto LABEL_52;
LABEL_23:
  v36 = 0;
  do
  {
    v37 = sub_1F68F80(*(_QWORD *)(v33 + 8), *(_QWORD *)(v33 + 16));
    v38 = (unsigned int)v105 + 1LL;
    if ( v38 > HIDWORD(v105) )
    {
      v89 = v37;
      sub_2237220(&ptr, v106, v38, 8);
      *((_QWORD *)ptr + (unsigned int)v105) = v89;
    }
    else
    {
      *((_QWORD *)ptr + (unsigned int)v105) = v37;
    }
    ++v36;
    v39 = v105 + 1;
    LODWORD(v105) = v105 + 1;
  }
  while ( v69 != v36 );
LABEL_27:
  v70 = ptr;
  v83 = v39;
  v40 = sub_1F16500(*(_QWORD **)(*a1 + 8), *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  v41 = *a1;
  v42 = v40;
  v43 = *(unsigned int *)(*a1 + 24);
  v55 = *(_QWORD *)(*a1 + 32);
  v44 = *(_DWORD *)(*a1 + 24);
  v45 = *(_QWORD *)(v55 + 8 * v43);
  v46 = *(_QWORD *)(v55 + 8LL * (unsigned int)(v43 + 1));
  v47 = v44 + 8;
  v48 = *(_QWORD *)(v55 + 8LL * (unsigned int)(v44 + 3));
  v49 = *(_QWORD *)(v55 + 8LL * (unsigned int)(v44 + 4));
  v50 = *(_QWORD *)(v55 + 8LL * (unsigned int)(v44 + 2));
  v51 = *(_QWORD *)(v55 + 8LL * (unsigned int)(v44 + 5));
  v52 = *(_QWORD *)(v55 + 8LL * (unsigned int)(v44 + 6));
  v53 = *(_QWORD *)(v55 + 8LL * (unsigned int)(v44 + 7));
  *(_DWORD *)(v41 + 24) = v47;
  v54 = ((v45 != 0) << 6) | v48;
  BYTE1(v55) = HIBYTE(v54);
  if ( v49 )
  {
    LOBYTE(v55) = v54 | 0x80;
    v54 = v55;
  }
  LOBYTE(v56) = v54;
  if ( v51 )
  {
    HIBYTE(v56) = HIBYTE(v54) | 1;
    v54 = v56;
  }
  if ( v46 )
    v54 |= ((_WORD)v50 + 1) << 9;
  v116 = 0;
  LOBYTE(v57) = v54;
  v117 = 0u;
  if ( v52 )
  {
    HIBYTE(v57) = HIBYTE(v54) | 0x10;
    v54 = v57;
  }
  v118 = 0u;
  LOBYTE(v58) = v54;
  if ( v53 )
  {
    HIBYTE(v58) = HIBYTE(v54) | 0x20;
    v54 = v58;
  }
  v107.m128i_i16[0] = v54;
  v107.m128i_i8[2] = (4 * v75) | (2 * v76) & 0xFB | v77 & 0xFB | v107.m128i_i8[2] & 0xF8;
  v107.m128i_i64[1] = v74;
  v108 = v80;
  v109 = v68;
  v110 = v86;
  v111 = v84;
  v112 = v85;
  v113 = v87;
  v114 = v88;
  v59 = nullptr;
  if ( v10 )
    v59 = v71;
  v115 = v59;
  v107.m128i_i16[1] = (8 * (v73 & 0x1FF)) | v107.m128i_i16[1] & 0xF007;
  sub_F5FBD0(&v90, (__int64)v82, v28, (__int64)v70, v83);
  v60 = _mm_loadu_si128(&v91);
  v117 = _mm_loadu_si128(&v90);
  v118 = v60;
  v61 = sub_A73610(v72, v42, v78, v79, &v107, 0);
  if ( ptr != v106 )
    free(ptr);
  if ( v95 != v97 )
    free(v95);
  if ( v92 != v94 )
    free(v92);
  if ( v102[0] != v103 )
    free(v102[0]);
  if ( v100[0] != v101 )
    free(v100[0]);
  return v61;
}
