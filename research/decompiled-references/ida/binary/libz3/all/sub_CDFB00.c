__int64 __fastcall sub_CDFB00(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // al
  unsigned int v7; // ebp
  __int64 v8; // rsi
  int v9; // edx
  __int64 result; // rax
  unsigned int v11; // eax
  _DWORD *v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r14
  unsigned __int8 v17; // al
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // r14d
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rbp
  __int64 v31; // rsi
  __int64 v32; // rdi
  bool v33; // zf
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  unsigned int v38; // r14d
  unsigned __int64 v39; // r15
  __int64 *v40; // rbp
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rbp
  __int64 v50; // rsi
  __int64 v51; // rdi
  int v52; // ecx
  __int64 v53; // rdi
  int v54; // edx
  __int64 v55; // rsi
  __int64 v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rax
  int v59; // ecx
  __int64 v60; // rdx
  __int64 v61; // r14
  int v62; // ebp
  __int64 v63; // rax
  __int64 v64; // rsi
  int v65; // r8d
  _QWORD *v66; // r9
  unsigned int v67; // ebp
  _QWORD *v68; // r15
  __int64 v69; // rdi
  int v70; // r8d
  int v71; // r9d
  __int64 v72; // rax
  __int64 v73; // rbp
  __int64 v74; // rax
  unsigned int v75; // r14d
  unsigned __int64 v76; // r15
  __int64 *v77; // rbp
  __int64 v78; // rsi
  __int64 v79; // rdi
  __int64 v80; // rax
  unsigned int v81; // r14d
  unsigned __int64 v82; // r15
  __int64 *v83; // rbp
  __int64 v84; // rsi
  __int64 v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rax
  int v88; // ecx
  __int64 v89; // rdi
  __int64 v90; // rax
  int v91; // ecx
  int v92[2]; // [rsp+0h] [rbp-68h]
  int v93; // [rsp+8h] [rbp-60h]
  int v94[2]; // [rsp+8h] [rbp-60h]
  int v95; // [rsp+10h] [rbp-58h]
  __int64 v96; // [rsp+18h] [rbp-50h] BYREF
  __int64 v97; // [rsp+20h] [rbp-48h] BYREF
  __int64 v98; // [rsp+28h] [rbp-40h]
  int v99; // [rsp+30h] [rbp-38h]
  int v100; // [rsp+38h] [rbp-30h]
  int v101; // [rsp+40h] [rbp-28h]
  void *v102; // [rsp+48h] [rbp-20h]

  v6 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v6 == 2 )
  {
    v24 = *(_QWORD *)(a1 + 8);
    v25 = *(_DWORD *)(a2 + 24);
    v97 = 0;
    v98 = v24;
    v26 = *(_QWORD *)(a1 + 160);
    if ( v26 )
      *(_DWORD *)(v26 - 4) -= v25;
    v27 = *(_QWORD *)(a1 + 528);
    if ( v27 )
      *(_DWORD *)(v27 - 4) -= v25;
    *(_DWORD *)(a1 + 128) -= v25;
    sub_15844D0(a1);
    v28 = 0x7FFFFFFF8LL;
    v29 = *(_QWORD *)(a1 + 56);
    if ( v29 )
      v28 = 8LL * (unsigned int)(*(_DWORD *)(v29 - 4) - 1);
    v30 = *(_QWORD *)(v29 + v28);
    if ( v30 )
      ++*(_DWORD *)(v30 + 8);
    v31 = *(_QWORD *)(a1 + 480);
    if ( v31 )
    {
      v32 = *(_QWORD *)(a1 + 488);
      v33 = (*(_DWORD *)(v31 + 8))-- == 1;
      if ( v33 )
        sub_15D7BC0(v32, v31);
    }
    v33 = *(_WORD *)(v30 + 4) == 0;
    *(_QWORD *)(a1 + 480) = v30;
    if ( !v33 || (*(_BYTE *)(v30 + 30) & 1) == 0 )
    {
      sub_1585DF0(a1 + 328, v30, v25, &v97);
      v35 = v97;
      v97 = *(_QWORD *)(a1 + 480);
      v34 = v97;
      *(_QWORD *)(a1 + 480) = v35;
      if ( v34 )
      {
        v36 = v98;
        v33 = (*(_DWORD *)(v34 + 8))-- == 1;
        if ( v33 )
          sub_15D7BC0(v36, v34);
      }
      v97 = 0;
    }
    v37 = *(_QWORD *)(a1 + 56);
    if ( v37 )
    {
      v38 = *(_DWORD *)(a3 + 12);
      v39 = v37 + 8LL * *(unsigned int *)(v37 - 4);
      v40 = (__int64 *)(v37 + 8LL * v38);
      if ( (unsigned __int64)v40 >= v39 )
        goto LABEL_55;
      do
      {
        while ( 1 )
        {
          v41 = *v40;
          if ( *v40 )
          {
            v42 = *(_QWORD *)(a1 + 48);
            v33 = (*(_DWORD *)(v41 + 8))-- == 1;
            if ( v33 )
              break;
          }
          if ( (unsigned __int64)++v40 >= v39 )
            goto LABEL_54;
        }
        sub_15D7BC0(v42, v41);
        ++v40;
      }
      while ( (unsigned __int64)v40 < v39 );
LABEL_54:
      v37 = *(_QWORD *)(a1 + 56);
      if ( v37 )
LABEL_55:
        *(_DWORD *)(v37 - 4) = v38;
    }
    v43 = *(_QWORD *)(a1 + 480);
    v96 = v43;
    if ( v43 )
      ++*(_DWORD *)(v43 + 8);
    sub_CD7660((_QWORD *)(a1 + 56), &v96);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    result = *(_QWORD *)(a1 + 40);
    v44 = *(_DWORD *)(result - 4);
    *(_DWORD *)(result - 4) = v44 - 1;
    if ( v44 != 1 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v44 - 2) + 8) |= 2u;
    v45 = v97;
    if ( v97 )
    {
      v46 = v98;
      v33 = (*(_DWORD *)(v97 + 8))-- == 1;
      if ( v33 )
        return sub_15D7BC0(v46, v45);
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
    v47 = 0x7FFFFFFF8LL;
    v48 = *(_QWORD *)(a1 + 56);
    if ( v48 )
      v47 = 8LL * (unsigned int)(*(_DWORD *)(v48 - 4) - 1);
    v49 = *(_QWORD *)(v48 + v47);
    if ( v49 )
      ++*(_DWORD *)(v49 + 8);
    v50 = *(_QWORD *)(a1 + 480);
    if ( v50 )
    {
      v51 = *(_QWORD *)(a1 + 488);
      v33 = (*(_DWORD *)(v50 + 8))-- == 1;
      if ( v33 )
      {
        sub_15D7BC0(v51, v50);
        v48 = *(_QWORD *)(a1 + 56);
      }
    }
    v52 = *(_DWORD *)(v48 - 4);
    v53 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 480) = v49;
    v54 = v52 - 1;
    v55 = *(_QWORD *)(v48 + 8LL * (unsigned int)(v52 - 1));
    *(_DWORD *)(v48 - 4) = v52 - 1;
    if ( v55 )
    {
      v33 = (*(_DWORD *)(v55 + 8))-- == 1;
      if ( v33 )
      {
        sub_15D7BC0(v53, v55);
        v48 = *(_QWORD *)(a1 + 56);
        v53 = *(_QWORD *)(a1 + 48);
      }
      v54 = *(_DWORD *)(v48 - 4);
    }
    v56 = (unsigned int)(v54 - 1);
    v57 = *(_QWORD *)(v48 + 8 * v56);
    *(_DWORD *)(v48 - 4) = v56;
    if ( v57 )
    {
      v33 = (*(_DWORD *)(v57 + 8))-- == 1;
      if ( v33 )
        sub_15D7BC0(v53, v57);
    }
    v58 = *(_QWORD *)(a1 + 480);
    v97 = v58;
    if ( v58 )
      ++*(_DWORD *)(v58 + 8);
    sub_CD7660((_QWORD *)(a1 + 56), &v97);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    result = *(_QWORD *)(a1 + 40);
    v59 = *(_DWORD *)(result - 4);
    *(_DWORD *)(result - 4) = v59 - 1;
    if ( v59 != 1 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v59 - 2) + 8) |= 2u;
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
    v13 = *(unsigned int *)(a3 + 12);
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v13);
    v15 = *(_QWORD *)(a1 + 8);
    if ( v14 == *(_QWORD *)(v15 + 856) )
    {
      v16 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      if ( v14 != *(_QWORD *)(v15 + 864) )
        goto LABEL_5;
      v16 = *(_QWORD *)(a2 + 48);
    }
    if ( v16 )
    {
      sub_39BEE0((__int64 *)(a1 + 48), v13);
      v97 = v16;
      ++*(_DWORD *)(v16 + 8);
      sub_CD7660((_QWORD *)(a1 + 56), &v97);
      v17 = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
      *(_BYTE *)(a3 + 8) = v17;
      if ( (unsigned __int8)sub_CDC980((_QWORD *)a1, v16, (v17 >> 4) & 3) )
      {
        v18 = *(_QWORD *)(a1 + 56);
        if ( v18 )
          v19 = *(_DWORD *)(v18 - 4);
        else
          v19 = 0;
        v20 = *(_QWORD *)(v18 + 8LL * (unsigned int)(v19 - 1));
        if ( v20 )
          ++*(_DWORD *)(v20 + 8);
        *(_QWORD *)v94 = v20;
        sub_CD6E70(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
        *(_QWORD *)(a1 + 480) = *(_QWORD *)v94;
        sub_39BF70((__int64 *)(a1 + 48));
        sub_39BF70((__int64 *)(a1 + 48));
        v21 = *(_QWORD *)(a1 + 480);
        v97 = v21;
        if ( v21 )
          ++*(_DWORD *)(v21 + 8);
        sub_CD7660((_QWORD *)(a1 + 56), &v97);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
        v22 = *(_QWORD *)(a1 + 40);
        v23 = *(_DWORD *)(v22 - 4);
        *(_DWORD *)(v22 - 4) = v23 - 1;
        if ( v23 != 1 )
          *(_BYTE *)(v22 + 16LL * (unsigned int)(v23 - 2) + 8) |= 2u;
      }
LABEL_27:
      result = sub_CD6E70(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      goto LABEL_28;
    }
LABEL_5:
    v8 = *(_QWORD *)(a2 + 8LL * v11 + 32);
    v9 = ((v11 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v9;
    result = sub_CDC980((_QWORD *)a1, v8, ((unsigned __int8)v9 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v60 = *(_QWORD *)(a1 + 56);
  v61 = *(_QWORD *)(a2 + 16);
  if ( v60 )
    v62 = *(_DWORD *)(v60 - 4);
  else
    v62 = 0;
  v63 = *(unsigned int *)(a3 + 12);
  v64 = *(_QWORD *)(a1 + 512);
  v65 = a1 + 480;
  v66 = *(_QWORD **)(a1 + 144);
  v67 = v62 - v63;
  v68 = (_QWORD *)(v60 + 8 * v63);
  if ( v64 )
  {
    v69 = *(_QWORD *)(a1 + 520);
    v33 = (*(_DWORD *)(v64 + 8))-- == 1;
    if ( v33 )
    {
      v93 = a1 + 480;
      *(_QWORD *)v92 = v66;
      sub_15D7BC0(v69, v64);
      v66 = *(_QWORD **)v92;
      v65 = a1 + 480;
    }
  }
  *(_QWORD *)(a1 + 512) = 0;
  if ( (unsigned int)sub_CD87C0(v66, v61, v67, v68, v65, (int)v66) != 5 )
  {
    v80 = *(_QWORD *)(a1 + 56);
    if ( v80 )
    {
      v81 = *(_DWORD *)(a3 + 12);
      v82 = v80 + 8LL * *(unsigned int *)(v80 - 4);
      v83 = (__int64 *)(v80 + 8LL * v81);
      if ( (unsigned __int64)v83 >= v82 )
        goto LABEL_111;
      do
      {
        v84 = *v83;
        if ( *v83 )
        {
          v85 = *(_QWORD *)(a1 + 48);
          v33 = (*(_DWORD *)(v84 + 8))-- == 1;
          if ( v33 )
            sub_15D7BC0(v85, v84);
        }
        ++v83;
      }
      while ( (unsigned __int64)v83 < v82 );
      v80 = *(_QWORD *)(a1 + 56);
      if ( v80 )
LABEL_111:
        *(_DWORD *)(v80 - 4) = v81;
    }
    v86 = *(_QWORD *)(a1 + 480);
    v97 = v86;
    if ( v86 )
      ++*(_DWORD *)(v86 + 8);
    sub_CD7660((_QWORD *)(a1 + 56), &v97);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    v87 = *(_QWORD *)(a1 + 40);
    v88 = *(_DWORD *)(v87 - 4);
    *(_DWORD *)(v87 - 4) = v88 - 1;
    if ( v88 != 1 )
      *(_BYTE *)(v87 + 16LL * (unsigned int)(v88 - 2) + 8) |= 2u;
    goto LABEL_27;
  }
  if ( (*(_BYTE *)(a3 + 8) & 2) == 0 )
  {
    ++*(_DWORD *)(a2 + 8);
    sub_CD6E70(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
    v74 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 480) = a2;
    if ( v74 )
      goto LABEL_97;
    v97 = a2;
    v73 = a2;
    goto LABEL_122;
  }
  v72 = sub_15DC610(
          *(_QWORD *)(a1 + 8),
          v61,
          v67,
          (int)v68,
          v70,
          v71,
          v92[0],
          v93,
          v95,
          v96,
          v97,
          v98,
          v99,
          v100,
          v101,
          v102);
  v73 = v72;
  if ( v72 )
    ++*(_DWORD *)(v72 + 8);
  sub_CD6E70(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  v74 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 480) = v73;
  if ( v74 )
  {
LABEL_97:
    v75 = *(_DWORD *)(a3 + 12);
    v76 = v74 + 8LL * *(unsigned int *)(v74 - 4);
    v77 = (__int64 *)(v74 + 8LL * v75);
    if ( (unsigned __int64)v77 >= v76 )
      goto LABEL_119;
    do
    {
      v78 = *v77;
      if ( *v77 )
      {
        v79 = *(_QWORD *)(a1 + 48);
        v33 = (*(_DWORD *)(v78 + 8))-- == 1;
        if ( v33 )
          sub_15D7BC0(v79, v78);
      }
      ++v77;
    }
    while ( (unsigned __int64)v77 < v76 );
    v74 = *(_QWORD *)(a1 + 56);
    if ( v74 )
LABEL_119:
      *(_DWORD *)(v74 - 4) = v75;
    v73 = *(_QWORD *)(a1 + 480);
  }
  v97 = v73;
  if ( v73 )
LABEL_122:
    ++*(_DWORD *)(v73 + 8);
  sub_CD7660((_QWORD *)(a1 + 56), &v97);
  v89 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    v89 = *(_QWORD *)(a1 + 480);
  }
  v90 = *(_QWORD *)(a1 + 40);
  v91 = *(_DWORD *)(v90 - 4);
  *(_DWORD *)(v90 - 4) = v91 - 1;
  if ( a2 != v89 && v91 != 1 )
  {
    *(_BYTE *)(v90 + 16LL * (unsigned int)(v91 - 2) + 8) |= 2u;
    v89 = *(_QWORD *)(a1 + 480);
  }
  result = sub_CD6E70(v89, *(_QWORD *)(a1 + 488));
LABEL_28:
  *(_QWORD *)(a1 + 480) = 0;
  return result;
}

