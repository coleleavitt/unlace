__int64 __fastcall sub_1AFB290(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rbp
  _BYTE *v11; // r15
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  _BYTE *v16; // rdx
  _WORD *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r12d
  __int64 v21; // rax
  __int64 v22; // r12
  int v23; // r11d
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // edx
  __int64 v28; // rdx
  __int64 *v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 *v34; // rax
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  char v40; // al
  __int64 v41; // rax
  unsigned int v42; // esi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // r13
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // r12d
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  _QWORD *v57; // rax
  unsigned __int64 v58; // rax
  _QWORD *v59; // rax
  _BYTE *v60; // rax
  _QWORD *v61; // rax
  _BYTE *v62; // rax
  int v63; // eax
  __int64 v64; // r9
  __int64 v65; // rax
  __int64 v66; // r13
  __int64 *v67; // rax
  __int64 v68; // r12
  __int64 v69; // rdx
  char v70; // dl
  int v71; // edi
  unsigned __int64 v72; // rsi
  __int64 v73; // rsi
  __m128 v74; // xmm0
  _WORD **v75; // rax
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // r13
  __int64 *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  int v82; // ecx
  int v83; // edx
  int v84; // edi
  int v85; // esi
  char v86; // al
  __m128 v87; // xmm0
  _WORD **v88; // rax
  __int64 v89; // rax
  __int64 v90; // rcx
  _DWORD *v91; // rdi
  __int64 *v92; // rsi
  __int64 v93; // rax
  __int64 *v94; // rcx
  unsigned __int64 v95; // rdx
  __int64 v96; // rax
  int v97; // edi
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rax
  unsigned __int64 v103; // [rsp+8h] [rbp-90h] BYREF
  __int64 *v104; // [rsp+10h] [rbp-88h]
  __int64 *v105; // [rsp+18h] [rbp-80h]
  __int64 *v106; // [rsp+20h] [rbp-78h] BYREF
  __int64 v107; // [rsp+28h] [rbp-70h] BYREF
  __int64 v108[13]; // [rsp+30h] [rbp-68h] BYREF

  v4 = a2;
  v7 = sub_1AEE450(a3);
  v9 = 0;
  v10 = v7;
  if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 40 <= 6 )
    v9 = v7;
  v11 = (_BYTE *)v9;
  v12 = *(_BYTE *)a2 & 1;
  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    v13 = a2 + 8;
    v8 = ((unsigned __int8)((unsigned int)v7 >> 4) ^ (unsigned __int8)((unsigned int)v7 >> 9)) & 7;
    v14 = a2 + 8 + 40 * v8;
    v15 = *(_QWORD *)v14;
    if ( v10 == *(_QWORD *)v14 )
      goto LABEL_5;
    v28 = 320;
    v23 = 7;
    if ( v15 == -4096 )
      goto LABEL_19;
  }
  else
  {
    a2 = *(unsigned int *)(a2 + 16);
    v13 = *(_QWORD *)(v4 + 8);
    if ( !(_DWORD)a2 )
      goto LABEL_29;
    v23 = a2 - 1;
    v8 = ((_DWORD)a2 - 1) & (((unsigned int)v7 >> 4) ^ ((unsigned int)v7 >> 9));
    v14 = v13 + 40 * v8;
    if ( *(_QWORD *)v14 == v7 )
      goto LABEL_14;
    if ( *(_QWORD *)v14 == -4096 )
    {
LABEL_29:
      v28 = 40 * a2;
      goto LABEL_19;
    }
  }
  v35 = 1;
  do
  {
    v8 = v23 & (unsigned int)(v35 + v8);
    v14 = v13 + 40LL * (unsigned int)v8;
    a2 = *(_QWORD *)v14;
    if ( v10 == *(_QWORD *)v14 )
    {
      if ( (_BYTE)v12 )
      {
LABEL_5:
        if ( v14 != v13 + 320 )
          goto LABEL_16;
        goto LABEL_6;
      }
LABEL_14:
      v24 = 40LL * *(unsigned int *)(v4 + 16);
      goto LABEL_15;
    }
    ++v35;
  }
  while ( a2 != -4096 );
  v28 = 320;
  if ( !(_BYTE)v12 )
  {
    a2 = *(unsigned int *)(v4 + 16);
    goto LABEL_29;
  }
LABEL_19:
  v14 = v13 + v28;
  v24 = 320;
  if ( !(_BYTE)v12 )
    goto LABEL_14;
