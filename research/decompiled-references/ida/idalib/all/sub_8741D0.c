__int64 __fastcall sub_8741D0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbx
  _QWORD *v6; // r13
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r15
  unsigned __int8 v10; // r12
  char v11; // al
  unsigned int *v12; // rdi
  _QWORD *v13; // rax
  unsigned int *v14; // rdi
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __m128 *v21; // rax
  __m128 *v22; // rax
  __int64 v23; // r14
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  unsigned int *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __m128 *v31; // rax
  __m128 *v32; // rax
  __int16 v34; // dx
  int v35; // ecx
  _QWORD *v36; // rax
  unsigned int *v37; // r12
  _QWORD *v38; // rax
  unsigned int *v39; // r12
  _QWORD *v40; // rdx
  _QWORD *v41; // rax
  _QWORD *v42; // r12
  _QWORD *v43; // rax
  unsigned int *v44; // r12
  _QWORD *v45; // rax
  unsigned int *v46; // r12
  _QWORD *v47; // rdx
  _QWORD *v48; // rax
  __int64 v49; // r9
  int v50; // r8d
  unsigned int *v51; // r14
  _QWORD *v52; // rax
  unsigned int *v53; // r14
  _QWORD *v54; // rdx
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rcx
  __m128 *v60; // rax
  __m128 *v61; // rax
  _QWORD *v62; // r14
  _QWORD *v63; // rax
  unsigned int *v64; // rdi
  _QWORD *v65; // rax
  _QWORD *v66; // rcx
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __m128 *v73; // rax
  __m128 *v74; // rdx
  unsigned __int8 v75; // [rsp+0h] [rbp-68h]
  _QWORD *v76; // [rsp+0h] [rbp-68h]
  _QWORD *v77; // [rsp+0h] [rbp-68h]
  int v78; // [rsp+8h] [rbp-60h]
  unsigned int *v79; // [rsp+8h] [rbp-60h]
  int v80; // [rsp+10h] [rbp-58h]
  _QWORD *v81; // [rsp+10h] [rbp-58h]
  _QWORD *v82; // [rsp+10h] [rbp-58h]
  _QWORD *v83; // [rsp+10h] [rbp-58h]
  _QWORD *v84; // [rsp+10h] [rbp-58h]
  int v85; // [rsp+18h] [rbp-50h]
  double *v86; // [rsp+18h] [rbp-50h]
  double *v87; // [rsp+18h] [rbp-50h]
  _QWORD *v88; // [rsp+20h] [rbp-48h]
  _QWORD *v89; // [rsp+20h] [rbp-48h]
  _QWORD *v90; // [rsp+20h] [rbp-48h]
  int v91; // [rsp+20h] [rbp-48h]
  bool v92; // [rsp+20h] [rbp-48h]
  _QWORD *v93; // [rsp+28h] [rbp-40h]
  _QWORD *v94; // [rsp+28h] [rbp-40h]
  _QWORD *v95; // [rsp+28h] [rbp-40h]
  bool v96; // [rsp+28h] [rbp-40h]

  v3 = *(unsigned int **)a1;
  v75 = *(_BYTE *)a2 - 114;
  if ( **(_DWORD **)a1 )
    return 0;
  v6 = sub_868B50((__int64)v3, 48);
  v78 = *v3;
  if ( *v3 )
    return 0;
  v85 = 0;
  v7 = a2 + 2;
  *(_OWORD *)v6 = 0;
  *((_OWORD *)v6 + 2) = 0;
  *((_OWORD *)v6 + 1) = 0;
  v8 = *(_QWORD *)(a3 + 16);
  v6[4] = a2;
  *v6 = v8;
  *(_QWORD *)(a3 + 16) = v6;
  if ( v75 <= 1u )
  {
    v7 = a2;
    v85 = 2 * (unsigned __int16)__ROL2__(*(_WORD *)(a2 + 1), 8);
  }
  v9 = (((*(_BYTE *)a2 - 115) & 0xFD) == 0) + v7;
  v10 = *(_BYTE *)(v9 + 3);
  v11 = v10 & 1;
  if ( v10 > 0x67u )
  {
    if ( (unsigned __int8)(v10 - 104) <= 1u )
    {
      v34 = *(_WORD *)(v9 + 4);
      v9 += 8;
      v80 = (unsigned __int16)__ROL2__(v34, 8);
      v35 = (unsigned __int16)__ROL2__(*(_WORD *)(v9 - 2), 8);
      v91 = v35;
      if ( v11 )
      {
        v78 = v35;
        goto LABEL_50;
      }
      v96 = v35 > 1;
      if ( v80 )
      {
        v78 = v35;
        v92 = v35 > 1 || v80 != 1;
        goto LABEL_68;
      }
      goto LABEL_86;
    }
    goto LABEL_48;
  }
  if ( v10 > 0x65u )
  {
    v9 += 4;
    if ( v11 )
    {
      v80 = 0;
      v78 = 1;
LABEL_50:
      v12 = *(unsigned int **)a1;
      if ( v75 <= 1u )
        goto LABEL_10;
      goto LABEL_51;
    }
    v96 = 0;
    v91 = 1;
LABEL_86:
    v44 = *(unsigned int **)a1;
    sub_86D900(*(unsigned int **)a1, 0x42u, 12, 0, 12, 0, 0x7Fu, 16);
    v45 = sub_86E080(v44, 2, 12, 0, 11, 0);
    v46 = *(unsigned int **)a1;
    v81 = v45;
    if ( !**(_DWORD **)a1 )
    {
      v47 = sub_868B50((__int64)v46, 24);
      if ( v47 )
      {
        v48 = v81;
        v82 = v47;
        *v47 = v48;
        v47[1] = sub_868BC0((__int64)v46);
        v82[2] = *(_QWORD *)(a1 + 312);
        *(_QWORD *)(a1 + 312) = v82;
      }
    }
    if ( v75 <= 1u )
    {
      sub_86B8E0(v3, 32, 1, 0, 142, 8 * v85 + *(_DWORD *)(a1 + 76));
      sub_86B8E0(v3, 32, 140, 0, 2, 0);
      sub_86B8E0(v3, 32, 140, 8, 127, 0);
      sub_86D900(v3, 0x40u, 12, 0, 12, 0, 0x7Fu, 8);
      v50 = 142;
      v49 = 8 * v85 + *(_DWORD *)(a1 + 76) + 8;
    }
    else
    {
      sub_86B8E0(v3, 32, 140, 0, 2, 0);
      sub_86B8E0(v3, 32, 140, 8, 127, 0);
      sub_86D900(v3, 0x40u, 12, 0, 12, 0, 0x7Fu, 8);
      sub_86EBF0(a1, a2, nullptr);
      sub_86B8E0(v3, 32, 1, 0, 132, 0);
      sub_86B8E0(v3, 32, 142, 32, 4, 0);
      v49 = 8;
      v50 = 132;
    }
    v42 = sub_86E080(v3, 0, 1, 0, v50, v49);
    sub_86D900(v3, 0x42u, 12, 0, 12, 0, 0x7Fu, 8);
    if ( v96 )
    {
      v87 = (double *)(v6 + 3);
LABEL_120:
      sub_86B8E0(v3, 32, 142, 24, 127, 0);
      v95 = sub_868BC0((__int64)v3);
      if ( v75 > 1u )
        sub_86B8E0(v3, 32, 4, 0, 142, 32);
LABEL_122:
      sub_86F780(a1, a2, v87, 0, 0);
      sub_86B8E0(v3, 32, 1, 0, 142, 24);
      sub_86D900(v3, 0x40u, 1, 0, 1, 0, 0x7Fu, 1);
      sub_86B8E0(v3, 32, 142, 24, 1, 0);
      if ( v78 <= 1 )
        goto LABEL_123;
      v69 = sub_86E080(v3, 2, 1, 0, 127, v78);
      if ( v69 && v95 )
      {
        v69[2] &= ~1uLL;
        v69[3] = v95;
      }
      if ( v91 > 1 )
      {
LABEL_123:
        v62 = sub_86E080(v3, 3, 1, 0, 127, v91);
        v79 = *(unsigned int **)a1;
        sub_86D900(*(unsigned int **)a1, 0x42u, 12, 0, 12, 0, 0x7Fu, 8);
        v63 = sub_86E080(v79, 2, 12, 0, 11, 0);
        v64 = *(unsigned int **)a1;
        if ( !**(_DWORD **)a1 )
        {
          v83 = v63;
          v65 = sub_868B50((__int64)v64, 24);
          if ( v65 )
          {
            v66 = v83;
            v84 = v65;
            *v65 = v66;
            v65[1] = sub_868BC0((__int64)v64);
            v84[2] = *(_QWORD *)(a1 + 312);
            *(_QWORD *)(a1 + 312) = v84;
          }
        }
        sub_86B8E0(v3, 32, 140, 0, 2, 0);
        v67 = sub_868C70((__int64)v3, 36);
        if ( v67 && v95 )
        {
          v67[2] &= ~1uLL;
          v67[3] = v95;
        }
        v68 = sub_868BC0((__int64)v3);
        if ( v62 && v68 )
        {
          v62[2] &= ~1uLL;
          v62[3] = v68;
        }
LABEL_76:
        v43 = sub_868BC0((__int64)v3);
        if ( v42 && v43 )
        {
          v42[2] &= ~1uLL;
          v42[3] = v43;
        }
        v6[5] = sub_868BC0((__int64)v3);
        v27 = *(unsigned int **)a1;
        if ( !**(_DWORD **)a1 )
          goto LABEL_36;
        goto LABEL_37;
      }
      goto LABEL_75;
    }
    v95 = sub_868BC0((__int64)v3);
    if ( v75 > 1u )
    {
      v87 = (double *)(v6 + 3);
      goto LABEL_74;
    }
LABEL_93:
    sub_86F780(a1, a2, (double *)v6 + 3, 0, 0);
    if ( v91 )
      goto LABEL_76;
LABEL_94:
    v51 = *(unsigned int **)a1;
    sub_86D900(*(unsigned int **)a1, 0x42u, 12, 0, 12, 0, 0x7Fu, 8);
    v52 = sub_86E080(v51, 2, 12, 0, 11, 0);
    v53 = *(unsigned int **)a1;
    v76 = v52;
    if ( !**(_DWORD **)a1 )
    {
      v54 = sub_868B50((__int64)v53, 24);
      if ( v54 )
      {
        v55 = v76;
        v77 = v54;
        *v54 = v55;
        v54[1] = sub_868BC0((__int64)v53);
        v77[2] = *(_QWORD *)(a1 + 312);
        *(_QWORD *)(a1 + 312) = v77;
      }
    }
    sub_86B8E0(v3, 32, 140, 0, 2, 0);
    v56 = sub_868C70((__int64)v3, 36);
    if ( v95 && v56 )
    {
      v56[2] &= ~1uLL;
      v56[3] = v95;
    }
    goto LABEL_76;
  }
  if ( v10 <= 0x63u )
  {
    if ( v10 > 0x61u )
      v9 += 4;
LABEL_48:
    if ( v11 )
    {
      v80 = 0;
      goto LABEL_50;
    }
    v91 = 0;
    v96 = 0;
    goto LABEL_86;
  }
  v9 += 4;
  if ( !v11 )
  {
    v92 = 0;
    v80 = 1;
LABEL_68:
    v37 = *(unsigned int **)a1;
    sub_86D900(*(unsigned int **)a1, 0x42u, 12, 0, 12, 0, 0x7Fu, 8);
    v38 = sub_86E080(v37, 2, 12, 0, 11, 0);
    v39 = *(unsigned int **)a1;
    v93 = v38;
    if ( !**(_DWORD **)a1 )
    {
      v40 = sub_868B50((__int64)v39, 24);
      if ( v40 )
      {
        v41 = v93;
        v94 = v40;
        *v40 = v41;
        v40[1] = sub_868BC0((__int64)v39);
        v94[2] = *(_QWORD *)(a1 + 312);
        *(_QWORD *)(a1 + 312) = v94;
      }
    }
    if ( v75 > 1u )
    {
      sub_86B8E0(v3, 32, 140, 0, 127, 0);
      v87 = (double *)(v6 + 3);
      sub_86EBF0(a1, a2, (double *)v6 + 3);
      sub_86B8E0(v3, 32, 1, 0, 132, 0);
      sub_86B8E0(v3, 32, 142, 32, 4, 0);
      v42 = sub_86E080(v3, 0, 1, 0, 132, 8);
      if ( !v92 )
      {
        v95 = sub_868BC0((__int64)v3);
        v91 = v78;
LABEL_74:
        sub_86B8E0(v3, 32, 4, 0, 142, 32);
        sub_86F780(a1, a2, v87, 0, 0);
LABEL_75:
        if ( v91 )
          goto LABEL_76;
        goto LABEL_94;
      }
      v91 = v78;
      v78 = v80;
      goto LABEL_120;
    }
    sub_86B8E0(v3, 32, 1, 0, 142, 8 * v85 + *(_DWORD *)(a1 + 76));
    sub_86B8E0(v3, 32, 140, 0, 127, 0);
    if ( *(_DWORD *)(a1 + 480) )
      goto LABEL_102;
    sub_86E080(v3, 0, 1, 0, 142, *(_DWORD *)(a1 + 76) + 8);
    if ( *v3 )
      goto LABEL_102;
    v70 = *((_QWORD *)v3 + 10);
    v71 = *(_QWORD *)(v70 + 8);
    v72 = v71 + 16;
    if ( (unsigned __int64)(v71 + 16) <= 0xFF0 )
    {
      v74 = (__m128 *)(v70 + v71 + 16);
      *(_QWORD *)(v70 + 8) = v72;
      if ( !v74 )
        goto LABEL_102;
    }
    else
    {
      v73 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v3 + 7))(
                        4096,
                        *(_QWORD *)(*((_QWORD *)v3 + 7) + 16LL));
      if ( !v73 )
      {
        *v3 = 2;
        goto LABEL_102;
      }
      v73->m128_u64[0] = *((_QWORD *)v3 + 10);
      v74 = v73 + 1;
      *((_QWORD *)v3 + 10) = v73;
      v73->m128_u64[1] = 16;
    }
    *v74 = _mm_loadh_ps((const double *)v6 + 3);
    v6[3] = v74;
