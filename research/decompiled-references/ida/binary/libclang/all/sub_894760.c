__int64 __fastcall sub_894760(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, _BYTE *a6)
{
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int *v13; // r14
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // r15d
  __int64 v17; // rax
  void **v18; // rsi
  __int64 (__fastcall ***v19)(); // rdi
  __int64 *v20; // rdx
  __int64 v21; // rcx
  int v22; // r8d
  int v23; // r9d
  char *v24; // rax
  unsigned int v25; // r12d
  char *v26; // rbx
  char *v27; // r13
  _QWORD **v28; // rbx
  _QWORD **v29; // r13
  __int64 v30; // r15
  char *v31; // r13
  unsigned int v32; // edx
  __int64 v33; // rax
  char v34; // r9
  __int64 v35; // rax
  _QWORD *v36; // rdx
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // rcx
  _QWORD *v39; // rdx
  char v40; // al
  __int64 v41; // rsi
  void *v43; // rax
  __int64 v44; // rdx
  __m128i v45; // rax
  _QWORD *v46; // r14
  __int64 v47; // r15
  __int64 v48; // rdx
  _QWORD *v49; // rax
  _QWORD *v50; // rcx
  _QWORD *v51; // rdx
  char *v52; // [rsp+8h] [rbp-550h]
  char v53; // [rsp+28h] [rbp-530h]
  __int64 v54; // [rsp+28h] [rbp-530h]
  unsigned int v55; // [rsp+30h] [rbp-528h]
  char v56; // [rsp+37h] [rbp-521h]
  unsigned __int64 v57; // [rsp+38h] [rbp-520h]
  void *v58; // [rsp+40h] [rbp-518h] BYREF
  unsigned int v59; // [rsp+48h] [rbp-510h]
  char v60; // [rsp+4Ch] [rbp-50Ch]
  void *v61; // [rsp+50h] [rbp-508h] BYREF
  unsigned int v62; // [rsp+58h] [rbp-500h]
  char v63; // [rsp+5Ch] [rbp-4FCh]
  void *v64; // [rsp+60h] [rbp-4F8h] BYREF
  __int64 v65; // [rsp+68h] [rbp-4F0h]
  _QWORD *v66; // [rsp+70h] [rbp-4E8h]
  __int64 v67; // [rsp+78h] [rbp-4E0h]
  __m128i v68; // [rsp+80h] [rbp-4D8h] BYREF
  __int64 v69; // [rsp+90h] [rbp-4C8h]
  __int64 v70; // [rsp+98h] [rbp-4C0h]
  _QWORD v71[3]; // [rsp+C0h] [rbp-498h] BYREF
  char v72; // [rsp+D8h] [rbp-480h]
  __int64 v73; // [rsp+E8h] [rbp-470h]
  void *v74; // [rsp+F0h] [rbp-468h]
  __int64 v75; // [rsp+F8h] [rbp-460h]
  _BYTE v76[80]; // [rsp+100h] [rbp-458h] BYREF
  __int64 (__fastcall **v77)(); // [rsp+150h] [rbp-408h] BYREF
  char v78; // [rsp+158h] [rbp-400h]
  __int64 v79; // [rsp+160h] [rbp-3F8h]
  _BYTE *v80; // [rsp+168h] [rbp-3F0h]
  unsigned int *v81; // [rsp+170h] [rbp-3E8h]
  __int64 v82; // [rsp+178h] [rbp-3E0h]
  int v83; // [rsp+180h] [rbp-3D8h]
  char v84; // [rsp+184h] [rbp-3D4h]
  _OWORD v85[3]; // [rsp+188h] [rbp-3D0h] BYREF
  __int64 v86; // [rsp+1B8h] [rbp-3A0h]
  __int64 v87; // [rsp+1C0h] [rbp-398h]
  __int64 v88; // [rsp+1C8h] [rbp-390h]
  int v89; // [rsp+1D8h] [rbp-380h] BYREF
  __int64 v90; // [rsp+1E0h] [rbp-378h]
  int *v91; // [rsp+1E8h] [rbp-370h]
  int *v92; // [rsp+1F0h] [rbp-368h]
  __int64 v93; // [rsp+1F8h] [rbp-360h]
  int v94; // [rsp+208h] [rbp-350h] BYREF
  __int64 v95; // [rsp+210h] [rbp-348h]
  int *v96; // [rsp+218h] [rbp-340h]
  int *v97; // [rsp+220h] [rbp-338h]
  __int64 v98; // [rsp+228h] [rbp-330h]
  __int64 v99; // [rsp+230h] [rbp-328h]
  int v100; // [rsp+238h] [rbp-320h]
  _DWORD *v101; // [rsp+240h] [rbp-318h]
  __int64 v102; // [rsp+248h] [rbp-310h]
  _DWORD v103[4]; // [rsp+250h] [rbp-308h] BYREF
  __int64 v104; // [rsp+260h] [rbp-2F8h]
  __int64 v105; // [rsp+268h] [rbp-2F0h]
  int v106; // [rsp+270h] [rbp-2E8h]
  __int64 v107; // [rsp+278h] [rbp-2E0h]
  char v108; // [rsp+280h] [rbp-2D8h]
  void *ptr; // [rsp+288h] [rbp-2D0h]
  __int64 v110; // [rsp+290h] [rbp-2C8h]
  _BYTE v111[512]; // [rsp+298h] [rbp-2C0h] BYREF
  char v112[16]; // [rsp+498h] [rbp-C0h] BYREF
  int v113; // [rsp+4A8h] [rbp-B0h]
  __int128 v114; // [rsp+4B0h] [rbp-A8h]
  __int64 v115; // [rsp+4C0h] [rbp-98h]
  unsigned int v116; // [rsp+4C8h] [rbp-90h]
  int v117; // [rsp+4D8h] [rbp-80h] BYREF
  void *v118; // [rsp+4E0h] [rbp-78h]
  int *v119; // [rsp+4E8h] [rbp-70h]
  int *v120; // [rsp+4F0h] [rbp-68h]
  __int64 v121; // [rsp+4F8h] [rbp-60h]
  __int64 v122; // [rsp+500h] [rbp-58h]
  __int64 v123; // [rsp+508h] [rbp-50h]
  __int64 v124; // [rsp+510h] [rbp-48h]

  v79 = a5;
  v74 = v76;
  v80 = a6;
  v75 = 0x800000000LL;
  v77 = &off_47DA958;
  v9 = *(_QWORD *)(a5 + 2160);
  v72 |= 1u;
  v10 = *(_DWORD *)(v9 + 136);
  memset(v71, 0, sizeof(v71));
  v83 = v10;
  v73 = 0;
  v76[65] = 0;
  v78 = 0;
  LOBYTE(v9) = *(_BYTE *)(v9 + 140);
  v81 = (unsigned int *)v85;
  v84 = v9 & 1;
  v86 = 0;
  v91 = &v89;
  v92 = &v89;
  v96 = &v94;
  v97 = &v94;
  v101 = v103;
  v85[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_47DA9F0, (__m128i)(unsigned __int64)&v77);
  memset(&v85[1], 0, 32);
  v102 = 0x200000001LL;
  v87 = 0;
  v88 = 0;
  v89 = 0;
  v90 = 0;
  v93 = 0;
  v94 = 0;
  v95 = 0;
  v98 = 0;
  v99 = 0;
  v100 = 1;
  v103[0] = 1;
  v103[2] = 1;
  v106 = 0;
  v104 = 0;
  v105 = 0;
  v107 = 0;
  v108 = 0;
  v82 = 0x200000001LL;
  ptr = v111;
  v110 = 0x1000000000LL;
  sub_69F1C0((__int64)v112, 0, 0, 0);
  v13 = v81;
  v119 = &v117;
  v120 = &v117;
  v113 = 0;
  v116 = 0;
  v115 = 0;
  v117 = 0;
  v118 = nullptr;
  v121 = 0;
  v122 = 0;
  v123 = -1;
  v124 = 0;
  v114 = 0;
  v14 = v81[49];
  v55 = v110;
  v15 = v81[52];
  v78 = 1;
  v16 = v15 + 1;
  v17 = v81[48];
  v81[52] = v16;
  if ( v14 < v17 + 1 )
  {
    sub_25D6060(v13 + 46, v13 + 50, v17 + 1, 4);
    v17 = v13[48];
  }
  v18 = &v58;
  v19 = (__int64 (__fastcall ***)())a3;
  *(_DWORD *)(*((_QWORD *)v13 + 23) + 4 * v17) = v16;
  ++v13[48];
  v59 = 1;
  v58 = nullptr;
  v60 = 0;
  if ( !(unsigned __int8)sub_87D880(a3, (__int64)&v58, (__int64)&v77, v14, v11, v12) )
    goto LABEL_7;
  v24 = (char *)v58;
  if ( v59 > 0x40 )
    v24 = *(char **)v58;
  v52 = v24;
  v18 = (void **)a4;
  LOBYTE(v69) = 0;
  v19 = (__int64 (__fastcall ***)())&v68;
  v68 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v77, (__m128i)(unsigned __int64)v71);
  if ( !(unsigned __int8)sub_871080((__int64)&v68, a4, v20, v21, v22, v23) )
  {
LABEL_7:
    if ( v59 > 0x40 )
    {
      v19 = (__int64 (__fastcall ***)())v58;
      if ( v58 )
        operator delete[](v58);
    }
    if ( v55 != -1 )
    {
      v18 = nullptr;
      v19 = &v77;
      sub_8941C0((__int64)&v77, 0, v55);
    }
    goto LABEL_12;
  }
  v30 = sub_B167E0(*(_QWORD *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL), a4);
  if ( v52 )
  {
    v31 = nullptr;
    while ( 1 )
    {
      v18 = (void **)a4;
      v19 = &v77;
      v68.m128i_i8[4] &= ~1u;
      v68.m128i_i32[0] = 0;
      if ( !(unsigned __int8)sub_85F440((__int64)&v77, (_DWORD *)a4, v30, (__int64)v71, (__int64)&v68, 0) )
      {
LABEL_81:
        if ( v68.m128i_i32[0] > 1u )
        {
          v19 = (__int64 (__fastcall ***)())&v68;
          sub_69F740((__int64)&v68);
        }
        goto LABEL_7;
      }
      v32 = v69;
      v62 = v69;
      if ( (unsigned int)v69 > 0x40 )
      {
        sub_2585B30(&v61);
        v32 = v62;
        v33 = (__int64)v61;
        v63 = BYTE4(v69);
        if ( BYTE4(v69) )
        {
          if ( v62 > 0x40 )
            v33 = *(_QWORD *)v61;
LABEL_52:
          v34 = v33;
          goto LABEL_31;
        }
        if ( v62 > 0x40 )
        {
          v34 = *(_BYTE *)v61;
          goto LABEL_31;
        }
      }
      else
      {
        v33 = v68.m128i_i64[1];
        v61 = (void *)v68.m128i_i64[1];
        v63 = BYTE4(v69);
        if ( BYTE4(v69) )
          goto LABEL_52;
      }
      v34 = 0;
      if ( v32 )
        v34 = v33 << (64 - (unsigned __int8)v32) >> (64 - (unsigned __int8)v32);
LABEL_31:
      v35 = a2[1];
      v36 = (_QWORD *)*a2;
      v37 = v35 + 1;
      if ( (_QWORD *)*a2 == a2 + 2 )
        v38 = 15;
      else
        v38 = a2[2];
      if ( v38 < v37 )
      {
        v57 = v35 + 1;
        v56 = v34;
        v54 = a2[1];
        std::string::_M_mutate();
        v36 = (_QWORD *)*a2;
        v37 = v57;
        v34 = v56;
        v35 = v54;
      }
      *((_BYTE *)v36 + v35) = v34;
      v39 = (_QWORD *)*a2;
      a2[1] = v37;
      v18 = (void **)a4;
      v19 = &v77;
      *((_BYTE *)v39 + v35 + 1) = 0;
      LODWORD(v65) = 64;
      v64 = &dword_0 + 1;
      BYTE4(v65) = 0;
      v40 = sub_835AB0((__int64)&v77, a4, (__int64)v71, v30, (__int64)&v64);
      if ( (unsigned int)v65 > 0x40 )
      {
        v19 = (__int64 (__fastcall ***)())v64;
        if ( v64 )
        {
          v53 = v40;
          operator delete[](v64);
          v40 = v53;
        }
      }
      if ( !v40 )
      {
        if ( v62 > 0x40 )
        {
          v19 = (__int64 (__fastcall ***)())v61;
          if ( v61 )
            operator delete[](v61);
        }
        goto LABEL_81;
      }
      if ( v62 > 0x40 && v61 )
        operator delete[](v61);
      if ( v68.m128i_i32[0] > 1u )
      {
        ++v31;
        sub_69F740((__int64)&v68);
        if ( v52 == v31 )
          break;
      }
      else if ( ++v31 == v52 )
      {
        break;
      }
    }
  }
  v18 = (void **)(&dword_0 + 1);
  v19 = &v77;
  v25 = sub_8941C0((__int64)&v77, 1, v55);
  if ( (_BYTE)v25 )
  {
    if ( v121 )
    {
      v19 = &v77;
      sub_824030((__int64)&v77);
    }
    if ( v59 > 0x40 )
    {
      v19 = (__int64 (__fastcall ***)())v58;
      if ( v58 )
        operator delete[](v58);
    }
  }
  else if ( v59 > 0x40 )
  {
    v19 = (__int64 (__fastcall ***)())v58;
    if ( v58 )
    {
      operator delete[](v58);
LABEL_12:
      v25 = 0;
    }
  }
  --v81[48];
  v26 = (char *)ptr;
  v77 = &off_47DA958;
  v27 = (char *)ptr + 32 * (unsigned int)v110;
  if ( ptr != v27 )
  {
    do
    {
      v19 = *((__int64 (__fastcall ****)())v26 + 3);
      if ( (unsigned int)sub_B19900(v19) )
      {
        *v80 = 1;
        if ( HIDWORD(v124) <= 2 && !WORD1(v124) )
          break;
      }
      v26 += 32;
    }
    while ( v27 != v26 );
  }
  v28 = (_QWORD **)v118;
  LODWORD(v110) = 0;
  if ( v118 )
  {
    while ( 1 )
    {
      sub_822210(v28[3]);
      v29 = (_QWORD **)v28[2];
      if ( *((_DWORD *)v28 + 10) > 1u )
        sub_69F740((__int64)(v28 + 5));
      v18 = (void **)&qword_68;
      v19 = (__int64 (__fastcall ***)())v28;
      operator delete(v28, 0x68u);
      if ( !v29 )
        break;
      v28 = v29;
    }
  }
  if ( !v116 )
  {
    v41 = 0;
    goto LABEL_57;
  }
  v43 = (void *)sub_69F620(v19, v18);
  v66 = nullptr;
  v64 = v43;
  v65 = v44;
  v67 = 0;
  v45.m128i_i64[0] = sub_69F630(v19, v18);
  v46 = *((_QWORD **)&v114 + 1);
  v69 = 0;
  v68 = v45;
  v70 = 0;
  v47 = *((_QWORD *)&v114 + 1) + 40LL * v116;
  if ( *((_QWORD *)&v114 + 1) != v47 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_69F550(v46, &v64) )
      {
        v48 = v46[3];
        if ( v48 == v67 )
        {
          v49 = (_QWORD *)v46[2];
          v50 = &v49[v48];
          v51 = v66;
          if ( v49 == v50 )
            goto LABEL_69;
          while ( *v49 == *v51 )
          {
            ++v49;
            ++v51;
            if ( v50 == v49 )
              goto LABEL_69;
          }
        }
      }
      sub_69F550(v46, &v68);
LABEL_69:
      v46 += 5;
      if ( (_QWORD *)v47 == v46 )
      {
        v41 = 40LL * v116;
        goto LABEL_57;
      }
    }
  }
  v41 = 0;
LABEL_57:
  operator delete();
  if ( ptr != v111 )
    free(ptr);
  sub_822100((__int64)v85);
  sub_A2CAF0(&v77, v41);
  if ( v74 != v76 )
    free(v74);
  return v25;
}

