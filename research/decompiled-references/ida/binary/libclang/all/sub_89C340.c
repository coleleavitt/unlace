__int64 __fastcall sub_89C340(__m128i *a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(); // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __m128 v8; // xmm0
  __m128i *v9; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rdi
  __int64 (*v13)(); // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // r12
  unsigned __int8 v16; // al
  int v17; // edx
  __m128i v18; // xmm0
  __int64 v19; // rax
  __m128i v20; // xmm0
  __m128i *v21; // rsi
  __int64 v22; // rdi
  char *v23; // r15
  char *v24; // rbp
  _QWORD **v25; // rbp
  _QWORD **v26; // r15
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdx
  __m128i v30; // rax
  _QWORD *v31; // r12
  __int64 v32; // rbp
  __int64 v33; // rdx
  _QWORD *v34; // rax
  _QWORD *v35; // rsi
  _QWORD *v36; // rdx
  __int64 (__fastcall *v37)(__int64); // rax
  __m128i *v38; // r9
  char v39; // al
  __m128i *v40; // rdx
  __int64 (__fastcall ***v41)(); // [rsp+8h] [rbp-5A0h] BYREF
  __int64 v42; // [rsp+10h] [rbp-598h]
  __m128i *v43; // [rsp+18h] [rbp-590h]
  _DWORD *v44; // [rsp+20h] [rbp-588h]
  _BYTE *v45; // [rsp+28h] [rbp-580h]
  unsigned int v46; // [rsp+34h] [rbp-574h]
  __m128i *v47; // [rsp+38h] [rbp-570h] BYREF
  __int16 v48; // [rsp+40h] [rbp-568h] BYREF
  __int64 v49; // [rsp+48h] [rbp-560h]
  _BYTE v50[3]; // [rsp+50h] [rbp-558h] BYREF
  unsigned __int64 v51; // [rsp+58h] [rbp-550h]
  _QWORD v52[2]; // [rsp+60h] [rbp-548h] BYREF
  _QWORD *v53; // [rsp+70h] [rbp-538h]
  __int64 v54; // [rsp+78h] [rbp-530h]
  __m128i v55; // [rsp+80h] [rbp-528h] BYREF
  __int64 v56; // [rsp+90h] [rbp-518h]
  __int64 v57; // [rsp+98h] [rbp-510h]
  __m128i v58; // [rsp+A0h] [rbp-508h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-4F8h]
  __m128i v60; // [rsp+110h] [rbp-498h] BYREF
  __int64 v61; // [rsp+120h] [rbp-488h]
  int v62; // [rsp+128h] [rbp-480h]
  __int64 v63; // [rsp+130h] [rbp-478h]
  __int64 v64; // [rsp+138h] [rbp-470h]
  void *ptr; // [rsp+140h] [rbp-468h]
  __int64 v66; // [rsp+148h] [rbp-460h]
  _BYTE v67[64]; // [rsp+150h] [rbp-458h] BYREF
  __int16 v68; // [rsp+190h] [rbp-418h]
  __int64 (__fastcall **v69)(); // [rsp+1A0h] [rbp-408h] BYREF
  char v70; // [rsp+1A8h] [rbp-400h]
  __int64 v71; // [rsp+1B0h] [rbp-3F8h]
  __int16 *v72; // [rsp+1B8h] [rbp-3F0h]
  _OWORD *v73; // [rsp+1C0h] [rbp-3E8h]
  __int64 v74; // [rsp+1C8h] [rbp-3E0h]
  int v75; // [rsp+1D0h] [rbp-3D8h]
  char v76; // [rsp+1D4h] [rbp-3D4h]
  _OWORD v77[3]; // [rsp+1D8h] [rbp-3D0h] BYREF
  __int64 v78; // [rsp+208h] [rbp-3A0h]
  __int64 v79; // [rsp+210h] [rbp-398h]
  __int64 v80; // [rsp+218h] [rbp-390h]
  int v81; // [rsp+228h] [rbp-380h] BYREF
  __int64 v82; // [rsp+230h] [rbp-378h]
  int *v83; // [rsp+238h] [rbp-370h]
  int *v84; // [rsp+240h] [rbp-368h]
  __int64 v85; // [rsp+248h] [rbp-360h]
  int v86; // [rsp+258h] [rbp-350h] BYREF
  __int64 v87; // [rsp+260h] [rbp-348h]
  int *v88; // [rsp+268h] [rbp-340h]
  int *v89; // [rsp+270h] [rbp-338h]
  __int64 v90; // [rsp+278h] [rbp-330h]
  __int64 v91; // [rsp+280h] [rbp-328h]
  int v92; // [rsp+288h] [rbp-320h]
  _DWORD *v93; // [rsp+290h] [rbp-318h]
  __int64 v94; // [rsp+298h] [rbp-310h]
  _DWORD v95[4]; // [rsp+2A0h] [rbp-308h] BYREF
  __int64 v96; // [rsp+2B0h] [rbp-2F8h]
  __int64 v97; // [rsp+2B8h] [rbp-2F0h]
  int v98; // [rsp+2C0h] [rbp-2E8h]
  __int64 v99; // [rsp+2C8h] [rbp-2E0h]
  char v100; // [rsp+2D0h] [rbp-2D8h]
  void *v101; // [rsp+2D8h] [rbp-2D0h]
  __int64 v102; // [rsp+2E0h] [rbp-2C8h]
  _BYTE v103[512]; // [rsp+2E8h] [rbp-2C0h] BYREF
  __m128i v104; // [rsp+4E8h] [rbp-C0h] BYREF
  int v105; // [rsp+4F8h] [rbp-B0h]
  __int128 v106; // [rsp+500h] [rbp-A8h]
  __int64 v107; // [rsp+510h] [rbp-98h]
  unsigned int v108; // [rsp+518h] [rbp-90h]
  int v109; // [rsp+528h] [rbp-80h] BYREF
  void *v110; // [rsp+530h] [rbp-78h]
  int *v111; // [rsp+538h] [rbp-70h]
  int *v112; // [rsp+540h] [rbp-68h]
  __int64 v113; // [rsp+548h] [rbp-60h]
  __int64 v114; // [rsp+550h] [rbp-58h]
  __int64 v115; // [rsp+558h] [rbp-50h]
  __int64 v116; // [rsp+560h] [rbp-48h]

  v47 = a1;
  LODWORD(v3) = sub_79B8A0((unsigned __int64)&a1[4].m128i_u64[1]);
  if ( (_BYTE)v3 )
    return (unsigned int)v3;
  v3 = &v69;
  v69 = (__int64 (__fastcall **)())&v47;
  v41 = &v69;
  v5 = sub_25E8DD0("isPotentialConstantExpr", 0x17u);
  v49 = a2;
  v48 = 0;
  v42 = v5;
  v6 = sub_798D40((__int64)v47);
  v70 = 0;
  v71 = v6;
  v7 = *(_QWORD *)(v6 + 2160);
  v69 = &off_47DA958;
  v72 = &v48;
  v75 = *(_DWORD *)(v7 + 136);
  LOBYTE(v7) = *(_BYTE *)(v7 + 140);
  v78 = 0;
  v79 = 0;
  v76 = v7 & 1;
  v81 = 0;
  v8 = _mm_loadh_ps((const double *)&v41);
  v83 = &v81;
  v84 = &v81;
  v88 = &v86;
  v89 = &v86;
  v77[0] = v8;
  memset(&v77[1], 0, 32);
  v80 = 0;
  v82 = 0;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v90 = 0;
  v91 = 0;
  v92 = 1;
  v93 = v95;
  v95[0] = 1;
  v95[2] = 1;
  v94 = 0x200000001LL;
  v74 = 0x200000001LL;
  v98 = 0;
  v102 = 0x1000000000LL;
  v96 = 0;
  v97 = 0;
  v99 = 0;
  v100 = 0;
  v73 = v77;
  v101 = v103;
  sub_69F1C0((__int64)&v104, 0, 0, 0);
  v105 = 0;
  v108 = 0;
  v107 = 0;
  v109 = 0;
  v110 = nullptr;
  v111 = &v109;
  v112 = &v109;
  v70 = 1;
  v113 = 0;
  v114 = 0;
  v115 = -1;
  v116 = 0x10000;
  v106 = 0;
  if ( v76 )
  {
    v22 = sub_6B4C60(v71);
    sub_8CBB70(v22, v41, v47);
    v21 = (__m128i *)*(unsigned int *)(a2 + 8);
    LOBYTE(v3) = (_DWORD)v21 == 0;
    goto LABEL_21;
  }
  v9 = v47;
  if ( (v47[1].m128i_i8[12] & 0x7Fu) - 33 > 3 )
  {
    v9 = nullptr;
    LOBYTE(v62) = v62 | 1;
    v45 = v67;
    ptr = v67;
    v60 = 0u;
    v61 = 0;
    v64 = 0;
    v66 = 0x800000000LL;
    HIBYTE(v68) = 0;
LABEL_52:
    v15 = *(_QWORD *)(v71 + 18560);
    goto LABEL_12;
  }
  v10 = *(_QWORD *)(sub_79A2E0((__int64)&v47[4].m128i_i64[1]) + 16);
  v11 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v10 & 4) != 0 )
    v11 = (_QWORD *)*v11;
  if ( !v11 )
    BUG();
  v12 = (__int64)(v11 - 8);
  v13 = *(__int64 (**)())(*(v11 - 8) + 32LL);
  if ( v13 == sub_6A41B0 )
    v14 = sub_777E10(v12);
  else
    v14 = ((__int64 (__fastcall *)(__int64))v13)(v12);
  LOBYTE(v62) = v62 | 1;
  v45 = v67;
  ptr = v67;
  v60 = 0u;
  v61 = 0;
  v64 = 0;
  v66 = 0x800000000LL;
  HIBYTE(v68) = 0;
  if ( !v14 )
    goto LABEL_52;
  v15 = sub_6E8B00(v71, v14);
