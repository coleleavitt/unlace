__int64 __fastcall sub_90FE40(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v24; // rax
  unsigned int v25; // r14d
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rbp
  bool v31; // zf
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // ecx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rbp
  __int64 v40; // rax
  int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // r14
  int v44; // ebp
  int v45; // eax
  int v46; // ebp
  int v47; // r15d
  int v48; // r8d
  int v49; // r9d
  __int64 v50; // rax
  __int64 v51; // rbp
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rax
  int v55; // ecx
  __int64 v56; // rsi
  char v57; // al
  __int64 v58; // rdi
  __int64 v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  int v65; // ecx
  int v66; // [rsp+0h] [rbp-68h]
  int v67[2]; // [rsp+0h] [rbp-68h]
  int v68; // [rsp+8h] [rbp-60h]
  __int64 v69; // [rsp+8h] [rbp-60h]
  int v70; // [rsp+10h] [rbp-58h]
  __int64 v71; // [rsp+18h] [rbp-50h] BYREF
  __int64 v72; // [rsp+20h] [rbp-48h] BYREF
  __int64 v73; // [rsp+28h] [rbp-40h]
  int v74; // [rsp+30h] [rbp-38h]
  int v75; // [rsp+38h] [rbp-30h]
  int v76; // [rsp+40h] [rbp-28h]
  void *v77; // [rsp+48h] [rbp-20h]

  v6 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v6 == 2 )
  {
    v24 = *(_QWORD *)(a1 + 8);
    v25 = *(_DWORD *)(a2 + 24);
    v72 = 0;
    v73 = v24;
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
    sub_8E4E90(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
    v31 = *(_WORD *)(v30 + 4) == 0;
    *(_QWORD *)(a1 + 480) = v30;
    if ( !v31 || (*(_BYTE *)(v30 + 30) & 1) == 0 )
    {
      sub_1585DF0(a1 + 328, v30, v25, &v72);
      v32 = *(_QWORD *)(a1 + 480);
      v33 = v73;
      *(_QWORD *)(a1 + 480) = v72;
      v72 = v32;
      sub_8E4E90(v32, v33);
      v72 = 0;
    }
    sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
    v34 = *(_QWORD *)(a1 + 480);
    v71 = v34;
    if ( v34 )
      ++*(_DWORD *)(v34 + 8);
    sub_8F15F0((_QWORD *)(a1 + 56), &v71);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    v35 = *(_QWORD *)(a1 + 40);
    v36 = *(_DWORD *)(v35 - 4);
    *(_DWORD *)(v35 - 4) = v36 - 1;
    if ( v36 != 1 )
      *(_BYTE *)(v35 + 16LL * (unsigned int)(v36 - 2) + 8) |= 2u;
    return sub_8E4E90(v72, v73);
  }
  if ( v6 == 3 )
  {
    sub_1872CE0("");
    sub_1873130(107, 520);
  }
  if ( v6 )
  {
    v37 = 0x7FFFFFFF8LL;
    v38 = *(_QWORD *)(a1 + 56);
    if ( v38 )
      v37 = 8LL * (unsigned int)(*(_DWORD *)(v38 - 4) - 1);
    v39 = *(_QWORD *)(v38 + v37);
    if ( v39 )
      ++*(_DWORD *)(v39 + 8);
    sub_8E4E90(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
    *(_QWORD *)(a1 + 480) = v39;
    sub_39BF70((__int64 *)(a1 + 48));
    sub_39BF70((__int64 *)(a1 + 48));
    v40 = *(_QWORD *)(a1 + 480);
    v72 = v40;
    if ( v40 )
      ++*(_DWORD *)(v40 + 8);
    sub_8F15F0((_QWORD *)(a1 + 56), &v72);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    result = *(_QWORD *)(a1 + 40);
    v41 = *(_DWORD *)(result - 4);
    *(_DWORD *)(result - 4) = v41 - 1;
    if ( v41 != 1 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v41 - 2) + 8) |= 2u;
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
      v72 = v16;
      ++*(_DWORD *)(v16 + 8);
      sub_8F15F0((_QWORD *)(a1 + 56), &v72);
      v17 = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
      *(_BYTE *)(a3 + 8) = v17;
      if ( (unsigned __int8)sub_90F960(a1, v16, (v17 >> 4) & 3) )
      {
        v18 = *(_QWORD *)(a1 + 56);
        if ( v18 )
          v19 = *(_DWORD *)(v18 - 4);
        else
          v19 = 0;
        v20 = *(_QWORD *)(v18 + 8LL * (unsigned int)(v19 - 1));
        if ( v20 )
          ++*(_DWORD *)(v20 + 8);
        v69 = v20;
        sub_8E4E90(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
        *(_QWORD *)(a1 + 480) = v69;
        sub_39BF70((__int64 *)(a1 + 48));
        sub_39BF70((__int64 *)(a1 + 48));
        v21 = *(_QWORD *)(a1 + 480);
        v72 = v21;
        if ( v21 )
          ++*(_DWORD *)(v21 + 8);
        sub_8F15F0((_QWORD *)(a1 + 56), &v72);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
        v22 = *(_QWORD *)(a1 + 40);
        v23 = *(_DWORD *)(v22 - 4);
        *(_DWORD *)(v22 - 4) = v23 - 1;
        if ( v23 != 1 )
          *(_BYTE *)(v22 + 16LL * (unsigned int)(v23 - 2) + 8) |= 2u;
      }
      goto LABEL_88;
    }
LABEL_5:
    v8 = *(_QWORD *)(a2 + 8LL * v11 + 32);
    v9 = ((v11 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v9;
    result = sub_90F960(a1, v8, ((unsigned __int8)v9 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v42 = *(_QWORD *)(a1 + 56);
  v43 = *(_QWORD *)(a2 + 16);
  if ( v42 )
    v44 = *(_DWORD *)(v42 - 4);
  else
    v44 = 0;
  v45 = *(_DWORD *)(a3 + 12);
  v46 = v44 - v45;
  v47 = v42 + 8 * v45;
  v66 = sub_157A5F0(*(_QWORD *)(a1 + 144), *(_QWORD *)(a2 + 16), v46, v47, (int)a1 + 480, (int)a1 + 512);
  if ( v66 != 5 )
  {
    sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
    v72 = *(_QWORD *)(a1 + 480);
    if ( v72 )
      ++*(_DWORD *)(v72 + 8);
    sub_8F15F0((_QWORD *)(a1 + 56), &v72);
    v56 = *(_QWORD *)(a1 + 480);
    if ( v66 == 4 )
    {
      if ( (*(_BYTE *)(a3 + 8) & 1) == 0 )
        goto LABEL_86;
    }
    else
    {
      *(_BYTE *)(a3 + 8) = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
      v57 = sub_90F960(a1, v56, (unsigned int)(v66 != 3) + v66);
      v58 = *(_QWORD *)(a1 + 480);
      v59 = *(_QWORD *)(a1 + 488);
      if ( !v57 )
        goto LABEL_89;
      v60 = 0x7FFFFFFF8LL;
      v61 = *(_QWORD *)(a1 + 56);
      if ( v61 )
        v60 = 8LL * (unsigned int)(*(_DWORD *)(v61 - 4) - 1);
      v62 = *(_QWORD *)(v61 + v60);
      if ( v62 )
        ++*(_DWORD *)(v62 + 8);
      *(_QWORD *)v67 = v62;
      sub_8E4E90(v58, v59);
      *(_QWORD *)(a1 + 480) = *(_QWORD *)v67;
      sub_39BF70((__int64 *)(a1 + 48));
      sub_39BF70((__int64 *)(a1 + 48));
      v63 = *(_QWORD *)(a1 + 480);
      v72 = v63;
      if ( v63 )
        ++*(_DWORD *)(v63 + 8);
      sub_8F15F0((_QWORD *)(a1 + 56), &v72);
      if ( (*(_BYTE *)(a3 + 8) & 1) == 0 )
      {
LABEL_86:
        v64 = *(_QWORD *)(a1 + 40);
        v65 = *(_DWORD *)(v64 - 4);
        *(_DWORD *)(v64 - 4) = v65 - 1;
        if ( v65 != 1 )
          *(_BYTE *)(v64 + 16LL * (unsigned int)(v65 - 2) + 8) |= 2u;
LABEL_88:
        v59 = *(_QWORD *)(a1 + 488);
        v58 = *(_QWORD *)(a1 + 480);
LABEL_89:
        result = sub_8E4E90(v58, v59);
        goto LABEL_73;
      }
    }
    sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    goto LABEL_86;
  }
  if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
  {
    v50 = sub_15DC610(*(_QWORD *)(a1 + 8), v43, v46, v47, v48, v49, 5, v68, v70, v71, v72, v73, v74, v75, v76, v77);
    v51 = v50;
    if ( v50 )
      ++*(_DWORD *)(v50 + 8);
    sub_8E4E90(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  }
  else
  {
    ++*(_DWORD *)(a2 + 8);
    v51 = a2;
    sub_8E4E90(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  }
  *(_QWORD *)(a1 + 480) = v51;
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
  v52 = *(_QWORD *)(a1 + 480);
  v72 = v52;
  if ( v52 )
    ++*(_DWORD *)(v52 + 8);
  sub_8F15F0((_QWORD *)(a1 + 56), &v72);
  v53 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    v53 = *(_QWORD *)(a1 + 480);
  }
  v54 = *(_QWORD *)(a1 + 40);
  v55 = *(_DWORD *)(v54 - 4);
  *(_DWORD *)(v54 - 4) = v55 - 1;
  if ( a2 != v53 && v55 != 1 )
  {
    *(_BYTE *)(v54 + 16LL * (unsigned int)(v55 - 2) + 8) |= 2u;
    v53 = *(_QWORD *)(a1 + 480);
  }
  result = sub_8E4E90(v53, *(_QWORD *)(a1 + 488));
LABEL_73:
  *(_QWORD *)(a1 + 480) = 0;
  return result;
}

