__int64 __fastcall sub_7099B0(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v45; // rax
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
  __int64 v56; // rax
  __int64 v57; // rax
  int v58; // ecx
  int v59; // [rsp+0h] [rbp-68h]
  int v60; // [rsp+8h] [rbp-60h]
  __int64 v61; // [rsp+8h] [rbp-60h]
  int v62; // [rsp+10h] [rbp-58h]
  __int64 v63; // [rsp+18h] [rbp-50h] BYREF
  __int64 v64; // [rsp+20h] [rbp-48h] BYREF
  __int64 v65; // [rsp+28h] [rbp-40h]
  int v66; // [rsp+30h] [rbp-38h]
  int v67; // [rsp+38h] [rbp-30h]
  int v68; // [rsp+40h] [rbp-28h]
  void *v69; // [rsp+48h] [rbp-20h]

  v6 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v6 == 2 )
  {
    v24 = *(_QWORD *)(a1 + 8);
    v25 = *(_DWORD *)(a2 + 24);
    v64 = 0;
    v65 = v24;
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
    sub_6FFC80(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
    v31 = *(_WORD *)(v30 + 4) == 0;
    *(_QWORD *)(a1 + 480) = v30;
    if ( !v31 || (*(_BYTE *)(v30 + 30) & 1) == 0 )
    {
      sub_1585DF0(a1 + 328, v30, v25, &v64);
      v32 = *(_QWORD *)(a1 + 480);
      v33 = v65;
      *(_QWORD *)(a1 + 480) = v64;
      v64 = v32;
      sub_6FFC80(v32, v33);
      v64 = 0;
    }
    sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
    v34 = *(_QWORD *)(a1 + 480);
    v63 = v34;
    if ( v34 )
      ++*(_DWORD *)(v34 + 8);
    sub_6FFDF0((_QWORD *)(a1 + 56), &v63);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    v35 = *(_QWORD *)(a1 + 40);
    v36 = *(_DWORD *)(v35 - 4);
    *(_DWORD *)(v35 - 4) = v36 - 1;
    if ( v36 != 1 )
      *(_BYTE *)(v35 + 16LL * (unsigned int)(v36 - 2) + 8) |= 2u;
    return sub_6FFC80(v64, v65);
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
    sub_6FFC80(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
    *(_QWORD *)(a1 + 480) = v39;
    sub_39BF70((__int64 *)(a1 + 48));
    sub_39BF70((__int64 *)(a1 + 48));
    v40 = *(_QWORD *)(a1 + 480);
    v64 = v40;
    if ( v40 )
      ++*(_DWORD *)(v40 + 8);
    sub_6FFDF0((_QWORD *)(a1 + 56), &v64);
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
      v64 = v16;
      ++*(_DWORD *)(v16 + 8);
      sub_6FFDF0((_QWORD *)(a1 + 56), &v64);
      v17 = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
      *(_BYTE *)(a3 + 8) = v17;
      if ( (unsigned __int8)sub_707860(a1, v16, (v17 >> 4) & 3) )
      {
        v18 = *(_QWORD *)(a1 + 56);
        if ( v18 )
          v19 = *(_DWORD *)(v18 - 4);
        else
          v19 = 0;
        v20 = *(_QWORD *)(v18 + 8LL * (unsigned int)(v19 - 1));
        if ( v20 )
          ++*(_DWORD *)(v20 + 8);
        v61 = v20;
        sub_6FFC80(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
        *(_QWORD *)(a1 + 480) = v61;
        sub_39BF70((__int64 *)(a1 + 48));
        sub_39BF70((__int64 *)(a1 + 48));
        v21 = *(_QWORD *)(a1 + 480);
        v64 = v21;
        if ( v21 )
          ++*(_DWORD *)(v21 + 8);
        sub_6FFDF0((_QWORD *)(a1 + 56), &v64);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
        v22 = *(_QWORD *)(a1 + 40);
        v23 = *(_DWORD *)(v22 - 4);
        *(_DWORD *)(v22 - 4) = v23 - 1;
        if ( v23 != 1 )
          *(_BYTE *)(v22 + 16LL * (unsigned int)(v23 - 2) + 8) |= 2u;
      }
LABEL_80:
      result = sub_6FFC80(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      goto LABEL_73;
    }
LABEL_5:
    v8 = *(_QWORD *)(a2 + 8LL * v11 + 32);
    v9 = ((v11 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v9;
    result = sub_707860(a1, v8, ((unsigned __int8)v9 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v42 = *(_QWORD *)(a1 + 56);
  v43 = *(_QWORD *)(a2 + 16);
  if ( v42 )
    v44 = *(_DWORD *)(v42 - 4);
  else
    v44 = 0;
  v45 = *(unsigned int *)(a3 + 12);
  v46 = v44 - v45;
  v47 = v42 + 8 * v45;
  if ( (unsigned int)sub_6FFF20(*(__int64 **)(a1 + 144), *(_QWORD *)(a2 + 16), v46, v42 + 8 * v45, a1 + 480) != 5 )
  {
    sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
    v56 = *(_QWORD *)(a1 + 480);
    v64 = v56;
    if ( v56 )
      ++*(_DWORD *)(v56 + 8);
    sub_6FFDF0((_QWORD *)(a1 + 56), &v64);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    v57 = *(_QWORD *)(a1 + 40);
    v58 = *(_DWORD *)(v57 - 4);
    *(_DWORD *)(v57 - 4) = v58 - 1;
    if ( v58 != 1 )
      *(_BYTE *)(v57 + 16LL * (unsigned int)(v58 - 2) + 8) |= 2u;
    goto LABEL_80;
  }
  if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
  {
    v50 = sub_15DC610(*(_QWORD *)(a1 + 8), v43, v46, v47, v48, v49, v59, v60, v62, v63, v64, v65, v66, v67, v68, v69);
    v51 = v50;
    if ( v50 )
      ++*(_DWORD *)(v50 + 8);
    sub_6FFC80(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  }
  else
  {
    ++*(_DWORD *)(a2 + 8);
    v51 = a2;
    sub_6FFC80(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  }
  *(_QWORD *)(a1 + 480) = v51;
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
  v52 = *(_QWORD *)(a1 + 480);
  v64 = v52;
  if ( v52 )
    ++*(_DWORD *)(v52 + 8);
  sub_6FFDF0((_QWORD *)(a1 + 56), &v64);
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
  result = sub_6FFC80(v53, *(_QWORD *)(a1 + 488));
LABEL_73:
  *(_QWORD *)(a1 + 480) = 0;
  return result;
}

