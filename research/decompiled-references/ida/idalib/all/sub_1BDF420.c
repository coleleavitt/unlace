void __fastcall sub_1BDF420(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned __int64 v17; // rax
  __int64 *v18; // rsi
  unsigned int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r13
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r13
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r13
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // rdx
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rax
  _QWORD *v75; // rax
  unsigned __int64 v76; // [rsp+0h] [rbp-128h]
  __int64 v77; // [rsp+0h] [rbp-128h]
  __int64 v78; // [rsp+0h] [rbp-128h]
  unsigned int v79; // [rsp+10h] [rbp-118h]
  unsigned int v80; // [rsp+10h] [rbp-118h]
  __int64 v81; // [rsp+10h] [rbp-118h]
  __int64 v82; // [rsp+10h] [rbp-118h]
  __int64 v83; // [rsp+10h] [rbp-118h]
  __int64 v84; // [rsp+10h] [rbp-118h]
  unsigned __int8 v85; // [rsp+1Bh] [rbp-10Dh]
  unsigned int v86[4]; // [rsp+1Ch] [rbp-10Ch] BYREF
  unsigned int v87; // [rsp+2Ch] [rbp-FCh] BYREF
  unsigned int v88; // [rsp+30h] [rbp-F8h] BYREF
  unsigned int v89; // [rsp+34h] [rbp-F4h] BYREF
  unsigned __int64 v90; // [rsp+38h] [rbp-F0h] BYREF
  void *v91[2]; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v92[16]; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v93[200]; // [rsp+60h] [rbp-C8h] BYREF

  v8 = *(_QWORD *)(a3 + 48);
  v86[0] = a4;
  v9 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *v9;
  if ( *(_BYTE *)(*v9 + 16) != 26 )
    v10 = sub_F63050(*v9, a2, a3, a4);
  v13 = sub_B77230(a3, (__int64)a2);
  if ( !a5 )
  {
    v85 = sub_B771C0(a3, (__int64)a2, v11, v12);
    v16 = sub_B771F0(a3, (__int64)a2, v14, v15);
    if ( v86[0] >= v13 )
      goto LABEL_5;
LABEL_19:
    if ( v16 != v13 || *(char *)(v10 + 19) < 0 || (unsigned __int8)sub_F5D700(v10) )
    {
      v87 = 0;
      goto LABEL_7;
    }
LABEL_36:
    v87 = 2;
    goto LABEL_7;
  }
  v13 += *(_BYTE *)(a3 + 81) >> 5 != 2;
  v85 = 0;
  v16 = (*(_BYTE *)(a3 + 81) >> 5 != 2) + (unsigned int)sub_B771F0(a3, (__int64)a2, v11, v12);
  if ( v86[0] < v13 )
    goto LABEL_19;
LABEL_5:
  if ( v16 == v13 )
    goto LABEL_36;
  v87 = 1;
  v13 = v16;
LABEL_7:
  v92[0] = 0;
  v91[0] = v92;
  v91[1] = nullptr;
  v17 = sub_1BC9950(a1, a2, a3, 0, v91);
  v18 = (__int64 *)(a1 + 8);
  v76 = HIDWORD(v17);
  if ( v13 != 1 || a5 )
  {
    v19 = *(_DWORD *)(a3 + 24);
    goto LABEL_10;
  }
  v19 = *(_DWORD *)(a3 + 24);
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 120) + 8LL * v85) + 40LL) )
  {
LABEL_10:
    v79 = v17;
    sub_168B9F0((__int64)v93, v18, v19, 0x1843u, 0);
    v88 = v79;
    v20 = sub_16CF160((__int64)v93, &v88);
    v89 = v76;
    v21 = sub_16CF160(v20, &v89);
    v22 = (__int64)v91;
    v23 = sub_1682A40(v21, (__int64)v91);
    v26 = v23;
    if ( *(_BYTE *)(v23 + 120) )
    {
      v22 = v87;
      sub_AE9DF0((unsigned __int8 **)(v23 + 32), v87, 3u);
    }
    else
    {
      if ( !*(_BYTE *)(v23 + 132) )
      {
LABEL_12:
        v90 = sub_B77730(a3, v22, v24, v25);
        sub_1587DB0(v26, (__int64 *)&v90);
        sub_15F7200(v93);
        goto LABEL_13;
      }
      v57 = sub_168B9E0((_QWORD *)v23);
      v61 = *(_QWORD *)(v26 + 16);
      if ( v61 )
      {
        v77 = v57;
        v61 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 32LL))(v61);
        v57 = v77;
      }
      v90 = v61;
      v62 = sub_1587BC0(v57, (__int64 *)&v90, v57, v58, v59, v60);
      v22 = v87;
      sub_AE9DF0((unsigned __int8 **)(*v62 + 32LL * *(unsigned int *)(v26 + 128) + 8), v87, 3u);
    }
    if ( *(_BYTE *)(v26 + 120) )
    {
      v22 = v13;
      sub_AE9DF0((unsigned __int8 **)(v26 + 32), v13, 3u);
    }
    else
    {
      if ( !*(_BYTE *)(v26 + 132) )
        goto LABEL_12;
      v51 = sub_168B9E0((_QWORD *)v26);
      v55 = *(_QWORD *)(v26 + 16);
      if ( v55 )
      {
        v81 = v51;
        v55 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 32LL))(v55);
        v51 = v81;
      }
      v90 = v55;
      v56 = sub_1587BC0(v51, (__int64 *)&v90, v51, v52, v53, v54);
      v22 = v13;
      sub_AE9DF0((unsigned __int8 **)(*v56 + 32LL * *(unsigned int *)(v26 + 128) + 8), v13, 3u);
    }
    if ( *(_BYTE *)(v26 + 120) )
    {
      v22 = v86[0];
      sub_AE9DF0((unsigned __int8 **)(v26 + 32), v86[0], 3u);
    }
    else
    {
      if ( !*(_BYTE *)(v26 + 132) )
        goto LABEL_12;
      v48 = sub_168B9E0((_QWORD *)v26);
      v49 = *(_QWORD *)(v26 + 16);
      if ( v49 )
        v49 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v49 + 32LL))(*(_QWORD *)(v26 + 16));
      v90 = v49;
      v50 = sub_1587BC0(v48, (__int64 *)&v90, v44, v45, v46, v47);
      v22 = v86[0];
      sub_AE9DF0((unsigned __int8 **)(*v50 + 32LL * *(unsigned int *)(v26 + 128) + 8), v86[0], 3u);
    }
    if ( *(_BYTE *)(v26 + 120) )
    {
      v22 = v85;
      sub_AE9DF0((unsigned __int8 **)(v26 + 32), v85, 2u);
    }
    else if ( *(_BYTE *)(v26 + 132) )
    {
      v41 = sub_168B9E0((_QWORD *)v26);
      v42 = *(_QWORD *)(v26 + 16);
      if ( v42 )
        v42 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v42 + 32LL))(*(_QWORD *)(v26 + 16));
      v90 = v42;
      v43 = sub_1587BC0(v41, (__int64 *)&v90, v37, v38, v39, v40);
      v22 = v85;
      sub_AE9DF0((unsigned __int8 **)(*v43 + 32LL * *(unsigned int *)(v26 + 128) + 8), v85, 2u);
    }
    goto LABEL_12;
  }
  v80 = v17;
  sub_168B9F0((__int64)v93, v18, v19, 0x1844u, 0);
  v88 = v80;
  v27 = sub_16CF160((__int64)v93, &v88);
  v89 = v76;
  v28 = sub_16CF160(v27, &v89);
  v29 = sub_1682A40(v28, (__int64)v91);
  v30 = sub_1588370(v29, &v87);
  v31 = *(_QWORD *)(a3 + 120);
  if ( *(_BYTE *)(v30 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v30 + 32), *(_QWORD *)(v31 + 8LL * v85), 0xAu);
  }
  else if ( *(_BYTE *)(v30 + 132) )
  {
    v78 = *(_QWORD *)(v31 + 8LL * v85);
    v63 = sub_168B9E0((_QWORD *)v30);
    v66 = v78;
    v67 = v63;
    v68 = *(_QWORD **)(v30 + 16);
    if ( v68 )
    {
      v82 = v67;
      v68 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64))(*v68 + 32LL))(v68, *v68, v67, v78);
      v67 = v82;
      v66 = v78;
    }
    v90 = (unsigned __int64)v68;
    v83 = v66;
    v69 = sub_1587BC0(v67, (__int64 *)&v90, v67, v66, v64, v65);
    sub_AE9DF0((unsigned __int8 **)(*v69 + 32LL * *(unsigned int *)(v30 + 128) + 8), v83, 0xAu);
  }
  v32 = (__int64)v86;
  v33 = sub_1588370(v30, v86);
  v36 = v33;
  if ( *(_BYTE *)(v33 + 120) )
  {
    v32 = v85;
    sub_AE9DF0((unsigned __int8 **)(v33 + 32), v85, 2u);
  }
  else if ( *(_BYTE *)(v33 + 132) )
  {
    v70 = sub_168B9E0((_QWORD *)v33);
    v74 = *(_QWORD *)(v36 + 16);
    if ( v74 )
    {
      v84 = v70;
      v74 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v74 + 32LL))(v74);
      v70 = v84;
    }
    v90 = v74;
    v75 = sub_1587BC0(v70, (__int64 *)&v90, v70, v71, v72, v73);
    v32 = v85;
    sub_AE9DF0((unsigned __int8 **)(*v75 + 32LL * *(unsigned int *)(v36 + 128) + 8), v85, 2u);
  }
  v90 = sub_B77730(a3, v32, v34, v35);
  sub_1587DB0(v36, (__int64 *)&v90);
  sub_15F7200(v93);
LABEL_13:
  if ( (a2[28] & 0x7F) == 0x36 )
    sub_1BDB4F0(a1, (__int64)a2);
  if ( v91[0] != v92 )
    operator delete(v91[0]);
}