LABEL_102:
    v42 = sub_86E080(v3, 0, 1, 0, 142, 8 * v85 + *(_DWORD *)(a1 + 76) + 8);
    if ( v92 )
    {
      sub_86B8E0(v3, 32, 142, 24, 127, 0);
      v95 = sub_868BC0((__int64)v3);
      v91 = v78;
      v78 = v80;
      v87 = (double *)(v6 + 3);
      goto LABEL_122;
    }
    v95 = sub_868BC0((__int64)v3);
    v91 = v78;
    goto LABEL_93;
  }
  v12 = *(unsigned int **)a1;
  v80 = 1;
  if ( v75 <= 1u )
  {
LABEL_10:
    sub_86D900(v12, 0x42u, 12, 0, 12, 0, 0x7Fu, 16);
    v13 = sub_86E080(v12, 2, 12, 0, 11, 0);
    v14 = *(unsigned int **)a1;
    v88 = v13;
    if ( **(_DWORD **)a1 || (v15 = sub_868B50((__int64)v14, 24)) == nullptr )
    {
LABEL_66:
      sub_86B8E0(v3, 32, 1, 0, 142, *(_DWORD *)(a1 + 76) + 8 * v85);
      goto LABEL_13;
    }
LABEL_12:
    v16 = v88;
    v89 = v15;
    *v15 = v16;
    v15[1] = sub_868BC0((__int64)v14);
    v89[2] = *(_QWORD *)(a1 + 312);
    *(_QWORD *)(a1 + 312) = v89;
    if ( v75 > 1u )
      goto LABEL_13;
    goto LABEL_66;
  }
