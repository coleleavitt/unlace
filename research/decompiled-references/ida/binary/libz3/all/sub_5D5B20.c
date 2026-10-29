__int64 __fastcall sub_5D5B20(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v16; // r15
  unsigned __int8 v17; // al
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rsi
  __int64 v28; // rdi
  bool v29; // zf
  int v30; // ecx
  __int64 v31; // rdi
  int v32; // edx
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rax
  int v37; // ecx
  __int64 v38; // rax
  unsigned int v39; // r14d
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rbp
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rax
  unsigned int v51; // r14d
  unsigned __int64 v52; // r15
  __int64 *v53; // rbp
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // rax
  int v57; // ecx
  __int64 v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // r14
  int v62; // ebp
  __int64 v63; // rax
  int v64; // ebp
  int v65; // r15d
  int v66; // r8d
  int v67; // r9d
  __int64 v68; // rax
  __int64 v69; // rbp
  __int64 v70; // rax
  __int64 v71; // rdi
  __int64 v72; // rax
  int v73; // ecx
  __int64 v74; // rsi
  __int64 v75; // rax
  int v76; // ecx
  __int64 v77; // rsi
  __int64 v78; // rdi
  char v79; // al
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rax
  int v84; // [rsp+0h] [rbp-68h]
  int v85[2]; // [rsp+0h] [rbp-68h]
  int v86; // [rsp+8h] [rbp-60h]
  __int64 v87; // [rsp+8h] [rbp-60h]
  int v88; // [rsp+10h] [rbp-58h]
  __int64 v89; // [rsp+18h] [rbp-50h] BYREF
  __int64 v90; // [rsp+20h] [rbp-48h] BYREF
  __int64 v91; // [rsp+28h] [rbp-40h]
  int v92; // [rsp+30h] [rbp-38h]
  int v93; // [rsp+38h] [rbp-30h]
  int v94; // [rsp+40h] [rbp-28h]
  void *v95; // [rsp+48h] [rbp-20h]

  v6 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v6 == 2 )
  {
    v38 = *(_QWORD *)(a1 + 8);
    v39 = *(_DWORD *)(a2 + 24);
    v90 = 0;
    v91 = v38;
    v40 = *(_QWORD *)(a1 + 160);
    if ( v40 )
      *(_DWORD *)(v40 - 4) -= v39;
    v41 = *(_QWORD *)(a1 + 528);
    if ( v41 )
      *(_DWORD *)(v41 - 4) -= v39;
    *(_DWORD *)(a1 + 128) -= v39;
    sub_15844D0(a1);
    v42 = 0x7FFFFFFF8LL;
    v43 = *(_QWORD *)(a1 + 56);
    if ( v43 )
      v42 = 8LL * (unsigned int)(*(_DWORD *)(v43 - 4) - 1);
    v44 = *(_QWORD *)(v43 + v42);
    if ( v44 )
      ++*(_DWORD *)(v44 + 8);
    v45 = *(_QWORD *)(a1 + 480);
    if ( v45 )
    {
      v46 = *(_QWORD *)(a1 + 488);
      v29 = (*(_DWORD *)(v45 + 8))-- == 1;
      if ( v29 )
        sub_15D7BC0(v46, v45);
    }
    v29 = *(_WORD *)(v44 + 4) == 0;
    *(_QWORD *)(a1 + 480) = v44;
    if ( !v29 || (*(_BYTE *)(v44 + 30) & 1) == 0 )
    {
      sub_1585DF0(a1 + 328, v44, v39, &v90);
      v48 = v90;
      v90 = *(_QWORD *)(a1 + 480);
      v47 = v90;
      *(_QWORD *)(a1 + 480) = v48;
      if ( v47 )
      {
        v49 = v91;
        v29 = (*(_DWORD *)(v47 + 8))-- == 1;
        if ( v29 )
          sub_15D7BC0(v49, v47);
      }
      v90 = 0;
    }
    v50 = *(_QWORD *)(a1 + 56);
    if ( v50 )
    {
      v51 = *(_DWORD *)(a3 + 12);
      v52 = v50 + 8LL * *(unsigned int *)(v50 - 4);
      v53 = (__int64 *)(v50 + 8LL * v51);
      if ( (unsigned __int64)v53 >= v52 )
        goto LABEL_73;
      do
      {
        while ( 1 )
        {
          v54 = *v53;
          if ( *v53 )
          {
            v55 = *(_QWORD *)(a1 + 48);
            v29 = (*(_DWORD *)(v54 + 8))-- == 1;
            if ( v29 )
              break;
          }
          if ( (unsigned __int64)++v53 >= v52 )
            goto LABEL_72;
        }
        sub_15D7BC0(v55, v54);
        ++v53;
      }
      while ( (unsigned __int64)v53 < v52 );
LABEL_72:
      v50 = *(_QWORD *)(a1 + 56);
      if ( v50 )
LABEL_73:
        *(_DWORD *)(v50 - 4) = v51;
    }
    v56 = *(_QWORD *)(a1 + 480);
    v89 = v56;
    if ( v56 )
      ++*(_DWORD *)(v56 + 8);
    sub_5C94A0((_QWORD *)(a1 + 56), &v89);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    result = *(_QWORD *)(a1 + 40);
    v57 = *(_DWORD *)(result - 4);
    *(_DWORD *)(result - 4) = v57 - 1;
    if ( v57 != 1 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v57 - 2) + 8) |= 2u;
    v58 = v90;
    if ( v90 )
    {
      v59 = v91;
      v29 = (*(_DWORD *)(v90 + 8))-- == 1;
      if ( v29 )
        return sub_15D7BC0(v59, v58);
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
    v24 = 0x7FFFFFFF8LL;
    v25 = *(_QWORD *)(a1 + 56);
    if ( v25 )
      v24 = 8LL * (unsigned int)(*(_DWORD *)(v25 - 4) - 1);
    v26 = *(_QWORD *)(v25 + v24);
    if ( v26 )
      ++*(_DWORD *)(v26 + 8);
    v27 = *(_QWORD *)(a1 + 480);
    if ( v27 )
    {
      v28 = *(_QWORD *)(a1 + 488);
      v29 = (*(_DWORD *)(v27 + 8))-- == 1;
      if ( v29 )
      {
        sub_15D7BC0(v28, v27);
        v25 = *(_QWORD *)(a1 + 56);
      }
    }
    v30 = *(_DWORD *)(v25 - 4);
    v31 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 480) = v26;
    v32 = v30 - 1;
    v33 = *(_QWORD *)(v25 + 8LL * (unsigned int)(v30 - 1));
    *(_DWORD *)(v25 - 4) = v30 - 1;
    if ( v33 )
    {
      v29 = (*(_DWORD *)(v33 + 8))-- == 1;
      if ( v29 )
      {
        sub_15D7BC0(v31, v33);
        v25 = *(_QWORD *)(a1 + 56);
        v31 = *(_QWORD *)(a1 + 48);
      }
      v32 = *(_DWORD *)(v25 - 4);
    }
    v34 = (unsigned int)(v32 - 1);
    v35 = *(_QWORD *)(v25 + 8 * v34);
    *(_DWORD *)(v25 - 4) = v34;
    if ( v35 )
    {
      v29 = (*(_DWORD *)(v35 + 8))-- == 1;
      if ( v29 )
        sub_15D7BC0(v31, v35);
    }
    v36 = *(_QWORD *)(a1 + 480);
    v90 = v36;
    if ( v36 )
      ++*(_DWORD *)(v36 + 8);
    sub_5C94A0((_QWORD *)(a1 + 56), &v90);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    result = *(_QWORD *)(a1 + 40);
    v37 = *(_DWORD *)(result - 4);
    *(_DWORD *)(result - 4) = v37 - 1;
    if ( v37 != 1 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v37 - 2) + 8) |= 2u;
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
      v90 = v16;
      ++*(_DWORD *)(v16 + 8);
      sub_5C94A0((_QWORD *)(a1 + 56), &v90);
      v17 = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
      *(_BYTE *)(a3 + 8) = v17;
      if ( (unsigned __int8)sub_5D5790((_QWORD *)a1, v16, (v17 >> 4) & 3) )
      {
        v18 = *(_QWORD *)(a1 + 56);
        if ( v18 )
          v19 = *(_DWORD *)(v18 - 4);
        else
          v19 = 0;
        v20 = *(_QWORD *)(v18 + 8LL * (unsigned int)(v19 - 1));
        if ( v20 )
          ++*(_DWORD *)(v20 + 8);
        v87 = v20;
        sub_5C8340(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
        *(_QWORD *)(a1 + 480) = v87;
        sub_39BF70((__int64 *)(a1 + 48));
        sub_39BF70((__int64 *)(a1 + 48));
        v21 = *(_QWORD *)(a1 + 480);
        v90 = v21;
        if ( v21 )
          ++*(_DWORD *)(v21 + 8);
        sub_5C94A0((_QWORD *)(a1 + 56), &v90);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
        v22 = *(_QWORD *)(a1 + 40);
        v23 = *(_DWORD *)(v22 - 4);
        *(_DWORD *)(v22 - 4) = v23 - 1;
        if ( v23 != 1 )
          *(_BYTE *)(v22 + 16LL * (unsigned int)(v23 - 2) + 8) |= 2u;
      }
      goto LABEL_108;
    }
