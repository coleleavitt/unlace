__int64 __fastcall sub_1AFBE90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rbp
  _BYTE *v9; // r15
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 *v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // r13d
  __int64 v19; // rax
  __int64 v20; // r13
  int v21; // r10d
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // edx
  __int64 v26; // rdx
  __int64 *v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 *v32; // rax
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  char v38; // al
  __int64 v39; // rax
  unsigned int v40; // esi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r13
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // r14
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // r13d
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  unsigned __int64 **v54; // rax
  unsigned __int64 v55; // rax
  __int64 *v56; // rcx
  unsigned __int64 *v57; // rax
  unsigned __int64 *v58; // rax
  _BYTE *v59; // rax
  unsigned __int64 *v60; // rax
  _BYTE *v61; // rax
  int v62; // eax
  __int64 v63; // r9
  __int64 v64; // r12
  __int64 *v65; // rax
  __int64 v66; // r13
  __int64 v67; // rdx
  char v68; // dl
  int v69; // edi
  __int64 *v70; // rsi
  __int64 v71; // rsi
  __m128 v72; // xmm0
  unsigned __int64 *v73; // rax
  __int64 v74; // rdi
  __int64 v75; // r12
  __int64 *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  int v79; // ecx
  int v80; // edx
  int v81; // edi
  int v82; // esi
  char v83; // al
  __m128 v84; // xmm0
  unsigned __int64 *v85; // rax
  unsigned __int64 *v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rcx
  _DWORD *v90; // rdi
  _DWORD *v91; // rsi
  __int64 v92; // rax
  __int64 *v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rax
  int v96; // edi
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 *v102; // [rsp+0h] [rbp-88h] BYREF
  __int64 *v103; // [rsp+8h] [rbp-80h]
  unsigned __int64 v104; // [rsp+10h] [rbp-78h] BYREF
  __int64 v105; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v106[13]; // [rsp+20h] [rbp-68h] BYREF

  v3 = a2;
  v5 = sub_1AEE450(a3);
  v7 = 0;
  v8 = v5;
  if ( (*(_BYTE *)(v5 + 28) & 0x7Fu) - 40 <= 6 )
    v7 = v5;
  v9 = (_BYTE *)v7;
  v10 = *(_BYTE *)a2 & 1;
  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    v11 = a2 + 8;
    v6 = ((unsigned __int8)((unsigned int)v5 >> 4) ^ (unsigned __int8)((unsigned int)v5 >> 9)) & 7;
    v12 = a2 + 8 + 40 * v6;
    v13 = *(_QWORD *)v12;
    if ( v8 == *(_QWORD *)v12 )
      goto LABEL_5;
    v26 = 320;
    v21 = 7;
    if ( v13 == -4096 )
      goto LABEL_19;
  }
  else
  {
    a2 = *(unsigned int *)(a2 + 16);
    v11 = *(_QWORD *)(v3 + 8);
    if ( !(_DWORD)a2 )
      goto LABEL_29;
    v21 = a2 - 1;
    v6 = ((_DWORD)a2 - 1) & (((unsigned int)v5 >> 4) ^ ((unsigned int)v5 >> 9));
    v12 = v11 + 40 * v6;
    if ( v5 == *(_QWORD *)v12 )
      goto LABEL_14;
    if ( *(_QWORD *)v12 == -4096 )
    {
LABEL_29:
      v26 = 40 * a2;
      goto LABEL_19;
    }
  }
  v33 = 1;
  do
  {
    v6 = v21 & (unsigned int)(v33 + v6);
    v12 = v11 + 40LL * (unsigned int)v6;
    a2 = *(_QWORD *)v12;
    if ( v8 == *(_QWORD *)v12 )
    {
      if ( (_BYTE)v10 )
      {
LABEL_5:
        if ( v12 != v11 + 320 )
          goto LABEL_16;
        goto LABEL_6;
      }
LABEL_14:
      v22 = 40LL * *(unsigned int *)(v3 + 16);
      goto LABEL_15;
    }
    ++v33;
  }
  while ( a2 != -4096 );
  v26 = 320;
  if ( !(_BYTE)v10 )
  {
    a2 = *(unsigned int *)(v3 + 16);
    goto LABEL_29;
  }
LABEL_19:
  v12 = v11 + v26;
  v22 = 320;
  if ( !(_BYTE)v10 )
    goto LABEL_14;