LABEL_51:
  sub_86D900(v12, 0x42u, 12, 0, 12, 0, 0x7Fu, 24);
  v36 = sub_86E080(v12, 2, 12, 0, 11, 0);
  v14 = *(unsigned int **)a1;
  v88 = v36;
  if ( !**(_DWORD **)a1 )
  {
    v15 = sub_868B50((__int64)v14, 24);
    if ( v15 )
      goto LABEL_12;
  }
LABEL_13:
  sub_86B8E0(v3, 32, 140, 0, 127, 0);
  if ( v10 != 99 )
    sub_86B8E0(v3, 32, 140, 8, 127, 0);
  if ( !v80 )
  {
    if ( v75 <= 1u )
    {
      v17 = sub_86E080(v3, 0, 1, 0, 142, *(_DWORD *)(a1 + 76) + 8 * v85 + 8);
      sub_86B8E0(v3, 32, 140, 0, 2, 0);
      v90 = sub_868C70((__int64)v3, 36);
      v6[5] = sub_868BC0((__int64)v3);
      if ( !v78 )
      {
        sub_86F780(a1, a2, (double *)v6 + 3, 1, 1);
        sub_86B8E0(v3, 32, 140, 0, 2, 0);
        goto LABEL_29;
      }
    }
    else
    {
      sub_86EBF0(a1, a2, nullptr);
      sub_86B8E0(v3, 32, 1, 0, 132, 0);
      sub_86B8E0(v3, 32, 140, 16, 4, 0);
      v17 = sub_86E080(v3, 0, 1, 0, 132, 8);
      sub_86B8E0(v3, 32, 140, 0, 2, 0);
      v90 = sub_868C70((__int64)v3, 36);
      v6[5] = sub_868BC0((__int64)v3);
      if ( !v78 )
      {
LABEL_104:
        v86 = (double *)(v6 + 3);
        goto LABEL_63;
      }
    }
    sub_86E080(v3, 3, 140, 8, 127, v78);
    if ( !*v3 )
    {
      v86 = (double *)(v6 + 3);
      goto LABEL_20;
    }
    if ( v75 <= 1u )
    {
      sub_86F780(a1, a2, (double *)v6 + 3, 1, 1);
      sub_86B8E0(v3, 32, 140, 0, 2, 0);
LABEL_84:
      sub_86D900(v3, 0x40u, 140, 8, 140, 8, 0x7Fu, 1);
      goto LABEL_29;
    }
    goto LABEL_104;
  }
  if ( v75 <= 1u )
  {
    if ( *(_DWORD *)(a1 + 480) )
      goto LABEL_56;
    sub_86E080(v3, 0, 1, 0, 142, *(_DWORD *)(a1 + 76) + 8);
    if ( *v3 )
      goto LABEL_56;
    v57 = *((_QWORD *)v3 + 10);
    v58 = *(_QWORD *)(v57 + 8);
    v59 = v58 + 16;
    if ( (unsigned __int64)(v58 + 16) <= 0xFF0 )
    {
      v61 = (__m128 *)(v57 + v58 + 16);
      *(_QWORD *)(v57 + 8) = v59;
      if ( !v61 )
        goto LABEL_56;
    }
    else
    {
      v60 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v3 + 7))(
                        4096,
                        *(_QWORD *)(*((_QWORD *)v3 + 7) + 16LL));
      if ( !v60 )
      {
        *v3 = 2;
        goto LABEL_56;
      }
      v60->m128_u64[0] = *((_QWORD *)v3 + 10);
      *((_QWORD *)v3 + 10) = v60;
      v61 = v60 + 1;
      v61[-1].m128_u64[1] = 16;
    }
    *v61 = _mm_loadh_ps((const double *)v6 + 3);
    v6[3] = v61;
