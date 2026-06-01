__m128i *__fastcall sub_10979E0(__int64 *a1, _BYTE *a2, _DWORD *a3, __int64 *a4, __m128i *a5)
{
  __int64 v8; // r15
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _BYTE *v11; // rdx
  _BYTE *v12; // rdx
  int v13; // eax
  unsigned int v14; // esi
  unsigned __int64 v15; // rdi
  unsigned __int32 v16; // r10d
  char v17; // r8
  unsigned __int32 v18; // eax
  unsigned __int32 v19; // eax
  const char *v20; // rax
  __int64 v21; // r13
  _QWORD *v22; // rdx
  _BYTE *v23; // rax
  _BYTE *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  _QWORD *v27; // rdx
  __int64 v28; // rax
  _BYTE *v29; // rax
  _BYTE *v30; // rax
  unsigned __int32 v32; // eax
  unsigned __int32 v33; // eax
  __m128i v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int32 v38; // r11d
  char v39; // al
  char v40; // r11
  __int64 v41; // rax
  __m128i *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rbx
  __m128i *v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // r13
  __m128i *v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __m128i si128; // xmm0
  __m128i v55; // xmm0
  __m128i v56; // xmm0
  __int64 v58; // [rsp+8h] [rbp-F0h]
  __int64 v59; // [rsp+8h] [rbp-F0h]
  char v60; // [rsp+19h] [rbp-DFh] BYREF
  char v61; // [rsp+1Ah] [rbp-DEh]
  char v62; // [rsp+1Bh] [rbp-DDh]
  char v63; // [rsp+1Ch] [rbp-DCh]
  char v64; // [rsp+1Dh] [rbp-DBh]
  char v65; // [rsp+1Eh] [rbp-DAh]
  char v66; // [rsp+1Fh] [rbp-D9h]
  __m128i v67; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v68[4]; // [rsp+30h] [rbp-C8h] BYREF
  __int16 v69; // [rsp+50h] [rbp-A8h]
  _QWORD v70[4]; // [rsp+60h] [rbp-98h] BYREF
  __int16 v71; // [rsp+80h] [rbp-78h]
  _BYTE v72[32]; // [rsp+90h] [rbp-68h] BYREF
  __int16 v73; // [rsp+B0h] [rbp-48h]

  sub_1096400(a1, a2, a3);
  v8 = *a1;
  v70[0] = "1";
  v9 = *(_QWORD **)(v8 + 32);
  v10 = *(_QWORD *)(v8 + 24);
  v68[0] = "__STDC_NO_THREADS__";
  v71 = 259;
  v69 = 259;
  v73 = 257;
  if ( (unsigned __int64)(v10 - (_QWORD)v9) > 7 )
  {
    *v9 = 0x20656E6966656423LL;
    *(_QWORD *)(v8 + 32) += 8LL;
  }
  else
  {
    v8 = sub_227BF10(v8, "#define ", 8);
  }
  sub_2254180(v68, v8);
  v11 = *(_BYTE **)(v8 + 32);
  if ( (unsigned __int64)v11 >= *(_QWORD *)(v8 + 24) )
  {
    v8 = sub_227BA10(v8, 32);
  }
  else
  {
    *(_QWORD *)(v8 + 32) = v11 + 1;
    *v11 = 32;
  }
  sub_2254180(v70, v8);
  v12 = *(_BYTE **)(v8 + 32);
  if ( (unsigned __int64)v12 >= *(_QWORD *)(v8 + 24) )
  {
    sub_227BA10(v8, 10);
  }
  else
  {
    *(_QWORD *)(v8 + 32) = v12 + 1;
    *v12 = 10;
  }
  if ( (unsigned __int8)v73 > 1u )
  {
    v41 = *a1;
    v42 = *(__m128i **)(*a1 + 32);
    if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v42 > 0x18u )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v42[1].m128i_i8[8] = 40;
      v42[1].m128i_i64[0] = 0x6465746163657270LL;
      *v42 = si128;
      *(_QWORD *)(v41 + 32) += 25LL;
    }
    else
    {
      v41 = sub_227BF10(*a1, "#pragma clang deprecated(", 25);
    }
    v58 = v41;
    sub_2254180(v68, v41);
    v43 = v58;
    v44 = *(_QWORD *)(v58 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v58 + 24) - v44) > 2 )
    {
      *(_BYTE *)(v44 + 2) = 34;
      *(_WORD *)v44 = 8236;
      *(_QWORD *)(v58 + 32) += 3LL;
    }
    else
    {
      v43 = sub_227BF10(v58, ", \"", 3);
    }
    v59 = v43;
    sub_2254180(v72, v43);
    v45 = *(_QWORD *)(v59 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v59 + 24) - v45) > 2 )
    {
      *(_BYTE *)(v45 + 2) = 10;
      *(_WORD *)v45 = 10530;
      *(_QWORD *)(v59 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v59, "\")\n", 3);
    }
  }
  v13 = a3[11];
  v67 = 0;
  if ( (v13 & 0xFFFFFFF7) == 1 )
  {
    sub_22B7D00(a3, &v67);
    a4[1] = 5;
    *a4 = (__int64)"macos";
  }
  else
  {
    v34.m128i_i64[0] = sub_22B7B00(a3);
    v35 = (unsigned int)a3[11];
    v67 = v34;
    v36 = sub_22B6740(v35);
    *a4 = v36;
    a4[1] = v37;
    if ( v37 == 3 )
    {
      if ( *(_WORD *)v36 == 28521 && *(_BYTE *)(v36 + 2) == 115 && a3[12] == 32 )
      {
        a4[1] = 11;
        *a4 = (__int64)"maccatalyst";
      }
    }
    else if ( v37 == 5 && *(_DWORD *)v36 == 862873975 && *(_BYTE *)(v36 + 4) == 50 )
    {
      goto LABEL_38;
    }
  }
  v14 = a3[11];
  v15 = v14;
  if ( (v14 & 0xFFFFFFF7) != 1 )
  {
    if ( v67.m128i_i32[0] <= 9u )
    {
      v17 = v67.m128i_i8[0] + 48;
      v60 = v67.m128i_i8[0] + 48;
      if ( v67.m128i_i8[7] < 0 )
      {
        v61 = (v67.m128i_i32[1] & 0x7FFFFFFFu) / 0xA + 48;
        v32 = (v67.m128i_i32[1] & 0x7FFFFFFFu) % 0xA + 48;
      }
      else
      {
        v61 = 48;
        LOBYTE(v32) = 48;
      }
      v62 = v32;
      if ( v67.m128i_i8[11] < 0 )
      {
        v63 = (v67.m128i_i32[2] & 0x7FFFFFFFu) / 0xA + 48;
        v33 = (v67.m128i_i32[2] & 0x7FFFFFFFu) % 0xA + 48;
      }
      else
      {
        v63 = 48;
        LOBYTE(v33) = 48;
      }
      v64 = v33;
      v65 = 0;
      if ( v14 != 27 )
      {
        if ( v14 != 5 )
          goto LABEL_62;
        HIBYTE(v71) = 1;
LABEL_47:
        LOBYTE(v71) = 3;
        v70[0] = &v60;
LABEL_112:
        v20 = "__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__";
        goto LABEL_20;
      }
      HIBYTE(v71) = 1;
      goto LABEL_102;
    }
LABEL_13:
    v17 = v67.m128i_i32[0] / 0xAu + 48;
    v60 = v17;
    v61 = v67.m128i_i32[0] % 0xAu + 48;
    if ( v67.m128i_i8[7] < 0 )
    {
      v62 = (v67.m128i_i32[1] & 0x7FFFFFFFu) / 0xA + 48;
      v18 = (v67.m128i_i32[1] & 0x7FFFFFFFu) % 0xA + 48;
    }
    else
    {
      v62 = 48;
      LOBYTE(v18) = 48;
    }
    v63 = v18;
    if ( v67.m128i_i8[11] < 0 )
    {
      v64 = (v67.m128i_i32[2] & 0x7FFFFFFFu) / 0xA + 48;
      v19 = (v67.m128i_i32[2] & 0x7FFFFFFFu) % 0xA + 48;
    }
    else
    {
      v64 = 48;
      LOBYTE(v19) = 48;
    }
    v65 = v19;
    v15 = v14;
    v66 = 0;
    if ( v14 != 27 )
      goto LABEL_61;
    v71 = 257;
    if ( (unsigned __int8)(v67.m128i_i32[0] / 0xAu) == 0xD0 )
    {
LABEL_19:
      v20 = "__ENVIRONMENT_TV_OS_VERSION_MIN_REQUIRED__";
      goto LABEL_20;
    }
LABEL_102:
    LOBYTE(v71) = 3;
    v70[0] = &v60;
    goto LABEL_19;
  }
  v16 = v67.m128i_i32[1] & 0x7FFFFFFF;
  if ( v67.m128i_i32[0] > 9u && (v67.m128i_i32[0] != 10 || v16 > 9) )
    goto LABEL_13;
  v38 = v67.m128i_i32[2] & 0x7FFFFFFF;
  v17 = v67.m128i_i32[0] / 0xAu + 48;
  v60 = v17;
  v39 = 48;
  v61 = v67.m128i_i32[0] % 0xAu + 48;
  if ( v67.m128i_i8[7] < 0 )
  {
    if ( v16 > 9 )
      LOBYTE(v16) = 9;
    v39 = v16 + 48;
  }
  v62 = v39;
  if ( v67.m128i_i8[11] < 0 )
  {
    if ( v38 > 9 )
      LOBYTE(v38) = 9;
    v40 = v38 + 48;
  }
  else
  {
    v40 = 48;
  }
  v63 = v40;
  v64 = 0;