LABEL_5:
    v8 = *(_QWORD *)(a2 + 8LL * v11 + 32);
    v9 = ((v11 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v9;
    result = sub_5D5790((_QWORD *)a1, v8, ((unsigned __int8)v9 >> 4) & 3);
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
  v64 = v62 - v63;
  v65 = v60 + 8 * v63;
  v84 = sub_5CA340(*(_QWORD **)(a1 + 144), *(_QWORD *)(a2 + 16), v64, (__int64 *)(v60 + 8 * v63), (__int64 *)(a1 + 480));
  if ( v84 != 5 )
  {
    sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
    v90 = *(_QWORD *)(a1 + 480);
    if ( v90 )
      ++*(_DWORD *)(v90 + 8);
    sub_5C94A0((_QWORD *)(a1 + 56), &v90);
    v74 = *(_QWORD *)(a1 + 480);
    if ( v84 == 4 )
    {
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
LABEL_105:
        sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    }
    else
    {
      *(_BYTE *)(a3 + 8) = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
      v79 = sub_5D5790((_QWORD *)a1, v74, v84 + 1);
      v78 = *(_QWORD *)(a1 + 480);
      v77 = *(_QWORD *)(a1 + 488);
      if ( !v79 )
        goto LABEL_109;
      v80 = 0x7FFFFFFF8LL;
      v81 = *(_QWORD *)(a1 + 56);
      if ( v81 )
        v80 = 8LL * (unsigned int)(*(_DWORD *)(v81 - 4) - 1);
      v82 = *(_QWORD *)(v81 + v80);
      if ( v82 )
        ++*(_DWORD *)(v82 + 8);
      *(_QWORD *)v85 = v82;
      sub_5C8340(v78, v77);
      *(_QWORD *)(a1 + 480) = *(_QWORD *)v85;
      sub_39BF70((__int64 *)(a1 + 48));
      sub_39BF70((__int64 *)(a1 + 48));
      v83 = *(_QWORD *)(a1 + 480);
      v90 = v83;
      if ( v83 )
        ++*(_DWORD *)(v83 + 8);
      sub_5C94A0((_QWORD *)(a1 + 56), &v90);
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        goto LABEL_105;
    }
    v75 = *(_QWORD *)(a1 + 40);
    v76 = *(_DWORD *)(v75 - 4);
    *(_DWORD *)(v75 - 4) = v76 - 1;
    if ( v76 != 1 )
      *(_BYTE *)(v75 + 16LL * (unsigned int)(v76 - 2) + 8) |= 2u;
LABEL_108:
    v77 = *(_QWORD *)(a1 + 488);
    v78 = *(_QWORD *)(a1 + 480);
LABEL_109:
    result = sub_5C8340(v78, v77);
    goto LABEL_100;
  }
  if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
  {
    v68 = sub_15DC610(*(_QWORD *)(a1 + 8), v61, v64, v65, v66, v67, 5, v86, v88, v89, v90, v91, v92, v93, v94, v95);
    v69 = v68;
    if ( v68 )
      ++*(_DWORD *)(v68 + 8);
    sub_5C8340(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  }
  else
  {
    ++*(_DWORD *)(a2 + 8);
    v69 = a2;
    sub_5C8340(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  }
  *(_QWORD *)(a1 + 480) = v69;
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
  v70 = *(_QWORD *)(a1 + 480);
  v90 = v70;
  if ( v70 )
    ++*(_DWORD *)(v70 + 8);
  sub_5C94A0((_QWORD *)(a1 + 56), &v90);
  v71 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    v71 = *(_QWORD *)(a1 + 480);
  }
  v72 = *(_QWORD *)(a1 + 40);
  v73 = *(_DWORD *)(v72 - 4);
  *(_DWORD *)(v72 - 4) = v73 - 1;
  if ( a2 != v71 && v73 != 1 )
  {
    *(_BYTE *)(v72 + 16LL * (unsigned int)(v73 - 2) + 8) |= 2u;
    v71 = *(_QWORD *)(a1 + 480);
  }
  result = sub_5C8340(v71, *(_QWORD *)(a1 + 488));
LABEL_100:
  *(_QWORD *)(a1 + 480) = 0;
  return result;
}

