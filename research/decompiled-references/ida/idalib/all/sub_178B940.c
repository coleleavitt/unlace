__int64 __fastcall sub_178B940(__int64 a1)
{
  _QWORD *v2; // r13
  __int64 v3; // r12
  int v4; // r14d
  __int64 v5; // rax
  char v6; // al
  _QWORD *v7; // r14
  __int64 v8; // r13
  __int64 v9; // rax
  __m128i v10; // xmm0
  char v11; // al
  unsigned __int64 v12; // rdx
  unsigned int v13; // ebx
  unsigned __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r14
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r15
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r14
  __int64 v41; // rax
  _QWORD *v42; // rax
  int v43; // [rsp+8h] [rbp-240h]
  char v44; // [rsp+Fh] [rbp-239h]
  __int64 v45; // [rsp+18h] [rbp-230h] BYREF
  _QWORD v46[2]; // [rsp+20h] [rbp-228h] BYREF
  __int64 v47; // [rsp+30h] [rbp-218h]
  unsigned __int8 *v48[11]; // [rsp+40h] [rbp-208h] BYREF
  char v49; // [rsp+98h] [rbp-1B0h]
  unsigned int v50; // [rsp+A0h] [rbp-1A8h]
  char v51; // [rsp+A4h] [rbp-1A4h]
  __int64 v52; // [rsp+B0h] [rbp-198h] BYREF
  void *v53; // [rsp+B8h] [rbp-190h]
  __int64 v54; // [rsp+C0h] [rbp-188h]
  _BYTE v55[64]; // [rsp+C8h] [rbp-180h] BYREF
  void *v56[2]; // [rsp+108h] [rbp-140h]
  __int64 v57; // [rsp+118h] [rbp-130h]
  _QWORD *v58; // [rsp+120h] [rbp-128h]
  __int64 v59; // [rsp+128h] [rbp-120h]
  int v60; // [rsp+130h] [rbp-118h]
  __int64 v61; // [rsp+138h] [rbp-110h] BYREF
  __m128i si128; // [rsp+140h] [rbp-108h]
  __int64 v63; // [rsp+150h] [rbp-F8h]
  __int64 v64; // [rsp+160h] [rbp-E8h] BYREF
  void *ptr; // [rsp+168h] [rbp-E0h]
  __int64 v66; // [rsp+170h] [rbp-D8h]
  _BYTE v67[64]; // [rsp+178h] [rbp-D0h] BYREF
  void *v68[2]; // [rsp+1B8h] [rbp-90h]
  __int64 v69; // [rsp+1C8h] [rbp-80h]
  _QWORD *v70; // [rsp+1D0h] [rbp-78h]
  __int64 v71; // [rsp+1D8h] [rbp-70h]
  int v72; // [rsp+1E0h] [rbp-68h]
  __int64 v73; // [rsp+1E8h] [rbp-60h] BYREF
  __m128i v74; // [rsp+1F0h] [rbp-58h]
  __int64 v75; // [rsp+200h] [rbp-48h]

  v2 = *(_QWORD **)(a1 + 112);
  v3 = *(_QWORD *)(a1 + 200);
  v4 = *(_DWORD *)(a1 + 140);
  v5 = sub_6F3470(v2[30] + 552LL, "return_void", 0xBu);
  v54 = 0x800000000LL;
  *(_OWORD *)v56 = 0;
  v53 = v55;
  v59 = v5;
  v58 = v2;
  v60 = v4;
  v52 = 0;
  v57 = 0;
  sub_B85890(&v61, v5);
  v63 = 0x101010000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA5C0);
  sub_1A395A0(&v52);
  *(_WORD *)((char *)&v63 + 3) = 0;
  if ( v3 )
    v3 += 64;
  v6 = sub_1A48440(v2, &v52, v3, 0);
  v7 = *(_QWORD **)(a1 + 112);
  v44 = v6;
  v8 = *(_QWORD *)(a1 + 200);
  v43 = *(_DWORD *)(a1 + 140);
  v9 = sub_6F3470(v7[30] + 552LL, "return_value", 0xCu);
  ptr = v67;
  v66 = 0x800000000LL;
  *(_OWORD *)v68 = 0;
  v71 = v9;
  v72 = v43;
  v64 = 0;
  v69 = 0;
  v70 = v7;
  sub_B85890(&v73, v9);
  v10 = _mm_load_si128((const __m128i *)&xmmword_23AA5C0);
  v75 = 0x101010000LL;
  v74 = v10;
  sub_1A395A0(&v64);
  if ( v8 )
    v8 += 64;
  *(_WORD *)((char *)&v75 + 3) = 0;
  v11 = sub_1A48440(v7, &v64, v8, 0);
  if ( !v44 )
  {
    v12 = 0;
    if ( !v11 )
    {
      v19 = sub_1C36210(*(_QWORD *)(a1 + 112), *(unsigned int *)(*(_QWORD *)(a1 + 200) + 24LL), 0);
      v12 = v19 & 0xFFFFFFFFFFFFFFFELL;
      if ( v19 == 1 )
        goto LABEL_37;
    }
    goto LABEL_7;
  }
  v15 = *(_QWORD *)(a1 + 112);
  v16 = *(unsigned int *)(*(_QWORD *)(a1 + 120) + 24LL);
  if ( !v11 )
  {
    v17 = sub_178B6E0(v15, v16, 0, 1, v10);
    v18 = sub_19A47A0(*(_QWORD *)(a1 + 112), v17 & 0xFFFFFFFFFFFFFFFELL);
    if ( v18 == 1 )
    {
LABEL_37:
      v13 = 0;
      goto LABEL_8;
    }
    v12 = v18 & 0xFFFFFFFFFFFFFFFELL;
LABEL_7:
    *(_QWORD *)(a1 + 40) = v12;
    v13 = 1;
    goto LABEL_8;
  }
  sub_168B9F0((__int64)v46, (__int64 *)(v15 + 8), v16, 0xDC7u, 0);
  if ( v49 )
  {
    sub_AE9DF0(v48, *(_QWORD *)(a1 + 200), 0xAu);
  }
  else if ( v51 )
  {
    v40 = sub_168B9E0(v46);
    v41 = v47;
    if ( v47 )
      v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
    v45 = v41;
    v42 = sub_1587BC0(v40, &v45, v36, v37, v38, v39);
    sub_AE9DF0((unsigned __int8 **)(*v42 + 32LL * v50 + 8), *(_QWORD *)(a1 + 200), 0xAu);
  }
  sub_15F7200(v46);
  sub_168B9F0(
    (__int64)v46,
    (__int64 *)(*(_QWORD *)(a1 + 112) + 8LL),
    *(_DWORD *)((*(_QWORD *)v53 & 0xFFFFFFFFFFFFFFF8LL) + 24),
    0x17C5u,
    0);
  v20 = v59;
  if ( v49 )
  {
    sub_AE9DF0(v48, v59, 9u);
  }
  else if ( v51 )
  {
    v33 = sub_168B9E0(v46);
    v34 = v47;
    if ( v47 )
      v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
    v45 = v34;
    v35 = sub_1587BC0(v33, &v45, v29, v30, v31, v32);
    sub_AE9DF0((unsigned __int8 **)(*v35 + 32LL * v50 + 8), v20, 9u);
  }
  sub_15F7200(v46);
  sub_168B9F0(
    (__int64)v46,
    (__int64 *)(*(_QWORD *)(a1 + 112) + 8LL),
    *(_DWORD *)((*(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL) + 24),
    0x17C5u,
    0);
  v21 = v71;
  if ( v49 )
  {
    sub_AE9DF0(v48, v71, 9u);
  }
  else if ( v51 )
  {
    v26 = sub_168B9E0(v46);
    v27 = v47;
    if ( v47 )
      v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
    v45 = v27;
    v28 = sub_1587BC0(v26, &v45, v22, v23, v24, v25);
    sub_AE9DF0((unsigned __int8 **)(*v28 + 32LL * v50 + 8), v21, 9u);
  }
  v13 = 0;
  sub_15F7200(v46);
LABEL_8:
  if ( !BYTE3(v75) )
  {
LABEL_26:
    if ( !BYTE4(v75) || (_DWORD)v64 != 5 )
      goto LABEL_12;
LABEL_28:
    sub_1A445B0(v70, &v64);
    goto LABEL_12;
  }
  if ( (_DWORD)v64 == 5 )
  {
    if ( !BYTE4(v75) )
      goto LABEL_12;
    goto LABEL_28;
  }
  if ( v68[1] && (*(_BYTE *)(v70[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v70, (__int64)&v64);
    goto LABEL_26;
  }
LABEL_12:
  if ( v68[0] )
    sub_1A39780(v68[0]);
  if ( ptr != v67 )
    free(ptr);
  if ( !BYTE3(v63) )
  {
LABEL_30:
    if ( !BYTE4(v63) || (_DWORD)v52 != 5 )
      goto LABEL_20;
LABEL_32:
    sub_1A445B0(v58, &v52);
    goto LABEL_20;
  }
  if ( (_DWORD)v52 == 5 )
  {
    if ( !BYTE4(v63) )
      goto LABEL_20;
    goto LABEL_32;
  }
  if ( v56[1] && (*(_BYTE *)(v58[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v58, (__int64)&v52);
    goto LABEL_30;
  }
LABEL_20:
  if ( v56[0] )
    sub_1A39780(v56[0]);
  if ( v53 != v55 )
    free(v53);
  return v13;
}