LABEL_61:
  if ( v14 == 5 )
  {
    v71 = 257;
    if ( !v17 )
      goto LABEL_112;
    goto LABEL_47;
  }
LABEL_62:
  if ( v14 == 28 )
  {
    v71 = 257;
    if ( v17 )
    {
      LOBYTE(v71) = 3;
      v70[0] = &v60;
    }
    v20 = "__ENVIRONMENT_WATCH_OS_VERSION_MIN_REQUIRED__";
  }
  else if ( v14 == 30 )
  {
    v71 = 257;
    if ( v17 )
    {
      LOBYTE(v71) = 3;
      v70[0] = &v60;
    }
    v20 = "__ENVIRONMENT_DRIVERKIT_VERSION_MIN_REQUIRED__";
  }
  else
  {
    if ( (v14 & 0xFFFFFFF7) != 1 )
      goto LABEL_27;
    v71 = 257;
    if ( v17 )
    {
      LOBYTE(v71) = 3;
      v70[0] = &v60;
    }
    v20 = "__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__";
  }
LABEL_20:
  v68[0] = v20;
  v73 = 257;
  v21 = *a1;
  v69 = 259;
  v22 = *(_QWORD **)(v21 + 32);
  if ( *(_QWORD *)(v21 + 24) - (_QWORD)v22 > 7u )
  {
    *v22 = 0x20656E6966656423LL;
    *(_QWORD *)(v21 + 32) += 8LL;
  }
  else
  {
    v21 = sub_227BF10(v21, "#define ", 8);
  }
  sub_2254180(v68, v21);
  v23 = *(_BYTE **)(v21 + 32);
  if ( (unsigned __int64)v23 >= *(_QWORD *)(v21 + 24) )
  {
    v21 = sub_227BA10(v21, 32);
  }
  else
  {
    *(_QWORD *)(v21 + 32) = v23 + 1;
    *v23 = 32;
  }
  sub_2254180(v70, v21);
  v24 = *(_BYTE **)(v21 + 32);
  if ( (unsigned __int64)v24 >= *(_QWORD *)(v21 + 24) )
  {
    sub_227BA10(v21, 10);
    if ( (unsigned __int8)v73 <= 1u )
      goto LABEL_26;
LABEL_90:
    v50 = *a1;
    v51 = *(__m128i **)(*a1 + 32);
    if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v51 > 0x18u )
    {
      v56 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v51[1].m128i_i8[8] = 40;
      v51[1].m128i_i64[0] = 0x6465746163657270LL;
      *v51 = v56;
      *(_QWORD *)(v50 + 32) += 25LL;
    }
    else
    {
      v50 = sub_227BF10(*a1, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v68, v50);
    v52 = *(_QWORD *)(v50 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v50 + 24) - v52) > 2 )
    {
      *(_BYTE *)(v52 + 2) = 34;
      *(_WORD *)v52 = 8236;
      *(_QWORD *)(v50 + 32) += 3LL;
    }
    else
    {
      v50 = sub_227BF10(v50, ", \"", 3);
    }
    sub_2254180(v72, v50);
    v53 = *(_QWORD *)(v50 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v50 + 24) - v53) > 2 )
    {
      *(_BYTE *)(v53 + 2) = 10;
      *(_WORD *)v53 = 10530;
      *(_QWORD *)(v50 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v50, "\")\n", 3);
    }
    goto LABEL_26;
  }
  *(_QWORD *)(v21 + 32) = v24 + 1;
  *v24 = 10;
  if ( (unsigned __int8)v73 > 1u )
    goto LABEL_90;
