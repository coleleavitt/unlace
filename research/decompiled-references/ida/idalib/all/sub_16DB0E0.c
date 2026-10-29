void __fastcall sub_16DB0E0(__int64 a1, __int64 a2, __int64 a3, __m128i a4, double a5)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r14
  unsigned int v10; // eax
  __int16 v11; // ax
  unsigned __int64 v12; // rax
  int v13; // r12d
  int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // r13
  unsigned int v17; // r14d
  unsigned int v18; // eax
  unsigned int v19; // ecx
  size_t v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 *v24; // r9
  __int64 v25; // rdx
  size_t v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 *v30; // r9
  __int64 v31; // rdx
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // rcx
  unsigned int v35; // ecx
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  int v38; // [rsp+0h] [rbp-220h]
  unsigned int v39; // [rsp+0h] [rbp-220h]
  unsigned __int64 v40; // [rsp+0h] [rbp-220h]
  __int64 v41[2]; // [rsp+24h] [rbp-1FCh] BYREF
  __int64 (__fastcall **v42)(); // [rsp+38h] [rbp-1E8h] BYREF
  int v43; // [rsp+40h] [rbp-1E0h]
  __int128 v44; // [rsp+48h] [rbp-1D8h]
  __int64 v45; // [rsp+58h] [rbp-1C8h]
  char v46; // [rsp+60h] [rbp-1C0h]
  int v47; // [rsp+64h] [rbp-1BCh]
  void **p_ptr; // [rsp+68h] [rbp-1B8h]
  _DWORD v49[6]; // [rsp+78h] [rbp-1A8h] BYREF
  void *v50; // [rsp+90h] [rbp-190h]
  __int64 v51; // [rsp+A0h] [rbp-180h] BYREF
  __m128i v52[9]; // [rsp+B8h] [rbp-168h] BYREF
  void *ptr; // [rsp+148h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+150h] [rbp-D0h]
  _BYTE v55[192]; // [rsp+160h] [rbp-C0h] BYREF

  if ( *(_DWORD *)(a2 + 16) <= 2u )
    return;
  v6 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
  v7 = sub_BFD550(*(_QWORD *)(a2 + v6 + 32));
  v8 = sub_BFD550(*(_QWORD *)(a2 + v6 + 40));
  v9 = sub_BFD550(*(_QWORD *)(a2 + v6 + 48));
  v38 = *(_DWORD *)(a2 + 20);
  v10 = sub_BF6D70(a2);
  if ( (unsigned __int8)sub_16D92B0(a1, v9, a3, v10, v38, a4, a5) )
    return;
  v11 = *(_WORD *)v9 & 0x1FF;
  if ( v11 == 5 )
  {
    if ( (*(_BYTE *)(v9 + 2) & 0x78) != 0 )
      return;
    if ( *(char *)(v9 + 2) < 0 )
      return;
    v12 = sub_BFBAE0(*(_QWORD *)(v9 + 16));
    if ( !v12 || (*(_WORD *)v12 & 0x1FF) != 0x47 )
      return;
    if ( v7 && (*(_WORD *)v7 & 0x1FF) == 0x47 && *(_QWORD *)(v12 + 16) == *(_QWORD *)(v7 + 16) )
      goto LABEL_11;
    if ( !v8 || (*(_WORD *)v8 & 0x1FF) != 0x47 || *(_QWORD *)(v12 + 16) != *(_QWORD *)(v8 + 16) )
      return;
LABEL_45:
    v13 = 2;
    goto LABEL_12;
  }
  if ( ((v11 + 394) & 0x1FFu) > 1 || ((*(_WORD *)(v9 + 2) >> 3) & 0x3F) != 6 )
    return;
  v32 = sub_BFD550(*(_QWORD *)(v9 + 16));
  v33 = sub_16B67B0(v32);
  if ( !v7
    || (*(_WORD *)v7 & 0x1FF) != 0x47
    || !v33
    || (*(_WORD *)v33 & 0x1FF) != 0x47
    || *(_QWORD *)(v7 + 16) != *(_QWORD *)(v33 + 16)
    || (v34 = sub_BFD550(*(_QWORD *)(v9 + 24)), ((*(_WORD *)v34 + 423) & 0x1FFu) > 4) )
  {
LABEL_36:
    if ( !v8
      || (*(_WORD *)v8 & 0x1FF) != 0x47
      || !v33
      || (*(_WORD *)v33 & 0x1FF) != 0x47
      || *(_QWORD *)(v8 + 16) != *(_QWORD *)(v33 + 16) )
    {
      return;
    }
    goto LABEL_45;
  }
  v40 = v34;
  v36 = sub_BFBC70(*(_QWORD *)(v34 + 32));
  if ( !v36
    || (*(_BYTE *)(v36 + 28) & 0x7Fu) - 34 > 5
    || (unsigned int)sub_B81D10(v36) != 1243
    || (v37 = sub_BFD550(*(_QWORD *)(v40 + 8 * (((*(_BYTE *)(v40 + 2) & 8) != 0) + 1LL) + 32)),
        (*(_WORD *)v7 & 0x1FF) != 0x47)
    || !v37
    || (*(_WORD *)v37 & 0x1FF) != 0x47
    || *(_QWORD *)(v7 + 16) != *(_QWORD *)(v37 + 16) )
  {
    v33 = sub_16B67B0(v32);
    goto LABEL_36;
  }