LABEL_15:
  if ( v14 != v13 + v24 )
  {
LABEL_16:
    v25 = *(_QWORD *)(v14 + 16);
    v26 = *(_DWORD *)(v14 + 12);
    *(_BYTE *)(a1 + 36) = 0;
    *(_QWORD *)a1 = 0x6400000067LL;
    *(_DWORD *)(a1 + 8) = v26;
    *(_QWORD *)(a1 + 16) = v25 & 0xFFFFFFFFFFFFFFFCLL;
    *(_QWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 32) = 0;
    return a1;
  }
LABEL_6:
  if ( !v9 )
    goto LABEL_30;
  if ( (*(_BYTE *)(v9 + 29) & 1) == 0 )
    goto LABEL_8;
  v29 = sub_B8C3D0(v9, a2, v14, v8, v9, v12);
  v32 = *v29;
  v33 = *v29 + 8LL * *((unsigned int *)v29 + 2);
  if ( *v29 >= v33 )
  {
    if ( v32 == v33 )
      goto LABEL_8;
    while ( *(_WORD *)(*(_QWORD *)v33 + 36LL) != 297 )
    {
      v33 += 8LL;
      if ( v32 == v33 )
        goto LABEL_8;
    }
LABEL_64:
    if ( (v11[29] & 1) == 0 )
      goto LABEL_167;
    v57 = sub_B8C3D0((__int64)v11, a2, v32, v33, v30, v31);
    v16 = (_BYTE *)*v57;
    v58 = *v57 + 8LL * *((unsigned int *)v57 + 2);
    if ( (unsigned __int64)v16 >= v58 )
    {
      if ( v16 == (_BYTE *)v58 )
        goto LABEL_167;
      while ( 1 )
      {
        v17 = *(_WORD **)v58;
        if ( *(_WORD *)(*(_QWORD *)v58 + 36LL) == 297 )
          break;
        v58 += 8LL;
        if ( v16 == (_BYTE *)v58 )
          goto LABEL_167;
      }
    }
    else
    {
      v17 = v16;
      while ( 1 )
      {
        a2 = *(_QWORD *)v17;
        if ( *(_WORD *)(*(_QWORD *)v17 + 36LL) == 297 )
          break;
        v17 += 4;
        if ( (_WORD *)v58 == v17 )
          goto LABEL_167;
      }
      if ( (_WORD *)v58 == v17 )
LABEL_167:
        BUG();
    }
    while ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 297 )
      v16 += 8;
    v20 = *(_DWORD *)(*(_QWORD *)v16 + 24LL);
    goto LABEL_11;
  }
  v34 = (__int64 *)*v29;
  while ( 1 )
  {
    v32 = *v34;
    if ( *(_WORD *)(*v34 + 36) == 297 )
      break;
    if ( (__int64 *)v33 == ++v34 )
      goto LABEL_8;
  }
  if ( (__int64 *)v33 != v34 )
    goto LABEL_64;
LABEL_8:
  if ( !(unsigned int)sub_B73370((__int64)v11) )
    goto LABEL_38;
  if ( (v11[29] & 1) == 0 )
    goto LABEL_10;
  v59 = sub_B8C3D0((__int64)v11, a2, (__int64)v16, (__int64)v17, v18, v19);
  v16 = (_BYTE *)*v59;
  v17 = (_WORD *)(*v59 + 8LL * *((unsigned int *)v59 + 2));
  if ( *v59 >= (unsigned __int64)v17 )
  {
    if ( v16 != (_BYTE *)v17 )
    {
      if ( *(_WORD *)(*(_QWORD *)v17 + 36LL) == 297 )
        goto LABEL_36;
      v75 = (_WORD **)(v17 + 4);
      while ( 1 )
      {
        v17 = v75;
        if ( v16 == (_BYTE *)v75 )
          break;
        v17 = *v75++;
        if ( v17[18] == 297 )
          goto LABEL_36;
      }
    }
    goto LABEL_10;
  }
  v60 = (_BYTE *)*v59;
  while ( 1 )
  {
    v16 = *(_BYTE **)v60;
    if ( *(_WORD *)(*(_QWORD *)v60 + 36LL) == 297 )
      break;
    v60 += 8;
    if ( v17 == (_WORD *)v60 )
      goto LABEL_10;
  }
  if ( v17 == (_WORD *)v60 )
  {
LABEL_10:
    v20 = *(_DWORD *)(v10 + 24);
LABEL_11:
    v108[0] = *(_QWORD *)(v10 + 48);
    v21 = sub_C1BEF0((__int64)v108, a2, (__int64)v16, (__int64)v17);
    v22 = sub_1AE9760(*(_QWORD *)(v4 + 27464), (__int64)v11, v21, v20);
    sub_1AEF810(v4, v10, v22, 0x64u, 0, 0, 0);
    *(_QWORD *)a1 = 0x6400000067LL;
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = v22;
    *(_QWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 36) = 0;
    return a1;
  }
