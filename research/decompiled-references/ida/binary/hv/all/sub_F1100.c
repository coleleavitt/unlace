unsigned __int64 __fastcall sub_F1100(__int64 a1, __int64 a2, int *a3, const __m128i *a4, __int64 a5)
{
  unsigned __int64 v5; // r8
  __int64 v9; // r13
  int v10; // r15d
  unsigned int v11; // esi
  unsigned int v12; // eax
  bool v13; // cf
  unsigned int v14; // edi
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // ecx
  unsigned __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned __int64 v22; // rbp
  char *v23; // rcx
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r11
  __int64 v26; // r14
  unsigned __int64 v27; // r13
  unsigned int v28; // edx
  __int64 v29; // rax
  int v30; // ebp
  unsigned int v31; // r10d
  unsigned int v32; // r10d
  int v33; // r12d
  _DWORD *v34; // rsi
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  int v37; // ebp
  unsigned int v38; // edx
  int v39; // esi
  unsigned __int64 v40; // r11
  unsigned int v41; // eax
  __int64 v42; // rsi
  _DWORD *v43; // rsi
  unsigned int v44; // edx
  __int64 v45; // rdx
  _QWORD *v46; // rsi
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rcx
  __m128i *v50; // rdi
  unsigned __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rdx
  int v54; // ebp
  unsigned int v55; // edx
  __int64 v56; // rsi
  __int64 v58; // rdx
  unsigned __int64 v59; // rax
  __int64 v60; // rsi
  unsigned __int64 v61; // rdi
  unsigned __int64 v62; // r9
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // r11
  __int64 v65; // rcx
  __int64 v66; // r8
  _QWORD *v67; // rcx
  _QWORD *v68; // r8
  __int64 v69; // rax
  char *v72; // r11
  signed __int64 v73; // rax
  __int64 v74; // r11
  char *v75; // rcx
  signed __int64 v76; // rax
  __m128i *v77; // rdi
  signed __int64 v78; // r9
  signed __int64 v79; // r10
  unsigned __int64 v80; // r9
  __int64 v81; // rax
  int v82; // eax
  char *v83; // rcx
  unsigned __int64 v84; // rax
  __m128i *v85; // rax
  char *v86; // rcx
  __m128i *v87; // rax
  const __m128i *v88; // rdx
  __m128i v89; // xmm0
  int v92; // eax
  int v93; // [rsp+Ch] [rbp-ECh]
  unsigned __int64 v95; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v96; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v97; // [rsp+30h] [rbp-C8h]
  unsigned int v98; // [rsp+38h] [rbp-C0h]
  int v99; // [rsp+3Ch] [rbp-BCh]
  unsigned int v100; // [rsp+48h] [rbp-B0h]
  int v101; // [rsp+4Ch] [rbp-ACh]
  __int64 v102; // [rsp+50h] [rbp-A8h]
  const __m128i *v103; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v104; // [rsp+60h] [rbp-98h]
  unsigned int v105; // [rsp+68h] [rbp-90h]
  int v106; // [rsp+6Ch] [rbp-8Ch]
  const __m128i *v107; // [rsp+70h] [rbp-88h]
  __int64 v108; // [rsp+78h] [rbp-80h]
  int v109; // [rsp+80h] [rbp-78h]
  unsigned int v110; // [rsp+84h] [rbp-74h]
  _QWORD *v111; // [rsp+88h] [rbp-70h]
  char *v112; // [rsp+90h] [rbp-68h]
  __int64 v113; // [rsp+98h] [rbp-60h]
  _QWORD *v114; // [rsp+A0h] [rbp-58h]
  _QWORD v116[9]; // [rsp+B0h] [rbp-48h] BYREF

  v5 = (unsigned __int64)a4->m128i_u64 + a5;
  v9 = *(_QWORD *)(a1 + 8);
  v103 = a4;
  v116[1] = __readfsqword(0x28u);
  v95 = v5;
  v97 = v5 - 8;
  v10 = v9 + *(_DWORD *)(a1 + 24);
  v11 = *(_DWORD *)(a1 + 24);
  v98 = v11;
  v12 = 6;
  if ( *(_DWORD *)(a1 + 272) <= 6u )
    v12 = *(_DWORD *)(a1 + 272);
  v111 = (_QWORD *)(v9 + *(unsigned int *)(a1 + 24));
  v13 = v12 < 4;
  v14 = v12;
  v15 = 4;
  if ( !v13 )
    v15 = v14;
  v99 = v15;
  v93 = *a3;
  v106 = a3[1];
  v16 = *(_QWORD *)(a1 + 248);
  v17 = *(_QWORD *)(v16 + 8);
  v102 = v17;
  v114 = (_QWORD *)(v17 + *(unsigned int *)(v16 + 24));
  v112 = *(char **)v16;
  v18 = *(_QWORD *)v16 - v17;
  v110 = v11 - v18;
  *(_DWORD *)(a1 + 300) = 0;
  v19 = (unsigned __int64)a4->m128i_u64 + ((_DWORD)v112 - (_DWORD)v114 + (_DWORD)a4 - v10 == 0);
  if ( v5 - 8 <= v19 )
    goto LABEL_70;
  v105 = v11 - 1;
  v109 = v18 - v11;
  v107 = (const __m128i *)(v5 - 32);
  do
  {
    v20 = (unsigned int)(1 - v93 + v19 - v9);
    v21 = v9 + v20;
    if ( v98 > (unsigned int)v20 )
      v21 = v102 + (unsigned int)(v109 + v20);
    v22 = 0;
    if ( v105 - (unsigned int)v20 > 2 && *(_DWORD *)(v19 + 1) == *(_DWORD *)v21 )
    {
      v23 = (char *)v95;
      if ( v98 > (unsigned int)v20 )
        v23 = v112;
      v22 = sub_D8E60((char *)(v19 + 5), (_QWORD *)(v21 + 4), v95, v23, v111) + 4;
    }
    v116[0] = 999999999;
    if ( v99 == 5 )
    {
      v24 = sub_D3240(a1, (_DWORD *)v19, v95, (unsigned int *)v116);
    }
    else if ( v99 == 6 )
    {
      v24 = sub_D32A0(a1, (_DWORD *)v19, v95, (unsigned int *)v116);
    }
    else
    {
      v24 = sub_D31E0(a1, (_DWORD *)v19, v95, (unsigned int *)v116);
    }
    if ( v24 > v22 )
    {
      v25 = v19;
      v96 = v116[0];
    }
    else
    {
      v96 = 1;
      v25 = v19 + 1;
      v24 = v22;
    }
    v100 = v105 + v93;
    if ( v24 <= 3 )
    {
      v59 = ((v19 - (unsigned __int64)v103) >> 8) + 1;
      v19 += v59;
      *(_DWORD *)(a1 + 300) = v59 > 8;
      continue;
    }
    v104 = v25;
    v108 = a2;
    v26 = v9;
    while ( 1 )
    {
      v27 = v19 + 1;
      v28 = v19 + 1 - v26 - v93;
      v29 = v26 + v28;
      if ( v98 > v28 )
        v29 = v102 + v28 + v109;
      v30 = v24;
      _BitScanReverse(&v31, v96);
      v101 = v96;
      v32 = v31 ^ 0x1F;
      v33 = v32;
      if ( v100 - ((_DWORD)v19 + 1 - (_DWORD)v26) > 2 && *(_DWORD *)(v19 + 1) == *(_DWORD *)v29 )
      {
        v60 = v29 + 4;
        v61 = v19 + 5;
        v62 = v95;
        if ( v98 > v28 )
          v62 = (unsigned __int64)v112;
        v63 = v61 + v62 - v60;
        if ( v95 < v63 )
          v63 = v95;
        v64 = v63 - 7;
        if ( v61 >= v63 - 7 )
        {
          v68 = (_QWORD *)(v29 + 4);
          v67 = (_QWORD *)(v19 + 5);
        }
        else
        {
          v65 = *(_QWORD *)(v29 + 4);
          v66 = *(_QWORD *)(v19 + 5);
          if ( v65 != v66 )
          {
            _RCX = v66 ^ v65;
            __asm { tzcnt   rcx, rcx }
            v72 = (char *)((unsigned int)_RCX >> 3);
LABEL_114:
            if ( (char *)v62 != &v72[v60] )
              goto LABEL_115;
            goto LABEL_92;
          }
          v67 = (_QWORD *)(v19 + 13);
          v68 = (_QWORD *)(v29 + 12);
          if ( v64 > v19 + 13 )
          {
            v113 = *(_QWORD *)(v29 + 12);
            v69 = *(_QWORD *)(v19 + 13);
            if ( v69 != v113 )
            {
              _RAX = v113 ^ v69;
LABEL_91:
              __asm { tzcnt   r11, rax }
              v72 = (char *)v67 + ((unsigned int)_R11 >> 3) - v61;
              if ( (char *)v62 != &v72[v60] )
                goto LABEL_115;
LABEL_92:
              v73 = sub_C9E40(&v72[v61], v111, v95);
              v72 = (char *)(v73 + v74);
LABEL_115:
              if ( 3 * ((int)v72 + 4) > (int)(3 * v24 - 30 + v32) && (unsigned __int64)(v72 + 4) > 3 )
              {
                v30 = (_DWORD)v72 + 4;
                v104 = v19 + 1;
                v24 = (unsigned __int64)(v72 + 4);
                v33 = 31;
                v101 = 1;
                v96 = 1;
              }
              goto LABEL_25;
            }
            while ( 1 )
            {
              ++v67;
              ++v68;
              if ( v64 <= (unsigned __int64)v67 )
                break;
              if ( *v68 != *v67 )
              {
                _RAX = *v67 ^ *v68;
                goto LABEL_91;
              }
            }
          }
        }
        if ( (unsigned __int64)v67 < v63 - 3 && *(_DWORD *)v68 == *(_DWORD *)v67 )
        {
          v67 = (_QWORD *)((char *)v67 + 4);
          v68 = (_QWORD *)((char *)v68 + 4);
          if ( (unsigned __int64)v67 >= v63 - 1 )
            goto LABEL_112;
        }
        else if ( (unsigned __int64)v67 >= v63 - 1 )
        {
          goto LABEL_112;
        }
        if ( *(_WORD *)v68 == *(_WORD *)v67 )
        {
          v67 = (_QWORD *)((char *)v67 + 2);
          v68 = (_QWORD *)((char *)v68 + 2);
          if ( v63 <= (unsigned __int64)v67 )
            goto LABEL_113;
          goto LABEL_123;
        }
LABEL_112:
        if ( v63 <= (unsigned __int64)v67 )
        {
LABEL_113:
          v72 = (char *)v67 - v61;
          goto LABEL_114;
        }
LABEL_123:
        v67 = (_QWORD *)((char *)v67 + (*(_BYTE *)v68 == *(_BYTE *)v67));
        goto LABEL_113;
      }
LABEL_25:
      v34 = (_DWORD *)(v19 + 1);
      v116[0] = 999999999;
      if ( v99 == 5 )
        v35 = sub_D3240(a1, v34, v95, (unsigned int *)v116);
      else
        v35 = v99 == 6 ? sub_D32A0(a1, v34, v95, (unsigned int *)v116) : sub_D31E0(a1, v34, v95, (unsigned int *)v116);
      v36 = v116[0];
      v37 = 4 * v30;
      _BitScanReverse(&v38, v116[0]);
      v39 = v116[0];
      if ( (int)((v38 ^ 0x1F) + 4 * v35 - 31) <= v37 + v33 - 31 + 4 || v35 <= 3 )
      {
        if ( v97 <= v27 )
          break;
        v27 = v19 + 2;
        v41 = v19 + 2 - v26 - v93;
        v42 = v26 + v41;
        if ( v98 > v41 )
          v42 = v102 + v41 + v109;
        if ( v100 - ((_DWORD)v19 + 2 - (_DWORD)v26) > 2 && *(_DWORD *)(v19 + 2) == *(_DWORD *)v42 )
        {
          v83 = (char *)v95;
          if ( v98 > v41 )
            v83 = v112;
          v84 = sub_D8E60((char *)(v19 + 6), (_QWORD *)(v42 + 4), v95, v83, v111) + 4;
          if ( 4 * (int)v84 > v37 + v33 - 31 + 1 && v84 > 3 )
          {
            v37 = 4 * v84;
            v104 = v19 + 2;
            v24 = v84;
            v33 = 31;
            v101 = 1;
            v96 = 1;
          }
        }
        v43 = (_DWORD *)(v19 + 2);
        v116[0] = 999999999;
        if ( v99 == 5 )
          v35 = sub_D3240(a1, v43, v95, (unsigned int *)v116);
        else
          v35 = v99 == 6 ? sub_D32A0(a1, v43, v95, (unsigned int *)v116) : sub_D31E0(a1, v43, v95, (unsigned int *)v116);
        v36 = v116[0];
        _BitScanReverse(&v44, v116[0]);
        v39 = v116[0];
        if ( (int)((v44 ^ 0x1F) + 4 * v35 - 31) <= v37 + v33 - 24 || v35 <= 3 )
          break;
      }
      v96 = v36;
      v24 = v35;
      v19 = v27;
      v104 = v27;
      if ( v97 <= v27 )
      {
        v9 = v26;
        v40 = v19;
        a2 = v108;
        v101 = v39;
        goto LABEL_43;
      }
    }
    v9 = v26;
    v40 = v104;
    a2 = v108;
LABEL_43:
    if ( v96 > 3 )
    {
      v45 = (unsigned int)(v40 - v9 - v101 + 3);
      if ( v98 <= (unsigned int)v45 )
      {
        v47 = v9 + v45;
        v46 = v111;
      }
      else
      {
        v46 = v114;
        v47 = v102 + v45 - v110;
      }
      if ( (unsigned __int64)v46 < v47 && (unsigned __int64)v103 < v40 && *(_BYTE *)(v40 - 1) == *(_BYTE *)(v47 - 1) )
      {
        v48 = v40;
        do
        {
          --v48;
          --v47;
          v49 = v40 + v24 - v48;
        }
        while ( v48 > (unsigned __int64)v103
             && v47 > (unsigned __int64)v46
             && *(_BYTE *)(v48 - 1) == *(_BYTE *)(v47 - 1) );
      }
      else
      {
        v49 = v24;
        v48 = v40;
      }
      v40 = v48;
      v24 = v49;
      v106 = v93;
      v93 = v101 - 3;
    }
    v50 = *(__m128i **)(a2 + 24);
    v51 = v40 - (_QWORD)v103;
    if ( v40 > (unsigned __int64)v107 )
    {
      sub_C9DB0(v50, v103, v40, v107);
LABEL_75:
      *(_QWORD *)(a2 + 24) += v51;
      v52 = *(_QWORD *)(a2 + 8);
      if ( v51 > 0xFFFF )
      {
        v58 = v52 - *(_QWORD *)a2;
        *(_DWORD *)(a2 + 72) = 1;
        *(_DWORD *)(a2 + 76) = v58 >> 3;
      }
      goto LABEL_57;
    }
    *v50 = _mm_loadu_si128(v103);
    if ( v51 > 0x10 )
    {
      v85 = *(__m128i **)(a2 + 24);
      v85[1] = _mm_loadu_si128(v103 + 1);
      if ( (__int64)(v51 - 16) > 16 )
      {
        v86 = &v85->m128i_i8[v51];
        v87 = v85 + 2;
        v88 = v103 + 2;
        do
        {
          v89 = _mm_loadu_si128(v88);
          v87 += 2;
          v88 += 2;
          v87[-2] = v89;
          v87[-1] = _mm_loadu_si128(v88 - 1);
        }
        while ( v86 > (char *)v87 );
      }
      goto LABEL_75;
    }
    *(_QWORD *)(a2 + 24) += v51;
    v52 = *(_QWORD *)(a2 + 8);
LABEL_57:
    *(_WORD *)(v52 + 4) = v51;
    **(_DWORD **)(a2 + 8) = v101;
    v53 = *(_QWORD *)(a2 + 8);
    if ( v24 - 3 > 0xFFFF )
    {
      *(_DWORD *)(a2 + 72) = 2;
      *(_DWORD *)(a2 + 76) = (v53 - *(_QWORD *)a2) >> 3;
    }
    *(_WORD *)(v53 + 6) = v24 - 3;
    v19 = v40 + v24;
    *(_QWORD *)(a2 + 8) += 8LL;
    if ( *(_DWORD *)(a1 + 300) )
      *(_DWORD *)(a1 + 300) = 0;
    if ( v97 < v19 )
    {
LABEL_68:
      v103 = (const __m128i *)v19;
    }
    else
    {
      v54 = v106;
      while ( 1 )
      {
        v55 = v19 - v9 - v54;
        v56 = v102 + v55 - (unsigned __int64)v110;
        if ( v98 <= v55 )
          v56 = v9 + v55;
        if ( v54 + v105 - ((_DWORD)v19 - (_DWORD)v9) <= 2 || *(_DWORD *)v19 != *(_DWORD *)v56 )
        {
          v106 = v54;
          goto LABEL_68;
        }
        v75 = (char *)v95;
        if ( v98 > v55 )
          v75 = v112;
        v76 = sub_D8E60((char *)(v19 + 4), (_QWORD *)(v56 + 4), v95, v75, v111);
        v77 = *(__m128i **)(a2 + 24);
        v78 = v76;
        v79 = v76 + 4;
        if ( (unsigned __int64)v107 < v19 )
          sub_C9DB0(v77, (const __m128i *)v19, v19, v107);
        else
          *v77 = _mm_loadu_si128((const __m128i *)v19);
        v80 = v78 + 1;
        *(_WORD *)(*(_QWORD *)(a2 + 8) + 4LL) = 0;
        **(_DWORD **)(a2 + 8) = 1;
        v81 = *(_QWORD *)(a2 + 8);
        if ( v80 > 0xFFFF )
        {
          *(_DWORD *)(a2 + 72) = 2;
          *(_DWORD *)(a2 + 76) = (v81 - *(_QWORD *)a2) >> 3;
        }
        *(_WORD *)(v81 + 6) = v80;
        v19 += v79;
        *(_QWORD *)(a2 + 8) += 8LL;
        if ( v97 < v19 )
          break;
        v82 = v54;
        v54 = v93;
        v93 = v82;
      }
      v92 = v93;
      v103 = (const __m128i *)v19;
      v93 = v54;
      v106 = v92;
    }
  }
  while ( v97 > v19 );
LABEL_70:
  *a3 = v93;
  a3[1] = v106;
  return v95 - (_QWORD)v103;
}