LABEL_11:
  v13 = 1;
LABEL_12:
  v14 = sub_EEB7E0(v9, v9, *(double *)a4.m128i_i64);
  v39 = v14;
  v15 = sub_EEC8C0(v9, v9, *(double *)a4.m128i_i64);
  v16 = *(_QWORD *)(a1 + 272);
  v41[0] = v15;
  if ( (unsigned __int8)sub_1020490(v16, v14, nullptr) )
  {
    if ( v14 < 0 )
      v39 = sub_1021B90(v16, v14);
    v17 = HIDWORD(v41[0]);
    if ( v41[0] < 0 )
      v17 = sub_1021B90(v16, SHIDWORD(v41[0]));
    v18 = v41[0];
    if ( SLODWORD(v41[0]) < 0 )
      v18 = sub_1021B90(v16, v41[0]);
    v41[0] = __PAIR64__(v17, v18);
  }
  if ( sub_16B6E30(*(_QWORD *)(v7 + 8), *(_QWORD **)(a1 + 248)) )
  {
    v19 = 7392;
    if ( v13 != 1 )
      v19 = 7393;
    sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), v39, v19, 0);
    sub_15884C0((__int64)&ptr, v41);
    sub_15F7200(&ptr);
    ptr = v55;
    v43 = 2;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v44 = 0;
    v42 = &off_2BEBEE0;
    v46 = 0;
    v47 = 1;
    v45 = 0;
    p_ptr = &ptr;
    sub_227B8B0(&v42, 0, 0, 0);
    sub_995540((__int64)&v42, "sizeof(");
    v20 = j__strlen("\n");
    v52[0].m128i_i64[0] = sub_16043A0(*(_QWORD **)(a1 + 248), *(_QWORD **)(a1 + 240), v21, v22, v23, v24);
    v52[0].m128i_i64[1] = v25;
    sub_F07C00((char *)v7, (__int64)&v42, 0, v52, 0, 0, "\n", v20);
    sub_995540((__int64)&v42, ") - ");
    sub_995540((__int64)&v42, "strlen(");
    v26 = j__strlen("\n");
    v52[0].m128i_i64[0] = sub_16043A0(*(_QWORD **)(a1 + 248), *(_QWORD **)(a1 + 240), v27, v28, v29, v30);
    v52[0].m128i_i64[1] = v31;
    sub_F07C00((char *)v7, (__int64)&v42, 0, v52, 0, 0, "\n", v26);
    sub_995540((__int64)&v42, ") - 1");
    sub_168B9F0((__int64)v52, (__int64 *)(a1 + 8), v39, 0x18E2u, 0);
    sub_16BA3D0((__int64)v49, v41[0], 1, *p_ptr, (__int64)p_ptr[1]);
    sub_1589170((__int64)v52, v49);
    if ( v50 != &v51 )
      operator delete(v50);
    sub_15F7200(v52);
    v42 = (__int64 (__fastcall **)())&unk_2C76288;
    sub_227B7A0(&v42);
    if ( ptr != v55 )
      free(ptr);
  }
  else
  {
    v35 = 7394;
    if ( v13 != 1 )
      v35 = 7393;
    sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), v39, v35, 0);
    sub_15884C0((__int64)&ptr, v41);
    sub_15F7200(&ptr);
  }
}