LABEL_56:
    v17 = sub_86E080(v3, 0, 1, 0, 142, *(_DWORD *)(a1 + 76) + 8 * v85 + 8);
    v6[5] = sub_868BC0((__int64)v3);
    if ( !v78 )
    {
      sub_86F780(a1, a2, (double *)v6 + 3, 1, 1);
      sub_86B8E0(v3, 32, 140, 0, 2, 0);
      if ( v80 == 1 )
        goto LABEL_32;
      goto LABEL_58;
    }
    sub_86E080(v3, 3, 140, 8, 127, v78);
    if ( *v3 )
    {
      sub_86F780(a1, a2, (double *)v6 + 3, 1, 1);
      sub_86B8E0(v3, 32, 140, 0, 2, 0);
      if ( v80 == 1 )
      {
        v90 = nullptr;
        goto LABEL_84;
      }
LABEL_58:
      v90 = nullptr;
      goto LABEL_26;
    }
    v90 = nullptr;
    v86 = (double *)(v6 + 3);
LABEL_20:
    v18 = *((_QWORD *)v3 + 10);
    v19 = *(_QWORD *)(v18 + 8);
    v20 = v19 + 16;
    if ( (unsigned __int64)(v19 + 16) <= 0xFF0 )
    {
      v22 = (__m128 *)(v18 + v19 + 16);
      *(_QWORD *)(v18 + 8) = v20;
      if ( v22 )
        goto LABEL_23;
    }
    else
    {
      v21 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v3 + 7))(
                        4096,
                        *(_QWORD *)(*((_QWORD *)v3 + 7) + 16LL));
      if ( v21 )
      {
        v21->m128_u64[0] = *((_QWORD *)v3 + 10);
        *((_QWORD *)v3 + 10) = v21;
        v22 = v21 + 1;
        v22[-1].m128_u64[1] = 16;
LABEL_23:
        *v22 = _mm_loadh_ps((const double *)v6 + 3);
        v6[3] = v22;
        goto LABEL_24;
      }
      *v3 = 2;
    }