LABEL_12:
  *(_WORD *)v50 = *(_WORD *)v50 & 0xFE00 | 0x37;
  if ( byte_4AD234C )
    sub_AC4570(55);
  v51 = v15;
  v44 = v50;
  *(_WORD *)&v50[1] &= 0xF801u;
  v16 = sub_76B710((__int64)v50);
  v50[1] = (v16 << 6) | v50[1] & 0x3F;
  v50[2] = v50[2] & 0xF8 | (v16 >> 2) & 7;
  v17 = *((_DWORD *)v73 + 44);
  v43 = &v55;
  sub_69F1F0((__int64)&v55, (__int64)v50, v17, 0);
  LOBYTE(v68) = v68 & 0xFD;
  v18 = _mm_load_si128(&v55);
  v61 = 0;
  v60 = v18;
  v58 = v18;
  v19 = sub_69F240(v58.m128i_i64);
  v68 &= 0xFEu;
  v58.m128i_i8[4] &= ~1u;
  v59 = v19;
  v63 = 0;
  v64 = v19;
  LODWORD(v66) = 0;
  v58.m128i_i32[0] = 0;
  LOBYTE(v19) = v47[1].m128i_i8[12];
  v62 = 0;
  if ( (v19 & 0x7F) == 0x24 )
  {
    v20 = _mm_load_si128(&v60);
    v105 = 1;
    *(_QWORD *)&v106 = &v58;
    v21 = &v60;
    v104 = v20;
    sub_8999A0(v44, &v60, 0, 0, (__int64)v47, (__int64)v41, (__int64)&v58);
  }
  else
  {
    v37 = *(__int64 (__fastcall **)(__int64))(v47->m128i_i64[0] + 64);
    v46 = v47[1].m128i_u32[2];
    if ( v37 == sub_5F7E00 )
      v38 = (__m128i *)sub_78BC30(v47, (unsigned __int64 *)v43);
    else
      v38 = (__m128i *)v37((__int64)v47);
    if ( v9 && (v43 = v38, v39 = sub_7A5610(v9), v38 = v43, v39) )
      v40 = &v60;
    else
      v40 = nullptr;
    v21 = v47;
    sub_895450(
      v46,
      (__int64)v47,
      v40,
      (__int64)v44,
      nullptr,
      (unsigned __int16 *)v38,
      0,
      0,
      (__int64)v41,
      (__int64)&v58,
      0);
  }
  LODWORD(v3) = *(_DWORD *)(a2 + 8);
  if ( v58.m128i_i32[0] > 1u )
    sub_69F740((__int64)&v58);
  v22 = (__int64)ptr;
  if ( ptr != v45 )
    free(ptr);
  LOBYTE(v3) = (_DWORD)v3 == 0;
