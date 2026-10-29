void __fastcall sub_1740300(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  _QWORD *v6; // r13
  __int64 v7; // rcx
  char *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r15
  _BYTE *v11; // rsi
  signed __int64 v12; // r12
  _QWORD *v13; // rbp
  __int64 v14; // r14
  _BYTE *v15; // rax
  __int64 v16; // rax
  __int64 *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 (__fastcall *v21)(_QWORD); // rax
  __int64 v22; // rax
  void *v23; // rdx
  void *v24; // rcx
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 (__fastcall *v27)(_QWORD); // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  void *v30; // rcx
  char v31; // al
  __int64 v32; // rax
  __int64 v33; // r15
  _QWORD *v34; // rdi
  char v35; // r12
  int v36; // eax
  __m128i si128; // xmm0
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r13
  _QWORD *v43; // rbp
  _QWORD *v44; // rbx
  _QWORD *v45; // rdi
  _QWORD *v46; // rbp
  _QWORD *v47; // rbx
  _QWORD *v48; // rdi
  __m128 v49; // [rsp+0h] [rbp-138h] BYREF
  void *src; // [rsp+10h] [rbp-128h]
  __int64 v51; // [rsp+18h] [rbp-120h]
  __int64 v52; // [rsp+20h] [rbp-118h]
  int v53; // [rsp+2Ch] [rbp-10Ch]
  char *v54; // [rsp+30h] [rbp-108h]
  void *v55; // [rsp+38h] [rbp-100h]
  unsigned int v56[4]; // [rsp+40h] [rbp-F8h] BYREF
  int v57; // [rsp+50h] [rbp-E8h]
  __int64 v58; // [rsp+54h] [rbp-E4h]
  int v59; // [rsp+60h] [rbp-D8h]
  void *v60[2]; // [rsp+68h] [rbp-D0h]
  char *v61; // [rsp+78h] [rbp-C0h]
  char v62; // [rsp+80h] [rbp-B8h]
  __int64 v63; // [rsp+88h] [rbp-B0h]
  __int64 v64; // [rsp+90h] [rbp-A8h]
  __int64 v65; // [rsp+98h] [rbp-A0h]
  _BYTE v66[40]; // [rsp+A0h] [rbp-98h] BYREF
  void *v67; // [rsp+C8h] [rbp-70h]
  _QWORD *v68; // [rsp+D0h] [rbp-68h]

  v6 = (_QWORD *)a1[6];
  v49.m128_u64[0] = a4;
  v7 = a1[5];
  v51 = a2;
  v8 = (char *)v6 - v7;
  v52 = a3;
  v53 = a5;
  if ( ((__int64)v6 - v7) >> 6 )
  {
    if ( (unsigned __int64)(((__int64)v6 - v7) >> 6) > 0x3FFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v9 = operator new((unsigned __int64)v6 - v7);
    v6 = (_QWORD *)a1[6];
    v7 = a1[5];
    v10 = v9;
  }
  else
  {
    v10 = 0;
  }
  v54 = &v8[v10];
  if ( v6 != (_QWORD *)v7 )
  {
    *(_QWORD *)v10 = *(_QWORD *)v7;
    *(_DWORD *)(v10 + 8) = *(_DWORD *)(v7 + 8);
    *(_QWORD *)(v10 + 12) = *(_QWORD *)(v7 + 12);
    *(_DWORD *)(v10 + 20) = *(_DWORD *)(v7 + 20);
    *(_QWORD *)(v10 + 24) = v10 + 40;
    v11 = *(_BYTE **)(v7 + 24);
    v12 = *(_QWORD *)(v7 + 32);
    if ( &v11[v12] && !v11 )
LABEL_14:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v13 = (_QWORD *)(v7 + 64);
    v14 = v10;
    while ( (unsigned __int64)v12 <= 0xF )
    {
      v15 = *(_BYTE **)(v14 + 24);
      if ( v12 != 1 )
      {
        if ( !v12 )
          goto LABEL_11;
        goto LABEL_17;
      }
      *v15 = *v11;
      v15 = *(_BYTE **)(v14 + 24);
LABEL_11:
      *(_QWORD *)(v14 + 32) = v12;
      v14 += 64;
      v15[v12] = 0;
      *(_BYTE *)(v14 - 8) = *((_BYTE *)v13 - 8);
      if ( v6 == v13 )
        goto LABEL_21;
      v16 = *v13;
      v13 += 8;
      *(_QWORD *)v14 = v16;
      *(_DWORD *)(v14 + 8) = *((_DWORD *)v13 - 14);
      *(_QWORD *)(v14 + 12) = *(_QWORD *)((char *)v13 - 52);
      *(_DWORD *)(v14 + 20) = *((_DWORD *)v13 - 11);
      *(_QWORD *)(v14 + 24) = v14 + 40;
      v11 = (_BYTE *)*(v13 - 5);
      v12 = *(v13 - 4);
      if ( &v11[v12] && !v11 )
        goto LABEL_14;
    }
    if ( v12 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    src = v11;
    v15 = (_BYTE *)operator new(v12 + 1);
    *(_QWORD *)(v14 + 40) = v12;
    v11 = src;
    *(_QWORD *)(v14 + 24) = v15;
LABEL_17:
    memcpy(v15, v11, v12);
    v15 = *(_BYTE **)(v14 + 24);
    goto LABEL_11;
  }
  v14 = v10;
LABEL_21:
  v17 = (__int64 *)a1[3];
  v18 = a1[4];
  if ( !v49.m128_u64[0]
    || (*(_BYTE *)(v49.m128_u64[0] + 8) & 0x7Fu) - 59 > 2
    || (v19 = v49.m128_u64[0] - 64, v49.m128_u64[0] == 64) )
  {
    v30 = nullptr;
    v29 = 0;
  }
  else
  {
    v55 = (void *)a1[4];
    if ( !v17 )
      v17 = (__int64 *)(v49.m128_u64[0] - 64);
    v20 = *v17;
    src = v17;
    v21 = *(__int64 (__fastcall **)(_QWORD))(v20 + 32);
    if ( v21 == sub_A01140 )
    {
      v22 = sub_B70A60((__int64)v17);
      v23 = src;
      v24 = v55;
    }
    else
    {
      v22 = ((__int64 (__fastcall *)(__int64 *, __int64 (__fastcall *)(_QWORD), __int64 *, __int64))v21)(
              v17,
              sub_A01140,
              v17,
              v18);
      v24 = v55;
      v23 = src;
    }
    v25 = v22;
    v26 = v49.m128_u64[0];
    src = v24;
    v49.m128_u64[0] = (unsigned __int64)v23;
    v27 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v26 - 64) + 32LL);
    if ( v27 == sub_A01140 )
    {
      v28 = sub_B70A60(v19);
      v29 = v49.m128_u64[0];
      v30 = src;
    }
    else
    {
      v28 = ((__int64 (__fastcall *)(__int64, __int64 (__fastcall *)(_QWORD)))v27)(v19, sub_A01140);
      v30 = src;
      v29 = v49.m128_u64[0];
    }
    if ( v25 != v28 )
    {
      src = v30;
      v49.m128_u64[0] = v29;
      v31 = sub_B70650(v29, v19);
      v30 = src;
      v29 = v49.m128_u64[0];
      if ( !v31 )
      {
        v30 = nullptr;
        v29 = v19;
      }
    }
  }
  v49.m128_u64[0] = v10;
  v32 = a1[1];
  v33 = v51;
  v49.m128_u64[0] = v14;
  v34 = *(_QWORD **)(v32 + 176);
  v49 = _mm_loadh_ps((const double *)v49.m128_u64);
  v35 = sub_16574A0(v34, v51, v29, (__int64)v30);
  v36 = sub_16FE9F0(a1[1], v33);
  si128 = _mm_load_si128((const __m128i *)&v49);
  v57 = v36;
  *(__m128i *)v60 = si128;
  v61 = v54;
  *(_QWORD *)v56 = v33;
  v58 = 0;
  v59 = 0;
  v62 = v62 & 0x80 | 0x40;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  sub_15A3440(v56, v35, v38, v39, v40, v41);
  v42 = a1[1];
  v49.m128_u64[0] = a1[2];
  sub_17048E0((__int64)v66, (__int64)v56);
  sub_1715C60(v42, (__int64)v66, v49.m128_i64[0], v52, v53, a1[4]);
  v43 = v68;
  v44 = v67;
  if ( v68 != v67 )
  {
    do
    {
      while ( 1 )
      {
        v45 = (_QWORD *)v44[3];
        if ( v45 == v44 + 5 )
          break;
        operator delete(v45);
        v44 += 8;
        if ( v43 == v44 )
          goto LABEL_38;
      }
      v44 += 8;
    }
    while ( v43 != v44 );
LABEL_38:
    v44 = v67;
  }
  if ( v44 )
    operator delete(v44);
  v46 = v60[1];
  v47 = v60[0];
  if ( v60[1] != v60[0] )
  {
    do
    {
      while ( 1 )
      {
        v48 = (_QWORD *)v47[3];
        if ( v48 == v47 + 5 )
          break;
        operator delete(v48);
        v47 += 8;
        if ( v46 == v47 )
          goto LABEL_44;
      }
      v47 += 8;
    }
    while ( v46 != v47 );
LABEL_44:
    v47 = v60[0];
  }
  if ( v47 )
    operator delete(v47);
}
