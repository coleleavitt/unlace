void __fastcall sub_1902B20(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  __int64 v6; // r12
  char *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r12
  int v11; // eax
  __int64 v12; // r12
  bool v13; // zf
  char *v14; // rax
  _BYTE *v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rbx
  _BYTE *v19; // rbx
  _BYTE *v20; // r15
  int v21; // eax
  __int64 v22; // rbx
  _BYTE *v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rbx
  _BYTE *v26; // rbx
  _BYTE *v27; // r14
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rdi
  char *v47; // rax
  size_t v48; // rdx
  __int64 v49; // r8
  size_t v50; // rax
  size_t v51; // r9
  _BYTE *v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rbx
  _BYTE *v57; // rbx
  _BYTE *v58; // r14
  const char *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  _QWORD *v65; // rbx
  unsigned __int64 v66; // rax
  bool v67; // al
  unsigned __int64 v68; // rdx
  char *v69; // rcx
  unsigned int v70; // eax
  __int64 v71; // rdx
  unsigned int v72; // edx
  __int64 v73; // rsi
  __int64 v74; // r14
  __int64 (__fastcall *v75)(__int64); // rax
  __int64 v76; // rax
  _BYTE *v77; // [rsp+0h] [rbp-1A8h]
  int v78; // [rsp+0h] [rbp-1A8h]
  unsigned int v79; // [rsp+0h] [rbp-1A8h]
  _BYTE *v80; // [rsp+8h] [rbp-1A0h]
  __int64 *v81; // [rsp+8h] [rbp-1A0h]
  __int64 v82; // [rsp+8h] [rbp-1A0h]
  _BYTE *v83; // [rsp+8h] [rbp-1A0h]
  char *v85; // [rsp+18h] [rbp-190h]
  __int64 v86; // [rsp+30h] [rbp-178h]
  size_t v87; // [rsp+30h] [rbp-178h]
  size_t v88; // [rsp+38h] [rbp-170h]
  __int64 v89[2]; // [rsp+48h] [rbp-160h] BYREF
  int v90; // [rsp+5Ch] [rbp-14Ch] BYREF
  void *ptr; // [rsp+60h] [rbp-148h] BYREF
  __m128i si128; // [rsp+68h] [rbp-140h]
  _BYTE v93[40]; // [rsp+78h] [rbp-130h] BYREF
  __int64 v94[3]; // [rsp+A0h] [rbp-108h] BYREF
  void *v95; // [rsp+B8h] [rbp-F0h]
  _BYTE v96[24]; // [rsp+C8h] [rbp-E0h] BYREF
  char *v97; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v98; // [rsp+E8h] [rbp-C0h]
  char *v99; // [rsp+F0h] [rbp-B8h]
  __int64 v100; // [rsp+F8h] [rbp-B0h]
  void *src; // [rsp+100h] [rbp-A8h]
  size_t n; // [rsp+108h] [rbp-A0h]

  v4 = 1;
  v6 = a1[31];
  v7 = *(char **)(a3 + 48);
  v89[0] = a3;
  v8 = a3;
  v9 = *(_QWORD *)((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v9 + 17) & 4) != 0 )
    goto LABEL_2;
  v97 = v7;
  v94[0] = sub_C1BEF0((__int64)&v97, a2, v9, a4);
  v4 = sub_F62A70(v94, v6);
  if ( v4 )
    goto LABEL_57;
  v33 = sub_F63270(*(_QWORD *)(v94[0] & 0xFFFFFFFFFFFFFFF0LL), v6, v29, v30, v31, v32);
  v38 = v33;
  if ( !v33 )
    goto LABEL_57;
  v39 = v33[16];
  if ( !v39 )
  {
    sub_7052B0((__int64 *)(v38[13] + 96LL), v38[13], v34, v35, v36, v37);
    v39 = v38[16];
    if ( !v39 )
      goto LABEL_57;
  }
  v40 = *(_QWORD *)(v39 + 88);
  if ( !v40 )
    goto LABEL_57;
  sub_7052B0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v34, v35, v36, v37);
  if ( (**(_BYTE **)(v40 + 128) & 4) == 0 )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v41, v42, v43, v44);
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 128) + 4LL) & 4) == 0 )
    {
      v8 = v89[0];
      v4 = 1;
      goto LABEL_2;
    }
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(v40 + 104) + 96LL), *(_QWORD *)(v40 + 104), v41, v42, v43, v44);
  if ( (**(_BYTE **)(v40 + 128) & 4) == 0 || (v62 = sub_B8E970(v40 + 64), (v65 = (_QWORD *)v62) == nullptr) )
  {
LABEL_57:
    v8 = v89[0];
    goto LABEL_2;
  }
  if ( (*(_BYTE *)(v62 + 28) & 0x7F) != 0x26 )
  {
    do
    {
      v66 = v65[1] & 0xFFFFFFFFFFFFFFF8LL;
      v65 = (_QWORD *)v66;
      if ( !v66 )
        goto LABEL_57;
    }
    while ( (*(_BYTE *)(v66 + 28) & 0x7F) != 0x26 );
  }