LABEL_26:
  v15 = (unsigned int)a3[11];
LABEL_27:
  if ( (unsigned int)v15 <= 0x1F )
  {
    v25 = 4160750114LL;
    if ( _bittest64(&v25, v15) )
    {
      v71 = 257;
      if ( v60 )
      {
        LOBYTE(v71) = 3;
        v70[0] = &v60;
      }
      v26 = *a1;
      v68[0] = "__ENVIRONMENT_OS_VERSION_MIN_REQUIRED__";
      v27 = *(_QWORD **)(v26 + 32);
      v28 = *(_QWORD *)(v26 + 24);
      v69 = 259;
      v73 = 257;
      if ( (unsigned __int64)(v28 - (_QWORD)v27) > 7 )
      {
        *v27 = 0x20656E6966656423LL;
        *(_QWORD *)(v26 + 32) += 8LL;
      }
      else
      {
        v26 = sub_227BF10(v26, "#define ", 8);
      }
      sub_2254180(v68, v26);
      v29 = *(_BYTE **)(v26 + 32);
      if ( (unsigned __int64)v29 >= *(_QWORD *)(v26 + 24) )
      {
        v26 = sub_227BA10(v26, 32);
      }
      else
      {
        *(_QWORD *)(v26 + 32) = v29 + 1;
        *v29 = 32;
      }
      sub_2254180(v70, v26);
      v30 = *(_BYTE **)(v26 + 32);
      if ( (unsigned __int64)v30 >= *(_QWORD *)(v26 + 24) )
      {
        sub_227BA10(v26, 10);
      }
      else
      {
        *(_QWORD *)(v26 + 32) = v30 + 1;
        *v30 = 10;
      }
      if ( (unsigned __int8)v73 > 1u )
      {
        v46 = *a1;
        v47 = *(__m128i **)(*a1 + 32);
        if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v47 > 0x18u )
        {
          v55 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
          v47[1].m128i_i8[8] = 40;
          v47[1].m128i_i64[0] = 0x6465746163657270LL;
          *v47 = v55;
          *(_QWORD *)(v46 + 32) += 25LL;
        }
        else
        {
          v46 = sub_227BF10(*a1, "#pragma clang deprecated(", 25);
        }
        sub_2254180(v68, v46);
        v48 = *(_QWORD *)(v46 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v46 + 24) - v48) > 2 )
        {
          *(_BYTE *)(v48 + 2) = 34;
          *(_WORD *)v48 = 8236;
          *(_QWORD *)(v46 + 32) += 3LL;
        }
        else
        {
          v46 = sub_227BF10(v46, ", \"", 3);
        }
        sub_2254180(v72, v46);
        v49 = *(_QWORD *)(v46 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v46 + 24) - v49) > 2 )
        {
          *(_BYTE *)(v49 + 2) = 10;
          *(_WORD *)v49 = 10530;
          *(_QWORD *)(v46 + 32) += 3LL;
        }
        else
        {
          sub_227BF10(v46, "\")\n", 3);
        }
      }
    }
  }
LABEL_38:
  *a5 = _mm_load_si128(&v67);
  return a5;
}
