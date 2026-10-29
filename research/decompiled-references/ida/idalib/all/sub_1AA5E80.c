__int64 __fastcall sub_1AA5E80(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned __int64 a5,
        int a6,
        char *a7,
        __int64 a8,
        int a9)
{
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rax
  char v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // edi
  __int64 *v19; // rsi
  __int64 v20; // r10
  int v21; // r11d
  int v22; // esi
  int v23; // ecx
  __int64 v24; // rsi
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned int v27; // r10d
  unsigned __int64 v28; // r10
  __int64 v29; // rax
  __int64 v30; // rsi
  _QWORD *v31; // rsi
  char *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  char *v36; // r13
  __int64 v37; // r11
  __int64 *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 **v45; // rax
  __int64 *v46; // rcx
  __int64 v47; // rax
  __int16 v48; // dx
  _QWORD *v49; // rdx
  __int64 v50; // rax
  _QWORD *v51; // rdi
  __int64 v52; // r8
  __int64 v53; // rax
  _QWORD *v54; // r10
  _QWORD *v55; // rax
  __int64 v56; // rbp
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rbp
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r13
  __int64 v64; // rax
  _QWORD *v65; // rdi
  __int64 v66; // r15
  unsigned __int64 v67; // rcx
  __int64 v68; // rax
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // rax
  __int64 v71; // rdi
  int v72; // eax
  __int64 v73; // rbp
  _QWORD *v74; // rax
  unsigned __int64 v75; // rax
  __m128i *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  unsigned int v82; // edx
  unsigned __int64 v83; // rdx
  __int64 v84; // rax
  unsigned __int64 v85; // rdx
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rcx
  unsigned __int64 v88; // rax
  __int64 v89; // rdi
  int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rbx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rax
  _QWORD *v97; // rax
  int v98; // [rsp+0h] [rbp-F8h]
  __int64 v99; // [rsp+0h] [rbp-F8h]
  _QWORD *v100; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v103; // [rsp+10h] [rbp-E8h]
  unsigned int v104; // [rsp+10h] [rbp-E8h]
  __int64 v105; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v106; // [rsp+10h] [rbp-E8h]
  __int64 v107; // [rsp+10h] [rbp-E8h]
  __int64 v108; // [rsp+18h] [rbp-E0h]
  __int64 v109; // [rsp+28h] [rbp-D0h] BYREF
  __m128 v110; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v111; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v112; // [rsp+50h] [rbp-A8h] BYREF
  char v113; // [rsp+A8h] [rbp-50h]
  unsigned int v114; // [rsp+B0h] [rbp-48h]
  char v115; // [rsp+B4h] [rbp-44h]

  v98 = a2;
  v12 = sub_1AA0A10(a5, a2);
  if ( !v12 )
  {
LABEL_58:
    v73 = sub_168B6F0(a1);
    v74 = (_QWORD *)sub_168B6C0(a1);
    v75 = sub_BB0FE0(v74, v73, v98, a3, a4, a5, a6, a9, a7, a8);
    *(_QWORD *)(a1 + 264) = v75;
    *(_BYTE *)(v75 + 29) &= 0x9Fu;
    v76 = (__m128i *)sub_168B6F0(a1);
    sub_B94AD0(v76, *(_QWORD *)(a1 + 264), v77, v78, v79, v80);
    return *(_QWORD *)(a1 + 264);
  }
  v13 = v12;
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
  v15 = *(_BYTE *)(a1 + 192) & 1;
  if ( !v15 )
  {
    v27 = *(_DWORD *)(a1 + 208);
    v16 = *(_QWORD *)(a1 + 200);
    v26 = v27;
    if ( v27 )
    {
      v21 = v27 - 1;
      v18 = (v27 - 1) & (((unsigned int)v14 >> 4) ^ ((unsigned int)v14 >> 9));
      v19 = (__int64 *)(v16 + 16LL * v18);
      if ( v14 == *v19 )
      {
LABEL_12:
        v17 = 16 * v26;
        goto LABEL_13;
      }
      if ( *v19 != -4096 )
      {
LABEL_6:
        v22 = 1;
        do
        {
          v23 = v22 + 1;
          v24 = v21 & (v18 + v22);
          v18 = v24;
          v19 = (__int64 *)(v16 + 16 * v24);
          v25 = *v19;
          if ( v14 == *v19 )
          {
            if ( !v15 )
            {
              v26 = *(unsigned int *)(a1 + 208);
              goto LABEL_12;
            }
            v17 = 64;
            goto LABEL_13;
          }
          v22 = v23;
        }
        while ( v25 != -4096 );
        if ( !v15 )
        {
          v27 = *(_DWORD *)(a1 + 208);
          goto LABEL_95;
        }
        v20 = 64;
        goto LABEL_96;
      }
    }
LABEL_95:
    v20 = 16LL * v27;
    goto LABEL_96;
  }
  v16 = a1 + 200;
  v17 = 64;
  v18 = ((unsigned __int8)((unsigned int)v14 >> 9) ^ (unsigned __int8)((unsigned int)v14 >> 4)) & 3;
  v19 = (__int64 *)(a1
                  + 200
                  + 16LL * (((unsigned __int8)((unsigned int)v14 >> 9) ^ (unsigned __int8)((unsigned int)v14 >> 4)) & 3));
  if ( v14 == *v19 )
  {
LABEL_13:
    sub_1AA3AC0(&v110, v19, (_QWORD *)(v17 + v16), a1 + 192, 1);
    v28 = v110.m128_u64[0];
    goto LABEL_14;
  }
  v20 = 64;
  if ( *v19 != -4096 )
  {
    v21 = 3;
    goto LABEL_6;
  }
LABEL_96:
  sub_1AA3AC0(&v110, (_QWORD *)(v16 + v20), (_QWORD *)(v16 + v20), a1 + 192, 1);
  v28 = v110.m128_u64[0];
LABEL_14:
  if ( (*(_BYTE *)(a1 + 192) & 1) != 0 )
  {
    v29 = a1 + 200;
    v30 = 64;
  }
  else
  {
    v29 = *(_QWORD *)(a1 + 200);
    v30 = 16LL * *(unsigned int *)(a1 + 208);
  }
  v31 = (_QWORD *)(v29 + v30);
  v103 = v28;
  sub_1AA3AC0(&v110, v31, v31, a1 + 192, 1);
  if ( v103 == v110.m128_u64[0] )
  {
    v32 = (char *)sub_1AA13D0((__int64)&a7);
    v36 = v32;
    if ( v32 == &a7[8 * a8] )
    {
      v37 = 0;
      goto LABEL_40;
    }
    v37 = *(unsigned int *)(*(_QWORD *)v32 + 12LL);
    if ( (*(_BYTE *)(v13 + 29) & 1) != 0 )
    {
      v104 = *(_DWORD *)(*(_QWORD *)v32 + 12LL);
      v38 = sub_B8C3D0(v13, (__int64)v31, a8, v33, v34, v35);
      v37 = v104;
      v42 = *((unsigned int *)v38 + 2);
      v43 = *v38;
      v44 = v43 + 8 * v42;
      if ( (*(_BYTE *)(v13 + 29) & 1) != 0 )
      {
        v108 = v43 + 8 * v42;
        v45 = (__int64 **)sub_B8C3D0(v13, v44, v42, v39, v40, v41);
        v37 = v104;
        v44 = v108;
        v46 = *v45;
      }
      else
      {
        v46 = nullptr;
      }
      if ( (__int64 *)v44 != v46 )
      {
        while ( 1 )
        {
          v47 = *v46;
          v48 = *(_WORD *)(*v46 + 36);
          if ( v48 != 319 )
            break;
          v49 = *(_QWORD **)(v47 + 40);
          v50 = 8LL * *(unsigned int *)(v47 + 48);
          v51 = &v49[(unsigned __int64)v50 / 8];
          v52 = v50 >> 3;
          v53 = v50 >> 5;
          if ( !v53 )
          {
            v54 = v49;
LABEL_36:
            if ( v52 != 2 )
            {
              if ( v52 != 3 )
              {
                if ( v52 != 1 )
                  goto LABEL_39;
                goto LABEL_92;
              }
              if ( *(_BYTE *)(*v54 + 8LL) == 3 )
                goto LABEL_63;
              ++v54;
            }
            if ( *(_BYTE *)(*v54 + 8LL) == 3 )
              goto LABEL_63;
            ++v54;
LABEL_92:
            if ( *(_BYTE *)(*v54 + 8LL) != 3 )
              goto LABEL_39;
            goto LABEL_63;
          }
          if ( *(_BYTE *)(*v49 + 8LL) == 3 )
          {
            v54 = v49;
LABEL_63:
            if ( v51 != v54 )
              goto LABEL_64;
            goto LABEL_39;
          }
          v54 = v49 + 1;
          if ( *(_BYTE *)(v49[1] + 8LL) == 3 )
            goto LABEL_63;
          v54 = v49 + 2;
          if ( *(_BYTE *)(v49[2] + 8LL) == 3 )
            goto LABEL_63;
          v54 = v49 + 3;
          v55 = &v49[4 * v53];
          if ( *(_BYTE *)(v49[3] + 8LL) == 3 )
            goto LABEL_63;
          while ( 1 )
          {
            v54 = v49 + 4;
            if ( v55 == v49 + 4 )
            {
              v52 = v51 - v54;
              goto LABEL_36;
            }
            if ( *(_BYTE *)(v49[4] + 8LL) == 3 )
              goto LABEL_63;
            if ( *(_BYTE *)(v49[5] + 8LL) == 3 )
            {
              v54 = v49 + 5;
              goto LABEL_63;
            }
            if ( *(_BYTE *)(v49[6] + 8LL) == 3 )
              break;
            if ( *(_BYTE *)(v49[7] + 8LL) == 3 )
            {
              v54 = v49 + 7;
              if ( v51 == v49 + 7 )
                goto LABEL_39;
LABEL_64:
              v100 = v54;
              sub_168B9F0((__int64)&v110, (__int64 *)a1, *(_DWORD *)(*(_QWORD *)v36 + 12LL), 0xB4Du, 0);
              sub_15F7200(&v110);
              v82 = *(_DWORD *)(*v100 + 16LL);
              goto LABEL_65;
            }
            v49 += 4;
          }
          v54 = v49 + 6;
          if ( v51 != v49 + 6 )
            goto LABEL_64;
LABEL_39:
          if ( (__int64 *)v44 == ++v46 )
            goto LABEL_40;
        }
        if ( v48 != 318 || !*(_DWORD *)(v47 + 28) )
          goto LABEL_39;
        v99 = *v46;
        sub_168B9F0((__int64)&v110, (__int64 *)a1, *(_DWORD *)(*(_QWORD *)v36 + 12LL), 0xB4Du, 0);
        sub_15F7200(&v110);
        v82 = *(_DWORD *)(v99 + 28);
LABEL_65:
        sub_168B9F0((__int64)&v110, (__int64 *)a1, v82, 0x1675u, 0);
        LOBYTE(v109) = *(_BYTE *)(*(_QWORD *)v36 + 8LL);
        sub_1AA5620((__int64)&v110, (char *)&v109);
        goto LABEL_66;
      }
    }
LABEL_40:
    v56 = (v37 << 32) | a3;
    v57 = sub_168B6C0(a1);
    v60 = sub_B317A0(v57, v56);
    while ( 1 )
    {
      sub_B8CC60(v13, v60, v58, v59, v61, v62);
      v63 = *(_QWORD *)(v13 + 112);
      v64 = *(_QWORD *)(v63 + 104);
      v59 = v64;
      v58 = v64 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v64 & 1) != 0 )
        goto LABEL_78;
      v65 = (_QWORD *)(v64 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v64 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        goto LABEL_78;
      if ( (v64 & 2) != 0 )
        break;
      if ( (_QWORD *)v13 == v65 )
        goto LABEL_58;
LABEL_45:
      v13 = (__int64)v65;
      if ( (v64 & 2) != 0 )
      {
        v66 = v65[2295];
        v67 = v63 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v66 )
        {
          v68 = v65[294];
          v65[304] += 24LL;
          v69 = (v68 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v65[295] >= v69 + 24 && v68 )
          {
            v65[294] = v69 + 24;
            v70 = (v68 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v70 = sub_986170((__int64)(v65 + 294), 24, 24, 3, v61, v62);
            v69 = v70 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v70 = v66;
          v67 = v69 | 4;
          *(_DWORD *)(v70 + 8) = 0;
          *(_QWORD *)(v70 + 16) = v63;
        }
        v59 = v67 & 0xFFFFFFFFFFFFFFFELL;
        v58 = v59 | 1;
        *(_QWORD *)(v63 + 104) = v59 | 1;
LABEL_52:
        v58 &= 0xFFFFFFFFFFFFFFF8LL;
        v13 = v58;
        if ( v59 )
        {
          v59 &= 4u;
          if ( (_DWORD)v59 )
          {
            v13 = 0;
            if ( v58 )
            {
              v71 = *(_QWORD *)v58;
              v72 = *(_DWORD *)(*(_QWORD *)v58 + 12LL);
              if ( *(_DWORD *)(v58 + 8) != v72 )
              {
                *(_DWORD *)(v58 + 8) = v72;
                v105 = v58;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v71 + 152LL))(v71, v63);
                v58 = v105;
              }
              v13 = *(_QWORD *)(v58 + 16);
            }
          }
        }
      }
    }
    v61 = v65[2295];
    v83 = v63 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v61 )
    {
      v84 = v65[294];
      v65[304] += 24LL;
      v85 = (v84 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v65[295] >= v85 + 24 && v84 )
      {
        v65[294] = v85 + 24;
        v86 = (v84 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v107 = v61;
        v86 = sub_986170((__int64)(v65 + 294), 24, 24, 3, v61, v62);
        v61 = v107;
        v85 = v86 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v86 = v61;
      v83 = v85 | 4;
      *(_DWORD *)(v86 + 8) = 0;
      *(_QWORD *)(v86 + 16) = v63;
    }
    v58 = v83 & 0xFFFFFFFFFFFFFFFELL;
    v59 = v58 | 1;
    *(_QWORD *)(v63 + 104) = v58 | 1;
LABEL_78:
    v87 = v59 & 0xFFFFFFFFFFFFFFF8LL;
    v88 = v87;
    if ( v58 && (v58 & 4) != 0 )
    {
      if ( !v87 )
        goto LABEL_85;
      v89 = *(_QWORD *)v87;
      v90 = *(_DWORD *)(*(_QWORD *)v87 + 12LL);
      if ( *(_DWORD *)(v87 + 8) != v90 )
      {
        *(_DWORD *)(v87 + 8) = v90;
        v106 = v87;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v89 + 152LL))(v89, v63);
        v87 = v106;
      }
      v88 = *(_QWORD *)(v87 + 16);
    }
    if ( v13 == v88 )
      goto LABEL_58;
LABEL_85:
    v63 = *(_QWORD *)(v13 + 112);
    v58 = *(_QWORD *)(v63 + 104);
    LOBYTE(v64) = v58;
    v59 = v58 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v58 & 1) != 0 )
      goto LABEL_52;
    v65 = (_QWORD *)(v58 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v58 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      goto LABEL_52;
    goto LABEL_45;
  }
  sub_168B9F0((__int64)&v110, (__int64 *)a1, *(_DWORD *)(v103 + 8), 0xB65u, 0);
  sub_15F7200(&v110);
  sub_168B9F0((__int64)&v110, (__int64 *)a1, a3, 0x1672u, 0);
  if ( v113 )
  {
    sub_1AA2FB0(&v112, 19);
  }
  else if ( v115 )
  {
    v93 = sub_168B9E0(&v110);
    v96 = v111;
    if ( v111 )
      v96 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v111 + 32LL))(v111);
    v109 = v96;
    v97 = sub_1587BC0(v93, &v109, v91, v92, v94, v95);
    sub_1AA2FB0((unsigned __int8 **)(*v97 + 32LL * v114 + 8), 19);
  }
LABEL_66:
  sub_15F7200(&v110);
  return 0;
}
