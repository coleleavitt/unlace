void __fastcall sub_16DE010(__int64 a1, __int64 a2, double a3)
{
  _QWORD *v4; // rsi
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r13
  __int16 v7; // ax
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r13
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbp
  unsigned __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r14
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rdx
  __int16 v39; // ax
  __int64 v40; // rcx
  unsigned int v41; // eax
  unsigned __int64 v42; // rax
  _BYTE *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 *v47; // r9
  __int64 (__fastcall ***v48)(); // rsi
  __int64 v49; // rdx
  _BYTE *v50; // rax
  unsigned int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rax
  void *v54; // rdx
  size_t v55; // [rsp+8h] [rbp-1F0h]
  int v56; // [rsp+1Ch] [rbp-1DCh] BYREF
  _QWORD v57[2]; // [rsp+20h] [rbp-1D8h] BYREF
  void *v58[2]; // [rsp+30h] [rbp-1C8h] BYREF
  __int64 v59; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 (__fastcall **v60)(); // [rsp+50h] [rbp-1A8h] BYREF
  int v61; // [rsp+58h] [rbp-1A0h]
  __int128 v62; // [rsp+60h] [rbp-198h]
  _BYTE *v63; // [rsp+70h] [rbp-188h]
  char v64; // [rsp+78h] [rbp-180h]
  int v65; // [rsp+7Ch] [rbp-17Ch]
  void **p_ptr; // [rsp+80h] [rbp-178h]
  __m128i v67[9]; // [rsp+90h] [rbp-168h] BYREF
  void *ptr; // [rsp+120h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+128h] [rbp-D0h]
  _BYTE v70[192]; // [rsp+138h] [rbp-C0h] BYREF

  v4 = (_QWORD *)sub_BFBC70(*(_QWORD *)(a2 + 32));
  sub_B76FC0((__int64)v58, v4);
  v5 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  v6 = sub_BFD550(v5);
  v7 = *(_WORD *)v6 & 0x1FF;
  if ( v7 == 4 )
  {
    v8 = *(_BYTE *)(v6 + 2) >> 3;
    if ( v8 == 4 )
    {
      v38 = *(_QWORD *)(v6 + 16);
      v39 = *(_WORD *)v38 & 0x1FF;
      if ( v39 == 71 )
      {
        v40 = *(_QWORD *)(v38 + 16);
        if ( (*(_BYTE *)(v40 + 28) & 0x7Fu) - 34 > 0x11
          || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v40 + 48)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 43 <= 1 )
        {
          goto LABEL_8;
        }
      }
      else
      {
        if ( v39 != 46 )
          goto LABEL_8;
        v40 = *(_QWORD *)(v38 + 24);
      }
      sub_16DDE00(a1, (_BYTE **)v58, v6, v40, a3);
      goto LABEL_8;
    }
    if ( v8 == 6 )
    {
      v9 = sub_BFB970(*(_QWORD *)(v6 + 16));
      v10 = sub_BFB9F0(v9);
      if ( (*(_WORD *)v10 & 0x1FF) != 0x33 )
        goto LABEL_8;
      sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), *(_DWORD *)(v10 + 16), 0x1B1Fu, 0);
      v11 = sub_1682A40((__int64)&ptr, (__int64)v58);
      v67[0].m128i_i32[0] = 2;
      goto LABEL_6;
    }