LABEL_21:
  v69 = &off_47DA958;
  v23 = (char *)v101;
  v24 = (char *)v101 + 32 * (unsigned int)v102;
  if ( v101 != v24 )
  {
    do
    {
      v22 = *((_QWORD *)v23 + 3);
      if ( (unsigned int)sub_B19900(v22) )
      {
        *(_BYTE *)v72 = 1;
        if ( HIDWORD(v116) <= 2 && !WORD1(v116) )
          break;
      }
      v23 += 32;
    }
    while ( v24 != v23 );
  }
  v25 = (_QWORD **)v110;
  LODWORD(v102) = 0;
  if ( v110 )
  {
    while ( 1 )
    {
      sub_822210(v25[3]);
      v26 = (_QWORD **)v25[2];
      if ( *((_DWORD *)v25 + 10) > 1u )
        sub_69F740((__int64)(v25 + 5));
      v21 = (__m128i *)&qword_68;
      v22 = (__int64)v25;
      operator delete(v25, 0x68u);
      if ( !v26 )
        break;
      v25 = v26;
    }
  }
  if ( !v108 )
  {
    v27 = 0;
    goto LABEL_34;
  }
  v28 = sub_69F620(v22, v21);
  v53 = nullptr;
  v52[0] = v28;
  v52[1] = v29;
  v54 = 0;
  v30.m128i_i64[0] = sub_69F630(v22, v21);
  v31 = *((_QWORD **)&v106 + 1);
  v56 = 0;
  v55 = v30;
  v57 = 0;
  v32 = *((_QWORD *)&v106 + 1) + 40LL * v108;
  if ( *((_QWORD *)&v106 + 1) != v32 )
  {
    v43 = &v55;
    while ( 1 )
    {
      if ( (unsigned __int8)sub_69F550(v31, v52) )
      {
        v33 = v31[3];
        if ( v33 == v54 )
        {
          v34 = (_QWORD *)v31[2];
          v35 = &v34[v33];
          v36 = v53;
          if ( v34 == v35 )
            goto LABEL_41;
          while ( *v34 == *v36 )
          {
            ++v34;
            ++v36;
            if ( v35 == v34 )
              goto LABEL_41;
          }
        }
      }
      sub_69F550(v31, v43);
LABEL_41:
      v31 += 5;
      if ( (_QWORD *)v32 == v31 )
      {
        v27 = 40LL * v108;
        goto LABEL_34;
      }
    }
  }
  v27 = 0;
LABEL_34:
  operator delete();
  if ( v101 != v103 )
    free(v101);
  sub_822100((__int64)v77);
  sub_A2CAF0(v41, v27);
  if ( v42 )
    sub_25EA250(v42);
  return (unsigned int)v3;
}