LABEL_123:
  LODWORD(v97) = 0;
  v67 = sub_B98FE0((__int64)v65, &v97, v63, v64);
  if ( !v67 )
  {
    while ( 1 )
    {
      v68 = v65[1] & 0xFFFFFFFFFFFFFFF8LL;
      v65 = (_QWORD *)v68;
      if ( !v68 )
        break;
      v63 = *(_BYTE *)(v68 + 28) & 0x7F;
      if ( (_BYTE)v63 == 38 )
        goto LABEL_123;
    }
    v4 = v67;
    goto LABEL_57;
  }
  v75 = *(__int64 (__fastcall **)(__int64))(*v65 + 32LL);
  if ( v75 == sub_B94CC0 )
    v76 = sub_B709C0((__int64)v65);
  else
    v76 = v75((__int64)v65);
  v8 = v89[0];
  v4 = ((*(_BYTE *)(v76 + 82) >> 6) ^ 1) & 1;
LABEL_2:
  v10 = -(__int64)(*(_DWORD *)(a2 + 1628) == 0);
  ptr = v93;
  v11 = *(_DWORD *)(a2 + 1628);
  v12 = ~(_BYTE)v10 & 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  v13 = v11 == 0;
  v14 = (char *)&byte_22F0C30;
  if ( !v13 )
    v14 = ", ";
  v85 = v14;
  if ( (*(_BYTE *)(v8 + 40) & 7) == 0 )
  {
    sub_995750(v8);
    if ( v45 )
    {
      v46 = v89[0];
      v79 = *(_DWORD *)(a2 + 1620);
      v81 = a1 + 1;
      if ( v4 )
      {
        v98 = v12;
        v97 = v85;
        v59 = sub_995750(v89[0]);
        si128.m128i_i64[0] = 0;
        v100 = v60;
        v99 = (char *)v59;
        sub_18C5D40(&ptr, (__int64)&v97, 2);
        sub_168B9F0((__int64)&v97, v81, v79, 0x17B0u, 0);
        v61 = sub_15993D0((__int64)&v97, v89);
        v90 = 0;
        v86 = sub_1587D10(v61, &v90);
        sub_9EC740((__int64)v94, v79, ptr, si128.m128i_i64[0], 0);
        sub_1589170(v86, v94);
        if ( v95 != v96 )
          operator delete(v95);
        sub_15F7200(&v97);
        v46 = v89[0];
      }
      v98 = v12;
      v100 = 1;
      v97 = v85;
      v99 = "&";
      v47 = (char *)sub_995750(v46);
      v49 = v12 + 1;
      si128.m128i_i64[0] = 0;
      src = v47;
      n = v48;
      v50 = v48;
      v51 = v12 + 1 + v48;
      if ( v51 )
      {
        if ( v51 > si128.m128i_i64[1] )
        {
          v88 = v48;
          v87 = v12 + 1 + v48;
          sub_2236E10(&ptr, v93, v87, 1);
          v49 = v12 + 1;
          v50 = v88;
          v51 = v87;
        }
        si128.m128i_i64[0] = v51;
      }
      v52 = ptr;
      if ( v12 )
      {
        v72 = 0;
        do
        {
          v73 = v72++;
          v52[v73] = v85[v73];
        }
        while ( v72 < (unsigned int)v12 );
        v52 = ptr;
      }
      v52[v12] = 38;
      if ( v50 )
        memmove((char *)ptr + v49, src, v50);
      sub_168B9F0((__int64)&v97, v81, v79, 0x17B0u, 0);
      v53 = sub_15993D0((__int64)&v97, v89);
      v90 = 1;
      v82 = sub_1587D10(v53, &v90);
      sub_9EC740((__int64)v94, v79, ptr, si128.m128i_i64[0], 0);
      sub_1589170(v82, v94);
      if ( v95 != v96 )
        operator delete(v95);
      sub_15F7200(&v97);
    }
  }
  v15 = *(_BYTE **)(a2 + 1320);
  v16 = 32LL * *(unsigned int *)(a2 + 1328);
  v77 = &v15[v16];
  v17 = v16 >> 5;
  v18 = v16 >> 7;
  if ( v18 )
  {
    v80 = &v15[128 * v18];
    do
    {
      while ( 1 )
      {
        if ( (v15[24] & 8) == 0 && !(unsigned __int8)sub_15EEA20((__int64)v15) )
          goto LABEL_13;
        if ( (v15[56] & 8) == 0 )
        {
          v19 = v15 + 32;
          if ( !(unsigned __int8)sub_15EEA20((__int64)(v15 + 32)) )
            goto LABEL_14;
        }
        if ( (v15[88] & 8) == 0 )
        {
          v19 = v15 + 64;
          if ( !(unsigned __int8)sub_15EEA20((__int64)(v15 + 64)) )
            goto LABEL_14;
        }
        if ( (v15[120] & 8) == 0 )
          break;
        v15 += 128;
        if ( v80 == v15 )
          goto LABEL_20;
      }
      v19 = v15 + 96;
      if ( !(unsigned __int8)sub_15EEA20((__int64)(v15 + 96)) )
        goto LABEL_14;
      v15 += 128;
    }
    while ( v80 != v15 );
LABEL_20:
    v17 = (v77 - v15) >> 5;
  }
  if ( v17 != 2 )
  {
    if ( v17 != 3 )
    {
      if ( v17 != 1 )
        goto LABEL_24;
      goto LABEL_68;
    }
    if ( (v15[24] & 8) == 0 && !(unsigned __int8)sub_15EEA20((__int64)v15) )
      goto LABEL_13;
    v15 += 32;
  }
  if ( (v15[24] & 8) == 0 && !(unsigned __int8)sub_15EEA20((__int64)v15) )
    goto LABEL_13;
  v15 += 32;