LABEL_36:
  v39 = *(_QWORD *)(v4 + 27464);
  v16 = *(_BYTE **)(v39 + 232);
  if ( (v16[68] & 4) == 0 || !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v39 + 248) + 17448LL) + 273LL) )
    goto LABEL_10;
LABEL_38:
  if ( (v11[96] & 7) == 5 && (v11[29] & 1) != 0 )
  {
    v61 = sub_B8C3D0((__int64)v11, a2, (__int64)v16, (__int64)v17, v18, v19);
    v16 = (_BYTE *)*v61;
    v17 = (_WORD *)(*v61 + 8LL * *((unsigned int *)v61 + 2));
    if ( *v61 >= (unsigned __int64)v17 )
    {
      if ( v16 != (_BYTE *)v17 )
      {
        if ( *(_WORD *)(*(_QWORD *)v17 + 36LL) == 139 )
          goto LABEL_90;
        v88 = (_WORD **)(v17 + 4);
        while ( v16 != (_BYTE *)v88 )
        {
          v17 = *v88++;
          if ( v17[18] == 139 )
            goto LABEL_90;
        }
      }
    }
    else
    {
      v62 = (_BYTE *)*v61;
      while ( 1 )
      {
        v16 = *(_BYTE **)v62;
        if ( *(_WORD *)(*(_QWORD *)v62 + 36LL) == 139 )
          break;
        v62 += 8;
        if ( v17 == (_WORD *)v62 )
          goto LABEL_39;
      }
      if ( v17 != (_WORD *)v62 )
      {
LABEL_90:
        v63 = v11[28] & 0x7F;
        if ( v63 != 46 && v63 != 40 || !sub_1AE8710((__int64)v11) )
          goto LABEL_10;
      }
    }
  }
LABEL_39:
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 27464) + 232LL) + 68LL) & 0x10) == 0 )
    goto LABEL_30;
  v40 = v11[28] & 0x7F;
  if ( v40 != 40 && v40 != 46 )
  {
LABEL_44:
    if ( v40 == 43 )
      goto LABEL_45;
    goto LABEL_30;
  }
  if ( !sub_1AE8710((__int64)v11) )
  {
    v40 = v11[28] & 0x7F;
    goto LABEL_44;
  }
