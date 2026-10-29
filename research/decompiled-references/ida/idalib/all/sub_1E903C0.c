void __fastcall sub_1E903C0(_QWORD *a1, unsigned int a2, __int64 a3, __m128 a4, __m128 a5)
{
  __int64 *v6; // r13
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rax
  unsigned __int64 v16; // rdx
  char *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r12
  __int64 v23; // rsi
  __int64 *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  __int64 v30; // rbp
  unsigned __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdi
  __int64 v41; // rbp
  unsigned __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // r15
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned __int64 v48; // rax
  unsigned int v49; // edx
  unsigned int v50; // eax
  _QWORD *v51; // r15
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rbp
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // r15
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  unsigned __int64 v68; // rax
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rbp
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rax
  _QWORD *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rbp
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rax
  _QWORD *v91; // rax
  unsigned __int64 *v92; // rax
  unsigned __int64 v93; // rdx
  unsigned __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rbp
  unsigned __int64 v97; // rax
  __int64 v99; // [rsp+20h] [rbp-118h]
  __int64 v100; // [rsp+28h] [rbp-110h]
  __int64 v101; // [rsp+28h] [rbp-110h]
  __int64 v102; // [rsp+30h] [rbp-108h]
  __int64 v103; // [rsp+30h] [rbp-108h]
  __int64 v104; // [rsp+38h] [rbp-100h] BYREF
  int v105; // [rsp+4Ch] [rbp-ECh] BYREF
  char *v106; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD *v107; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v108; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v109; // [rsp+68h] [rbp-D0h] BYREF
  _QWORD v110[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v111; // [rsp+80h] [rbp-B8h]
  unsigned __int8 *v112[11]; // [rsp+90h] [rbp-A8h] BYREF
  char v113; // [rsp+E8h] [rbp-50h]
  unsigned int v114; // [rsp+F0h] [rbp-48h]
  char v115; // [rsp+F4h] [rbp-44h]

  v6 = a1 + 1;
  v104 = a3;
  v8 = a1 + 1;
  sub_168B9F0((__int64)v110, a1 + 1, a2, 0x192Du, 0);
  if ( v113 )
  {
    v8 = (__int64 *)v104;
    sub_AE9DF0(v112, v104, 8u);
    if ( v113 )
    {
LABEL_39:
      v8 = nullptr;
      sub_AE9DF0(v112, 0, 2u);
      goto LABEL_3;
    }
  }
  else
  {
    if ( !v115 )
      goto LABEL_3;
    v59 = sub_168B9E0(v110);
    v62 = v111;
    if ( v111 )
      v62 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v111 + 32LL))(v111);
    v109 = v62;
    v63 = sub_1587BC0(v59, &v109, v57, v58, v60, v61);
    v8 = (__int64 *)v104;
    sub_AE9DF0((unsigned __int8 **)(*v63 + 32LL * v114 + 8), v104, 8u);
    if ( v113 )
      goto LABEL_39;
  }
  if ( v115 )
  {
    v87 = sub_168B9E0(v110);
    v90 = v111;
    if ( v111 )
      v90 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v111 + 32LL))(v111);
    v109 = v90;
    v91 = sub_1587BC0(v87, &v109, v85, v86, v88, v89);
    v8 = nullptr;
    sub_AE9DF0((unsigned __int8 **)(*v91 + 32LL * v114 + 8), 0, 2u);
  }
