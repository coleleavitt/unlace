__int64 __fastcall sub_8F19F0(__int64 a1, __int64 a2, __int64 a3, char *a4, unsigned __int64 a5, int a6)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  int v16; // r14d
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rax
  __int64 v20; // r14
  size_t v21; // rdx
  unsigned __int64 v22; // rax
  int v23; // eax
  int v24; // edi
  __int64 v25; // rsi
  unsigned __int64 v26; // rax
  unsigned int v27; // ecx
  _BOOL4 v28; // r8d
  int v29; // edx
  unsigned int v30; // edx
  int v31; // r8d
  int v32; // edx
  unsigned __int64 v33; // rax
  _QWORD *v34; // rbp
  __int64 v35; // r11
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // r11
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // rcx
  __int64 v42; // r10
  unsigned __int64 v43; // rbx
  unsigned int v44; // eax
  unsigned __int64 v45; // r13
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // rdx
  int v48; // esi
  __int64 v49; // r11
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // r12
  __int64 v52; // r9
  int v53; // edi
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // r15
  __int64 v57; // r8
  unsigned __int64 v58; // r9
  __int64 v59; // r14
  __int64 v60; // r14
  unsigned __int64 v61; // rax
  _BOOL4 v62; // edi
  int v63; // esi
  unsigned __int64 v64; // rax
  __int64 v65; // r12
  unsigned __int64 v66; // rdi
  int v67; // esi
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rax
  __int64 v70; // [rsp+10h] [rbp-280h]
  unsigned __int64 v71; // [rsp+10h] [rbp-280h]
  __int64 v72; // [rsp+10h] [rbp-280h]
  unsigned __int64 v73; // [rsp+18h] [rbp-278h]
  unsigned __int64 v74; // [rsp+20h] [rbp-270h]
  _BOOL4 v75; // [rsp+2Ch] [rbp-264h]
  int v76; // [rsp+30h] [rbp-260h]
  __int64 v77; // [rsp+30h] [rbp-260h]
  unsigned __int8 *v78; // [rsp+38h] [rbp-258h]
  unsigned __int8 *v79; // [rsp+40h] [rbp-250h]
  unsigned __int8 *v80; // [rsp+48h] [rbp-248h]
  __int64 v81; // [rsp+50h] [rbp-240h]
  unsigned int *v82; // [rsp+58h] [rbp-238h]
  __int64 v83; // [rsp+60h] [rbp-230h]
  __int64 v84; // [rsp+70h] [rbp-220h]
  unsigned __int64 v85; // [rsp+78h] [rbp-218h]
  unsigned __int64 v86; // [rsp+78h] [rbp-218h]
  unsigned __int64 v87; // [rsp+80h] [rbp-210h]
  __int64 v88; // [rsp+88h] [rbp-208h]
  __int64 v89; // [rsp+90h] [rbp-200h]
  unsigned __int64 v91; // [rsp+B0h] [rbp-1E0h]
  int v93; // [rsp+C0h] [rbp-1D0h]
  char *src; // [rsp+D0h] [rbp-1C0h]
  unsigned __int64 v97; // [rsp+D8h] [rbp-1B8h]
  unsigned __int64 v98; // [rsp+E0h] [rbp-1B0h]
  __int64 v99; // [rsp+E8h] [rbp-1A8h]
  __int64 v100; // [rsp+F0h] [rbp-1A0h]
  int v101; // [rsp+104h] [rbp-18Ch] BYREF
  int v102; // [rsp+108h] [rbp-188h] BYREF
  _BYTE v103[12]; // [rsp+10Ch] [rbp-184h]
  _DWORD v104[34]; // [rsp+118h] [rbp-178h] BYREF
  __int64 v105; // [rsp+1A0h] [rbp-F0h]
  int v106; // [rsp+1A8h] [rbp-E8h]
  int v107; // [rsp+1ACh] [rbp-E4h]
  int v108; // [rsp+1B0h] [rbp-E0h]
  __int64 v109; // [rsp+240h] [rbp-50h]
  unsigned __int64 v110; // [rsp+250h] [rbp-40h]

  v8 = a1;
  v9 = *(_QWORD *)(a1 + 3208);
  v10 = *(_QWORD *)(a1 + 3200);
  v110 = __readfsqword(0x28u);
  v83 = a1 + 232;
  v11 = sub_8EA050(
          (__int64 *)(a1 + 952),
          v10,
          v9,
          (_DWORD *)(a1 + 232),
          (__int64)v104,
          *(_QWORD **)(a1 + 3520),
          0x22D8u);
  if ( v11 > 0xFFFFFFFFFFFFFF88LL )
    return v11;
  v93 = *(_DWORD *)(a1 + 8);
  v73 = *(_QWORD *)(a1 + 960);
  v81 = *(_QWORD *)(a1 + 3208);
  v100 = *(_QWORD *)(a1 + 976);
  v99 = *(_QWORD *)(a1 + 3200);
  v98 = *(_QWORD *)(a1 + 952);
  v13 = (__int64)(v73 - v98) >> 3;
  v14 = v100 - *(_QWORD *)(a1 + 968);
  v82 = *(unsigned int **)(a1 + 968);
  v15 = a2 + a3;
  v16 = v104[0];
  v88 = v15;
  v74 = v13;
  v78 = *(unsigned __int8 **)(a1 + 984);
  v79 = *(unsigned __int8 **)(a1 + 992);
  v80 = *(unsigned __int8 **)(a1 + 1000);
  v75 = v104[0] == 2;
  if ( !v13 )
  {
    v76 = 1;
    v17 = v100 - *(_QWORD *)(a1 + 968);
    v101 = 0;
    v18 = v98;
    src = a4;
    v102 = 0;
    v70 = a2;
    goto LABEL_5;
  }
  v33 = *(_QWORD *)(a1 + 288);
  v34 = *(_QWORD **)(a1 + 3520);
  v35 = v100 - *(_QWORD *)(a1 + 968);
  v102 = 255;
  v85 = v33;
  if ( v104[0] )
  {
    v35 = 1;
    if ( v104[0] != 1 )
    {
      v35 = 0;
      if ( (unsigned int)(v104[0] - 2) <= 1 )
      {
        v68 = sub_8E10B0(v34, &v102, v82, v14, v34, 0x22D8u);
        v35 = v14;
        if ( v68 <= 0xFFFFFFFFFFFFFF88LL )
        {
          v69 = sub_8E4980(v81, (__int64)v34, v102);
          if ( v16 == 2 )
            v69 += v105;
          v35 = v69 + 3;
        }
      }
    }
  }
  v77 = v35;
  v36 = sub_8F18C0(v107, v80, 0x1Fu, v13, (unsigned __int16 *)(v81 + 2064), 0, (__int64)&unk_23B38E0, 5, 0x1Cu, v34);
  v72 = sub_8F18C0(
          v106,
          v78,
          0x23u,
          v13,
          (unsigned __int16 *)(v81 + 4288),
          (__int64)&unk_23B3A40,
          (__int64)&unk_23B39E0,
          6,
          0x23u,
          v34);
  v37 = sub_8F18C0(
          v108,
          v79,
          0x34u,
          v13,
          (unsigned __int16 *)(v81 + 2836),
          (__int64)&unk_23B39A0,
          (__int64)&unk_23B3920,
          6,
          0x34u,
          v34);
  v38 = v77;
  v84 = 256;
  v39 = v77 + v109 + 6 + v36 + v72 + v37;
  if ( v14 )
    v84 = (v77 << 8) / v14;
  if ( a5 < v39 )
    return 0;
  v40 = 1340;
  v41 = 1;
  if ( v85 >= 0x53C )
    v40 = v85;
  if ( (v39 + (v40 >> 1)) / v40 )
    v41 = (v39 + (v40 >> 1)) / v40;
  v97 = v41 - 1;
  if ( v41 != 1 )
  {
    v76 = 1;
    v42 = v8;
    v18 = v98;
    v43 = 0;
    v86 = ((v39 - v38) << 8) / v13;
    v87 = (v39 << 8) / v41;
    src = a4;
    v70 = a2;
    while ( 1 )
    {
      v44 = *(unsigned __int16 *)(v18 + 4);
      v45 = v18 + 8;
      v46 = (__int64)(v73 - v18) >> 3;
      v74 = v46;
      v47 = v86 + ((__PAIR128__(16 * (unsigned __int64)(v43 == 0), v43) - 1) >> 64 << 11) + v84 * (unsigned __int16)v44;
      if ( v87 < v47 )
      {
        if ( v73 == v45 )
          goto LABEL_105;
        v101 = 0;
        v51 = 1;
        v102 = 0;
        v48 = *(unsigned __int16 *)(v18 + 6);
      }
      else
      {
        v48 = *(unsigned __int16 *)(v18 + 6);
        v49 = (int)(v48 + v44 + 3);
        if ( v46 <= 1 )
        {
          if ( v73 == v45 )
          {
LABEL_105:
            v8 = v42;
            v17 = v100 - (_QWORD)v82;
            a3 = v88 - v70;
LABEL_78:
            v101 = 0;
            v102 = 0;
            if ( v74 )
              goto LABEL_79;
            v14 = v17;
            goto LABEL_5;
          }
          v101 = 0;
          v51 = 1;
          v102 = 0;
        }
        else
        {
          v50 = v18 + 8;
          v51 = 1;
          while ( 1 )
          {
            v45 = v50;
            v52 = *(unsigned __int16 *)(v50 + 4);
            v47 += v86 + v84 * v52;
            v49 += *(unsigned __int16 *)(v50 + 6) + (int)v52 + 3;
            if ( v87 < v47 && v47 < v49 << 8 )
              break;
            ++v51;
            v50 += 8LL;
            if ( v46 == v51 )
            {
              v45 = v18 + 8 * v51;
              break;
            }
          }
          if ( v73 == v45 )
          {
            v8 = v42;
            v17 = v100 - (_QWORD)v82;
            a3 = v88 - v70;
            goto LABEL_99;
          }
          v101 = 0;
          v102 = 0;
        }
      }
      v53 = *(_DWORD *)(v42 + 1028);
      v54 = v18;
      v55 = v18;
      v56 = 0;
      v57 = *(_QWORD *)(v42 + 952);
      v58 = v18 + 8 * v51;
      while ( v53 != (unsigned int)((__int64)(v55 - v57) >> 3) || *(_DWORD *)(v42 + 1024) != 1 )
      {
        v55 += 8LL;
        v56 += v44;
        if ( v58 == v55 )
          goto LABEL_62;
LABEL_58:
        v44 = *(unsigned __int16 *)(v55 + 4);
      }
      v55 += 8LL;
      v56 += v44 + 0x10000;
      if ( v58 != v55 )
        goto LABEL_58;
LABEL_62:
      v59 = 0;
      while ( 2 )
      {
        if ( v53 != (unsigned int)((__int64)(v54 - v57) >> 3) || *(_DWORD *)(v42 + 1024) != 2 )
        {
          v54 += 8LL;
          v59 += (unsigned int)(v48 + 3);
          if ( v58 == v54 )
            goto LABEL_68;
LABEL_64:
          v48 = *(unsigned __int16 *)(v54 + 6);
          continue;
        }
        break;
      }
      v54 += 8LL;
      v59 += (unsigned int)(v48 + 65539);
      if ( v58 != v54 )
        goto LABEL_64;
LABEL_68:
      v91 = v56 + v59;
      v89 = v42;
      v60 = v88 - v70;
      v61 = sub_8F1340(
              v81,
              (__int64)v104,
              v18,
              v51,
              v82,
              v56,
              (__int64)v78,
              (__int64)v79,
              (__int64)v80,
              v83,
              v70,
              v88 - v70,
              v93,
              v75,
              v76,
              &v101,
              &v102,
              0);
      if ( v61 > 0xFFFFFFFFFFFFFF88LL )
        return v61;
      v42 = v89;
      if ( v61 && v91 > v61 )
      {
        v70 += v61;
        v18 = v45;
        src += v91;
        v82 = (unsigned int *)((char *)v82 + v56);
        v78 += v51;
        v79 += v51;
        v80 += v51;
        v62 = v75;
        if ( v101 )
          v62 = 0;
        v60 = v88 - v70;
        v63 = 0;
        if ( !v102 )
          v63 = v76;
        v75 = v62;
        v74 = (__int64)(v73 - v45) >> 3;
        v76 = v63;
      }
      if ( ++v43 == v97 )
      {
        v8 = v89;
        a3 = v60;
        v17 = v100 - (_QWORD)v82;
        goto LABEL_78;
      }
    }
  }
  v17 = v14;
  v18 = v98;
  v76 = 1;
  v70 = a2;
  src = a4;
