__int64 __fastcall sub_E059D0(__int64 a1, char a2, __int64 a3, __int64 *a4)
{
  char **exception; // rbp
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // r15
  void *v13; // rdi
  _BYTE *v14; // rsi
  __int64 v15; // r15
  void *v16; // rdi
  _BYTE *v17; // rsi
  __int64 v18; // r15
  void *v19; // rdi
  _BYTE *v20; // rsi
  __int64 v21; // r15
  void *v22; // rdi
  _BYTE *v23; // rsi
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _OWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rcx
  __int64 result; // rax
  _QWORD *v36; // rcx
  bool v37; // zf
  __int64 v38; // rax
  unsigned int v39; // ebp
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rax
  _BYTE *v47; // [rsp+20h] [rbp-58h] BYREF
  size_t n; // [rsp+28h] [rbp-50h]

  *(_QWORD *)a1 = off_1C5B250;
  v8 = (_QWORD *)sub_186B270(0xC0u);
  *(_DWORD *)(a1 + 24) = 0;
  *v8 = 0;
  v8[1] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v8[9] = 0;
  v8[10] = 0;
  v8[12] = 0;
  v8[13] = 0;
  v8[15] = 0;
  v8[16] = 0;
  v8[18] = 0;
  v8[19] = 0;
  v8[21] = 0;
  v8[22] = 0;
  *(_QWORD *)(a1 + 8) = v8;
  *(_QWORD *)(a1 + 16) = 8;
  v9 = (_QWORD *)sub_186B270(0xC0u);
  *v9 = 0;
  v9[1] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[6] = 0;
  v9[7] = 0;
  v9[9] = 0;
  v9[10] = 0;
  v9[12] = 0;
  v9[13] = 0;
  v9[15] = 0;
  v9[16] = 0;
  v9[18] = 0;
  v9[19] = 0;
  v9[21] = 0;
  v9[22] = 0;
  *(_QWORD *)(a1 + 32) = v9;
  *(_QWORD *)(a1 + 40) = 8;
  *(_DWORD *)(a1 + 48) = 0;
  v10 = (_QWORD *)sub_186B270(0xC0u);
  *v10 = 0;
  v10[1] = 0;
  v10[3] = 0;
  v10[4] = 0;
  v10[6] = 0;
  v10[7] = 0;
  v10[9] = 0;
  v10[10] = 0;
  v10[12] = 0;
  v10[13] = 0;
  v10[15] = 0;
  v10[16] = 0;
  v10[18] = 0;
  v10[19] = 0;
  v10[21] = 0;
  v10[22] = 0;
  *(_QWORD *)(a1 + 56) = v10;
  *(_QWORD *)a1 = &off_1C5B2B0;
  *(_QWORD *)(a1 + 64) = 8;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = off_1C5B338;
  *(_OWORD *)(a1 + 80) = 0;
  sub_15B16F0(a1 + 112);
  v11 = *a4;
  *(_BYTE *)(a1 + 240) = a2;
  *(_WORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 248) = v11;
  LOBYTE(v11) = *(_BYTE *)(a1 + 193);
  *(_QWORD *)(a1 + 232) = 0;
  *(_BYTE *)(a1 + 258) = v11;
  *(_DWORD *)(a1 + 260) = 0;
  *(_WORD *)(a1 + 264) = 0;
  *(_BYTE *)(a1 + 266) = 0;
  *(_QWORD *)(a1 + 268) = 2;
  *(_QWORD *)(a1 + 296) = a3;
  *(_BYTE *)(a1 + 305) = 0;
  *(_OWORD *)(a1 + 280) = 0;
  *(_BYTE *)(a1 + 304) = a3 == 0;
  *(_OWORD *)(a1 + 312) = 0;
  sub_E2CF60(a1 + 328);
  sub_DF63A0((__int64 *)&v47, "stdout");
  v12 = n;
  v13 = (void *)(a1 + 352);
  v14 = v47;
  *(_QWORD *)(a1 + 336) = a1 + 352;
  if ( (unsigned __int64)v12 > 0xF )
  {
    if ( v12 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    if ( v12 + 1 < 0 )
      std::__throw_bad_alloc();
    v38 = operator new(v12 + 1);
    *(_QWORD *)(a1 + 336) = v38;
    v13 = (void *)v38;
    *(_QWORD *)(a1 + 352) = v12;
  }
  else
  {
    if ( v12 == 1 )
    {
      *(_BYTE *)(a1 + 352) = *v14;
      goto LABEL_4;
    }
    if ( !v12 )
      goto LABEL_4;
  }
  memcpy(v13, v14, v12);
  v13 = *(void **)(a1 + 336);
LABEL_4:
  *(_QWORD *)(a1 + 344) = v12;
  *((_BYTE *)v13 + v12) = 0;
  v15 = n;
  v16 = (void *)(a1 + 392);
  *(_QWORD *)(a1 + 368) = &std::cout;
  v17 = v47;
  *(_QWORD *)(a1 + 376) = a1 + 392;
  if ( (unsigned __int64)v15 > 0xF )
  {
    if ( v15 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    if ( v15 + 1 < 0 )
      std::__throw_bad_alloc();
    v43 = operator new(v15 + 1);
    *(_QWORD *)(a1 + 376) = v43;
    v16 = (void *)v43;
    *(_QWORD *)(a1 + 392) = v15;
LABEL_29:
    memcpy(v16, v17, v15);
    v16 = *(void **)(a1 + 376);
    goto LABEL_7;
  }
  if ( v15 != 1 )
  {
    if ( !v15 )
      goto LABEL_7;
    goto LABEL_29;
  }
  *(_BYTE *)(a1 + 392) = *v17;
LABEL_7:
  *(_QWORD *)(a1 + 384) = v15;
  *((_BYTE *)v16 + v15) = 0;
  *(_QWORD *)(a1 + 408) = &std::cout;
  *(_BYTE *)(a1 + 416) = 0;
  sub_233E40((__int64)&v47);
  sub_DF63A0((__int64 *)&v47, "stderr");
  v18 = n;
  v19 = (void *)(a1 + 440);
  v20 = v47;
  *(_QWORD *)(a1 + 424) = a1 + 440;
  if ( (unsigned __int64)v18 > 0xF )
  {
    if ( v18 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    if ( v18 + 1 < 0 )
      std::__throw_bad_alloc();
    v44 = operator new(v18 + 1);
    *(_QWORD *)(a1 + 424) = v44;
    v19 = (void *)v44;
    *(_QWORD *)(a1 + 440) = v18;
LABEL_34:
    memcpy(v19, v20, v18);
    v19 = *(void **)(a1 + 424);
    goto LABEL_10;
  }
  if ( v18 != 1 )
  {
    if ( !v18 )
      goto LABEL_10;
    goto LABEL_34;
  }
  *(_BYTE *)(a1 + 440) = *v20;
LABEL_10:
  *(_QWORD *)(a1 + 432) = v18;
  *((_BYTE *)v19 + v18) = 0;
  v21 = n;
  v22 = (void *)(a1 + 480);
  *(_QWORD *)(a1 + 456) = &std::cerr;
  v23 = v47;
  *(_QWORD *)(a1 + 464) = a1 + 480;
  if ( (unsigned __int64)v21 > 0xF )
  {
    if ( v21 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    if ( v21 + 1 < 0 )
      std::__throw_bad_alloc();
    v45 = operator new(v21 + 1);
    *(_QWORD *)(a1 + 464) = v45;
    v22 = (void *)v45;
    *(_QWORD *)(a1 + 480) = v21;
LABEL_39:
    memcpy(v22, v23, v21);
    v22 = *(void **)(a1 + 464);
    goto LABEL_13;
  }
  if ( v21 != 1 )
  {
    if ( !v21 )
      goto LABEL_13;
    goto LABEL_39;
  }
  *(_BYTE *)(a1 + 480) = *v23;
LABEL_13:
  *(_QWORD *)(a1 + 472) = v21;
  *((_BYTE *)v22 + v21) = 0;
  *(_QWORD *)(a1 + 496) = &std::cerr;
  *(_BYTE *)(a1 + 504) = 0;
  sub_233E40((__int64)&v47);
  v24 = (_QWORD *)sub_186B270(0xC0u);
  *v24 = 0;
  v24[1] = 0;
  v24[3] = 0;
  v24[4] = 0;
  v24[6] = 0;
  v24[7] = 0;
  v24[9] = 0;
  v24[10] = 0;
  v24[12] = 0;
  v24[13] = 0;
  v24[15] = 0;
  v24[16] = 0;
  v24[18] = 0;
  v24[19] = 0;
  v24[21] = 0;
  v24[22] = 0;
  *(_QWORD *)(a1 + 512) = v24;
  *(_QWORD *)(a1 + 520) = 8;
  *(_DWORD *)(a1 + 528) = 0;
  v25 = (_QWORD *)sub_186B270(0x100u);
  *v25 = 0;
  v25[1] = 0;
  v25[2] = 0xFFFFFFFFLL;
  v25[3] = 0;
  v25[4] = 0;
  v25[5] = 0;
  v25[6] = 0xFFFFFFFFLL;
  v25[7] = 0;
  v25[8] = 0;
  v25[9] = 0;
  v25[10] = 0xFFFFFFFFLL;
  v25[11] = 0;
  v25[12] = 0;
  v25[13] = 0;
  v25[14] = 0xFFFFFFFFLL;
  v25[15] = 0;
  v25[16] = 0;
  v25[17] = 0;
  v25[18] = 0xFFFFFFFFLL;
  v25[19] = 0;
  v25[20] = 0;
  v25[21] = 0;
  v25[22] = 0xFFFFFFFFLL;
  v25[23] = 0;
  v25[24] = 0;
  v25[25] = 0;
  v25[26] = 0xFFFFFFFFLL;
  v25[27] = 0;
  v25[28] = 0;
  v25[29] = 0;
  v25[30] = 0xFFFFFFFFLL;
  v25[31] = 0;
  *(_QWORD *)(a1 + 536) = v25;
  *(_QWORD *)(a1 + 544) = 8;
  *(_DWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 560) = 0;
  v26 = (_QWORD *)sub_186B270(0xC0u);
  *v26 = 0;
  v26[1] = 0;
  v26[3] = 0;
  v26[4] = 0;
  v26[6] = 0;
  v26[7] = 0;
  v26[9] = 0;
  v26[10] = 0;
  v26[12] = 0;
  v26[13] = 0;
  v26[15] = 0;
  v26[16] = 0;
  v26[18] = 0;
  v26[19] = 0;
  v26[21] = 0;
  v26[22] = 0;
  *(_QWORD *)(a1 + 568) = v26;
  *(_QWORD *)(a1 + 576) = 8;
  *(_DWORD *)(a1 + 584) = 0;
  v27 = (_QWORD *)sub_186B270(0xC0u);
  *v27 = 0;
  v27[1] = 0;
  v27[3] = 0;
  v27[4] = 0;
  v27[6] = 0;
  v27[7] = 0;
  v27[9] = 0;
  v27[10] = 0;
  v27[12] = 0;
  v27[13] = 0;
  v27[15] = 0;
  v27[16] = 0;
  v27[18] = 0;
  v27[19] = 0;
  v27[21] = 0;
  v27[22] = 0;
  *(_QWORD *)(a1 + 592) = v27;
  *(_QWORD *)(a1 + 600) = 8;
  *(_DWORD *)(a1 + 608) = 0;
  *(_QWORD *)(a1 + 616) = 0;
  v28 = (_QWORD *)sub_186B270(0xC0u);
  *v28 = 0;
  v28[1] = 0;
  v28[2] = 0;
  v28[3] = 0;
  v28[4] = 0;
  v28[5] = 0;
  v28[6] = 0;
  v28[7] = 0;
  v28[8] = 0;
  v28[9] = 0;
  v28[10] = 0;
  v28[11] = 0;
  v28[12] = 0;
  v28[13] = 0;
  v28[14] = 0;
  v28[15] = 0;
  v28[16] = 0;
  v28[17] = 0;
  v28[18] = 0;
  v28[19] = 0;
  v28[20] = 0;
  v28[21] = 0;
  v28[22] = 0;
  v28[23] = 0;
  *(_QWORD *)(a1 + 624) = v28;
  *(_QWORD *)(a1 + 632) = 8;
  *(_DWORD *)(a1 + 640) = 0;
  v29 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 648) = v29;
  *(_QWORD *)(a1 + 656) = 8;
  *(_DWORD *)(a1 + 664) = 0;
  *v29 = 0;
  v29[1] = 0;
  v29[2] = 0;
  v29[3] = 0;
  v29[4] = 0;
  v29[5] = 0;
  v29[6] = 0;
  v29[7] = 0;
  v30 = (_QWORD *)sub_186B270(0xC0u);
  *v30 = 0;
  v30[1] = 0;
  v30[3] = 0;
  v30[4] = 0;
  v30[6] = 0;
  v30[7] = 0;
  v30[9] = 0;
  v30[10] = 0;
  v30[12] = 0;
  v30[13] = 0;
  v30[15] = 0;
  v30[16] = 0;
  v30[18] = 0;
  v30[19] = 0;
  v30[21] = 0;
  v30[22] = 0;
  *(_QWORD *)(a1 + 672) = v30;
  *(_QWORD *)(a1 + 680) = 8;
  *(_DWORD *)(a1 + 688) = 0;
  v31 = (_QWORD *)sub_186B270(0xC0u);
  *v31 = 0;
  v31[1] = 0;
  v31[2] = 0;
  v31[3] = 0;
  v31[4] = 0;
  v31[5] = 0;
  v31[6] = 0;
  v31[7] = 0;
  v31[8] = 0;
  v31[9] = 0;
  v31[10] = 0;
  v31[11] = 0;
  v31[12] = 0;
  v31[13] = 0;
  v31[14] = 0;
  v31[15] = 0;
  v31[16] = 0;
  v31[17] = 0;
  v31[18] = 0;
  v31[19] = 0;
  v31[20] = 0;
  v31[21] = 0;
  v31[22] = 0;
  v31[23] = 0;
  *(_QWORD *)(a1 + 696) = v31;
  *(_QWORD *)(a1 + 704) = 8;
  *(_DWORD *)(a1 + 712) = 0;
  *(_OWORD *)(a1 + 720) = 0;
  *(_OWORD *)(a1 + 736) = 0;
  *(_OWORD *)(a1 + 752) = 0;
  *(_OWORD *)(a1 + 768) = 0;
  *(_OWORD *)(a1 + 784) = 0;
  *(_OWORD *)(a1 + 800) = 0;
  *(_QWORD *)(a1 + 832) = 0;
  *(_QWORD *)(a1 + 840) = 0;
  *(_QWORD *)(a1 + 880) = 0;
  *(_BYTE *)(a1 + 904) = 0;
  *(_OWORD *)(a1 + 816) = 0;
  *(_OWORD *)(a1 + 848) = 0;
  *(_OWORD *)(a1 + 864) = 0;
  *(_OWORD *)(a1 + 888) = 0;
  *(_OWORD *)(a1 + 912) = 0;
  sub_E107A0(a1, v23);
  sub_E11340(a1);
  sub_DED320(a1);
  sub_E1D040(a1);
  v32 = *(_QWORD **)(a1 + 288);
  if ( v32 )
  {
    v33 = *((_DWORD *)v32 - 1);
    if ( v33 == *((_DWORD *)v32 - 2) )
    {
      v39 = (3 * v33 + 1) >> 1;
      v40 = 8 * v39 + 8;
      if ( 8 * v33 + 8 >= (unsigned int)v40 || v33 >= v39 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_DF63A0((__int64 *)&v47, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v47);
        sub_233E40((__int64)&v47);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v41 = (unsigned int *)sub_186B300(v32 - 1, v40);
      v42 = v41[1];
      v32 = v41 + 2;
      *v41 = v39;
      *(_QWORD *)(a1 + 288) = v41 + 2;
      LODWORD(v41) = v42;
      v36 = &v32[v42];
      result = (unsigned int)((_DWORD)v41 + 1);
    }
    else
    {
      v34 = v33;
      result = v33 + 1;
      v36 = &v32[v34];
    }
  }
  else
  {
    v46 = (_QWORD *)sub_186B270(0x18u);
    v32 = v46 + 1;
    *v46 = 2;
    result = 1;
    *(_QWORD *)(a1 + 288) = v32;
    v36 = v32;
  }
  v37 = *(_BYTE *)(a1 + 240) == 0;
  *v36 = 0;
  *((_DWORD *)v32 - 1) = result;
  if ( !v37 )
    return sub_180B140(*(_QWORD *)(a1 + 496));
  return result;
}