LABEL_3:
  sub_15F7200(v110);
  v11 = *(_QWORD *)(v104 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v11 + 17) & 8) != 0 )
  {
    sub_168B9F0((__int64)v110, v6, a2, 0x192Eu, 0);
    v8 = &v109;
    LODWORD(v109) = 4;
    sub_1E889E0((__int64)v110, (int *)&v109);
    sub_15F7200(v110);
    v11 = *(_QWORD *)(v104 & 0xFFFFFFFFFFFFFFF0LL);
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1 )
  {
    sub_168B9F0((__int64)v110, v6, a2, 0x192Eu, 0);
    v8 = &v109;
    LODWORD(v109) = 0;
    sub_1E889E0((__int64)v110, (int *)&v109);
    sub_15F7200(v110);
  }
  v104 = sub_C1BEF0((__int64)&v104, (__int64)v8, v9, v10);
  v15 = (__int64 *)(v104 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(_QWORD *)&byte_8[v104 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v16 & 8) != 0 )
  {
    v12 = v16 & 0xFFFFFFFFFFFFFFF0LL;
    v16 = ((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v104 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
          | *(_QWORD *)&byte_8[v104 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 6)
        & 6;
    if ( (_DWORD)v16 )
    {
      sub_168B9F0((__int64)v110, v6, a2, 0x192Eu, 0);
      v8 = &v109;
      LODWORD(v109) = 3;
      sub_1E889E0((__int64)v110, (int *)&v109);
      sub_15F7200(v110);
      v15 = (__int64 *)(v104 & 0xFFFFFFFFFFFFFFF0LL);
    }
  }
  v17 = (char *)sub_F63270(*v15, (__int64)v8, v16, v12, v13, v14);
  v22 = (__int64)v17;
  v106 = v17;
  if ( v17 && v17[28] >= 0 )
  {
    v23 = *((_QWORD *)v17 + 13);
    v24 = (__int64 *)(v23 + 96);
    if ( !*((_QWORD *)v17 + 16) )
    {
      sub_7052B0(v24, v23, v18, v19, v20, v21);
      if ( !*(_QWORD *)(v22 + 128) )
        goto LABEL_34;
      v22 = (__int64)v106;
      v23 = *((_QWORD *)v106 + 13);
      v24 = (__int64 *)(v23 + 96);
    }
    sub_7052B0(v24, v23, v18, v19, v20, v21);
    v29 = *(_QWORD *)(v22 + 128);
    if ( (*(_BYTE *)(v29 + 24) & 1) != 0 )
      v30 = sub_B96980(v29);
    else
      v30 = *(_QWORD *)(v29 + 24);
    sub_7052B0((__int64 *)(*(_QWORD *)(v22 + 104) + 96LL), *(_QWORD *)(v22 + 104), v25, v26, v27, v28);
    v31 = *(_QWORD *)(v22 + 104);
    v99 = v30 + 24LL * *(unsigned int *)(*(_QWORD *)(v22 + 128) + 16LL);
    sub_7052B0((__int64 *)(v31 + 96), v31, v32, v33, v34, v35);
    v40 = *(_QWORD *)(v22 + 128);
    if ( (*(_BYTE *)(v40 + 24) & 1) != 0 )
      v41 = sub_B96980(v40);
    else
      v41 = *(_QWORD *)(v40 + 24);
    if ( v41 == v99 )
    {
LABEL_25:
      v51 = (_QWORD *)sub_B7E900(v22, v31, v36, v37, v38, v39);
      if ( v51 )
      {
LABEL_26:
        v107 = v51;
        v31 = v51[6];
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 43 > 1
          && !sub_1E8C160(a1, v31, a4, a5) )
        {
          sub_168B9F0((__int64)v110, v6, a2, 0x192Eu, 0);
          v105 = 8;
          v70 = sub_1E889E0((__int64)v110, &v105);
          v71 = sub_18DFF20(v70, (__int64 *)&v107);
          v108 = v107[6];
          v72 = sub_162B6D0(v71, &v108);
          v31 = (unsigned __int64)&v109;
          v109 = (*(__int64 (__fastcall **)(_QWORD *))(*v107 + 16LL))(v107);
          sub_1587DB0(v72, &v109);
          sub_15F7200(v110);
        }
        while ( 1 )
        {
          v52 = v51[1] & 0xFFFFFFFFFFFFFFF8LL;
          v51 = (_QWORD *)v52;
          if ( !v52 )
            break;
          if ( (*(_BYTE *)(v52 + 28) & 0x7Fu) - 49 <= 2 )
            goto LABEL_26;
        }
      }
      if ( sub_B97400(v22) )
      {
        sub_168B9F0((__int64)v110, v6, a2, 0x192Eu, 0);
        LODWORD(v108) = 23;
        v95 = sub_1E889E0((__int64)v110, (int *)&v108);
        LODWORD(v107) = 0;
        v96 = sub_1587D10(v95, (int *)&v107);
        v97 = sub_B97300(v22);
        v31 = (unsigned __int64)&v109;
        v109 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v97 + 16LL))(v97);
        sub_1587DB0(v96, &v109);
        sub_15F7200(v110);
      }
      if ( (*(_BYTE *)(v22 + 29) & 1) != 0 )
      {
        v92 = sub_B8C3D0(v22, v31, v53, v54, v55, v56);
        v93 = *v92;
        v54 = *v92 + 8LL * *((unsigned int *)v92 + 2);
        if ( *v92 >= v54 )
        {
          if ( v93 != v54 )
          {
            while ( *(_WORD *)(*(_QWORD *)v54 + 36LL) != 382 )
            {
              v54 += 8LL;
              if ( v93 == v54 )
                goto LABEL_33;
            }
            goto LABEL_34;
          }
        }
        else
        {
          v94 = *v92;
          while ( *(_WORD *)(*(_QWORD *)v94 + 36LL) != 382 )
          {
            v94 += 8LL;
            if ( v54 == v94 )
              goto LABEL_33;
          }
          if ( v54 != v94 )
            goto LABEL_34;
        }
      }
LABEL_33:
      sub_1E8FF10((__int64)a1, a2, v22, v54, v55, v56, a4, a5);
LABEL_34:
      sub_168B9F0((__int64)v110, v6, *((_DWORD *)v106 + 6), 0x170Bu, 0);
      sub_184B8A0((__int64)v110, (__int64 *)&v106);
      sub_15F7200(v110);
      return;
    }
    while ( 1 )
    {
      if ( (*(_BYTE *)(v41 + 12) & 1) != 0 )
      {
        sub_168B9F0((__int64)v110, v6, a2, 0x192Eu, 0);
        LODWORD(v108) = 5;
        v64 = sub_1E889E0((__int64)v110, (int *)&v108);
        v68 = sub_1E85C80(*(__int64 **)(v41 + 16), (__int64)&v108, v65, v66, v67);
        v101 = v68;
        if ( *(_BYTE *)(v64 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v64 + 32), v68, 8u);
        }
        else if ( *(_BYTE *)(v64 + 132) )
        {
          v79 = sub_168B9E0((_QWORD *)v64);
          v83 = *(_QWORD *)(v64 + 16);
          if ( v83 )
          {
            v103 = v79;
            v83 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v83 + 32LL))(v83);
            v79 = v103;
          }
          v109 = v83;
          v84 = sub_1587BC0(v79, &v109, v79, v80, v81, v82);
          sub_AE9DF0((unsigned __int8 **)(*v84 + 32LL * *(unsigned int *)(v64 + 128) + 8), v101, 8u);
        }
        v69 = *(_DWORD *)(v41 + 4);
        LODWORD(v109) = *(_DWORD *)v41;
        HIDWORD(v109) = v69;
        sub_1587DB0(v64, &v109);
        sub_15F7200(v110);
      }
      v42 = **(_QWORD **)(v41 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      v43 = *(_QWORD *)v42;
      if ( (*(_BYTE *)(*(_QWORD *)v42 + 8LL) & 0xF) != 0 )
      {
        v31 = sub_F64F00(**(_QWORD **)(v41 + 16), v43, v36, v37, v38) & 0xFFFFFFFFFFFFFFF0LL;
        if ( !sub_1E8C160(a1, v31, a4, a5) )
          goto LABEL_22;
LABEL_18:
        v41 += 24;
        if ( v99 == v41 )
          goto LABEL_25;
      }
      else
      {
        v31 = v43 & 0xFFFFFFFFFFFFFFF0LL;
        if ( sub_1E8C160(a1, v31, a4, a5) )
          goto LABEL_18;
LABEL_22:
        sub_168B9F0((__int64)v110, v6, a2, 0x192Eu, 0);
        LODWORD(v108) = 7;
        v44 = sub_1E889E0((__int64)v110, (int *)&v108);
        v48 = sub_1E85C80(*(__int64 **)(v41 + 16), (__int64)&v108, v45, v46, v47);
        v100 = v48;
        if ( *(_BYTE *)(v44 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v44 + 32), v48, 8u);
        }
        else if ( *(_BYTE *)(v44 + 132) )
        {
          v73 = sub_168B9E0((_QWORD *)v44);
          v77 = *(_QWORD *)(v44 + 16);
          if ( v77 )
          {
            v102 = v73;
            v77 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v77 + 32LL))(v77);
            v73 = v102;
          }
          v109 = v77;
          v78 = sub_1587BC0(v73, &v109, v73, v74, v75, v76);
          sub_AE9DF0((unsigned __int8 **)(*v78 + 32LL * *(unsigned int *)(v44 + 128) + 8), v100, 8u);
        }
        v49 = *(_DWORD *)v41;
        v50 = *(_DWORD *)(v41 + 4);
        v41 += 24;
        v31 = (unsigned __int64)&v109;
        v109 = __PAIR64__(v50, v49);
        sub_1587DB0(v44, &v109);
        sub_15F7200(v110);
        if ( v99 == v41 )
          goto LABEL_25;
      }
    }
  }
}
