__int64 __fastcall sub_4BB370(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v7; // r12d
  __int64 v8; // rsi
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // r14
  int v15; // edx
  __int64 v16; // rsi
  int v17; // r15d
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdi
  int v35; // ecx
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // r15
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // r12
  __int64 v51; // rax
  int v52; // ecx
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // [rsp+0h] [rbp-68h]
  __int64 v56; // [rsp+8h] [rbp-60h]
  __int64 v57; // [rsp+8h] [rbp-60h]
  __int64 v58; // [rsp+10h] [rbp-58h]
  int v59[2]; // [rsp+18h] [rbp-50h]
  __int64 v60; // [rsp+20h] [rbp-48h] BYREF
  __int64 v61; // [rsp+28h] [rbp-40h] BYREF
  int v62; // [rsp+30h] [rbp-38h]
  int v63; // [rsp+38h] [rbp-30h]
  int v64; // [rsp+40h] [rbp-28h]
  void *v65; // [rsp+48h] [rbp-20h]

  v3 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v3 == 2 )
  {
    v36 = 515;
LABEL_31:
    sub_1872CE0("");
    sub_1873130(107, v36);
  }
  if ( v3 == 3 )
  {
    v36 = 520;
    goto LABEL_31;
  }
  if ( v3 )
  {
    v37 = a1[11];
    v38 = a1[1];
    v39 = 0x7FFFFFFF8LL;
    if ( v37 )
      v39 = 8LL * (unsigned int)(*(_DWORD *)(v37 - 4) - 1);
    v40 = *(_QWORD *)(v37 + v39);
    v57 = v40;
    if ( v40 )
      ++*(_DWORD *)(v40 + 8);
    sub_3A8160(a1 + 10);
    v41 = 0x7FFFFFFF8LL;
    v42 = a1[11];
    if ( v42 )
      v41 = 8LL * (unsigned int)(*(_DWORD *)(v42 - 4) - 1);
    v43 = *(_QWORD *)(v42 + v41);
    if ( v43 )
      ++*(_DWORD *)(v43 + 8);
    sub_3A8160(a1 + 10);
    v44 = sub_15E2470(a1[1], v43, v57);
    v45 = a1[63];
    v46 = a1[62];
    v47 = v44;
    if ( v44 )
    {
      ++*(_DWORD *)(v44 + 8);
      sub_4B1840(v46, v45);
      a1[62] = v47;
      ++*(_DWORD *)(v47 + 8);
      v61 = v47;
    }
    else
    {
      sub_4B1840(v46, v45);
      a1[62] = 0;
      v61 = 0;
    }
    sub_4B2860(a1 + 11, &v61);
    sub_4B1840(v43, v38);
    sub_4B1840(v57, v38);
    v48 = a1[7];
    v49 = 0x7FFFFFFF8LL;
    if ( v48 )
      v49 = 8LL * (unsigned int)(*(_DWORD *)(v48 - 4) - 1);
    v50 = *(_QWORD *)(v48 + v49);
    if ( v50 )
      ++*(_DWORD *)(v50 + 8);
    sub_4B1860(a1[60], a1[61]);
    a1[60] = v50;
    sub_39BF70(a1 + 6);
    sub_39BF70(a1 + 6);
    v51 = a1[60];
    v61 = v51;
    if ( v51 )
      ++*(_DWORD *)(v51 + 8);
    sub_4B2920(a1 + 7, &v61);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_15843A0(a1, a2, a1[60], a1[62]);
    result = a1[5];
    v52 = *(_DWORD *)(result - 4);
    *(_DWORD *)(result - 4) = v52 - 1;
    if ( v52 != 1 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v52 - 2) + 8) |= 2u;
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 24);
    while ( 1 )
    {
      v11 = *(_DWORD *)(a3 + 8);
      v12 = v11 >> 6;
      if ( v11 >> 6 >= v7 )
        break;
      v8 = *(_QWORD *)(a2 + 8LL * v12 + 32);
      v9 = ((v12 + 1) << 6) | v11 & 0x3F;
      *(_DWORD *)(a3 + 8) = v9;
      result = sub_4B9B20(a1, v8, ((unsigned __int8)v9 >> 4) & 3);
      if ( !(_BYTE)result )
        return result;
    }
    v13 = a1[7];
    v14 = *(_QWORD *)(a2 + 16);
    if ( v13 )
      v15 = *(_DWORD *)(v13 - 4);
    else
      v15 = 0;
    v16 = *(unsigned int *)(a3 + 12);
    HIDWORD(v58) = v15 - v16;
    v17 = v13 + 8 * v16;
    v56 = a1[1];
    sub_1584610(a1, v16);
    v20 = a1[11];
    if ( v20 )
      v21 = *(_DWORD *)(v20 - 4);
    else
      v21 = 0;
    v22 = v21 - *(_DWORD *)(a3 + 12);
    if ( v22 )
    {
      v53 = sub_15DC610(a1[1], v14, SHIDWORD(v58), v17, v18, v19, v55, v56, v58, v22, v60, v61, v62, v63, v64, v65);
      v25 = v53;
      if ( v53 )
        ++*(_DWORD *)(v53 + 8);
      v54 = sub_15E2980(a1[1]);
      if ( v54 )
        ++*(_DWORD *)(v54 + 8);
      *(_QWORD *)v59 = v54;
      sub_4B1840(a1[62], a1[63]);
      v26 = *(_QWORD *)v59;
    }
    else
    {
      ++*(_DWORD *)(a2 + 8);
      sub_4B1840(a1[62], a1[63]);
      v25 = a2;
      v26 = 0;
    }
    a1[62] = v26;
    if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
    {
      v27 = sub_15DC610(a1[1], v14, SHIDWORD(v58), v17, v23, v24, v55, v56, v58, v59[0], v60, v61, v62, v63, v64, v65);
      v28 = v27;
      if ( v27 )
        ++*(_DWORD *)(v27 + 8);
      sub_4B1860(a1[60], a1[61]);
      a1[60] = v28;
      v29 = sub_15DE370(a1[1]);
      v30 = v29;
      if ( v29 )
        ++*(_DWORD *)(v29 + 8);
      sub_4B1840(a1[62], a1[63]);
      a1[62] = v30;
    }
    else
    {
      ++*(_DWORD *)(a2 + 8);
      sub_4B1860(a1[60], a1[61]);
      a1[60] = a2;
    }
    sub_39BEE0(a1 + 6, *(_DWORD *)(a3 + 12));
    v31 = a1[60];
    v60 = v31;
    if ( v31 )
      ++*(_DWORD *)(v31 + 8);
    sub_4B2920(a1 + 7, &v60);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_15843A0(a1, a2, a1[60], a1[62]);
    sub_3A9A20(a1 + 10, *(_DWORD *)(a3 + 12));
    v32 = a1[62];
    v61 = v32;
    if ( v32 )
      ++*(_DWORD *)(v32 + 8);
    sub_4B2860(a1 + 11, &v61);
    sub_4B1840(a1[62], a1[63]);
    v33 = a1[5];
    v34 = a1[60];
    a1[62] = 0;
    v35 = *(_DWORD *)(v33 - 4);
    *(_DWORD *)(v33 - 4) = v35 - 1;
    if ( a2 != v34 && v35 != 1 )
    {
      *(_BYTE *)(v33 + 16LL * (unsigned int)(v35 - 2) + 8) |= 2u;
      v34 = a1[60];
    }
    sub_4B1860(v34, a1[61]);
    a1[60] = 0;
    return sub_4B1840(v25, v56);
  }
  return result;
}