LABEL_68:
  if ( (v15[24] & 8) != 0 || (unsigned __int8)sub_15EEA20((__int64)v15) )
    goto LABEL_24;
LABEL_13:
  v19 = v15;
LABEL_14:
  if ( v77 == v19 )
  {
LABEL_24:
    v20 = *(_BYTE **)(a2 + 1320);
    v78 = *(_DWORD *)(a2 + 1616) + 1;
    if ( !v4
      || (v21 = *(_DWORD *)(a2 + 1312)) != 0
      && *(char *)(a1[29] + 1) >= 0
      && ((*(_BYTE *)(a1[29] + 1) & 0x40) == 0 || (v20[32 * (v21 - 1) + 24] & 3) != 0) )
    {
LABEL_28:
      v22 = 32LL * *(unsigned int *)(a2 + 1328);
      v23 = &v20[v22];
      v24 = v22 >> 5;
      v25 = v22 >> 7;
      if ( v25 )
      {
        v26 = &v20[128 * v25];
        while ( (unsigned __int8)sub_15EEA20((__int64)v20) || (v20[24] & 3) != 1 || (v20[24] & 8) != 0 )
        {
          v27 = v20 + 32;
          if ( !(unsigned __int8)sub_15EEA20((__int64)(v20 + 32)) && (v20[56] & 3) == 1 && (v20[56] & 8) == 0
            || (v27 = v20 + 64, !(unsigned __int8)sub_15EEA20((__int64)(v20 + 64)))
            && (v20[88] & 3) == 1
            && (v20[88] & 8) == 0
            || (v27 = v20 + 96, !(unsigned __int8)sub_15EEA20((__int64)(v20 + 96)))
            && (v20[120] & 3) == 1
            && (v20[120] & 8) == 0 )
          {
            v20 = v27;
            break;
          }
          v20 += 128;
          if ( v20 == v26 )
          {
            v24 = (v23 - v20) >> 5;
            goto LABEL_107;
          }
        }
LABEL_40:
        if ( v23 != v20 )
          goto LABEL_15;
        goto LABEL_41;
      }
LABEL_107:
      if ( v24 != 2 )
      {
        if ( v24 != 3 )
        {
          if ( v24 != 1 )
            goto LABEL_41;
          goto LABEL_110;
        }
        if ( !(unsigned __int8)sub_15EEA20((__int64)v20) && (v20[24] & 3) == 1 && (v20[24] & 8) == 0 )
          goto LABEL_40;
        v20 += 32;
      }
      if ( !(unsigned __int8)sub_15EEA20((__int64)v20) && (v20[24] & 3) == 1 && (v20[24] & 8) == 0 )
        goto LABEL_40;
      v20 += 32;
LABEL_110:
      if ( !(unsigned __int8)sub_15EEA20((__int64)v20) && (v20[24] & 3) == 1 && (v20[24] & 8) == 0 )
        goto LABEL_40;
LABEL_41:
      v98 = 1;
      v97 = "&";
      v100 = v12;
      v99 = v85;
      si128.m128i_i64[0] = 0;
      if ( si128.m128i_i64[1] < (unsigned __int64)(v12 + 1) )
        sub_2236E10(&ptr, v93, v12 + 1, 1);
      si128.m128i_i64[0] = v12 + 1;
      *(_BYTE *)ptr = 38;
      if ( v12 )
      {
        v69 = (char *)ptr + 1;
        v70 = 0;
        do
        {
          v71 = v70++;
          v69[v71] = v85[v71];
        }
        while ( v70 < (unsigned int)v12 );
      }
      sub_168B9F0((__int64)&v97, a1 + 1, v78, 0x17ACu, 0);
      v90 = 1;
      v28 = sub_1587D10((__int64)&v97, &v90);
      sub_9EC740((__int64)v94, v78, ptr, si128.m128i_i64[0], 0);
      sub_1589170(v28, v94);
      if ( v95 != v96 )
        operator delete(v95);
      sub_15F7200(&v97);
      goto LABEL_15;
    }
    v54 = 32LL * *(unsigned int *)(a2 + 1328);
    v83 = &v20[v54];
    v55 = v54 >> 5;
    v56 = v54 >> 7;
    if ( v56 )
    {
      v57 = &v20[128 * v56];
      while ( 1 )
      {
        if ( (v20[24] & 8) == 0 && !(unsigned __int8)sub_15EEA20((__int64)v20) && (v20[24] & 3) == 0 )
          goto LABEL_93;
        if ( (v20[56] & 8) == 0 )
        {
          v58 = v20 + 32;
          if ( !(unsigned __int8)sub_15EEA20((__int64)(v20 + 32)) && (v20[56] & 3) == 0 )
          {
LABEL_99:
            v20 = v58;
            goto LABEL_93;
          }
        }
        if ( (v20[88] & 8) != 0 || (v58 = v20 + 64, (unsigned __int8)sub_15EEA20((__int64)(v20 + 64))) )
        {
          if ( (v20[120] & 8) == 0 )
            goto LABEL_103;
        }
        else
        {
          if ( (v20[88] & 3) == 0 )
            goto LABEL_99;
          if ( (v20[120] & 8) == 0 )
          {
LABEL_103:
            v58 = v20 + 96;
            if ( !(unsigned __int8)sub_15EEA20((__int64)(v20 + 96)) && (v20[120] & 3) == 0 )
              goto LABEL_99;
          }
        }
        v20 += 128;
        if ( v57 == v20 )
        {
          v55 = (v83 - v20) >> 5;
          break;
        }
      }
    }
    if ( v55 != 2 )
    {
      if ( v55 != 3 )
      {
        if ( v55 != 1 )
          goto LABEL_146;
        goto LABEL_157;
      }
      if ( (v20[24] & 8) == 0 && !(unsigned __int8)sub_15EEA20((__int64)v20) && (v20[24] & 3) == 0 )
      {
LABEL_93:
        if ( v83 != v20 )
        {
LABEL_94:
          v20 = *(_BYTE **)(a2 + 1320);
          goto LABEL_28;
        }
LABEL_146:
        v97 = "=";
        v98 = 1;
        v99 = v85;
        v100 = v12;
        si128.m128i_i64[0] = 0;
        sub_18C5D40(&ptr, (__int64)&v97, 2);
        sub_168B9F0((__int64)&v97, a1 + 1, v78, 0x17ACu, 0);
        v90 = 0;
        v74 = sub_1587D10((__int64)&v97, &v90);
        sub_9EC740((__int64)v94, v78, ptr, si128.m128i_i64[0], 0);
        sub_1589170(v74, v94);
        if ( v95 != v96 )
          operator delete(v95);
        sub_15F7200(&v97);
        goto LABEL_94;
      }
      v20 += 32;
    }
    if ( (v20[24] & 8) != 0 || (unsigned __int8)sub_15EEA20((__int64)v20) || (v20[24] & 3) != 0 )
    {
      v20 += 32;
LABEL_157:
      if ( (v20[24] & 8) != 0 || (unsigned __int8)sub_15EEA20((__int64)v20) || (v20[24] & 3) != 0 )
        goto LABEL_146;
      goto LABEL_93;
    }
    goto LABEL_93;
  }
LABEL_15:
  if ( ptr != v93 )
    free(ptr);
}
