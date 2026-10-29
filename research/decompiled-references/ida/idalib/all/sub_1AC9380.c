__int64 __fastcall sub_1AC9380(unsigned __int8 **a1, __int64 ****a2, unsigned __int8 a3)
{
  unsigned __int8 *v3; // r9
  unsigned int v4; // r13d
  __int64 ***v7; // r12
  unsigned __int8 *v8; // r10
  __int64 *v9; // rsi
  unsigned __int8 *v10; // r9
  unsigned __int8 v11; // r13
  unsigned __int8 *v12; // r9
  unsigned __int8 *v13; // r10
  unsigned __int8 v14; // r10
  unsigned __int8 *v15; // r13
  __int64 *v16; // rsi
  unsigned __int8 v17; // r10
  unsigned __int8 *v18; // r9
  unsigned __int8 v19; // r10
  unsigned __int8 *v20; // r9
  unsigned __int8 v21; // r10
  unsigned __int8 v22; // r10
  unsigned __int8 *v23; // r13
  __int64 *v24; // rsi
  unsigned __int8 v25; // r10
  unsigned __int8 *v26; // r9
  unsigned __int8 v27; // r15
  unsigned __int8 *v28; // rax
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  unsigned __int8 v45; // r10
  __int64 v46; // r9
  __int64 v47; // r13
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned __int8 v53; // r10
  __int64 v54; // rcx
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r8
  unsigned __int8 v60; // r10
  __int64 v61; // r9
  __int64 v62; // r13
  __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // r9
  unsigned __int8 *v68; // r10
  __int64 v69; // rcx
  __int64 v70; // rax
  _QWORD *v71; // rax
  unsigned __int8 *v72; // [rsp+8h] [rbp-F0h]
  unsigned __int8 *v73; // [rsp+8h] [rbp-F0h]
  unsigned __int8 *v74; // [rsp+8h] [rbp-F0h]
  unsigned __int8 *v75; // [rsp+8h] [rbp-F0h]
  unsigned __int8 v76; // [rsp+8h] [rbp-F0h]
  unsigned __int8 v77; // [rsp+8h] [rbp-F0h]
  unsigned __int8 v78; // [rsp+8h] [rbp-F0h]
  unsigned __int8 v79; // [rsp+8h] [rbp-F0h]
  unsigned __int8 v80; // [rsp+8h] [rbp-F0h]
  unsigned __int8 v81; // [rsp+8h] [rbp-F0h]
  __int64 v82; // [rsp+8h] [rbp-F0h]
  unsigned __int8 *v83; // [rsp+10h] [rbp-E8h]
  unsigned __int8 *v84; // [rsp+10h] [rbp-E8h]
  unsigned __int8 *v85; // [rsp+10h] [rbp-E8h]
  unsigned __int8 *v86; // [rsp+10h] [rbp-E8h]
  __int64 v87; // [rsp+10h] [rbp-E8h]
  __int64 v88; // [rsp+10h] [rbp-E8h]
  unsigned __int8 v89; // [rsp+10h] [rbp-E8h]
  __int64 v90; // [rsp+10h] [rbp-E8h]
  unsigned __int8 v91; // [rsp+10h] [rbp-E8h]
  unsigned __int8 v92; // [rsp+10h] [rbp-E8h]
  unsigned __int8 *v93; // [rsp+10h] [rbp-E8h]
  unsigned __int8 *v94; // [rsp+10h] [rbp-E8h]
  __int64 v95; // [rsp+18h] [rbp-E0h]
  __int64 v96; // [rsp+18h] [rbp-E0h]
  __int64 v97; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v98[2]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD *v99; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v100[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v101; // [rsp+A8h] [rbp-50h]
  unsigned int v102; // [rsp+B0h] [rbp-48h]
  char v103; // [rsp+B4h] [rbp-44h]

  v3 = *a1;
  v4 = **a1;
  if ( a3 != (a3 | **a1) )
  {
    v7 = *a2;
    v8 = *a1;
    if ( (v4 & 0x20) != 0 && (a3 & 0x20) == 0 )
    {
      v72 = *a1;
      v9 = **v7;
      sub_168B9F0((__int64)v98, v9, *((_DWORD *)v7 + 5), 0xB5Eu, 0);
      v10 = v72;
      if ( v101 )
      {
        sub_1AC2020(v100, 32);
        v10 = v72;
      }
      else if ( v103 )
      {
        v30 = sub_168B9E0(v98);
        v32 = (__int64)v72;
        v33 = v30;
        v34 = (__int64)v99;
        if ( v99 )
        {
          v87 = v33;
          v34 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, __int64, unsigned __int8 *))(*v99 + 32LL))(
                  v99,
                  v9,
                  *v99,
                  v33,
                  v31,
                  v72);
          v33 = v87;
          v32 = (__int64)v72;
        }
        v88 = v32;
        v97 = v34;
        v35 = sub_1587BC0(v33, &v97, (__int64)&v97, v33, v31, v32);
        sub_1AC2020((unsigned __int8 **)(*v35 + 32LL * v102 + 8), 32);
        v10 = (unsigned __int8 *)v88;
      }
      LOBYTE(v4) = v4 ^ 0x20;
      v73 = v10;
      LOBYTE(v97) = *((_BYTE *)v7 + 9);
      sub_1AA5620((__int64)v98, (char *)&v97);
      sub_15F7200(v98);
      v7 = *a2;
      v8 = *a1;
      v3 = v73;
    }
    *v3 = v4;
    v11 = *v8;
    v12 = v8;
    if ( (*v8 & 4) != 0 && (a3 & 4) == 0 )
    {
      v74 = v8;
      sub_168B9F0((__int64)v98, **v7, *((_DWORD *)v7 + 5), 0xB5Eu, 0);
      v13 = v74;
      if ( v101 )
      {
        sub_1AC2020(v100, 4);
        v13 = v74;
      }
      else if ( v103 )
      {
        v65 = sub_168B9E0(v98);
        v68 = v74;
        v69 = v65;
        v70 = (__int64)v99;
        if ( v99 )
        {
          v93 = v74;
          v82 = v69;
          v70 = (*(__int64 (__fastcall **)(_QWORD *))(*v99 + 32LL))(v99);
          v68 = v93;
          v69 = v82;
        }
        v94 = v68;
        v97 = v70;
        v71 = sub_1587BC0(v69, &v97, (__int64)&v97, v69, v66, v67);
        sub_1AC2020((unsigned __int8 **)(*v71 + 32LL * v102 + 8), 4);
        v13 = v94;
      }
      v11 ^= 4u;
      v75 = v13;
      LOBYTE(v97) = *((_BYTE *)v7 + 9);
      sub_1AA5620((__int64)v98, (char *)&v97);
      sub_15F7200(v98);
      v7 = *a2;
      v12 = *a1;
      v8 = v75;
    }
    *v8 = v11;
    v14 = *v12;
    v15 = v12;
    if ( (*v12 & 8) != 0 && (a3 & 8) == 0 )
    {
      v83 = v12;
      v16 = **v7;
      v76 = *v12;
      sub_168B9F0((__int64)v98, v16, *((_DWORD *)v7 + 5), 0xB5Eu, 0);
      v17 = v76;
      v18 = v83;
      if ( v101 )
      {
        sub_1AC2020(v100, 8);
        v17 = v76;
        v18 = v83;
      }
      else if ( v103 )
      {
        v57 = sub_168B9E0(v98);
        v60 = v76;
        v61 = (__int64)v83;
        v62 = v57;
        v63 = (__int64)v99;
        if ( v99 )
        {
          v63 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, __int64, unsigned __int8 *))(*v99 + 32LL))(
                  v99,
                  v16,
                  *v99,
                  v58,
                  v59,
                  v83);
          v61 = (__int64)v83;
          v60 = v76;
        }
        v96 = v61;
        v92 = v60;
        v97 = v63;
        v64 = sub_1587BC0(v62, &v97, (__int64)&v97, v58, v59, v61);
        sub_1AC2020((unsigned __int8 **)(*v64 + 32LL * v102 + 8), 8);
        v18 = (unsigned __int8 *)v96;
        v17 = v92;
      }
      v84 = v18;
      v77 = v17;
      LOBYTE(v97) = *((_BYTE *)v7 + 9);
      sub_1AA5620((__int64)v98, (char *)&v97);
      sub_15F7200(v98);
      v7 = *a2;
      v15 = *a1;
      v12 = v84;
      v14 = v77 ^ 8;
    }
    *v12 = v14;
    v19 = *v15;
    v20 = v15;
    if ( (*v15 & 2) != 0 && (a3 & 2) == 0 )
    {
      v78 = *v15;
      sub_168B9F0((__int64)v98, **v7, *((_DWORD *)v7 + 5), 0xB5Eu, 0);
      v21 = v78;
      if ( v101 )
      {
        sub_1AC2020(v100, 2);
        v21 = v78;
      }
      else if ( v103 )
      {
        v50 = sub_168B9E0(v98);
        v53 = v78;
        v54 = v50;
        v55 = (__int64)v99;
        if ( v99 )
        {
          v90 = v54;
          v55 = (*(__int64 (__fastcall **)(_QWORD *))(*v99 + 32LL))(v99);
          v54 = v90;
          v53 = v78;
        }
        v91 = v53;
        v97 = v55;
        v56 = sub_1587BC0(v54, &v97, (__int64)&v97, v54, v51, v52);
        sub_1AC2020((unsigned __int8 **)(*v56 + 32LL * v102 + 8), 2);
        v21 = v91;
      }
      v79 = v21;
      LOBYTE(v97) = *((_BYTE *)v7 + 9);
      sub_1AA5620((__int64)v98, (char *)&v97);
      sub_15F7200(v98);
      v7 = *a2;
      v20 = *a1;
      v19 = v79 ^ 2;
    }
    *v15 = v19;
    v22 = *v20;
    v23 = v20;
    if ( (*v20 & 1) != 0 && (a3 & 1) == 0 )
    {
      v85 = v20;
      v24 = **v7;
      v80 = *v20;
      sub_168B9F0((__int64)v98, v24, *((_DWORD *)v7 + 5), 0xB5Eu, 0);
      v25 = v80;
      v26 = v85;
      if ( v101 )
      {
        sub_1AC2020(v100, 1);
        v25 = v80;
        v26 = v85;
      }
      else if ( v103 )
      {
        v42 = sub_168B9E0(v98);
        v45 = v80;
        v46 = (__int64)v85;
        v47 = v42;
        v48 = (__int64)v99;
        if ( v99 )
        {
          v48 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, __int64, unsigned __int8 *))(*v99 + 32LL))(
                  v99,
                  v24,
                  *v99,
                  v43,
                  v44,
                  v85);
          v46 = (__int64)v85;
          v45 = v80;
        }
        v95 = v46;
        v89 = v45;
        v97 = v48;
        v49 = sub_1587BC0(v47, &v97, (__int64)&v97, v43, v44, v46);
        sub_1AC2020((unsigned __int8 **)(*v49 + 32LL * v102 + 8), 1);
        v26 = (unsigned __int8 *)v95;
        v25 = v89;
      }
      v86 = v26;
      v81 = v25;
      LOBYTE(v97) = *((_BYTE *)v7 + 9);
      sub_1AA5620((__int64)v98, (char *)&v97);
      sub_15F7200(v98);
      v7 = *a2;
      v23 = *a1;
      v20 = v86;
      v22 = v81 ^ 1;
    }
    *v20 = v22;
    v27 = *v23;
    v28 = v23;
    if ( (*v23 & 0x10) != 0 && (a3 & 0x10) == 0 )
    {
      sub_168B9F0((__int64)v98, **v7, *((_DWORD *)v7 + 5), 0xB5Eu, 0);
      if ( v101 )
      {
        sub_1AC2020(v100, 16);
      }
      else if ( v103 )
      {
        v37 = sub_168B9E0(v98);
        v40 = (__int64)v99;
        if ( v99 )
          v40 = (*(__int64 (__fastcall **)(_QWORD *))(*v99 + 32LL))(v99);
        v97 = v40;
        v41 = sub_1587BC0(v37, &v97, (__int64)&v97, v36, v38, v39);
        sub_1AC2020((unsigned __int8 **)(*v41 + 32LL * v102 + 8), 16);
      }
      v27 ^= 0x10u;
      LOBYTE(v97) = *((_BYTE *)v7 + 9);
      sub_1AA5620((__int64)v98, (char *)&v97);
      sub_15F7200(v98);
      v28 = *a1;
    }
    *v23 = v27;
    return *v28;
  }
  return v4;
}