LABEL_15:
  if ( v12 != v11 + v22 )
  {
LABEL_16:
    v23 = *(_QWORD *)(v12 + 16);
    v24 = *(_DWORD *)(v12 + 12);
    *(_BYTE *)(a1 + 36) = 0;
    *(_QWORD *)a1 = 0x6400000067LL;
    *(_DWORD *)(a1 + 8) = v24;
    *(_QWORD *)(a1 + 16) = v23 & 0xFFFFFFFFFFFFFFFCLL;
    *(_QWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 32) = 0;
    return a1;
  }
LABEL_6:
  if ( !v7 )
    goto LABEL_30;
  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
    goto LABEL_8;
  v27 = sub_B8C3D0(v7, a2, v12, v6, v7, v10);
  v30 = *v27;
  v31 = *v27 + 8LL * *((unsigned int *)v27 + 2);
  if ( *v27 >= v31 )
  {
    if ( v30 == v31 )
      goto LABEL_8;
    while ( *(_WORD *)(*(_QWORD *)v31 + 36LL) != 297 )
    {
      v31 += 8LL;
      if ( v30 == v31 )
        goto LABEL_8;
    }
LABEL_64:
    if ( (v9[29] & 1) != 0 )
    {
      v54 = (unsigned __int64 **)sub_B8C3D0((__int64)v9, a2, v30, v31, v28, v29);
      v14 = *v54;
      v55 = (unsigned __int64)&(*v54)[*((unsigned int *)v54 + 2)];
      if ( (unsigned __int64)v14 >= v55 )
      {
        if ( v14 != (unsigned __int64 *)v55 )
        {
          if ( *(_WORD *)(*(_QWORD *)v55 + 36LL) == 297 )
          {
LABEL_70:
            v15 = *v14;
            if ( *(_WORD *)(*v14 + 36) != 297 )
            {
              v57 = v14 + 1;
              do
                v15 = *v57++;
              while ( *(_WORD *)(v15 + 36) != 297 );
            }
            v18 = *(_DWORD *)(v15 + 24);
            goto LABEL_11;
          }
          v86 = (unsigned __int64 *)(v55 + 8);
          while ( v14 != v86 )
          {
            v87 = *v86++;
            if ( *(_WORD *)(v87 + 36) == 297 )
              goto LABEL_70;
          }
        }
      }
      else
      {
        v56 = (__int64 *)v14;
        while ( 1 )
        {
          a2 = *v56;
          if ( *(_WORD *)(*v56 + 36) == 297 )
            break;
          if ( (__int64 *)v55 == ++v56 )
            goto LABEL_163;
        }
        if ( (__int64 *)v55 != v56 )
          goto LABEL_70;
      }
    }
LABEL_163:
    BUG();
  }
  v32 = (__int64 *)*v27;
  while ( 1 )
  {
    v30 = *v32;
    if ( *(_WORD *)(*v32 + 36) == 297 )
      break;
    if ( (__int64 *)v31 == ++v32 )
      goto LABEL_8;
  }
  if ( (__int64 *)v31 != v32 )
    goto LABEL_64;
LABEL_8:
  if ( !(unsigned int)sub_B73370((__int64)v9) )
    goto LABEL_38;
  if ( (v9[29] & 1) == 0 )
    goto LABEL_10;
  v58 = sub_B8C3D0((__int64)v9, a2, (__int64)v14, v15, v16, v17);
  v14 = (unsigned __int64 *)*v58;
  v15 = *v58 + 8LL * *((unsigned int *)v58 + 2);
  if ( *v58 >= v15 )
  {
    if ( v14 != (unsigned __int64 *)v15 )
    {
      if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) == 297 )
        goto LABEL_36;
      v73 = (unsigned __int64 *)(v15 + 8);
      while ( 1 )
      {
        v15 = (unsigned __int64)v73;
        if ( v14 == v73 )
          break;
        v15 = *v73++;
        if ( *(_WORD *)(v15 + 36) == 297 )
          goto LABEL_36;
      }
    }
    goto LABEL_10;
  }
  v59 = (_BYTE *)*v58;
  while ( 1 )
  {
    v14 = *(unsigned __int64 **)v59;
    if ( *(_WORD *)(*(_QWORD *)v59 + 36LL) == 297 )
      break;
    v59 += 8;
    if ( (_BYTE *)v15 == v59 )
      goto LABEL_10;
  }
  if ( (_BYTE *)v15 == v59 )
  {
LABEL_10:
    v18 = *(_DWORD *)(v8 + 24);
LABEL_11:
    v106[0] = *(_QWORD *)(v8 + 48);
    v19 = sub_C1BEF0((__int64)v106, a2, (__int64)v14, v15);
    v20 = sub_1AE9760(*(_QWORD *)(v3 + 27464), (__int64)v9, v19, v18);
    sub_1AEF810(v3, v8, v20, 0x64u, 0, 0, 0);
    *(_QWORD *)a1 = 0x6400000067LL;
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = v20;
    *(_QWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 36) = 0;
    return a1;
  }