LABEL_28:
    if ( ((*(_WORD *)v5 + 433) & 0x1FFu) > 9 )
      goto LABEL_8;
    v61 = 2;
    ptr = v70;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v64 = 0;
    v60 = &off_2BEBEE0;
    v65 = 1;
    v63 = nullptr;
    v62 = 0;
    p_ptr = &ptr;
    sub_227B8B0(&v60, 0, 0, 0);
    v36 = (*(_WORD *)(v5 + 2) >> 3) & 0x7F;
    v37 = (*(_WORD *)(v5 + 2) >> 3) & 0x7F;
    if ( v37 == 1 )
    {
      if ( !sub_C1BF80(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL), 0, v35, v36) )
        goto LABEL_32;
      LOWORD(v36) = (*(_WORD *)(v5 + 2) >> 3) & 0x7F;
    }
    else if ( v37 == 21 )
    {
      v42 = sub_BFBAE0(*(_QWORD *)(v5 + 16));
      if ( (*(_WORD *)sub_BFB9F0(v42) & 0x1FF) != 0x34 )
        goto LABEL_32;
LABEL_44:
      v43 = v63;
      if ( (unsigned __int64)v63 >= *((_QWORD *)&v62 + 1) )
      {
        sub_227BA10(&v60, 39);
      }
      else
      {
        ++v63;
        *v43 = 39;
      }
      v55 = j__strlen("\n");
      v48 = &v60;
      v67[0].m128i_i64[0] = sub_16043A0(*(_QWORD **)(a1 + 248), *(_QWORD **)(a1 + 240), v44, v45, v46, v47);
      v67[0].m128i_i64[1] = v49;
      sub_F07C00((char *)v5, (__int64)&v60, 0, v67, 0, 0, "\n", v55);
      v50 = v63;
      if ( (unsigned __int64)v63 >= *((_QWORD *)&v62 + 1) )
      {
        v48 = (__int64 (__fastcall ***)())(&qword_20 + 7);
        sub_227BA10(&v60, 39);
      }
      else
      {
        ++v63;
        *v50 = 39;
      }
      v51 = sub_EEB7E0(v5, (__int64)v48, 0.0);
      sub_168B9F0((__int64)v67, (__int64 *)(a1 + 8), v51, 0x1B1Fu, 0);
      v52 = sub_1682A40((__int64)v67, (__int64)v58);
      v56 = 0;
      v53 = sub_1587D10(v52, &v56);
      v54 = *p_ptr;
      v57[1] = p_ptr[1];
      v57[0] = v54;
      sub_166BAF0(v53, (__int64)v57);
      sub_15F7200(v67);
LABEL_32:
      v60 = (__int64 (__fastcall **)())&unk_2C76288;
      sub_227B7A0(&v60);
      if ( ptr != v70 )
        free(ptr);
      goto LABEL_8;
    }
    if ( (unsigned __int8)v36 > 0x15u || ((1LL << v36) & 0x201002) == 0 )
      goto LABEL_32;
    goto LABEL_44;
  }
  if ( v7 != 71 )
  {
    if ( v7 == 127 )
    {
      sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), *(_DWORD *)(v6 + 16), 0x1B1Fu, 0);
      v24 = sub_1682A40((__int64)&ptr, (__int64)v58);
      LODWORD(v60) = 0;
      v25 = sub_1587D10(v24, (int *)&v60);
      v26 = 0;
      if ( (*(_QWORD *)(*(_QWORD *)(v6 + 24) + 40LL) & 7) == 0 )
        v26 = *(_QWORD *)(*(_QWORD *)(v6 + 24) + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
      v27 = v26;
      if ( *(_BYTE *)(v25 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v25 + 32), v26, 5u);
      }
      else if ( *(_BYTE *)(v25 + 132) )
      {
        v32 = sub_168B9E0((_QWORD *)v25);
        v33 = *(_QWORD *)(v25 + 16);
        if ( v33 )
          v33 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v33 + 32LL))(*(_QWORD *)(v25 + 16));
        v67[0].m128i_i64[0] = v33;
        v34 = sub_1587BC0(v32, v67[0].m128i_i64, v28, v29, v30, v31);
        sub_AE9DF0((unsigned __int8 **)(*v34 + 32LL * *(unsigned int *)(v25 + 128) + 8), v27, 5u);
      }
      goto LABEL_7;
    }
    if ( v7 == 117 )
    {
      v41 = sub_EEB7E0(v6, (__int64)v4, a3);
      sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), v41, 0x1B1Fu, 0);
      v11 = sub_1682A40((__int64)&ptr, (__int64)v58);
      v67[0].m128i_i32[0] = 1;
LABEL_6:
      sub_1587D10(v11, v67[0].m128i_i32);
LABEL_7:
      sub_15F7200(&ptr);
      goto LABEL_8;
    }
    goto LABEL_28;
  }
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                              & 0xFFFFFFFFFFFFFFF0LL)
                                  + 16LL)
                       - 2) > 4u )
    goto LABEL_28;
  v12 = *(_QWORD *)(v6 + 16);
  if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 40 <= 6 )
  {
    v13 = sub_16C50A0(v6);
    sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), v13, 0x1B1Fu, 0);
    v14 = sub_1682A40((__int64)&ptr, (__int64)v58);
    LODWORD(v60) = 0;
    v15 = sub_1587D10(v14, (int *)&v60);
    v16 = v15;
    if ( *(_BYTE *)(v15 + 120) )
    {
      sub_16B73F0((unsigned __int8 **)(v15 + 32), v12);
    }
    else if ( *(_BYTE *)(v15 + 132) )
    {
      v21 = sub_168B9E0((_QWORD *)v15);
      v22 = *(_QWORD *)(v16 + 16);
      if ( v22 )
        v22 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v22 + 32LL))(*(_QWORD *)(v16 + 16));
      v67[0].m128i_i64[0] = v22;
      v23 = sub_1587BC0(v21, v67[0].m128i_i64, v17, v18, v19, v20);
      sub_16B73F0((unsigned __int8 **)(*v23 + 32LL * *(unsigned int *)(v16 + 128) + 8), v12);
    }
    goto LABEL_7;
  }
LABEL_8:
  if ( v58[0] != &v59 )
    operator delete(v58[0]);
}
