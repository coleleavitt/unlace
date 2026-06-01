__int64 __fastcall sub_897AC0(unsigned __int64 a1, unsigned __int8 *a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rsi
  __int64 (__fastcall ***v13)(); // rdi
  unsigned __int64 v14; // r12
  unsigned int v15; // eax
  unsigned int v16; // r12d
  char v17; // dl
  char *v18; // rbx
  char *v19; // rbp
  _QWORD **v20; // rbx
  _QWORD **v21; // rbp
  __int64 v22; // rsi
  unsigned int *v24; // rbp
  unsigned __int64 v25; // r12
  unsigned int v26; // eax
  __m128i v27; // rax
  __m128i v28; // rax
  _QWORD *v29; // rbp
  __int64 v30; // r13
  __int64 v31; // rdx
  _QWORD *v32; // rax
  _QWORD *v33; // rcx
  _QWORD *v34; // rdx
  __int64 v35; // rax
  unsigned int v36; // r15d
  unsigned int *v37; // rax
  __int64 v38; // rdx
  int v39; // r8d
  unsigned __int64 v40; // rcx
  __int64 v41; // rcx
  char *v42; // rbx
  char *v43; // r15
  int v44; // r12d
  __int64 v45; // [rsp-8h] [rbp-590h]
  __int64 v46; // [rsp+8h] [rbp-580h]
  unsigned __int64 v47; // [rsp+20h] [rbp-568h]
  unsigned int *v48; // [rsp+28h] [rbp-560h]
  unsigned int *v49; // [rsp+30h] [rbp-558h]
  int v51; // [rsp+3Ch] [rbp-54Ch]
  char v52; // [rsp+4Fh] [rbp-539h] BYREF
  __m128i v53; // [rsp+50h] [rbp-538h] BYREF
  _BYTE v54[32]; // [rsp+60h] [rbp-528h] BYREF
  __m128i v55; // [rsp+80h] [rbp-508h] BYREF
  _QWORD *v56; // [rsp+90h] [rbp-4F8h]
  __int64 v57; // [rsp+98h] [rbp-4F0h]
  __m128i v58; // [rsp+F0h] [rbp-498h] BYREF
  __int64 v59; // [rsp+100h] [rbp-488h]
  __int64 v60; // [rsp+108h] [rbp-480h]
  __int64 v61; // [rsp+110h] [rbp-478h]
  __int64 v62; // [rsp+118h] [rbp-470h]
  void *v63; // [rsp+120h] [rbp-468h]
  __int64 v64; // [rsp+128h] [rbp-460h]
  _BYTE v65[64]; // [rsp+130h] [rbp-458h] BYREF
  __int16 v66; // [rsp+170h] [rbp-418h]
  __int64 (__fastcall **v67)(); // [rsp+180h] [rbp-408h] BYREF
  __int64 v68; // [rsp+188h] [rbp-400h]
  __int64 v69; // [rsp+190h] [rbp-3F8h]
  _BYTE *v70; // [rsp+198h] [rbp-3F0h]
  unsigned int *v71; // [rsp+1A0h] [rbp-3E8h]
  __int64 v72; // [rsp+1A8h] [rbp-3E0h]
  int v73; // [rsp+1B0h] [rbp-3D8h]
  char v74; // [rsp+1B4h] [rbp-3D4h]
  _OWORD v75[3]; // [rsp+1B8h] [rbp-3D0h] BYREF
  __int64 v76; // [rsp+1E8h] [rbp-3A0h]
  __int64 v77; // [rsp+1F0h] [rbp-398h]
  __int64 v78; // [rsp+1F8h] [rbp-390h]
  int v79; // [rsp+208h] [rbp-380h] BYREF
  __int64 v80; // [rsp+210h] [rbp-378h]
  int *v81; // [rsp+218h] [rbp-370h]
  int *v82; // [rsp+220h] [rbp-368h]
  __int64 v83; // [rsp+228h] [rbp-360h]
  int v84; // [rsp+238h] [rbp-350h] BYREF
  __int64 v85; // [rsp+240h] [rbp-348h]
  int *v86; // [rsp+248h] [rbp-340h]
  int *v87; // [rsp+250h] [rbp-338h]
  __int64 v88; // [rsp+258h] [rbp-330h]
  __int64 v89; // [rsp+260h] [rbp-328h]
  int v90; // [rsp+268h] [rbp-320h]
  _DWORD *v91; // [rsp+270h] [rbp-318h]
  __int64 v92; // [rsp+278h] [rbp-310h]
  _DWORD v93[4]; // [rsp+280h] [rbp-308h] BYREF
  __int64 v94; // [rsp+290h] [rbp-2F8h]
  __int64 v95; // [rsp+298h] [rbp-2F0h]
  int v96; // [rsp+2A0h] [rbp-2E8h]
  __int64 v97; // [rsp+2A8h] [rbp-2E0h]
  char v98; // [rsp+2B0h] [rbp-2D8h]
  void *ptr; // [rsp+2B8h] [rbp-2D0h]
  __int64 v100; // [rsp+2C0h] [rbp-2C8h]
  _BYTE v101[512]; // [rsp+2C8h] [rbp-2C0h] BYREF
  __m128i v102; // [rsp+4C8h] [rbp-C0h] BYREF
  int v103; // [rsp+4D8h] [rbp-B0h]
  __int128 v104; // [rsp+4E0h] [rbp-A8h]
  __int64 v105; // [rsp+4F0h] [rbp-98h]
  unsigned int v106; // [rsp+4F8h] [rbp-90h]
  int v107; // [rsp+508h] [rbp-80h] BYREF
  void *v108; // [rsp+510h] [rbp-78h]
  int *v109; // [rsp+518h] [rbp-70h]
  int *v110; // [rsp+520h] [rbp-68h]
  __int64 v111; // [rsp+528h] [rbp-60h]
  __int64 v112; // [rsp+530h] [rbp-58h]
  __int64 v113; // [rsp+538h] [rbp-50h]
  __int64 v114; // [rsp+540h] [rbp-48h]

  v6 = a1;
  v7 = sub_8331A0((_WORD *)a1, (__int64)a2, a3, &v52);
  if ( (_BYTE)v7 )
  {
    v8 = v7;
    if ( *((_DWORD *)a2 + 4) > 1u )
      return v8;
  }
  v67 = (__int64 (__fastcall **)())a1;
  v68 = a3;
  v9 = sub_25E8DD0("EvaluateAsConstantExpr", 0x16u);
  LOBYTE(v68) = 0;
  v46 = v9;
  v67 = &off_47DA958;
  v10 = *(_QWORD *)(a3 + 2160);
  v69 = a3;
  v70 = a2;
  v73 = *(_DWORD *)(v10 + 136);
  LOBYTE(v10) = *(_BYTE *)(v10 + 140);
  v76 = 0;
  v77 = 0;
  v74 = v10 & 1;
  v79 = 0;
  v81 = &v79;
  v82 = &v79;
  v86 = &v84;
  v87 = &v84;
  v91 = v93;
  v75[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_47DA9F0, (__m128i)(unsigned __int64)&v67);
  memset(&v75[1], 0, 32);
  v92 = 0x200000001LL;
  v78 = 0;
  v80 = 0;
  v83 = 0;
  v84 = 0;
  v85 = 0;
  v88 = 0;
  v89 = 0;
  v90 = 1;
  v93[0] = 1;
  v93[2] = 1;
  v72 = 0x200000001LL;
  ptr = v101;
  v71 = (unsigned int *)v75;
  v100 = 0x1000000000LL;
  v96 = 0;
  v94 = 0;
  v95 = 0;
  v97 = 0;
  v98 = 0;
  sub_69F1C0((__int64)&v102, 0, 0, 0);
  v103 = 0;
  v106 = 0;
  v105 = 0;
  v107 = 0;
  v108 = nullptr;
  v109 = &v107;
  v110 = &v107;
  v111 = 0;
  v112 = 0;
  v113 = -1;
  v114 = 0;
  LOBYTE(v68) = 1;
  v104 = 0;
  if ( v74 )
  {
    v24 = (unsigned int *)(a2 + 16);
    v13 = (__int64 (__fastcall ***)())sub_6B4C60(v69);
    v12 = (__int64)&v67;
    if ( (unsigned __int8)sub_8C9F60(v13, &v67, v6, v24, a4) )
    {
      if ( (*(_BYTE *)(v6 + 1) & 6) != 0 )
        v25 = sub_6C4DA0(a3, *(_QWORD *)(v6 + 8), 1u);
      else
        v25 = *(_QWORD *)(v6 + 8);
      v26 = sub_8124E0(v6);
      v12 = v26;
      v13 = &v67;
      v8 = sub_849950((__int64)&v67, v26, v25, v24, a4);
      goto LABEL_18;
    }
  }
  else
  {
    v47 = *(_QWORD *)(a1 + 8);
    if ( a4 == 2 )
      v47 = *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL | *(_QWORD *)(a1 + 8) & 6LL | 1;
    sub_8C7300(v54, v47, a1, 1, 0);
    sub_69F1F0((__int64)&v53, (__int64)v54, 0, 0);
    v11 = _mm_load_si128(&v53);
    v48 = (unsigned int *)(a2 + 16);
    v103 = 1;
    *(_QWORD *)&v104 = a2 + 16;
    v102 = v11;
    if ( v74 )
    {
      v12 = (__int64)&v67;
      v13 = (__int64 (__fastcall ***)())sub_6B4C60(v69);
      if ( (unsigned __int8)sub_8C9C50(v13, &v67, v6, a2 + 16) )
        goto LABEL_8;
    }
    else
    {
      LOBYTE(v60) = v60 | 1;
      v66 &= 0xFDu;
      v59 = 0;
      v62 = 0;
      v63 = v65;
      v64 = 0x800000000LL;
      v58 = v11;
      v55 = v11;
      v35 = sub_69F240(v55.m128i_i64);
      v36 = v100;
      v66 &= 0xFEu;
      v56 = (_QWORD *)v35;
      v62 = v35;
      v37 = v71;
      LODWORD(v60) = 0;
      v61 = 0;
      LODWORD(v64) = 0;
      v38 = v71[48];
      v39 = v71[52] + 1;
      v40 = v71[49];
      v71[52] = v39;
      if ( v40 < v38 + 1 )
      {
        v51 = v39;
        v49 = v37;
        sub_25D6060(v37 + 46, v37 + 50, v38 + 1, 4);
        v37 = v49;
        v39 = v51;
        v38 = v49[48];
      }
      v12 = (__int64)&v67;
      *(_DWORD *)(*((_QWORD *)v37 + 23) + 4 * v38) = v39;
      ++v37[48];
      if ( !(unsigned __int8)sub_88A010((__int64)v48, (__int64)&v67, &v58, a1, 0) || *a2 )
      {
        if ( v36 != -1 )
        {
          v12 = 0;
          sub_8941C0((__int64)&v67, 0, v36);
        }
      }
      else
      {
        v12 = 1;
        if ( (unsigned __int8)sub_8941C0((__int64)&v67, 1, v36) )
        {
          v41 = 32LL * (unsigned int)v100;
          if ( ptr != (char *)ptr + v41 )
          {
            v42 = (char *)ptr;
            v43 = (char *)ptr + v41;
            do
            {
              if ( (unsigned int)sub_B19900(*((_QWORD *)v42 + 3)) )
                *v70 = 1;
              v42 += 32;
            }
            while ( v43 != v42 );
            v6 = a1;
          }
          LODWORD(v100) = 0;
          --v71[48];
          if ( v63 != v65 )
            free(v63);
LABEL_8:
          if ( (*(_BYTE *)(v6 + 1) & 6) != 0 )
            v14 = sub_6C4DA0(a3, *(_QWORD *)(v6 + 8), 1u);
          else
            v14 = *(_QWORD *)(v6 + 8);
          v15 = sub_8124E0(v6);
          v13 = &v67;
          v12 = v15;
          v8 = sub_849950((__int64)&v67, v15, v14, v48, a4);
          if ( (_BYTE)v8 )
          {
            if ( v111 )
            {
              v13 = &v67;
              sub_824030((__int64)&v67);
            }
            if ( a4 != 2 )
              goto LABEL_18;
            v16 = sub_AC6DA0(v6);
            sub_6A4260((__int64)&v58, (int *)v48);
            v13 = (__int64 (__fastcall ***)())a3;
            v17 = sub_893900(a3, v53.m128i_i64[0], v53.m128i_i64[1], (__int64)&v58, v47, v16, a2, 1u);
            v12 = v45;
            if ( v17 )
            {
              v44 = *a2;
              if ( v58.m128i_i32[0] > 1u )
              {
                v13 = (__int64 (__fastcall ***)())&v58;
                sub_69F740((__int64)&v58);
              }
              v8 = v44 ^ 1;
              goto LABEL_18;
            }
            if ( v58.m128i_i32[0] > 1u )
            {
              v13 = (__int64 (__fastcall ***)())&v58;
              sub_69F740((__int64)&v58);
            }
          }
          goto LABEL_17;
        }
      }
      --v71[48];
      v13 = (__int64 (__fastcall ***)())v63;
      if ( v63 != v65 )
        free(v63);
    }
  }
LABEL_17:
  v8 = 0;
LABEL_18:
  v18 = (char *)ptr;
  v67 = &off_47DA958;
  v19 = (char *)ptr + 32 * (unsigned int)v100;
  if ( ptr != v19 )
  {
    do
    {
      v13 = *((__int64 (__fastcall ****)())v18 + 3);
      if ( (unsigned int)sub_B19900(v13) )
      {
        *v70 = 1;
        if ( HIDWORD(v114) <= 2 && !WORD1(v114) )
          break;
      }
      v18 += 32;
    }
    while ( v19 != v18 );
  }
  v20 = (_QWORD **)v108;
  LODWORD(v100) = 0;
  if ( v108 )
  {
    while ( 1 )
    {
      sub_822210(v20[3]);
      v21 = (_QWORD **)v20[2];
      if ( *((_DWORD *)v20 + 10) > 1u )
        sub_69F740((__int64)(v20 + 5));
      v12 = 104;
      v13 = (__int64 (__fastcall ***)())v20;
      operator delete(v20, 0x68u);
      if ( !v21 )
        break;
      v20 = v21;
    }
  }
  if ( !v106 )
  {
    v22 = 0;
    goto LABEL_31;
  }
  v27.m128i_i64[0] = sub_69F620(v13, v12);
  v56 = nullptr;
  v55 = v27;
  v57 = 0;
  v28.m128i_i64[0] = sub_69F630(v13, v12);
  v29 = *((_QWORD **)&v104 + 1);
  v59 = 0;
  v58 = v28;
  v60 = 0;
  v30 = *((_QWORD *)&v104 + 1) + 40LL * v106;
  if ( *((_QWORD *)&v104 + 1) != v30 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_69F550(v29, &v55) )
      {
        v31 = v29[3];
        if ( v31 == v57 )
        {
          v32 = (_QWORD *)v29[2];
          v33 = &v32[v31];
          v34 = v56;
          if ( v32 == v33 )
            goto LABEL_43;
          while ( *v32 == *v34 )
          {
            ++v32;
            ++v34;
            if ( v33 == v32 )
              goto LABEL_43;
          }
        }
      }
      sub_69F550(v29, &v58);
LABEL_43:
      v29 += 5;
      if ( (_QWORD *)v30 == v29 )
      {
        v22 = 40LL * v106;
        goto LABEL_31;
      }
    }
  }
  v22 = 0;
LABEL_31:
  operator delete();
  if ( ptr != v101 )
    free(ptr);
  sub_822100((__int64)v75);
  sub_A2CAF0(&v67, v22);
  if ( v46 )
    sub_25EA250(v46);
  return v8;
}