LABEL_36:
  v37 = *(_QWORD *)(v3 + 27464);
  v14 = *(unsigned __int64 **)(v37 + 232);
  if ( (*((_BYTE *)v14 + 68) & 4) == 0 || !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v37 + 248) + 17448LL) + 273LL) )
    goto LABEL_10;
LABEL_38:
  if ( (v9[96] & 7) == 5 && (v9[29] & 1) != 0 )
  {
    v60 = sub_B8C3D0((__int64)v9, a2, (__int64)v14, v15, v16, v17);
    v14 = (unsigned __int64 *)*v60;
    v15 = *v60 + 8LL * *((unsigned int *)v60 + 2);
    if ( *v60 >= v15 )
    {
      if ( v14 != (unsigned __int64 *)v15 )
      {
        if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) == 139 )
          goto LABEL_90;
        v85 = (unsigned __int64 *)(v15 + 8);
        while ( v14 != v85 )
        {
          v15 = *v85++;
          if ( *(_WORD *)(v15 + 36) == 139 )
            goto LABEL_90;
        }
      }
    }
    else
    {
      v61 = (_BYTE *)*v60;
      while ( 1 )
      {
        v14 = *(unsigned __int64 **)v61;
        if ( *(_WORD *)(*(_QWORD *)v61 + 36LL) == 139 )
          break;
        v61 += 8;
        if ( (_BYTE *)v15 == v61 )
          goto LABEL_39;
      }
      if ( (_BYTE *)v15 != v61 )
      {
LABEL_90:
        v62 = v9[28] & 0x7F;
        if ( v62 != 46 && v62 != 40 || !sub_1AE8710((__int64)v9) )
          goto LABEL_10;
      }
    }
  }
LABEL_39:
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 27464) + 232LL) + 68LL) & 0x10) == 0 )
    goto LABEL_30;
  v38 = v9[28] & 0x7F;
  if ( v38 != 40 && v38 != 46 )
  {
LABEL_44:
    if ( v38 == 43 )
      goto LABEL_45;
    goto LABEL_30;
  }
  if ( !sub_1AE8710((__int64)v9) )
  {
    v38 = v9[28] & 0x7F;
    goto LABEL_44;
  }
