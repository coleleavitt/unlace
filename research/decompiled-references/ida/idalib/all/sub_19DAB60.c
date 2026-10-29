__int64 __fastcall sub_19DAB60(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __m128i a6,
        double a7)
{
  _QWORD *v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // r12
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // r10
  unsigned int v28; // ebp
  unsigned __int64 v29; // r14
  __int64 v30; // rbx
  __int64 v31; // r15
  __int16 v32; // ax
  unsigned __int8 v33; // al
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int16 v39; // ax
  unsigned __int64 v40; // r12
  __int64 v41; // rsi
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned __int64 v55; // rbx
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  _QWORD *v67; // rax
  unsigned __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // r13
  __int64 v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rbx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rax
  unsigned __int64 v88; // rsi
  bool v89; // zf
  __int64 v90; // rax
  __int64 v91; // rbx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rbp
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rax
  _QWORD *v98; // rax
  _QWORD *v99; // [rsp+8h] [rbp-100h]
  __int64 v100; // [rsp+8h] [rbp-100h]
  __int64 v101; // [rsp+8h] [rbp-100h]
  __int64 v102; // [rsp+8h] [rbp-100h]
  unsigned __int64 v103; // [rsp+10h] [rbp-F8h]
  unsigned int v104; // [rsp+1Ch] [rbp-ECh] BYREF
  __int64 v105; // [rsp+20h] [rbp-E8h] BYREF
  unsigned __int64 v106; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v107; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v108; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v109[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v110; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v111[11]; // [rsp+60h] [rbp-A8h] BYREF
  char v112; // [rsp+B8h] [rbp-50h]
  unsigned int v113; // [rsp+C0h] [rbp-48h]
  char v114; // [rsp+C4h] [rbp-44h]

  v104 = a5;
  v105 = a2;
  v10 = (_QWORD *)sub_168B6C0((__int64)a1);
  v99 = nullptr;
  v12 = sub_1897000(a1, &v105, a4, 0);
  if ( !v12 )
  {
    v34 = *(_QWORD *)(v105 + 16);
    if ( *(_DWORD *)v34 == 5 && *(_DWORD *)(v34 + 16) == 1701868915 && *(_BYTE *)(v34 + 20) == 114 )
    {
      v40 = sub_15F1540(*a1, 0);
      if ( (*(_BYTE *)(v40 + 8) & 0x7F) == 0x12 && v40 != 48 )
      {
        v41 = *(_QWORD *)(v40 + 72);
        sub_1905D90(*a1, v41, a4, 0, 0);
        v42 = sub_BA85D0(v40 - 48);
        v46 = v42;
        if ( v42 )
        {
          v47 = *(_QWORD *)(v42 + 120);
          if ( !v47 )
          {
            v41 = *(_QWORD *)(v46 + 96);
            v101 = v46;
            sub_A794E0((__int64 *)(v41 + 88), v41, v46, v43, v44, v45);
            v46 = v101;
            v47 = *(_QWORD *)(v101 + 120);
          }
          v48 = v47 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v48 )
            goto LABEL_54;
          if ( (*(_BYTE *)(v48 + 72) & 1) != 0 )
          {
            v102 = v46;
            sub_BA8900(v46);
            v48 = *(_QWORD *)(v102 + 120) & 0xFFFFFFFFFFFFFFF8LL;
          }
          v49 = *(_QWORD **)(v48 + 8);
          if ( v49 )
          {
            v50 = *(_QWORD *)(*v49 & 0xFFFFFFFFFFFFFFF0LL);
            v51 = (unsigned int)*(unsigned __int8 *)(v50 + 16) - 35;
            if ( (unsigned int)v51 > 1 )
              v50 = sub_F63050(v50, v41, v51, v43);
            v52 = v50 & 0xFFFFFFFFFFFFFFF0LL;
            v99 = (_QWORD *)v52;
            if ( (*(_BYTE *)(v40 + 10) & 2) != 0 )
            {
              if ( v52 )
              {
                v55 = sub_A74EC0((__int64)v10, v52);
                v56 = *(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFF0LL);
                if ( *(_BYTE *)(v56 + 16) != 34 )
                  v56 = sub_F63050(*(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFF0LL), v56, v53, v54);
                return sub_19D9460(a1, v56, 0, 0, (void *)a3, v104, a6, a7, a4, v55, 1u);
              }
              goto LABEL_66;
            }
          }
          else
          {
LABEL_54:
            if ( (*(_BYTE *)(v40 + 10) & 2) != 0 )
            {
LABEL_66:
              sub_168B9F0((__int64)v109, a1, a4, 0x135Fu, 0);
              v87 = *(_QWORD *)(sub_BA85D0(v40 - 48) + 40);
              v88 = v87 & 0xFFFFFFFFFFFFFFF8LL;
              v89 = (v87 & 7) == 0;
              v90 = 0;
              if ( v89 )
                v90 = v88;
              v91 = v90;
              if ( v112 )
              {
                sub_AE9DF0(v111, v90, 5u);
              }
              else if ( v114 )
              {
                v94 = sub_168B9E0(v109);
                v97 = v110;
                if ( v110 )
                  v97 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v110 + 32LL))(v110);
                v108 = v97;
                v98 = sub_1587BC0(v94, (__int64 *)&v108, v92, v93, v95, v96);
                sub_AE9DF0((unsigned __int8 **)(*v98 + 32LL * v113 + 8), v91, 5u);
              }
              goto LABEL_18;
            }
            v99 = nullptr;
          }
          v68 = sub_BA85D0(v40 - 48);
          v12 = sub_BAB630(v68, v41, v69, v70, v71, v72);
          if ( v12 )
            goto LABEL_2;
        }
      }
    }
    sub_168B9F0((__int64)v109, a1, a4, 0x11u, 0);
    if ( v112 )
    {
      sub_AE9DF0(v111, 5, 4u);
    }
    else
    {
      if ( !v114 )
      {
LABEL_18:
        sub_15F7200(v109);
        return 1;
      }
      v63 = sub_168B9E0(v109);
      v66 = v110;
      if ( v110 )
        v66 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v110 + 32LL))(v110);
      v108 = v66;
      v67 = sub_1587BC0(v63, (__int64 *)&v108, v61, v62, v64, v65);
      sub_AE9DF0((unsigned __int8 **)(*v67 + 32LL * v113 + 8), 5, 4u);
    }
    if ( v112 )
    {
      sub_AE9DF0(v111, 22, 4u);
    }
    else if ( v114 )
    {
      v82 = sub_168B9E0(v109);
      v85 = v110;
      if ( v110 )
        v85 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v110 + 32LL))(v110);
      v108 = v85;
      v86 = sub_1587BC0(v82, (__int64 *)&v108, v80, v81, v83, v84);
      sub_AE9DF0((unsigned __int8 **)(*v86 + 32LL * v113 + 8), 22, 4u);
    }
    goto LABEL_18;
  }
