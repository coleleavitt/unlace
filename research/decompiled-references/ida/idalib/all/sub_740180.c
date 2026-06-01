__int64 __fastcall sub_740180(unsigned int *a1, __int64 a2, __int64 a3, int a4, char a5)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  char *v9; // rax
  char *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  char *v13; // rcx
  unsigned __int64 v14; // rsi
  int v15; // r9d
  unsigned int v16; // r8d
  int v17; // r15d
  __int64 v18; // rdx
  unsigned __int16 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r12
  char *v22; // rcx
  unsigned int *v23; // r14
  int v24; // edi
  unsigned int v25; // ebx
  __int16 v26; // ax
  int v27; // edx
  __int64 v28; // rsi
  unsigned int *v29; // rdi
  unsigned int *v30; // r15
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rdx
  char *v34; // rcx
  __int64 v35; // rsi
  unsigned __int16 *v36; // rdi
  int v37; // eax
  __int64 v38; // rsi
  __int64 v39; // rsi
  int v40; // eax
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  char *v44; // rcx
  __int64 v45; // rsi
  unsigned __int16 *v46; // rdi
  int v47; // eax
  __int64 v48; // rsi
  __int64 v49; // rsi
  unsigned int v50; // ecx
  int v51; // eax
  unsigned int v52; // ecx
  int v53; // eax
  unsigned int v54; // ecx
  int v55; // eax
  __int64 v57; // rcx
  __int64 v58; // rdx
  char *v59; // rcx
  unsigned __int64 v60; // rsi
  int v61; // r9d
  unsigned int v62; // r8d
  int v63; // r14d
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r15
  unsigned int *v68; // r12
  int v69; // edi
  int v70; // eax
  int v71; // esi
  __int64 v72; // rsi
  unsigned int *v73; // rdi
  int v74; // ecx
  __int64 v75; // rax
  __int64 v76; // rdx
  char *v77; // rcx
  __int64 v78; // rsi
  unsigned __int16 *v79; // rdi
  int v80; // eax
  __int64 v81; // rsi
  __int64 v82; // rsi
  int v83; // eax
  unsigned __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdx
  unsigned __int16 *v87; // rcx
  __int64 v88; // rsi
  unsigned __int16 *v89; // rdi
  signed __int64 v90; // rsi
  __int64 v91; // rsi
  unsigned int v92; // ecx
  int v93; // eax
  unsigned int v94; // ecx
  int v95; // eax
  unsigned int v96; // ecx
  int v97; // eax
  unsigned int v98; // r9d
  __int64 v99; // r11
  const void *v100; // r9
  __int16 v101; // r13
  __int64 v102; // rcx
  _WORD *v103; // rbx
  __int64 v104; // rsi
  unsigned __int16 v105; // r15
  int v106; // edi
  __int64 v107; // rdx
  size_t v108; // r8
  __int64 v109; // rax
  __int64 v110; // rdi
  unsigned int v111; // r10d
  char *v112; // rsi
  _WORD *v113; // rdi
  _WORD *v114; // rcx
  __int64 v115; // rdx
  unsigned __int16 v116; // ax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  int v120; // r9d
  __int64 v121; // rdx
  unsigned int v122; // ecx
  int v123; // eax
  unsigned int v124; // ecx
  int v125; // eax
  unsigned int v126; // r11d
  __int64 v127; // r8
  unsigned int *v129; // [rsp+10h] [rbp-78h]
  unsigned __int64 v130; // [rsp+18h] [rbp-70h]
  unsigned int v131; // [rsp+20h] [rbp-68h]
  unsigned int v132; // [rsp+24h] [rbp-64h]
  __int16 v133; // [rsp+24h] [rbp-64h]
  __int64 v134; // [rsp+28h] [rbp-60h]
  __int64 v135; // [rsp+30h] [rbp-58h]
  char *v136; // [rsp+38h] [rbp-50h]
  char *v137; // [rsp+38h] [rbp-50h]
  __int16 v138; // [rsp+38h] [rbp-50h]
  __int64 v139; // [rsp+40h] [rbp-48h]

  v131 = a4;
  v129 = *(unsigned int **)a3;
  if ( !**(_DWORD **)a3 )
    return sub_73F2C0(a1, (char **)a2, a3, a4, a5);
  v7 = *((_QWORD *)a1 + 2);
  v8 = *a1;
  v134 = v7;
  v135 = *(_QWORD *)(v7 + 8);
  v132 = *(_DWORD *)(a3 + 12);
  byte_2CCC5CA = 0;
  v130 = (unsigned int)v8 >> 1;
  v9 = *(char **)a2;
  v10 = (char *)(*(_QWORD *)a2 + 6LL);
  if ( !a4 || (v10 = &v9[6 * a4 + 6], !a5) )
  {
    if ( *((__int16 *)v9 + 2) > a4 )
    {
      v57 = *((unsigned __int16 *)v10 + 2);
      if ( (unsigned __int16)v57 > 1u )
      {
        v126 = *((_DWORD *)v9 - 2);
        v58 = (unsigned __int16)v57;
        if ( (unsigned __int16)v57 >= v126 )
          sub_743130(v8, v10, (unsigned __int16)v57);
        v59 = &v9[v57];
        v127 = *(unsigned __int16 *)v59;
        if ( (int)v59 + (int)v127 + 3 - (int)v9 >= v126 )
          sub_743130(v8, v10, v58);
        if ( (unsigned int)v59
           + *(unsigned __int16 *)&v59[v127 + 2]
           + *(unsigned __int16 *)v59
           + 4
           - 1
           - (unsigned int)v9 >= v126 )
          sub_743130(v8, v10, v58);
      }
      else
      {
        v58 = (unsigned __int16)v57;
        v59 = *(char **)(a2 + 8 * v57 + 16);
        if ( !v59 )
          sub_743130(v8, v10, v58);
      }
      v60 = *(unsigned int *)v10;
      if ( v132 == (_DWORD)v60 )
        sub_743130(v8, v60, v58);
      v61 = *(unsigned __int16 *)v59;
      v62 = *(unsigned __int16 *)&v59[(unsigned __int16)v61 + 2];
      if ( (unsigned __int16)v61 > 0x204u || v62 > 0x404 )
        sub_743130(v8, v60, v58);
      v63 = v61 + v62 + 4;
      v64 = (unsigned int)(v63 + v58);
      if ( (unsigned int)v8 < (unsigned int)v64 )
        sub_743130(v8, v60, v64);
      v137 = v59;
      v65 = sub_73AFA0((unsigned __int64)a1, v60, 1u);
      v67 = v65;
      if ( !v65 || (v66 = *(unsigned __int16 *)(v65 + 8), v60 = (unsigned int)v60, v22 = v137, (v66 & 0x8000u) != 0LL) )
        sub_743130(a1, v60, v66);
      v68 = *(unsigned int **)v65;
      v25 = *((__int16 *)v129 + 2);
      v69 = *(__int16 *)(a3 + 8);
      if ( *a1 >= (unsigned __int64)(unsigned int)((__int16)v66 + v69 - v63) - 6 )
      {
        v70 = *((__int16 *)v68 + 2);
        if ( v70 == 1 || v130 >= (__int16)v69 )
          goto LABEL_40;
        v71 = *(__int16 *)(*(_QWORD *)a3 + 4LL);
        if ( v70 > 3 )
        {
          if ( v71 <= 3 )
          {
LABEL_56:
            v72 = a3;
            v73 = a1;
            sub_745920(a1, a3, v25, v137, *v68);
            while ( 1 )
            {
              v83 = *(__int16 *)(*(_QWORD *)v67 + 4LL);
              if ( v83 == 1 || (v84 = *(__int16 *)(a3 + 8), v130 >= v84) )
              {
LABEL_66:
                v85 = *((unsigned __int16 *)v68 + 5);
                v86 = *(v68 - 2);
                if ( (unsigned int)v85 >= (unsigned int)v86 )
                  sub_743130(v73, v72, v86);
                v87 = (unsigned __int16 *)((char *)v68 + v85);
                v88 = *v87;
                v89 = (unsigned __int16 *)((char *)v87 + v88 + 2);
                v90 = (char *)v87 + v88 + 3 - (char *)v68;
                if ( (unsigned int)v90 >= (unsigned int)v86 )
                  sub_743130(v89, v90, v86);
                v91 = *v89;
                if ( (unsigned int)v87 + (_DWORD)v91 + *v87 + 4 - 1 - (unsigned int)v68 >= (unsigned int)v86 )
                  sub_743130(v89, v91, v86);
                sub_745D70(a1, a2, v131, v87, 0);
                *v68 = sub_746060(a1, v67, 0);
                v92 = *(_DWORD *)(a2 + 32);
                v93 = v92 + 100;
                if ( v92 >= 0xFFFFFF9C )
                  v93 = -1;
                *(_DWORD *)(a2 + 32) = v93;
                v94 = *(_DWORD *)(v67 + 32);
                v95 = v94 + 100;
                if ( v94 >= 0xFFFFFF9C )
                  v95 = -1;
                *(_DWORD *)(v67 + 32) = v95;
                v96 = *(_DWORD *)(a3 + 32);
                v97 = v96 + 100;
                if ( v96 >= 0xFFFFFF9C )
                  v97 = -1;
                *(_DWORD *)(a3 + 32) = v97;
                sub_73AB60((__int64)a1, v67);
                sub_73AB60((__int64)a1, a3);
                goto LABEL_40;
              }
              v74 = *(__int16 *)(*(_QWORD *)a3 + 4LL);
              if ( v83 > 3 )
              {
                if ( v74 <= 3 )
                  goto LABEL_60;
              }
              else
              {
                if ( v83 < v74 )
                  goto LABEL_66;
                if ( v74 != 3 )
                  goto LABEL_60;
              }
              if ( (__int16)v84 <= *(__int16 *)(v67 + 8) )
                goto LABEL_66;
LABEL_60:
              v75 = *((unsigned __int16 *)v68 + 5);
              v76 = *(v68 - 2);
              ++v25;
              if ( (unsigned int)v75 >= (unsigned int)v76 )
                sub_743130(v73, v72, v76);
              v77 = (char *)v68 + v75;
              v78 = *(unsigned __int16 *)((char *)v68 + v75);
              v79 = (unsigned __int16 *)((char *)v68 + v75 + v78 + 2);
              v80 = *(unsigned __int16 *)((char *)v68 + v75);
              v81 = &v77[v78 + 3] - (char *)v68;
              if ( (unsigned int)v81 >= (unsigned int)v76 )
                sub_743130(v79, v81, v76);
              v82 = *v79;
              if ( (int)v77 + (int)v82 + v80 + 4 - 1 - (int)v68 >= (unsigned int)v76 )
                sub_743130(v79, v82, v76);
              sub_745920(a1, a3, v25, v77, *(unsigned int *)((char *)v68 + 6));
              v72 = v67;
              v73 = a1;
              sub_746060(a1, v67, 0);
            }
          }
        }
        else
        {
          if ( v70 < v71 )
            goto LABEL_40;
          if ( v71 != 3 )
            goto LABEL_56;
        }
        if ( (__int16)v69 <= (__int16)v66 )
          goto LABEL_40;
        goto LABEL_56;
      }
      v132 = v60;
      v23 = v129;
      v129 = *(unsigned int **)v65;
      v21 = a3;
LABEL_81:
      sub_745920(a1, v21, v25, v22, *v129);
      v100 = (char *)v129 + 6;
      v101 = *((_WORD *)v129 + 2);
      v138 = v25 + 1;
      v102 = v101;
      v103 = (_WORD *)v23 + 3 * (int)(v25 + 1) + 3;
      v104 = *((unsigned __int16 *)v129 + 3 * v101 + 5);
      v105 = v103[2];
      v106 = *a1 - v104;
      v107 = v104;
      v108 = v106;
      if ( v106 )
      {
        v109 = (unsigned int)v105 - v106;
        v110 = *(v23 - 2);
        v111 = v109;
        if ( (unsigned int)v104 >= (unsigned int)v109 )
          v111 = v104;
        if ( v111 >= (unsigned int)v110 || (unsigned int)v110 - v111 < v108 )
          sub_743130(v110, v104, v104);
        if ( (unsigned int)v104 >= *(v129 - 2) )
          sub_743130(v110, v104, v104);
        v112 = (char *)v129 + v104;
        if ( (unsigned int)v109 >= (unsigned int)v110 )
          sub_743130(v110, v112, v107);
        memmove((char *)v23 + v109, v112, v108);
        v102 = v101;
        v100 = (char *)v129 + 6;
      }
      v113 = v103;
      v139 = v102;
      memmove(v103, v100, 6LL * (v101 + 1));
      if ( v101 < 0 )
      {
        v114 = v103;
      }
      else
      {
        v114 = &v103[3 * v139 + 3];
        do
        {
          v115 = *a1;
          v116 = v103[2] + v105 - v115;
          if ( (unsigned int)v115 < v116 )
            sub_743130(v113, v116, v115);
          v103[2] = v116;
          v103 += 3;
        }
        while ( v103 != v114 );
      }
      *((_WORD *)v23 + 2) = v101 + v138;
      *(_WORD *)(v21 + 8) = *(v114 - 1) - ((_WORD)v114 + 18 - (_WORD)v23);
      sub_746060(a1, a2, v131);
      sub_738AE0(*((_QWORD *)a1 + 1), (__int64)v129);
      if ( !(unsigned __int8)sub_73B860((__m128i **)a1, v132, v117, v118, v119, v120) )
        sub_743100((unsigned int)dword_2CCC638, 0, v121);
      v122 = *(_DWORD *)(a2 + 32);
      v123 = v122 + 100;
      if ( v122 >= 0xFFFFFF9C )
        v123 = -1;
      *(_DWORD *)(a2 + 32) = v123;
      v124 = *(_DWORD *)(v21 + 32);
      v125 = v124 + 100;
      if ( v124 >= 0xFFFFFF9C )
        v125 = -1;
      *(_DWORD *)(v21 + 32) = v125;
      sub_73AB60((__int64)a1, v21);
      goto LABEL_40;
    }
  }
  v11 = *((unsigned __int16 *)v10 - 1);
  --v131;
  if ( (unsigned __int16)v11 > 1u )
  {
    v98 = *((_DWORD *)v9 - 2);
    v12 = (unsigned __int16)v11;
    if ( (unsigned __int16)v11 >= v98 )
      sub_743130(v8, v10, (unsigned __int16)v11);
    v13 = &v9[v11];
    v99 = *(unsigned __int16 *)v13;
    if ( (int)v13 + (int)v99 + 3 - (int)v9 >= v98 )
      sub_743130(v8, v10, v12);
    if ( (unsigned int)v13 + *(unsigned __int16 *)&v13[v99 + 2] + *(unsigned __int16 *)v13 + 4 - 1 - (unsigned int)v9 >= v98 )
      sub_743130(v8, v10, v12);
  }
  else
  {
    v12 = (unsigned __int16)v11;
    v13 = *(char **)(a2 + 8 * v11 + 16);
    if ( !v13 )
      sub_743130(v8, v10, v12);
  }
  if ( v131 )
    v14 = *((unsigned int *)v10 - 3);
  else
    v14 = *(unsigned int *)v9;
  if ( (_DWORD)v14 == v132 )
    sub_743130(v8, v14, v12);
  v15 = *(unsigned __int16 *)v13;
  v16 = *(unsigned __int16 *)&v13[(unsigned __int16)v15 + 2];
  if ( (unsigned __int16)v15 > 0x204u || v16 > 0x404 )
    sub_743130(v8, v14, v12);
  v17 = v15 + v16 + 4;
  v18 = (unsigned int)(v17 + v12);
  if ( (unsigned int)v8 < (unsigned int)v18 )
    sub_743130(v8, v14, v18);
  v136 = v13;
  v19 = (unsigned __int16 *)sub_73AFA0((unsigned __int64)a1, v14, 1u);
  v21 = (__int64)v19;
  if ( !v19 || (v14 = v19[4], v22 = v136, (v14 & 0x8000u) != 0LL) )
    sub_743130(a1, v14, v20);
  v23 = *(unsigned int **)v19;
  v24 = *(__int16 *)(a3 + 8);
  v25 = *(__int16 *)(*(_QWORD *)v19 + 4LL);
  v26 = *(_WORD *)(*(_QWORD *)v19 + 4LL);
  if ( *a1 < (unsigned __int64)(unsigned int)((__int16)v14 + v24 - v17) - 6 )
    goto LABEL_81;
  if ( v25 == 1 || v130 >= (__int16)v24 )
    goto LABEL_40;
  v27 = *(__int16 *)(*(_QWORD *)a3 + 4LL);
  if ( (int)v25 <= 3 )
  {
    if ( (int)v25 < v27 )
      goto LABEL_40;
    if ( v27 != 3 )
      goto LABEL_20;
LABEL_102:
    if ( (__int16)v24 <= (__int16)v14 )
      goto LABEL_40;
    goto LABEL_20;
  }
  if ( v27 > 3 )
    goto LABEL_102;