LABEL_45:
  v39 = *(unsigned int *)(v3 + 344);
  if ( !(_DWORD)v39 )
    goto LABEL_33;
  v35 = *(_QWORD *)(v3 + 336) + 6776 * v39 - 6776;
  if ( *(_QWORD *)(v35 + 6768) != *(_QWORD *)(v3 + 328) )
    goto LABEL_33;
  v40 = *(_DWORD *)(v35 + 8);
  if ( v40 <= *(_DWORD *)(v3 + 27504) )
  {
    v63 = *(unsigned int *)(v3 + 27504);
    if ( v40 > (unsigned int)v63 )
      goto LABEL_96;
    goto LABEL_33;
  }
  if ( (unsigned int)sub_1AFA3A0(v3, v8) )
  {
LABEL_30:
    v34 = *(unsigned int *)(v3 + 344);
    if ( (_DWORD)v34 )
    {
      v35 = *(_QWORD *)(v3 + 336) + 6776 * v34 - 6776;
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  v41 = *(unsigned int *)(v3 + 344);
  if ( (_DWORD)v41 )
  {
    v42 = *(_QWORD *)(v3 + 336) + 6776 * v41 - 6776;
    v43 = *(_QWORD *)v42;
    v44 = *(_QWORD *)v42 + 1688 * (*(unsigned int *)(v42 + 8) - (unsigned __int64)*(unsigned int *)(v3 + 27504));
  }
  else
  {
    v43 = 0;
    v44 = 0;
  }
  v104 = v44;
  v105 = v43;
  v102 = v106;
  sub_1AE7860(v106, (__int64 *)&v104, &v105);
  v45 = *(unsigned int *)(v3 + 344);
  v103 = (__int64 *)v106[0];
  if ( !(_DWORD)v45 )
  {
    if ( !v103 )
      goto LABEL_33;
    v47 = 0;
    v46 = (__int64)(v103 - 211);
LABEL_54:
    v48 = v47;
    if ( v47 != v46 )
    {
      while ( 1 )
      {
        v106[0] = v48;
        if ( sub_1AEFE80(v3, (__int64)v9, v102) )
          break;
        v48 -= 1688LL;
        if ( v46 == v48 )
          goto LABEL_148;
      }
      v51 = *(_DWORD *)(v8 + 24);
      v106[0] = *(_QWORD *)(v8 + 48);
      v52 = sub_C1BEF0((__int64)v102, (__int64)v9, v49, v50);
      v53 = sub_1AE9760(*(_QWORD *)(v3 + 27464), (__int64)v9, v52, v51);
      goto LABEL_59;
    }
LABEL_148:
    if ( *(_DWORD *)(v3 + 27456) != 106 )
    {
      v92 = *(unsigned int *)(v3 + 344);
      if ( (_DWORD)v92 )
      {
        v35 = *(_QWORD *)(v3 + 336) + 6776 * v92 - 6776;
        if ( v103 == (__int64 *)(*(_QWORD *)v35
                               + 1688 * (*(unsigned int *)(v35 + 8) - (unsigned __int64)*(unsigned int *)(v3 + 27504))) )
          goto LABEL_32;
      }
      else if ( !v103 )
      {
        goto LABEL_33;
      }
    }
    v93 = sub_1AEA920(v46, v8);
    if ( (*(_BYTE *)(v103 - 211) & 1) != 0 )
    {
      v94 = v46 + 8;
      v95 = 8;
    }
    else
    {
      v94 = *(v103 - 210);
      v95 = *((unsigned int *)v103 - 418);
    }
    if ( v93 != (__int64 *)(v94 + 40 * v95) )
    {
      v96 = *((_DWORD *)v93 + 2);
      v103 = v93;
      if ( (unsigned __int8)sub_FFEF20(v96) )
      {
        v53 = v103[2] & 0xFFFFFFFFFFFFFFFCLL;
LABEL_59:
        *(_DWORD *)(a1 + 8) = 0;
        *(_QWORD *)a1 = 0x6400000067LL;
        *(_QWORD *)(a1 + 16) = v53;
        *(_QWORD *)(a1 + 24) = 0;
        *(_DWORD *)(a1 + 32) = 0;
        *(_BYTE *)(a1 + 36) = 0;
        return a1;
      }
    }
    v97 = *(unsigned int *)(v3 + 344);
    v98 = 0;
    if ( (_DWORD)v97 )
      v98 = *(_QWORD *)(*(_QWORD *)(v3 + 336) + 6776 * v97 - 6776);
    if ( !sub_1AFAB70(
            *(_QWORD *)(*(_QWORD *)(v3 + 27464) + 760LL),
            v8,
            1852331867 * (unsigned int)((v46 - v98) >> 3),
            0) )
    {
      v106[0] = *(_QWORD *)(v8 + 48);
      v101 = sub_C1BEF0((__int64)v102, v8, v99, v100);
      v53 = sub_1AE9760(*(_QWORD *)(v3 + 27464), (__int64)v9, v101, *(_DWORD *)(v46 + 1024));
      goto LABEL_59;
    }
    goto LABEL_30;
  }
  v35 = *(_QWORD *)(v3 + 336) + 6776 * v45 - 6776;
  if ( v106[0] != *(_QWORD *)v35 )
  {
    v46 = (__int64)(v103 - 211);
    v47 = *(_QWORD *)v35 + 1688 * (*(unsigned int *)(v35 + 8) - (unsigned __int64)*(unsigned int *)(v3 + 27504));
    goto LABEL_54;
  }
LABEL_32:
  if ( *(_QWORD *)(v35 + 6768) != *(_QWORD *)(v3 + 328) )
    goto LABEL_33;
  v40 = *(_DWORD *)(v35 + 8);
  v63 = *(unsigned int *)(v3 + 27504);
  if ( v40 <= (unsigned int)v63 )
    goto LABEL_33;
  if ( v9 )
  {
LABEL_96:
    if ( (v9[28] & 0x7F) != 0x2B && sub_1AE8780((__int64)v9) )
    {
      v64 = *(_QWORD *)v35 + 1688 * (v40 - v63);
      if ( *(_QWORD *)v35 != v64 )
      {
        v65 = sub_1AEA920(v64 - 1688, v8);
        if ( (*(_BYTE *)(v64 - 1688) & 1) != 0 )
        {
          v66 = v64 - 1688 + 8;
          v67 = 8;
        }
        else
        {
          v66 = *(_QWORD *)(v64 - 1680);
          v67 = *(unsigned int *)(v64 - 1672);
        }
        if ( v65 != (__int64 *)(v66 + 40 * v67) )
        {
          v68 = *((_BYTE *)v65 + 32);
          v69 = *(_DWORD *)(v64 - 712);
          v70 = (__int64 *)(v65[2] & 0xFFFFFFFFFFFFFFFCLL);
          *(_DWORD *)(a1 + 32) = *(_DWORD *)(v64 - 756);
          v102 = v70;
          v71 = v65[1];
          *(_DWORD *)a1 = v69;
          v72 = _mm_loadh_ps((const double *)v65 + 3);
          *(_BYTE *)(a1 + 36) = v68;
          *(_QWORD *)(a1 + 4) = v71;
          *(__m128 *)(a1 + 16) = v72;
          return a1;
        }
      }
LABEL_134:
      v36 = 0x5E00000067LL;
LABEL_34:
      *(_QWORD *)a1 = v36;
      *(_DWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 36) = 0;
      return a1;
    }
  }
  v74 = *(_QWORD *)(v3 + 27464);
  if ( *(_DWORD *)(*(_QWORD *)(v74 + 232) + 64LL) > 0x1Fu )
  {
LABEL_112:
    v75 = *(_QWORD *)v35 + 1688 * (*(unsigned int *)(v35 + 8) - v63);
    if ( *(_QWORD *)v35 != v75 )
    {
      v76 = sub_1AEA920(v75 - 1688, v8);
      if ( (*(_BYTE *)(v75 - 1688) & 1) != 0 )
      {
        v77 = v75 - 1688 + 8;
        v78 = 320;
      }
      else
      {
        v77 = *(_QWORD *)(v75 - 1680);
        v78 = 40LL * *(unsigned int *)(v75 - 1672);
      }
      if ( v76 == (__int64 *)(v78 + v77) )
      {
        v83 = 0;
        v80 = 0;
        v102 = nullptr;
        v79 = 0;
        v82 = 106;
        v81 = 103;
      }
      else
      {
        v79 = *((_DWORD *)v76 + 3);
        v80 = *(_DWORD *)(v75 - 756);
        v81 = *(_DWORD *)(v75 - 712);
        v102 = (__int64 *)(v76[2] & 0xFFFFFFFFFFFFFFFCLL);
        v102 = (__int64 *)v76[3];
        v82 = *((_DWORD *)v76 + 2);
        v83 = *((_BYTE *)v76 + 32);
      }
      v84 = _mm_loadh_ps((const double *)&v102);
      *(_DWORD *)a1 = v81;
      *(_DWORD *)(a1 + 4) = v82;
      *(_DWORD *)(a1 + 8) = v79;
      *(__m128 *)(a1 + 16) = v84;
      *(_DWORD *)(a1 + 32) = v80;
      *(_BYTE *)(a1 + 36) = v83;
      return a1;
    }
LABEL_33:
    v36 = 0x6A00000067LL;
    goto LABEL_34;
  }
  if ( !(unsigned __int8)sub_1AF8F00(v74, *(_QWORD *)(v8 + 48), 1, nullptr) )
  {
    v88 = *(unsigned int *)(v3 + 344);
    if ( (_DWORD)v88 )
    {
      v63 = *(unsigned int *)(v3 + 27504);
      v35 = *(_QWORD *)(v3 + 336) + 6776 * v88 - 6776;
      goto LABEL_112;
    }
    goto LABEL_33;
  }
  sub_1AF1680(
    (__int64)v106,
    v3,
    v8,
    (unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD))sub_1AE6560,
    (__int64)&v105,
    0,
    (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))sub_1AE6570,
    (__int64)&v104);
  if ( HIDWORD(v106[0]) == 106 || !v106[2] )
    goto LABEL_134;
  v89 = 10;
  v90 = (_DWORD *)a1;
  v91 = v106;
  while ( v89 )
  {
    *v90++ = *v91++;
    --v89;
  }
  return a1;
}
