__int64 __fastcall sub_893900(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        _BYTE *a7,
        unsigned __int8 a8)
{
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  int v13; // edx
  __m128 v14; // xmm0
  __int64 *v15; // rdi
  __int64 v16; // rax
  bool v17; // zf
  char *v18; // r14
  char *v19; // r12
  unsigned int v20; // r13d
  _QWORD **v21; // rbp
  _QWORD **v22; // r12
  __int64 v23; // rsi
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  _QWORD *v30; // r14
  __int64 v31; // rdx
  _QWORD *v32; // rbp
  __int64 v33; // rdx
  _QWORD *v34; // rax
  _QWORD *v35; // rsi
  _QWORD *v36; // rdx
  __int64 (__fastcall ***v37)(); // [rsp+8h] [rbp-5C0h] BYREF
  _OWORD *v38; // [rsp+10h] [rbp-5B8h]
  __int64 v39; // [rsp+18h] [rbp-5B0h]
  unsigned int v40; // [rsp+24h] [rbp-5A4h]
  _BYTE *v41; // [rsp+28h] [rbp-5A0h]
  __int64 v42; // [rsp+30h] [rbp-598h] BYREF
  __int64 v43; // [rsp+38h] [rbp-590h]
  __int64 v44; // [rsp+40h] [rbp-588h]
  __int64 v45; // [rsp+48h] [rbp-580h]
  __int64 v46; // [rsp+A0h] [rbp-528h]
  __int64 v47; // [rsp+A8h] [rbp-520h]
  __int64 v48; // [rsp+B0h] [rbp-518h]
  int v49; // [rsp+B8h] [rbp-510h]
  __int64 v50; // [rsp+C0h] [rbp-508h]
  __int64 v51; // [rsp+C8h] [rbp-500h]
  char *v52; // [rsp+D0h] [rbp-4F8h]
  __int64 v53; // [rsp+D8h] [rbp-4F0h]
  char v54; // [rsp+E0h] [rbp-4E8h] BYREF
  __int16 v55; // [rsp+120h] [rbp-4A8h]
  __int64 v56; // [rsp+130h] [rbp-498h] BYREF
  __int64 v57; // [rsp+138h] [rbp-490h]
  __int64 v58; // [rsp+140h] [rbp-488h]
  __int64 v59; // [rsp+148h] [rbp-480h]
  __int64 v60; // [rsp+150h] [rbp-478h]
  __int64 v61; // [rsp+158h] [rbp-470h]
  void *v62; // [rsp+160h] [rbp-468h]
  __int64 v63; // [rsp+168h] [rbp-460h]
  _BYTE v64[64]; // [rsp+170h] [rbp-458h] BYREF
  __int16 v65; // [rsp+1B0h] [rbp-418h]
  __int64 (__fastcall **v66)(); // [rsp+1C0h] [rbp-408h] BYREF
  unsigned __int8 v67; // [rsp+1C8h] [rbp-400h]
  __int64 v68; // [rsp+1D0h] [rbp-3F8h]
  _BYTE *v69; // [rsp+1D8h] [rbp-3F0h]
  _OWORD *v70; // [rsp+1E0h] [rbp-3E8h]
  __int64 v71; // [rsp+1E8h] [rbp-3E0h]
  int v72; // [rsp+1F0h] [rbp-3D8h]
  char v73; // [rsp+1F4h] [rbp-3D4h]
  _OWORD v74[3]; // [rsp+1F8h] [rbp-3D0h] BYREF
  __int64 v75; // [rsp+228h] [rbp-3A0h]
  __int64 v76; // [rsp+230h] [rbp-398h]
  __int64 v77; // [rsp+238h] [rbp-390h]
  int v78; // [rsp+248h] [rbp-380h] BYREF
  __int64 v79; // [rsp+250h] [rbp-378h]
  int *v80; // [rsp+258h] [rbp-370h]
  int *v81; // [rsp+260h] [rbp-368h]
  __int64 v82; // [rsp+268h] [rbp-360h]
  int v83; // [rsp+278h] [rbp-350h] BYREF
  __int64 v84; // [rsp+280h] [rbp-348h]
  int *v85; // [rsp+288h] [rbp-340h]
  int *v86; // [rsp+290h] [rbp-338h]
  __int64 v87; // [rsp+298h] [rbp-330h]
  __int64 v88; // [rsp+2A0h] [rbp-328h]
  int v89; // [rsp+2A8h] [rbp-320h]
  _DWORD *v90; // [rsp+2B0h] [rbp-318h]
  __int64 v91; // [rsp+2B8h] [rbp-310h]
  _DWORD v92[4]; // [rsp+2C0h] [rbp-308h] BYREF
  __int64 v93; // [rsp+2D0h] [rbp-2F8h]
  __int64 v94; // [rsp+2D8h] [rbp-2F0h]
  int v95; // [rsp+2E0h] [rbp-2E8h]
  __int64 v96; // [rsp+2E8h] [rbp-2E0h]
  char v97; // [rsp+2F0h] [rbp-2D8h]
  void *ptr; // [rsp+2F8h] [rbp-2D0h]
  __int64 v99; // [rsp+300h] [rbp-2C8h]
  _BYTE v100[512]; // [rsp+308h] [rbp-2C0h] BYREF
  _QWORD v101[2]; // [rsp+508h] [rbp-C0h] BYREF
  int v102; // [rsp+518h] [rbp-B0h]
  __int64 v103; // [rsp+520h] [rbp-A8h]
  _QWORD *v104; // [rsp+528h] [rbp-A0h]
  __int64 v105; // [rsp+530h] [rbp-98h]
  unsigned int v106; // [rsp+538h] [rbp-90h]
  int v107; // [rsp+548h] [rbp-80h] BYREF
  void *v108; // [rsp+550h] [rbp-78h]
  int *v109; // [rsp+558h] [rbp-70h]
  int *v110; // [rsp+560h] [rbp-68h]
  __int64 v111; // [rsp+568h] [rbp-60h]
  __int64 v112; // [rsp+570h] [rbp-58h]
  __int64 v113; // [rsp+578h] [rbp-50h]
  int v114; // [rsp+580h] [rbp-48h]
  unsigned int v115; // [rsp+584h] [rbp-44h]

  v11 = 0;
  v12 = *(_QWORD *)(a1 + 2160);
  v39 = a5;
  v13 = *(_DWORD *)(v12 + 136);
  LOBYTE(v12) = *(_BYTE *)(v12 + 140);
  v40 = a6;
  v68 = a1;
  v69 = a7;
  v73 = v12 & 1;
  v37 = &v66;
  v72 = v13;
  v67 = 0;
  v14 = _mm_loadh_ps((const double *)&v37);
  v66 = &off_47DA958;
  v74[0] = v14;
  memset(&v74[1], 0, 32);
  v75 = 0;
  v80 = &v78;
  v81 = &v78;
  v85 = &v83;
  v86 = &v83;
  v90 = v92;
  v38 = v74;
  v91 = 0x200000001LL;
  v71 = 0x200000001LL;
  v70 = v74;
  v99 = 0x1000000000LL;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  v87 = 0;
  v88 = 0;
  v89 = 1;
  v92[0] = 1;
  v92[2] = 1;
  v95 = 0;
  v93 = 0;
  v94 = 0;
  v96 = 0;
  v97 = 0;
  ptr = v100;
  sub_69F1C0((__int64)v101, 0, 0, 0);
  v67 = a8;
  v109 = &v107;
  v110 = &v107;
  v15 = &v56;
  v53 = 0x800000000LL;
  v106 = 0;
  v104 = nullptr;
  v115 = 2 * (a8 ^ 1);
  v105 = 0;
  v107 = 0;
  v108 = nullptr;
  v111 = 0;
  v112 = 0;
  v113 = -1;
  v114 = 0;
  v101[0] = a2;
  v101[1] = a3;
  v102 = 2;
  v103 = a4;
  v52 = &v54;
  v46 = a2;
  v47 = a3;
  v56 = a2;
  v57 = a3;
  v16 = sub_69F240(&v56);
  v55 &= 0xFCu;
  v58 = v16;
  v51 = v16;
  v48 = 0;
  v49 = 0;
  v17 = *v69 == 0;
  v50 = 0;
  if ( !v17 )
  {
    v18 = (char *)ptr;
    v19 = (char *)ptr + 32 * (unsigned int)v99;
    goto LABEL_3;
  }
  v56 = a2;
  v42 = a2;
  v62 = v64;
  v41 = v64;
  v63 = 0x800000000LL;
  v57 = a3;
  v43 = a3;
  LOBYTE(v59) = v59 | 1;
  v65 &= 0xFDu;
  v58 = 0;
  v61 = 0;
  v44 = sub_69F240(&v42);
  v61 = v44;
  v65 &= 0xFEu;
  LODWORD(v59) = 0;
  v11 = ((unsigned __int64)v40 << 32) | v40;
  v60 = 0;
  LODWORD(v63) = 0;
  v25 = sub_8912C0((__int64)v37, v11, (__int64)&v56, a4, v39);
  v15 = (__int64 *)v62;
  v20 = v25;
  if ( v62 != v41 )
    free(v62);
  v18 = (char *)ptr;
  v26 = 32LL * (unsigned int)v99;
  v19 = (char *)ptr + v26;
  if ( !(_BYTE)v20 || *a7 )
  {
LABEL_3:
    v66 = &off_47DA958;
    if ( v19 == v18 )
    {
LABEL_19:
      v20 = 0;
    }
    else
    {
      while ( 1 )
      {
        v15 = *((__int64 **)v18 + 3);
        if ( (unsigned int)sub_B19900(v15) )
        {
          *v69 = 1;
          if ( v115 <= 2 )
          {
            v20 = BYTE2(v114);
            LOBYTE(v20) = HIBYTE(v114) | BYTE2(v114);
            if ( !HIWORD(v114) )
              break;
          }
        }
        v18 += 32;
        if ( v19 == v18 )
          goto LABEL_19;
      }
    }
    goto LABEL_9;
  }
  if ( v26 )
  {
    do
    {
      while ( 1 )
      {
        v15 = *((__int64 **)v18 + 3);
        if ( (unsigned int)sub_B19900(v15) )
          break;
        v18 += 32;
        if ( v19 == v18 )
          goto LABEL_29;
      }
      v18 += 32;
      *v69 = 1;
    }
    while ( v19 != v18 );
  }
LABEL_29:
  v66 = &off_47DA958;
LABEL_9:
  v21 = (_QWORD **)v108;
  LODWORD(v99) = 0;
  if ( v108 )
  {
    while ( 1 )
    {
      sub_822210(v21[3]);
      v22 = (_QWORD **)v21[2];
      if ( *((_DWORD *)v21 + 10) > 1u )
        sub_69F740((__int64)(v21 + 5));
      v11 = 104;
      v15 = (__int64 *)v21;
      operator delete(v21, 0x68u);
      if ( !v22 )
        break;
      v21 = v22;
    }
  }
  if ( !v106 )
  {
    v23 = 0;
    goto LABEL_16;
  }
  v27 = sub_69F620(v15, v11);
  v44 = 0;
  v42 = v27;
  v43 = v28;
  v45 = 0;
  v29 = sub_69F630(v15, v11);
  v30 = v104;
  v58 = 0;
  v56 = v29;
  v57 = v31;
  v59 = 0;
  v32 = &v104[5 * v106];
  if ( v104 != v32 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_69F550(v30, &v42) )
      {
        v33 = v30[3];
        if ( v33 == v45 )
        {
          v34 = (_QWORD *)v30[2];
          v35 = &v34[v33];
          v36 = (_QWORD *)v44;
          if ( v34 == v35 )
            goto LABEL_33;
          while ( *v34 == *v36 )
          {
            ++v34;
            ++v36;
            if ( v35 == v34 )
              goto LABEL_33;
          }
        }
      }
      sub_69F550(v30, &v56);
LABEL_33:
      v30 += 5;
      if ( v32 == v30 )
      {
        v23 = 40LL * v106;
        goto LABEL_16;
      }
    }
  }
  v23 = 0;
LABEL_16:
  operator delete();
  if ( ptr != v100 )
    free(ptr);
  sub_822100((__int64)v38);
  sub_A2CAF0(v37, v23);
  return v20;
}