LABEL_24:
    if ( v75 <= 1u )
      goto LABEL_25;
    goto LABEL_63;
  }
  v86 = (double *)(v6 + 3);
  sub_86EBF0(a1, a2, (double *)v6 + 3);
  sub_86B8E0(v3, 32, 1, 0, 132, 0);
  sub_86B8E0(v3, 32, 140, 16, 4, 0);
  v17 = sub_86E080(v3, 0, 1, 0, 132, 8);
  v6[5] = sub_868BC0((__int64)v3);
  if ( v78 )
  {
    sub_86E080(v3, 3, 140, 8, 127, v78);
    if ( !*v3 )
    {
      v90 = nullptr;
      goto LABEL_20;
    }
  }
  v90 = nullptr;
LABEL_63:
  sub_86B8E0(v3, 32, 4, 0, 140, 16);
LABEL_25:
  sub_86F780(a1, a2, v86, 1, 1);
  sub_86B8E0(v3, 32, 140, 0, 2, 0);
  if ( v80 > 1 )
  {
LABEL_26:
    sub_86B8E0(v3, 32, 1, 0, 140, 8);
    sub_86D900(v3, 0x40u, 1, 0, 1, 0, 0x7Fu, 1);
    sub_86B8E0(v3, 32, 140, 8, 1, 0);
    v23 = v6[5];
    v24 = sub_86E080(v3, 2, 1, 0, 127, (unsigned int)v80);
    if ( v24 && v23 )
    {
      v24[2] &= ~1uLL;
      v24[3] = v23;
    }
    goto LABEL_29;
  }
  if ( v78 )
    goto LABEL_84;