LABEL_45:
  v41 = *(unsigned int *)(v4 + 344);
  if ( !(_DWORD)v41 )
    goto LABEL_33;
  v37 = *(_QWORD *)(v4 + 336) + 6776 * v41 - 6776;
  if ( *(_QWORD *)(v37 + 6768) != *(_QWORD *)(v4 + 328) )
    goto LABEL_33;
  v42 = *(_DWORD *)(v37 + 8);
  if ( v42 <= *(_DWORD *)(v4 + 27504) )
  {
    v64 = *(unsigned int *)(v4 + 27504);
    if ( (unsigned int)v64 < v42 )
      goto LABEL_96;
    goto LABEL_33;
  }
  if ( (unsigned int)sub_1AFA3A0(v4, v10) )
  {
LABEL_30:
    v36 = *(unsigned int *)(v4 + 344);
    if ( (_DWORD)v36 )
    {
      v37 = *(_QWORD *)(v4 + 336) + 6776 * v36 - 6776;
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  v43 = *(unsigned int *)(v4 + 344);
  if ( (_DWORD)v43 )
  {
    v44 = *(_QWORD *)(v4 + 336) + 6776 * v43 - 6776;
    v45 = *(_QWORD *)v44;
    v46 = *(_QWORD *)v44 + 1688 * (*(unsigned int *)(v44 + 8) - (unsigned __int64)*(unsigned int *)(v4 + 27504));
  }
  else
  {
    v45 = 0;
    v46 = 0;
  }
  v108[0] = v46;
  v107 = v45;
  v104 = v108;
  sub_1AE7860(&v106, v108, &v107);
  v47 = *(unsigned int *)(v4 + 344);
  v105 = v106;
  if ( !(_DWORD)v47 )
  {
    if ( !v105 )
      goto LABEL_33;
    v50 = 0;
    v103 = (unsigned __int64)(v105 - 211);
LABEL_54:
    v51 = v50;
    if ( v50 != v103 )
    {
      while ( 1 )
      {
        v108[0] = v51;
        if ( sub_1AEFE80(v4, (__int64)v11, v104) )
          break;
        v51 -= 1688;
        if ( v103 == v51 )
          goto LABEL_152;
      }
      v54 = *(_DWORD *)(v10 + 24);
      v108[0] = *(_QWORD *)(v10 + 48);
      v55 = sub_C1BEF0((__int64)v104, (__int64)v11, v52, v53);
      v56 = sub_1AE9760(*(_QWORD *)(v4 + 27464), (__int64)v11, v55, v54);
      goto LABEL_59;
    }
LABEL_152:
    if ( *(_DWORD *)(v4 + 27456) != 106 )
    {
      v93 = *(unsigned int *)(v4 + 344);
      if ( (_DWORD)v93 )
      {
        v37 = *(_QWORD *)(v4 + 336) + 6776 * v93 - 6776;
        if ( v105 == (__int64 *)(*(_QWORD *)v37
                               + 1688 * (*(unsigned int *)(v37 + 8) - (unsigned __int64)*(unsigned int *)(v4 + 27504))) )
          goto LABEL_32;
      }
      else if ( !v105 )
      {
        goto LABEL_33;
      }
    }
    v94 = sub_1AEA920(v103, v10);
    if ( (*(_BYTE *)(v105 - 211) & 1) != 0 )
    {
      v95 = v103 + 8;
      v96 = 8;
    }
    else
    {
      v95 = *(v105 - 210);
      v96 = *((unsigned int *)v105 - 418);
    }
    if ( v94 != (__int64 *)(v95 + 40 * v96) )
    {
      v97 = *((_DWORD *)v94 + 2);
      v105 = v94;
      if ( (unsigned __int8)sub_FFEF20(v97) )
      {
        v56 = v105[2] & 0xFFFFFFFFFFFFFFFCLL;
LABEL_59:
        *(_DWORD *)(a1 + 8) = 0;
        *(_QWORD *)a1 = 0x6400000067LL;
        *(_QWORD *)(a1 + 16) = v56;
        *(_QWORD *)(a1 + 24) = 0;
        *(_DWORD *)(a1 + 32) = 0;
        *(_BYTE *)(a1 + 36) = 0;
        return a1;
      }
    }
    v98 = *(unsigned int *)(v4 + 344);
    v99 = 0;
    if ( (_DWORD)v98 )
      v99 = *(_QWORD *)(*(_QWORD *)(v4 + 336) + 6776 * v98 - 6776);
    if ( !sub_1AFAB70(
            *(_QWORD *)(*(_QWORD *)(v4 + 27464) + 760LL),
            v10,
            1852331867 * (unsigned int)((__int64)(v103 - v99) >> 3),
            0) )
    {
      v108[0] = *(_QWORD *)(v10 + 48);
      v102 = sub_C1BEF0((__int64)v104, v10, v100, v101);
      v56 = sub_1AE9760(*(_QWORD *)(v4 + 27464), (__int64)v11, v102, *(_DWORD *)(v103 + 1024));
      goto LABEL_59;
    }
    goto LABEL_30;
  }
  v37 = *(_QWORD *)(v4 + 336) + 6776 * v47 - 6776;
  v48 = *(_QWORD *)v37;
  if ( *(__int64 **)v37 != v106 )
  {
    v49 = 1688 * (*(unsigned int *)(v37 + 8) - (unsigned __int64)*(unsigned int *)(v4 + 27504));
    v103 = (unsigned __int64)(v105 - 211);
    v50 = v48 + v49;
    goto LABEL_54;
  }
LABEL_32:
  if ( *(_QWORD *)(v37 + 6768) != *(_QWORD *)(v4 + 328) )
    goto LABEL_33;
  v42 = *(_DWORD *)(v37 + 8);
  v64 = *(unsigned int *)(v4 + 27504);
  if ( v42 <= (unsigned int)v64 )
    goto LABEL_33;
  if ( v11 )
  {
LABEL_96:
    if ( (v11[28] & 0x7F) != 0x2B && sub_1AE8780((__int64)v11) )
    {
      v65 = *(_QWORD *)v37;
      v66 = *(_QWORD *)v37 + 1688 * (v42 - v64);
      if ( !a4 )
        goto LABEL_101;
      if ( v65 != v66 )
      {
        v66 -= 1688;
LABEL_101:
        if ( v65 != v66 )
        {
          v67 = sub_1AEA920(v66 - 1688, v10);
          if ( (*(_BYTE *)(v66 - 1688) & 1) != 0 )
          {
            v68 = v66 - 1688 + 8;
            v69 = 8;
          }
          else
          {
            v68 = *(_QWORD *)(v66 - 1680);
            v69 = *(unsigned int *)(v66 - 1672);
          }
          if ( v67 != (__int64 *)(v68 + 40 * v69) )
          {
            v70 = *((_BYTE *)v67 + 32);
            v71 = *(_DWORD *)(v66 - 712);
            v72 = v67[2] & 0xFFFFFFFFFFFFFFFCLL;
            *(_DWORD *)(a1 + 32) = *(_DWORD *)(v66 - 756);
            v103 = v72;
            v73 = v67[1];
            *(_DWORD *)a1 = v71;
            v74 = _mm_loadh_ps((const double *)v67 + 3);
            *(_BYTE *)(a1 + 36) = v70;
            *(_QWORD *)(a1 + 4) = v73;
            *(__m128 *)(a1 + 16) = v74;
            return a1;
          }
        }
      }
LABEL_138:
      v38 = 0x5E00000067LL;
LABEL_34:
      *(_QWORD *)a1 = v38;
      *(_DWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 36) = 0;
      return a1;
    }
  }
  v76 = *(_QWORD *)(v4 + 27464);
  if ( *(_DWORD *)(*(_QWORD *)(v76 + 232) + 64LL) > 0x1Fu )
  {
LABEL_115:
    v77 = *(_QWORD *)v37;
    v78 = *(_QWORD *)v37 + 1688 * (*(unsigned int *)(v37 + 8) - v64);
    if ( !a4 )
      goto LABEL_118;
    if ( v77 != v78 )
    {
      v78 -= 1688;
LABEL_118:
      if ( v77 != v78 )
      {
        v79 = sub_1AEA920(v78 - 1688, v10);
        if ( (*(_BYTE *)(v78 - 1688) & 1) != 0 )
        {
          v80 = v78 - 1688 + 8;
          v81 = 320;
        }
        else
        {
          v80 = *(_QWORD *)(v78 - 1680);
          v81 = 40LL * *(unsigned int *)(v78 - 1672);
        }
        if ( v79 == (__int64 *)(v81 + v80) )
        {
          v86 = 0;
          v83 = 0;
          v82 = 0;
          v103 = 0;
          v85 = 106;
          v84 = 103;
        }
        else
        {
          v82 = *((_DWORD *)v79 + 3);
          v83 = *(_DWORD *)(v78 - 756);
          v84 = *(_DWORD *)(v78 - 712);
          v103 = v79[2] & 0xFFFFFFFFFFFFFFFCLL;
          v103 = v79[3];
          v85 = *((_DWORD *)v79 + 2);
          v86 = *((_BYTE *)v79 + 32);
        }
        v87 = _mm_loadh_ps((const double *)&v103);
        *(_DWORD *)a1 = v84;
        *(_DWORD *)(a1 + 4) = v85;
        *(_DWORD *)(a1 + 8) = v82;
        *(__m128 *)(a1 + 16) = v87;
        *(_DWORD *)(a1 + 32) = v83;
        *(_BYTE *)(a1 + 36) = v86;
        return a1;
      }
    }
LABEL_33:
    v38 = 0x6A00000067LL;
    goto LABEL_34;
  }
  if ( !(unsigned __int8)sub_1AF8F00(v76, *(_QWORD *)(v10 + 48), 1, nullptr) )
  {
    v89 = *(unsigned int *)(v4 + 344);
    if ( (_DWORD)v89 )
    {
      v64 = *(unsigned int *)(v4 + 27504);
      v37 = *(_QWORD *)(v4 + 336) + 6776 * v89 - 6776;
      goto LABEL_115;
    }
    goto LABEL_33;
  }
  sub_1AF1680(
    (__int64)v108,
    v4,
    v10,
    (unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD))sub_1AE6560,
    (__int64)&v107,
    a4,
    (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))sub_1AE6570,
    (__int64)&v106);
  if ( HIDWORD(v108[0]) == 106 || !v108[2] )
    goto LABEL_138;
  v90 = 10;
  v91 = (_DWORD *)a1;
  v92 = v108;
  while ( v90 )
  {
    *v91 = *(_DWORD *)v92;
    v92 = (__int64 *)((char *)v92 + 4);
    ++v91;
    --v90;
  }
  return a1;
}
