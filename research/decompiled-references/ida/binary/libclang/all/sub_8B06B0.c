__int64 __fastcall sub_8B06B0(__int64 *a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int16 v11; // ax
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v18; // rdx
  void *v19; // rdi
  unsigned __int8 *v20; // rax
  unsigned int v21; // r12d
  int v22; // edx
  char v23; // r13
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  unsigned int v27; // eax
  void *v28; // r8
  _QWORD *v29; // rax
  size_t v30; // rcx
  __int64 v31; // r13
  unsigned int v32; // eax
  void *v33; // r8
  _QWORD *v34; // rax
  unsigned __int8 *v35; // rcx
  __int64 v36; // r14
  unsigned int v37; // eax
  void *v38; // r8
  unsigned __int8 *v39; // rcx
  _QWORD *v40; // rax
  void *v41; // rax
  _QWORD *v42; // rdi
  _BYTE *v43; // rax
  _QWORD *v44; // rdi
  _BYTE *v45; // rax
  _QWORD *v46; // rdi
  __int64 v47; // [rsp+0h] [rbp-368h]
  __int64 v48; // [rsp+0h] [rbp-368h]
  size_t n; // [rsp+8h] [rbp-360h]
  void *src; // [rsp+10h] [rbp-358h]
  unsigned __int8 *srca; // [rsp+10h] [rbp-358h]
  void *srcb; // [rsp+10h] [rbp-358h]
  void *v53; // [rsp+18h] [rbp-350h]
  void *v54; // [rsp+18h] [rbp-350h]
  char v55; // [rsp+29h] [rbp-33Fh] BYREF
  char v56; // [rsp+2Ah] [rbp-33Eh] BYREF
  char v57; // [rsp+2Bh] [rbp-33Dh] BYREF
  int v58; // [rsp+2Ch] [rbp-33Ch] BYREF
  void *v59; // [rsp+30h] [rbp-338h] BYREF
  unsigned int v60; // [rsp+38h] [rbp-330h]
  char v61; // [rsp+3Ch] [rbp-32Ch]
  unsigned __int8 *v62; // [rsp+40h] [rbp-328h] BYREF
  unsigned __int32 v63; // [rsp+48h] [rbp-320h]
  char v64; // [rsp+4Ch] [rbp-31Ch]
  unsigned int v65; // [rsp+50h] [rbp-318h]
  void *v66; // [rsp+60h] [rbp-308h] BYREF
  unsigned int v67; // [rsp+68h] [rbp-300h]
  void *v68; // [rsp+80h] [rbp-2E8h] BYREF
  unsigned int v69; // [rsp+88h] [rbp-2E0h]
  __int64 v70[4]; // [rsp+A0h] [rbp-2C8h] BYREF
  void *v71; // [rsp+C0h] [rbp-2A8h] BYREF
  unsigned int v72; // [rsp+C8h] [rbp-2A0h]
  void *v73; // [rsp+E0h] [rbp-288h]
  unsigned __int8 *v74; // [rsp+E8h] [rbp-280h]
  _QWORD v75[2]; // [rsp+F0h] [rbp-278h] BYREF
  _BYTE *v76; // [rsp+100h] [rbp-268h]
  unsigned __int8 *v77; // [rsp+108h] [rbp-260h]
  _QWORD v78[2]; // [rsp+110h] [rbp-258h] BYREF
  _BYTE *v79; // [rsp+120h] [rbp-248h]
  size_t v80; // [rsp+128h] [rbp-240h]
  _QWORD v81[2]; // [rsp+130h] [rbp-238h] BYREF
  void *v82; // [rsp+140h] [rbp-228h] BYREF
  __m128i si128; // [rsp+148h] [rbp-220h]
  _BYTE v84[40]; // [rsp+158h] [rbp-210h] BYREF
  void *v85; // [rsp+180h] [rbp-1E8h] BYREF
  __m128i v86; // [rsp+188h] [rbp-1E0h]
  _BYTE v87[40]; // [rsp+198h] [rbp-1D0h] BYREF
  void *v88; // [rsp+1C0h] [rbp-1A8h] BYREF
  __m128i v89; // [rsp+1C8h] [rbp-1A0h]
  _BYTE v90[40]; // [rsp+1D8h] [rbp-190h] BYREF
  unsigned __int8 *v91[10]; // [rsp+200h] [rbp-168h] BYREF
  __m128i v92; // [rsp+250h] [rbp-118h] BYREF
  char v93; // [rsp+260h] [rbp-108h]
  unsigned __int8 *v94; // [rsp+2A0h] [rbp-C8h] BYREF
  __int64 *v95; // [rsp+2A8h] [rbp-C0h]
  __int64 v96; // [rsp+2B0h] [rbp-B8h]
  char v97; // [rsp+2B8h] [rbp-B0h]
  __int64 v98; // [rsp+2C8h] [rbp-A0h]
  void *ptr; // [rsp+2D0h] [rbp-98h]
  __int64 v100; // [rsp+2D8h] [rbp-90h]
  _BYTE v101[136]; // [rsp+2E0h] [rbp-88h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 16);
  v6 = *(_QWORD *)(*a1 + 16);
  v58 = sub_70B7E0(v6, v4);
  v11 = (*(_WORD *)(a2 + 2) >> 3) & 0x7F;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) == 0x20 )
  {
    v21 = sub_70B7E0(*(_QWORD *)(*a1 + 16), *(_QWORD *)(v5 + 8));
    v92.m128i_i32[2] = (unsigned __int16)v21;
    v22 = HIBYTE(v21) & 0x20;
    v23 = ((unsigned __int8)v22 >> 5) ^ 1;
    if ( (unsigned __int16)v21 > 0x40u )
    {
      sub_2585A50(&v92, 0, (v21 & 0x20000000) != 0);
      LODWORD(v95) = v92.m128i_i32[2];
      if ( v92.m128i_i32[2] <= 0x40u )
      {
        v63 = v92.m128i_u32[2];
        v64 = v23;
        v62 = (unsigned __int8 *)v92.m128i_i64[0];
        v65 = v21;
      }
      else
      {
        sub_2585B30(&v94);
        v64 = v23;
        v65 = v21;
        v63 = (unsigned int)v95;
        v62 = v94;
        if ( v92.m128i_i32[2] > 0x40u && v92.m128i_i64[0] )
          operator delete[]((void *)v92.m128i_i64[0]);
      }
    }
    else
    {
      v63 = (unsigned __int16)v21;
      v62 = nullptr;
      v64 = ((unsigned __int8)v22 >> 5) ^ 1;
      v65 = v21;
    }
    v14 = sub_8AEA20(v5, (__int64)&v62, *a1);
    if ( !(_BYTE)v14 )
    {
LABEL_33:
      if ( v63 <= 0x40 )
        return v14;
      v19 = v62;
      if ( !v62 )
        return v14;
LABEL_18:
      operator delete[](v19);
      return v14;
    }
    sub_256E520(&v66, &v62, &v58, &v55);
    if ( !v55 )
      goto LABEL_29;
    v24 = *a1;
    if ( !*(_BYTE *)(*a1 + 963) )
    {
LABEL_28:
      if ( !(unsigned __int8)sub_82C2F0(v24, a2, (__int64)&v66, *(_QWORD *)(a2 + 8)) )
      {
        v14 = 0;
        goto LABEL_30;
      }
LABEL_29:
      sub_821070((__int64)a1, (__int64)&v66);
LABEL_30:
      if ( v67 > 0x40 && v66 )
        operator delete[](v66);
      goto LABEL_33;
    }
    v36 = sub_6BB140(*(_QWORD *)(v24 + 16));
    v37 = sub_8124E0(a2);
    sub_C6CF40(v91, v36, v37, 2352);
    v82 = v84;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E610);
    sub_2572060(&v66, &v82);
    v38 = v82;
    v73 = v75;
    v39 = (unsigned __int8 *)si128.m128i_i64[0];
    if ( !v82 && si128.m128i_i64[0] )
      goto LABEL_100;
    v94 = (unsigned __int8 *)si128.m128i_i64[0];
    if ( si128.m128i_i64[0] > 0xFuLL )
    {
      src = v82;
      n = si128.m128i_i64[0];
      v41 = (void *)std::string::_M_create();
      v39 = (unsigned __int8 *)n;
      v38 = src;
      v73 = v41;
      v42 = v41;
      v75[0] = v94;
    }
    else
    {
      if ( si128.m128i_i64[0] == 1 )
      {
        LOBYTE(v75[0]) = *(_BYTE *)v82;
        v40 = v75;
LABEL_79:
        v74 = v39;
        v39[(_QWORD)v40] = 0;
        if ( v82 != v84 )
          free(v82);
        sub_838D50(v91, v73, (size_t)v74);
        sub_8356A0(v91, *(_QWORD *)(a2 + 8), 8u);
        if ( v73 != v75 )
          operator delete(v73, v75[0] + 1LL);
        sub_83BB20((__int64)v91);
        v24 = *a1;
        goto LABEL_28;
      }
      if ( !si128.m128i_i64[0] )
      {
        v40 = v75;
        goto LABEL_79;
      }
      v42 = v75;
    }
    memcpy(v42, v38, (size_t)v39);
    v39 = v94;
    v40 = v73;
    goto LABEL_79;
  }
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7Fu) > 0x20 )
  {
    if ( (_BYTE)v11 != 34 )
      goto LABEL_20;
    v18 = *a1;
    v61 = 0;
    v60 = 1;
    v59 = nullptr;
    v14 = sub_87D880(v5, (__int64)&v59, v18, v8, v9, v10);
    if ( !(_BYTE)v14 )
      goto LABEL_16;
    LODWORD(v94) = sub_70B7E0(*(_QWORD *)(*a1 + 16), v4);
    sub_2574720(&v68, &v59, &v94, &v56);
    if ( !v56 )
      goto LABEL_46;
    v26 = *a1;
    if ( !*(_BYTE *)(*a1 + 963) )
    {
LABEL_45:
      if ( !(unsigned __int8)sub_82C2F0(v26, a2, (__int64)&v68, *(_QWORD *)(a2 + 8)) )
      {
        v14 = 0;
        goto LABEL_47;
      }
LABEL_46:
      sub_821070((__int64)a1, (__int64)&v68);
LABEL_47:
      if ( v69 > 0x40 && v68 )
        operator delete[](v68);
LABEL_16:
      if ( v60 <= 0x40 )
        return v14;
      v19 = v59;
      if ( !v59 )
        return v14;
      goto LABEL_18;
    }
    v31 = sub_6BB140(*(_QWORD *)(v26 + 16));
    v32 = sub_8124E0(a2);
    sub_C6CF40(&v92, v31, v32, 2352);
    v85 = v87;
    v86 = _mm_load_si128((const __m128i *)&xmmword_3C7E610);
    sub_2572060(&v68, &v85);
    v33 = v85;
    v34 = v78;
    v35 = (unsigned __int8 *)v86.m128i_i64[0];
    v76 = v78;
    if ( !v85 && v86.m128i_i64[0] )
      goto LABEL_100;
    v94 = (unsigned __int8 *)v86.m128i_i64[0];
    if ( v86.m128i_i64[0] > 0xFuLL )
    {
      v53 = v85;
      srca = (unsigned __int8 *)v86.m128i_i64[0];
      v43 = (_BYTE *)std::string::_M_create();
      v35 = srca;
      v33 = v53;
      v76 = v43;
      v44 = v43;
      v78[0] = v94;
    }
    else
    {
      if ( v86.m128i_i64[0] == 1 )
      {
        LOBYTE(v78[0]) = *(_BYTE *)v85;
LABEL_71:
        v77 = v35;
        v35[(_QWORD)v34] = 0;
        if ( v85 != v87 )
          free(v85);
        sub_838D50((unsigned __int8 **)&v92, v76, (size_t)v77);
        sub_8356A0((unsigned __int8 **)&v92, *(_QWORD *)(a2 + 8), 8u);
        std::string::_M_dispose();
        sub_83BB20((__int64)&v92);
        v26 = *a1;
        goto LABEL_45;
      }
      if ( !v86.m128i_i64[0] )
        goto LABEL_71;
      v44 = v78;
    }
    memcpy(v44, v33, (size_t)v35);
    v35 = v94;
    v34 = v76;
    goto LABEL_71;
  }
  if ( (unsigned __int8)v11 > 5u )
  {
    if ( (_BYTE)v11 != 30 )
      goto LABEL_20;
    v47 = sub_2575D00(v6, v4, v7);
    sub_2580BE0(&v94, 0.0);
    sub_257EDC0(v70, &v94, v47);
    sub_25769A0(&v94);
    v20 = (unsigned __int8 *)*a1;
    v95 = v70;
    v94 = v20;
    v14 = sub_883160((__int64 *)&v94, v5);
    if ( !(_BYTE)v14 )
    {
LABEL_22:
      sub_5FF3B0(v70);
      return v14;
    }
    LODWORD(v94) = sub_70B7E0(*(_QWORD *)(*a1 + 16), v4);
    sub_25747D0(&v71, v70, &v94, &v57);
    if ( !v57 )
      goto LABEL_39;
    v25 = *a1;
    if ( !*(_BYTE *)(*a1 + 963) )
    {
LABEL_38:
      if ( !(unsigned __int8)sub_82C2F0(v25, a2, (__int64)&v71, *(_QWORD *)(a2 + 8)) )
      {
        v14 = 0;
        goto LABEL_40;
      }
LABEL_39:
      sub_821070((__int64)a1, (__int64)&v71);
LABEL_40:
      if ( v72 > 0x40 && v71 )
        operator delete[](v71);
      goto LABEL_22;
    }
    v48 = sub_6BB140(*(_QWORD *)(v25 + 16));
    v27 = sub_8124E0(a2);
    sub_C6CF40(&v94, v48, v27, 2352);
    v88 = v90;
    v89 = _mm_load_si128((const __m128i *)&xmmword_3C7E610);
    sub_2572060(&v71, &v88);
    v28 = v88;
    v29 = v81;
    v30 = v89.m128i_i64[0];
    v79 = v81;
    if ( v88 || !v89.m128i_i64[0] )
    {
      v92.m128i_i64[0] = v89.m128i_i64[0];
      if ( v89.m128i_i64[0] > 0xFuLL )
      {
        v54 = v88;
        srcb = (void *)v89.m128i_i64[0];
        v45 = (_BYTE *)std::string::_M_create();
        v30 = (size_t)srcb;
        v28 = v54;
        v79 = v45;
        v46 = v45;
        v81[0] = v92.m128i_i64[0];
      }
      else
      {
        if ( v89.m128i_i64[0] == 1 )
        {
          LOBYTE(v81[0]) = *(_BYTE *)v88;
LABEL_63:
          v80 = v30;
          *((_BYTE *)v29 + v30) = 0;
          if ( v88 != v90 )
            free(v88);
          sub_838D50(&v94, v79, v80);
          sub_8356A0(&v94, *(_QWORD *)(a2 + 8), 8u);
          std::string::_M_dispose();
          sub_83BB20((__int64)&v94);
          v25 = *a1;
          goto LABEL_38;
        }
        if ( !v89.m128i_i64[0] )
          goto LABEL_63;
        v46 = v81;
      }
      memcpy(v46, v28, v30);
      v30 = v92.m128i_i64[0];
      v29 = v79;
      goto LABEL_63;
    }
LABEL_100:
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
  if ( (unsigned __int8)v11 <= 3u )
  {
LABEL_20:
    v14 = 0;
    sub_826D30(*a1, a2, 110);
    return v14;
  }
  v12 = *(_QWORD *)(a2 + 16);
  if ( (_BYTE)v11 == 5 )
  {
    return (unsigned int)sub_8ADEA0(a1, v12);
  }
  else
  {
    v97 |= 1u;
    v94 = nullptr;
    v100 = 0x800000000LL;
    v13 = *a1;
    v95 = nullptr;
    v96 = 0;
    v98 = 0;
    ptr = v101;
    v101[65] = 0;
    v92.m128i_i64[0] = v13;
    v92.m128i_i64[1] = (__int64)&v94;
    v93 = 0;
    v14 = sub_869D30(&v92, v12);
    if ( (_BYTE)v14 )
    {
      v15 = *(_QWORD *)(a2 + 16);
      v16 = *a1;
      v92.m128i_i8[4] &= ~1u;
      v92.m128i_i32[0] = 0;
      v14 = sub_85F440(v16, (_DWORD *)a2, *(_QWORD *)(v15 + 8), (__int64)&v94, (__int64)&v92, 0);
      if ( (_BYTE)v14 )
        sub_821070((__int64)a1, (__int64)&v92.m128i_i64[1]);
      if ( v92.m128i_i32[0] > 1u )
        sub_69F740((__int64)&v92);
    }
    if ( ptr != v101 )
      free(ptr);
  }
  return v14;
}

