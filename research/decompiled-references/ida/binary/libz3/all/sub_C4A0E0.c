__int64 __fastcall sub_C4A0E0(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // al
  unsigned int v7; // r12d
  __int64 v8; // rsi
  int v9; // edx
  __int64 result; // rax
  unsigned int v11; // eax
  _DWORD *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 *v15; // r13
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  bool v21; // zf
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rdi
  int v27; // ecx
  __int64 v28; // rdi
  int v29; // edx
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rax
  unsigned int v36; // r13d
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r12
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rax
  unsigned int v48; // r13d
  unsigned __int64 v49; // r14
  __int64 *v50; // r12
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // rax
  int v54; // ecx
  __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 v58; // r12
  __int64 v59; // rsi
  __int64 *v60; // rcx
  __int64 v61; // r9
  __int64 v62; // r14
  _QWORD *v63; // r13
  __int64 v64; // rdi
  int v65; // r8d
  int v66; // r9d
  __int64 v67; // rax
  __int64 v68; // r12
  __int64 v69; // rax
  unsigned int v70; // r13d
  unsigned __int64 v71; // r14
  __int64 *v72; // r12
  __int64 v73; // rsi
  __int64 v74; // rdi
  __int64 v75; // rax
  unsigned int v76; // r13d
  unsigned __int64 v77; // r14
  __int64 *v78; // r12
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // rax
  __int64 v82; // rax
  int v83; // ecx
  __int64 v84; // rdi
  __int64 v85; // rax
  int v86; // ecx
  unsigned __int8 v87; // al
  __int64 v88; // rax
  int v89; // edx
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rdx
  int v93; // eax
  int v94; // [rsp+0h] [rbp-78h]
  int v95[2]; // [rsp+8h] [rbp-70h]
  int v96; // [rsp+8h] [rbp-70h]
  __int64 v97; // [rsp+8h] [rbp-70h]
  int v98[2]; // [rsp+8h] [rbp-70h]
  int v99[2]; // [rsp+10h] [rbp-68h]
  int v100; // [rsp+18h] [rbp-60h]
  int v101; // [rsp+20h] [rbp-58h]
  __int64 v102; // [rsp+28h] [rbp-50h] BYREF
  __int64 v103; // [rsp+30h] [rbp-48h] BYREF
  __int64 v104; // [rsp+38h] [rbp-40h]
  int v105; // [rsp+40h] [rbp-38h]
  void *v106; // [rsp+48h] [rbp-30h]

  v6 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v6 == 2 )
  {
    v35 = *(_QWORD *)(a1 + 8);
    v36 = *(_DWORD *)(a2 + 24);
    v103 = 0;
    v104 = v35;
    v37 = *(_QWORD *)(a1 + 160);
    if ( v37 )
      *(_DWORD *)(v37 - 4) -= v36;
    v38 = *(_QWORD *)(a1 + 528);
    if ( v38 )
      *(_DWORD *)(v38 - 4) -= v36;
    *(_DWORD *)(a1 + 128) -= v36;
    sub_15844D0(a1);
    v39 = 0x7FFFFFFF8LL;
    v40 = *(_QWORD *)(a1 + 56);
    if ( v40 )
      v39 = 8LL * (unsigned int)(*(_DWORD *)(v40 - 4) - 1);
    v41 = *(_QWORD *)(v40 + v39);
    if ( v41 )
      ++*(_DWORD *)(v41 + 8);
    v42 = *(_QWORD *)(a1 + 480);
    if ( v42 )
    {
      v43 = *(_QWORD *)(a1 + 488);
      v21 = (*(_DWORD *)(v42 + 8))-- == 1;
      if ( v21 )
        sub_15D7BC0(v43, v42);
    }
    v21 = *(_WORD *)(v41 + 4) == 0;
    *(_QWORD *)(a1 + 480) = v41;
    if ( !v21 || (*(_BYTE *)(v41 + 30) & 1) == 0 )
    {
      sub_1585DF0(a1 + 328, v41, v36, &v103);
      v45 = v103;
      v103 = *(_QWORD *)(a1 + 480);
      v44 = v103;
      *(_QWORD *)(a1 + 480) = v45;
      if ( v44 )
      {
        v46 = v104;
        v21 = (*(_DWORD *)(v44 + 8))-- == 1;
        if ( v21 )
          sub_15D7BC0(v46, v44);
      }
      v103 = 0;
    }
    v47 = *(_QWORD *)(a1 + 56);
    if ( v47 )
    {
      v48 = *(_DWORD *)(a3 + 12);
      v49 = v47 + 8LL * *(unsigned int *)(v47 - 4);
      v50 = (__int64 *)(v47 + 8LL * v48);
      if ( (unsigned __int64)v50 >= v49 )
        goto LABEL_69;
      do
      {
        while ( 1 )
        {
          v51 = *v50;
          if ( *v50 )
          {
            v52 = *(_QWORD *)(a1 + 48);
            v21 = (*(_DWORD *)(v51 + 8))-- == 1;
            if ( v21 )
              break;
          }
          if ( (unsigned __int64)++v50 >= v49 )
            goto LABEL_68;
        }
        sub_15D7BC0(v52, v51);
        ++v50;
      }
      while ( (unsigned __int64)v50 < v49 );
LABEL_68:
      v47 = *(_QWORD *)(a1 + 56);
      if ( v47 )
LABEL_69:
        *(_DWORD *)(v47 - 4) = v48;
    }
    v53 = *(_QWORD *)(a1 + 480);
    v102 = v53;
    if ( v53 )
      ++*(_DWORD *)(v53 + 8);
    sub_C41DD0((_QWORD *)(a1 + 56), &v102);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    result = *(_QWORD *)(a1 + 40);
    v54 = *(_DWORD *)(result - 4);
    *(_DWORD *)(result - 4) = v54 - 1;
    if ( v54 != 1 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v54 - 2) + 8) |= 2u;
    v55 = v103;
    if ( v103 )
    {
      v56 = v104;
      v21 = (*(_DWORD *)(v103 + 8))-- == 1;
      if ( v21 )
        return sub_15D7BC0(v56, v55);
    }
    return result;
  }
  if ( v6 == 3 )
  {
    sub_1872CE0("");
    sub_1873130(107, 520);
  }
  if ( v6 )
  {
    v22 = 0x7FFFFFFF8LL;
    v23 = *(_QWORD *)(a1 + 56);
    if ( v23 )
      v22 = 8LL * (unsigned int)(*(_DWORD *)(v23 - 4) - 1);
    v24 = *(_QWORD *)(v23 + v22);
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    v25 = *(_QWORD *)(a1 + 480);
    if ( v25 )
    {
      v26 = *(_QWORD *)(a1 + 488);
      v21 = (*(_DWORD *)(v25 + 8))-- == 1;
      if ( v21 )
      {
        sub_15D7BC0(v26, v25);
        v23 = *(_QWORD *)(a1 + 56);
      }
    }
    v27 = *(_DWORD *)(v23 - 4);
    v28 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 480) = v24;
    v29 = v27 - 1;
    v30 = *(_QWORD *)(v23 + 8LL * (unsigned int)(v27 - 1));
    *(_DWORD *)(v23 - 4) = v27 - 1;
    if ( v30 )
    {
      v21 = (*(_DWORD *)(v30 + 8))-- == 1;
      if ( v21 )
      {
        sub_15D7BC0(v28, v30);
        v23 = *(_QWORD *)(a1 + 56);
        v28 = *(_QWORD *)(a1 + 48);
      }
      v29 = *(_DWORD *)(v23 - 4);
    }
    v31 = (unsigned int)(v29 - 1);
    v32 = *(_QWORD *)(v23 + 8 * v31);
    *(_DWORD *)(v23 - 4) = v31;
    if ( v32 )
    {
      v21 = (*(_DWORD *)(v32 + 8))-- == 1;
      if ( v21 )
        sub_15D7BC0(v28, v32);
    }
    v33 = *(_QWORD *)(a1 + 480);
    v103 = v33;
    if ( v33 )
      ++*(_DWORD *)(v33 + 8);
    sub_C41DD0((_QWORD *)(a1 + 56), &v103);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    result = *(_QWORD *)(a1 + 40);
    v34 = *(_DWORD *)(result - 4);
    *(_DWORD *)(result - 4) = v34 - 1;
    if ( v34 != 1 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v34 - 2) + 8) |= 2u;
    return result;
  }
  v7 = *(_DWORD *)(a2 + 24);
  while ( 1 )
  {
    v11 = *(_DWORD *)(a3 + 8) >> 6;
    if ( v11 >= v7 )
      break;
    if ( (*(_DWORD *)(a3 + 8) & 0xFFFFFFC0) != 0x40 )
      goto LABEL_5;
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_5;
    v12 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v12 || *v12 || v12[1] != 4 )
      goto LABEL_5;
    v13 = *(_QWORD *)(a1 + 56);
    v14 = *(unsigned int *)(a3 + 12);
    v15 = (__int64 *)(v13 + 8 * v14);
    v16 = *(_QWORD *)(a1 + 8);
    if ( *v15 == *(_QWORD *)(v16 + 856) )
    {
      v17 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      if ( *v15 != *(_QWORD *)(v16 + 864) )
        goto LABEL_5;
      v17 = *(_QWORD *)(a2 + 48);
    }
    if ( v17 )
    {
      if ( v13 )
      {
        v18 = v13 + 8LL * *(unsigned int *)(v13 - 4);
        if ( (unsigned __int64)v15 >= v18 )
          goto LABEL_130;
        do
        {
          v19 = *v15;
          if ( *v15 )
          {
            v20 = *(_QWORD *)(a1 + 48);
            v21 = (*(_DWORD *)(v19 + 8))-- == 1;
            if ( v21 )
            {
              *(_QWORD *)v95 = v17;
              sub_15D7BC0(v20, v19);
              v17 = *(_QWORD *)v95;
            }
          }
          ++v15;
        }
        while ( (unsigned __int64)v15 < v18 );
        v13 = *(_QWORD *)(a1 + 56);
        if ( v13 )
LABEL_130:
          *(_DWORD *)(v13 - 4) = v14;
      }
      v103 = v17;
      ++*(_DWORD *)(v17 + 8);
      v97 = v17;
      sub_C41DD0((_QWORD *)(a1 + 56), &v103);
      v87 = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
      *(_BYTE *)(a3 + 8) = v87;
      if ( (unsigned __int8)sub_C49B80((_QWORD *)a1, v97, (v87 >> 4) & 3) )
      {
        v88 = *(_QWORD *)(a1 + 56);
        if ( v88 )
          v89 = *(_DWORD *)(v88 - 4);
        else
          v89 = 0;
        v90 = *(_QWORD *)(v88 + 8LL * (unsigned int)(v89 - 1));
        if ( v90 )
          ++*(_DWORD *)(v90 + 8);
        *(_QWORD *)v98 = v90;
        sub_C41880(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
        *(_QWORD *)(a1 + 480) = *(_QWORD *)v98;
        sub_39BF70((__int64 *)(a1 + 48));
        sub_39BF70((__int64 *)(a1 + 48));
        v91 = *(_QWORD *)(a1 + 480);
        v103 = v91;
        if ( v91 )
          ++*(_DWORD *)(v91 + 8);
        sub_C41DD0((_QWORD *)(a1 + 56), &v103);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
        v92 = *(_QWORD *)(a1 + 40);
        v93 = *(_DWORD *)(v92 - 4);
        *(_DWORD *)(v92 - 4) = v93 - 1;
        if ( v93 != 1 )
          *(_BYTE *)(v92 + 16LL * (unsigned int)(v93 - 2) + 8) |= 2u;
      }
LABEL_112:
      result = sub_C41880(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      goto LABEL_113;
    }
LABEL_5:
    v8 = *(_QWORD *)(a2 + 8LL * v11 + 32);
    v9 = ((v11 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v9;
    result = sub_C49B80((_QWORD *)a1, v8, ((unsigned __int8)v9 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v57 = *(_QWORD *)(a1 + 56);
  v58 = *(_QWORD *)(a2 + 16);
  if ( v57 )
    v96 = *(_DWORD *)(v57 - 4);
  else
    v96 = 0;
  v59 = *(_QWORD *)(a1 + 512);
  v60 = (__int64 *)(a1 + 480);
  v61 = *(_QWORD *)(a1 + 144);
  v62 = *(unsigned int *)(a3 + 12);
  v63 = (_QWORD *)(v57 + 8 * v62);
  if ( v59 )
  {
    v64 = *(_QWORD *)(a1 + 520);
    v21 = (*(_DWORD *)(v59 + 8))-- == 1;
    if ( v21 )
    {
      v100 = a1 + 480;
      *(_QWORD *)v99 = v61;
      sub_15D7BC0(v64, v59);
      v61 = *(_QWORD *)v99;
      v60 = (__int64 *)(a1 + 480);
    }
  }
  *(_QWORD *)(a1 + 512) = 0;
  if ( (unsigned int)sub_C426E0(v61, v58, v63, v60) != 5 )
  {
    v75 = *(_QWORD *)(a1 + 56);
    if ( v75 )
    {
      v76 = *(_DWORD *)(a3 + 12);
      v77 = v75 + 8LL * *(unsigned int *)(v75 - 4);
      v78 = (__int64 *)(v75 + 8LL * v76);
      if ( (unsigned __int64)v78 >= v77 )
        goto LABEL_105;
      do
      {
        v79 = *v78;
        if ( *v78 )
        {
          v80 = *(_QWORD *)(a1 + 48);
          v21 = (*(_DWORD *)(v79 + 8))-- == 1;
          if ( v21 )
            sub_15D7BC0(v80, v79);
        }
        ++v78;
      }
      while ( (unsigned __int64)v78 < v77 );
      v75 = *(_QWORD *)(a1 + 56);
      if ( v75 )
LABEL_105:
        *(_DWORD *)(v75 - 4) = v76;
    }
    v81 = *(_QWORD *)(a1 + 480);
    v103 = v81;
    if ( v81 )
      ++*(_DWORD *)(v81 + 8);
    sub_C41DD0((_QWORD *)(a1 + 56), &v103);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    v82 = *(_QWORD *)(a1 + 40);
    v83 = *(_DWORD *)(v82 - 4);
    *(_DWORD *)(v82 - 4) = v83 - 1;
    if ( v83 != 1 )
      *(_BYTE *)(v82 + 16LL * (unsigned int)(v83 - 2) + 8) |= 2u;
    goto LABEL_112;
  }
  if ( (*(_BYTE *)(a3 + 8) & 2) == 0 )
  {
    ++*(_DWORD *)(a2 + 8);
    sub_C41880(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
    v69 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 480) = a2;
    if ( v69 )
      goto LABEL_91;
    v103 = a2;
    v68 = a2;
    goto LABEL_118;
  }
  v67 = sub_15DC610(
          *(_QWORD *)(a1 + 8),
          v58,
          v96 - (int)v62,
          (int)v63,
          v65,
          v66,
          v94,
          v96,
          v99[0],
          v100,
          v101,
          v102,
          v103,
          v104,
          v105,
          v106);
  v68 = v67;
  if ( v67 )
    ++*(_DWORD *)(v67 + 8);
  sub_C41880(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  v69 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 480) = v68;
  if ( v69 )
  {
LABEL_91:
    v70 = *(_DWORD *)(a3 + 12);
    v71 = v69 + 8LL * *(unsigned int *)(v69 - 4);
    v72 = (__int64 *)(v69 + 8LL * v70);
    if ( (unsigned __int64)v72 >= v71 )
      goto LABEL_115;
    do
    {
      v73 = *v72;
      if ( *v72 )
      {
        v74 = *(_QWORD *)(a1 + 48);
        v21 = (*(_DWORD *)(v73 + 8))-- == 1;
        if ( v21 )
          sub_15D7BC0(v74, v73);
      }
      ++v72;
    }
    while ( (unsigned __int64)v72 < v71 );
    v69 = *(_QWORD *)(a1 + 56);
    if ( v69 )
LABEL_115:
      *(_DWORD *)(v69 - 4) = v70;
    v68 = *(_QWORD *)(a1 + 480);
  }
  v103 = v68;
  if ( v68 )
LABEL_118:
    ++*(_DWORD *)(v68 + 8);
  sub_C41DD0((_QWORD *)(a1 + 56), &v103);
  v84 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    v84 = *(_QWORD *)(a1 + 480);
  }
  v85 = *(_QWORD *)(a1 + 40);
  v86 = *(_DWORD *)(v85 - 4);
  *(_DWORD *)(v85 - 4) = v86 - 1;
  if ( a2 != v84 && v86 != 1 )
  {
    *(_BYTE *)(v85 + 16LL * (unsigned int)(v86 - 2) + 8) |= 2u;
    v84 = *(_QWORD *)(a1 + 480);
  }
  result = sub_C41880(v84, *(_QWORD *)(a1 + 488));
LABEL_113:
  *(_QWORD *)(a1 + 480) = 0;
  return result;
}