LABEL_29:
  if ( v90 )
  {
    v25 = sub_868BC0((__int64)v3);
    if ( v25 )
    {
      v90[2] &= ~1uLL;
      v90[3] = v25;
    }
  }
LABEL_32:
  v26 = sub_868BC0((__int64)v3);
  if ( v17 && v26 )
  {
    v17[2] &= ~1uLL;
    v17[3] = v26;
  }
  v27 = *(unsigned int **)a1;
  if ( !**(_DWORD **)a1 )
  {
LABEL_36:
    v27[36] = 0;
    sub_86CA20(v27, 0x2D2B2928u, 10, 0, 10, 0, 127, 1);
  }
LABEL_37:
  sub_868C70((__int64)v27, 0);
  if ( !*v27 )
  {
    v28 = *((_QWORD *)v27 + 10);
    v29 = *(_QWORD *)(v28 + 8);
    v30 = v29 + 16;
    if ( (unsigned __int64)(v29 + 16) <= 0xFF0 )
    {
      v32 = (__m128 *)(v28 + v29 + 16);
      *(_QWORD *)(v28 + 8) = v30;
      if ( !v32 )
        return v9;
    }
    else
    {
      v31 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v27 + 7))(
                        4096,
                        *(_QWORD *)(*((_QWORD *)v27 + 7) + 16LL));
      if ( !v31 )
      {
        *v27 = 2;
        return v9;
      }
      v31->m128_u64[0] = *((_QWORD *)v27 + 10);
      *((_QWORD *)v27 + 10) = v31;
      v32 = v31 + 1;
      v32[-1].m128_u64[1] = 16;
    }
    *v32 = _mm_loadh_ps((const double *)(a1 + 384));
    *(_QWORD *)(a1 + 384) = v32;
  }
  return v9;
}