LABEL_20:
  v133 = v26;
  v28 = a3;
  v29 = a1;
  sub_745920(a1, a3, 0, v136, *v129);
  v30 = (unsigned int *)((char *)v23 + 6 * v133 + 6);
  while ( 1 )
  {
    v40 = *(__int16 *)(*(_QWORD *)v21 + 4LL);
    if ( v40 == 1 )
      break;
    v41 = *(__int16 *)(a3 + 8);
    if ( v130 >= v41 )
      break;
    v31 = *(__int16 *)(*(_QWORD *)a3 + 4LL);
    if ( v40 > 3 )
    {
      if ( v31 <= 3 )
        goto LABEL_24;
    }
    else
    {
      if ( v40 < v31 )
        break;
      if ( v31 != 3 )
        goto LABEL_24;
    }
    if ( (__int16)v41 <= *(__int16 *)(v21 + 8) )
      break;
LABEL_24:
    v32 = *((unsigned __int16 *)v30 - 1);
    v33 = *(v23 - 2);
    v30 = (unsigned int *)((char *)v30 - 6);
    --v25;
    if ( (unsigned int)v32 >= (unsigned int)v33 )
      sub_743130(v29, v28, v33);
    v34 = (char *)v23 + v32;
    v35 = *(unsigned __int16 *)((char *)v23 + v32);
    v36 = (unsigned __int16 *)((char *)v23 + v32 + v35 + 2);
    v37 = *(unsigned __int16 *)((char *)v23 + v32);
    v38 = &v34[v35 + 3] - (char *)v23;
    if ( (unsigned int)v38 >= (unsigned int)v33 )
      sub_743130(v36, v38, v33);
    v39 = *v36;
    if ( (int)v34 + (int)v39 + v37 + 4 - 1 - (int)v23 >= (unsigned int)v33 )
      sub_743130(v36, v39, v33);
    sub_745920(a1, a3, 0, v34, *v30);
    v28 = v21;
    v29 = a1;
    sub_746060(a1, v21, v25);
  }
  v42 = *((unsigned __int16 *)v30 - 1);
  v43 = *(v23 - 2);
  if ( (unsigned int)v42 >= (unsigned int)v43 )
    sub_743130(v29, v28, v43);
  v44 = (char *)v23 + v42;
  v45 = *(unsigned __int16 *)((char *)v23 + v42);
  v46 = (unsigned __int16 *)((char *)v23 + v42 + v45 + 2);
  v47 = *(unsigned __int16 *)((char *)v23 + v42);
  v48 = &v44[v45 + 3] - (char *)v23;
  if ( (unsigned int)v48 >= (unsigned int)v43 )
    sub_743130(v46, v48, v43);
  v49 = *v46;
  if ( (int)v44 + (int)v49 + v47 + 4 - 1 - (int)v23 >= (unsigned int)v43 )
    sub_743130(v46, v49, v43);
  sub_745D70(a1, a2, v131, v44, 0);
  *v129 = sub_746060(a1, v21, v25 - 1);
  v50 = *(_DWORD *)(a2 + 32);
  v51 = v50 + 100;
  if ( v50 >= 0xFFFFFF9C )
    v51 = -1;
  *(_DWORD *)(a2 + 32) = v51;
  v52 = *(_DWORD *)(a3 + 32);
  v53 = v52 + 100;
  if ( v52 >= 0xFFFFFF9C )
    v53 = -1;
  *(_DWORD *)(a3 + 32) = v53;
  v54 = *(_DWORD *)(v21 + 32);
  v55 = v54 + 100;
  if ( v54 >= 0xFFFFFF9C )
    v55 = -1;
  *(_DWORD *)(v21 + 32) = v55;
  sub_73AB60((__int64)a1, a3);
  sub_73AB60((__int64)a1, v21);
LABEL_40:
  *(_QWORD *)(v134 + 8) = v135;
  return v134;
}