LABEL_99:
  v101 = 0;
  v102 = 0;
LABEL_79:
  v64 = v18;
  v65 = 0;
  v66 = v18 + 8 * v74;
  do
  {
    while ( 1 )
    {
      v67 = *(unsigned __int16 *)(v64 + 6);
      if ( *(_DWORD *)(v8 + 1028) == (unsigned int)((__int64)(v64 - *(_QWORD *)(v8 + 952)) >> 3)
        && *(_DWORD *)(v8 + 1024) == 2 )
      {
        break;
      }
      v64 += 8LL;
      v65 += (unsigned int)(v67 + 3);
      if ( v66 == v64 )
        goto LABEL_84;
    }
    v64 += 8LL;
    v65 += (unsigned int)(v67 + 65539);
  }
  while ( v66 != v64 );
LABEL_84:
  v14 = v17 + v65;
LABEL_5:
  v19 = sub_8F1340(
          v81,
          (__int64)v104,
          v18,
          v74,
          v82,
          v17,
          (__int64)v78,
          (__int64)v79,
          (__int64)v80,
          v83,
          v70,
          a3,
          v93,
          v75,
          v76,
          &v101,
          &v102,
          a6);
  v11 = v19;
  if ( v19 > 0xFFFFFFFFFFFFFF88LL )
    return v11;
  if ( !v19 || v19 >= v14 )
    goto LABEL_13;
  src += v14;
  v70 += v19;
  if ( !v101 )
  {
    if ( v102 )
    {
      v18 = v73;
      if ( v75 )
      {
        *(_QWORD *)v81 = *(_QWORD *)v99;
        *(_QWORD *)(v81 + 2056) = *(_QWORD *)(v99 + 2056);
        qmemcpy(
          (void *)((v81 + 8) & 0xFFFFFFFFFFFFFFF8LL),
          (const void *)(v99 - (v81 - ((v81 + 8) & 0xFFFFFFFFFFFFFFF8LL))),
          8LL * (((unsigned int)v81 - (((_DWORD)v81 + 8) & 0xFFFFFFF8) + 2064) >> 3));
      }
      goto LABEL_19;
    }
    v18 = v73;
LABEL_13:
    if ( v75 )
    {
      *(_QWORD *)v81 = *(_QWORD *)v99;
      *(_QWORD *)(v81 + 2056) = *(_QWORD *)(v99 + 2056);
      qmemcpy(
        (void *)((v81 + 8) & 0xFFFFFFFFFFFFFFF8LL),
        (const void *)(v99 - (v81 - ((v81 + 8) & 0xFFFFFFFFFFFFFFF8LL))),
        8LL * (((unsigned int)v81 - (((_DWORD)v81 + 8) & 0xFFFFFFF8) + 2064) >> 3));
    }
LABEL_15:
    if ( !v76 || (unsigned int)(v106 - 1) > 1 && (unsigned int)(v108 - 1) > 1 && (unsigned int)(v107 - 1) > 1 )
      goto LABEL_19;
    return 0;
  }
  v18 = v73;
  if ( !v102 )
    goto LABEL_15;