LABEL_2:
  v106 = 0;
  v107 = 0;
  v15 = sub_BAD2F0(v12, a3, 2, v11, v13, v14);
  if ( v15 )
  {
    v16 = *(_QWORD *)(v15 + 80);
    v17 = *(_QWORD *)(v15 + 88);
    v106 = v16;
    v18 = v16;
  }
  else
  {
    v57 = *(_QWORD *)(*a1 + 240);
    v106 = a3 & 0xFFFFFFFFFFFFFFF8LL | 1;
    v17 = sub_FE87C0(v57 + 552, v57 + 680, a3);
    v18 = v106;
  }
  v107 = v17;
  v22 = sub_BAD910(v12, v18, 0, 0, 1, 0);
  if ( v22 || (v22 = sub_BADBA0(v12, (__int64)&v106, 0, v19, v20, v21)) != 0 )
  {
    if ( (unsigned __int8)sub_18F5260(*a1, v22, (int *)&v104, 1u, 0, 0, a6, a7, 0, 0, 0) )
      return 1;
  }
  v27 = sub_BAD910(v12, v107, 0, 0, 1, 0);
  if ( v27
    || (v27 = sub_BADBA0(v12, (__int64)&v107, 0, v24, v25, v26)) != 0
    || (v27 = sub_BAD270(v12, v107, v35, v36, v37, v38)) != 0 )
  {
    v103 = v27;
    if ( (unsigned __int8)sub_18F5260(*a1, v27, (int *)&v104, 1u, 0, 0, a6, a7, 0, 0, 0) )
      return 1;
    v28 = v104;
    v29 = v103 & 0xFFFFFFFFFFFFFFF9LL;
    if ( !v99 )
      goto LABEL_23;
    goto LABEL_11;
  }
  if ( v22 )
  {
    v29 = 0;
    v28 = v104;
    if ( !v99 )
    {
LABEL_23:
      v100 = v10[2390];
      v31 = sub_EEE9A0(48, v10, 8u);
      *(_WORD *)v31 = *(_WORD *)v31 & 0xFE00 | 0x20;
      if ( unk_2CD7484 )
        sub_EE9B50(32);
      v39 = *(_WORD *)(v31 + 1);
      *(_QWORD *)(v31 + 24) = v29;
      *(_QWORD *)(v31 + 16) = v22 | 4;
      *(_DWORD *)(v31 + 32) = v28;
      *(_DWORD *)(v31 + 36) = a4;
      *(_WORD *)(v31 + 1) = v39 & 0xF801 | 0x1A;
      *(_QWORD *)(v31 + 40) = v12 & 0xFFFFFFFFFFFFFFF9LL | 4;
      *(_QWORD *)(v31 + 8) = v100;
      goto LABEL_14;
    }
LABEL_11:
    v30 = v10[2390];
    v31 = sub_EEE9A0(48, v10, 8u);
    *(_WORD *)v31 = *(_WORD *)v31 & 0xFE00 | 0x20;
    if ( unk_2CD7484 )
      sub_EE9B50(32);
    v32 = *(_WORD *)(v31 + 1);
    *(_QWORD *)(v31 + 8) = v30;
    *(_QWORD *)(v31 + 16) = v22 | 4;
    *(_QWORD *)(v31 + 24) = v29;
    *(_DWORD *)(v31 + 32) = v28;
    *(_WORD *)(v31 + 1) = v32 & 0xF801 | 0x1A;
    *(_DWORD *)(v31 + 36) = a4;
    *(_QWORD *)(v31 + 40) = *v99 & 0xFFFFFFFFFFFFFFF9LL | 2;
LABEL_14:
    v33 = sub_B63A40(v31);
    *(_BYTE *)(v31 + 1) = (v33 << 6) | *(_BYTE *)(v31 + 1) & 0x3F;
    *(_BYTE *)(v31 + 2) = *(_BYTE *)(v31 + 2) & 0xF8 | (v33 >> 2) & 7;
    return v31;
  }
  sub_168B9F0((__int64)v109, a1, v104, 0x12F7u, 0);
  if ( v112 )
  {
    sub_AE9DF0(v111, a3, 5u);
  }
  else if ( v114 )
  {
    v77 = sub_168B9E0(v109);
    v78 = v110;
    if ( v110 )
      v78 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v110 + 32LL))(v110);
    v108 = v78;
    v79 = sub_1587BC0(v77, (__int64 *)&v108, v73, v74, v75, v76);
    sub_AE9DF0((unsigned __int8 **)(*v79 + 32LL * v113 + 8), a3, 5u);
  }
  v108 = sub_A82070((__int64)v10, v12, 0, v58, v59, v60);
  sub_162B6D0((__int64)v109, (__int64 *)&v108);
  sub_15F7200(v109);
  return 1;
}