LABEL_19:
  if ( &a4[a5] <= src )
    return v70 - a2;
  v20 = v70;
  v21 = &a4[a5] - src;
  v22 = v88 - v70;
  v71 = v21 + 3;
  if ( v22 < v21 + 3 )
    return -70;
  v23 = a6 + 8 * v21;
  *(_WORD *)v20 = v23;
  *(_BYTE *)(v20 + 2) = BYTE2(v23);
  memcpy((void *)(v20 + 3), src, v21);
  v11 = v71;
  if ( v71 <= 0xFFFFFFFFFFFFFF88LL )
  {
    v70 = v71 + v20;
    if ( v73 > v18 )
    {
      *(_QWORD *)v103 = *(_QWORD *)(v99 + 5616);
      *(_DWORD *)&v103[8] = *(_DWORD *)(v99 + 5624);
      if ( v98 < v18 )
      {
        v24 = *(_DWORD *)(v8 + 1028);
        v25 = *(_QWORD *)(v8 + 952);
        v26 = v98;
        do
        {
          if ( v24 != (unsigned int)((__int64)(v26 - v25) >> 3) || (v28 = 0, *(_DWORD *)(v8 + 1024) != 1) )
            v28 = *(unsigned __int16 *)(v26 + 4) == 0;
          v29 = *(_DWORD *)v26;
          if ( *(_DWORD *)v26 > 3u )
          {
            v27 = *(_DWORD *)v103;
            *(_DWORD *)v103 = v29 - 3;
            *(_QWORD *)&v103[4] = __PAIR64__(*(unsigned int *)&v103[4], v27);
          }
          else
          {
            v30 = v29 + v28 - 1;
            if ( v30 )
            {
              v31 = *(_DWORD *)v103 - 1;
              if ( v30 == 3 || (v31 = *(_DWORD *)&v103[4 * v30], v30 > 1) )
                v32 = *(_DWORD *)&v103[4];
              else
                v32 = *(_DWORD *)&v103[8];
              *(_DWORD *)&v103[8] = v32;
              *(_DWORD *)&v103[4] = *(_DWORD *)v103;
              *(_DWORD *)v103 = v31;
            }
          }
          v26 += 8LL;
        }
        while ( v26 < v18 );
      }
      *(_QWORD *)(v81 + 5616) = *(_QWORD *)v103;
      *(_DWORD *)(v81 + 5624) = *(_DWORD *)&v103[8];
    }
    return v70 - a2;
  }
  return v11;
}

