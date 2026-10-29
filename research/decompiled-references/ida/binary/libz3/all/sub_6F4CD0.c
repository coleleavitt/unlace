__int64 __fastcall sub_6F4CD0(__int64 *a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v7; // r12d
  __int64 v8; // rsi
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rax
  int v14; // r13d
  __int64 v15; // rdx
  _QWORD *v16; // r15
  unsigned int v17; // r13d
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  __int64 v23; // r12
  __int64 v24; // rax
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // r13
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // r15
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // r12
  __int64 v51; // rax
  int v52; // ecx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdi
  int v57; // ecx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r13
  __int64 v62; // rax
  __int64 v63; // r13
  __int64 v64; // rax
  int v65; // [rsp+0h] [rbp-78h]
  __int64 v66; // [rsp+8h] [rbp-70h]
  __int64 v67; // [rsp+8h] [rbp-70h]
  __int64 v68; // [rsp+10h] [rbp-68h]
  int v69[2]; // [rsp+18h] [rbp-60h]
  __int64 v70; // [rsp+20h] [rbp-58h] BYREF
  __int64 v71; // [rsp+28h] [rbp-50h] BYREF
  __int64 v72; // [rsp+30h] [rbp-48h] BYREF
  __int64 v73; // [rsp+38h] [rbp-40h] BYREF
  int v74; // [rsp+40h] [rbp-38h]
  void *v75; // [rsp+48h] [rbp-30h]

  v3 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v3 == 2 )
  {
    v37 = 515;
LABEL_27:
    sub_1872CE0("");
    sub_1873130(107, v37);
  }
  if ( v3 == 3 )
  {
    v37 = 520;
    goto LABEL_27;
  }
  if ( v3 )
  {
    v38 = a1[11];
    v67 = a1[1];
    v39 = 0x7FFFFFFF8LL;
    if ( v38 )
      v39 = 8LL * (unsigned int)(*(_DWORD *)(v38 - 4) - 1);
    v40 = *(_QWORD *)(v38 + v39);
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
    v44 = sub_15E2470(a1[1], v43, v40);
    v45 = a1[62];
    v46 = a1[63];
    v47 = v44;
    if ( v44 )
    {
      ++*(_DWORD *)(v44 + 8);
      sub_6EF3E0(v45, v46);
      a1[62] = v47;
      ++*(_DWORD *)(v47 + 8);
      v73 = v47;
    }
    else
    {
      sub_6EF3E0(v45, v46);
      a1[62] = 0;
      v73 = 0;
    }
    sub_6EF800(a1 + 11, &v73);
    sub_6EF3E0(v43, v67);
    sub_6EF3E0(v40, v67);
    v48 = a1[7];
    v49 = 0x7FFFFFFF8LL;
    if ( v48 )
      v49 = 8LL * (unsigned int)(*(_DWORD *)(v48 - 4) - 1);
    v50 = *(_QWORD *)(v48 + v49);
    if ( v50 )
      ++*(_DWORD *)(v50 + 8);
    sub_6EF400(a1[60], a1[61]);
    a1[60] = v50;
    sub_39BF70(a1 + 6);
    sub_39BF70(a1 + 6);
    v51 = a1[60];
    v73 = v51;
    if ( v51 )
      ++*(_DWORD *)(v51 + 8);
    sub_6EFE70(a1 + 7, &v73);
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
      result = sub_6F4990(a1, v8, ((unsigned __int8)v9 >> 4) & 3);
      if ( !(_BYTE)result )
        return result;
    }
    v66 = *(_QWORD *)(a2 + 16);
    v13 = a1[7];
    if ( v13 )
      v14 = *(_DWORD *)(v13 - 4);
    else
      v14 = 0;
    v15 = *(unsigned int *)(a3 + 12);
    v16 = (_QWORD *)(v13 + 8 * v15);
    v17 = v14 - v15;
    v68 = a1[1];
    sub_1584610(a1, v15);
    v20 = a1[11];
    if ( v20 )
      v21 = *(_DWORD *)(v20 - 4);
    else
      v21 = 0;
    v22 = v21 - *(_DWORD *)(a3 + 12);
    if ( v22 )
    {
      v58 = sub_15DC610(a1[1], v66, v17, (int)v16, v18, v19, v65, v66, v68, v22, v70, v71, v72, v73, v74, v75);
      v23 = v58;
      if ( v58 )
        ++*(_DWORD *)(v58 + 8);
      v59 = sub_15E2980(a1[1]);
      if ( v59 )
        ++*(_DWORD *)(v59 + 8);
      *(_QWORD *)v69 = v59;
      sub_6EF3E0(a1[62], a1[63]);
      v24 = *(_QWORD *)v69;
    }
    else
    {
      ++*(_DWORD *)(a2 + 8);
      sub_6EF3E0(a1[62], a1[63]);
      v23 = a2;
      v24 = 0;
    }
    a1[62] = v24;
    if ( (unsigned int)sub_6EF470(a1[18], v66, v17, v16, a1 + 60) == 5 )
    {
      if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
      {
        v60 = sub_15DC610(a1[1], v66, v17, (int)v16, v25, v26, v65, v66, v68, v69[0], v70, v71, v72, v73, v74, v75);
        v61 = v60;
        if ( v60 )
          ++*(_DWORD *)(v60 + 8);
        sub_6EF400(a1[60], a1[61]);
        a1[60] = v61;
        v62 = sub_15DE370(a1[1]);
        v63 = v62;
        if ( v62 )
          ++*(_DWORD *)(v62 + 8);
        sub_6EF3E0(a1[62], a1[63]);
        a1[62] = v63;
      }
      else
      {
        ++*(_DWORD *)(a2 + 8);
        sub_6EF400(a1[60], a1[61]);
        a1[60] = a2;
      }
      sub_39BEE0(a1 + 6, *(_DWORD *)(a3 + 12));
      v53 = a1[60];
      v72 = v53;
      if ( v53 )
        ++*(_DWORD *)(v53 + 8);
      sub_6EFE70(a1 + 7, &v72);
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        sub_15843A0(a1, a2, a1[60], a1[62]);
      sub_3A9A20(a1 + 10, *(_DWORD *)(a3 + 12));
      v54 = a1[62];
      v73 = v54;
      if ( v54 )
        ++*(_DWORD *)(v54 + 8);
      sub_6EF800(a1 + 11, &v73);
      sub_6EF3E0(a1[62], a1[63]);
      v55 = a1[5];
      v56 = a1[60];
      a1[62] = 0;
      v57 = *(_DWORD *)(v55 - 4);
      *(_DWORD *)(v55 - 4) = v57 - 1;
      if ( a2 != v56 && v57 != 1 )
      {
        *(_BYTE *)(v55 + 16LL * (unsigned int)(v57 - 2) + 8) |= 2u;
        v56 = a1[60];
      }
      sub_6EF400(v56, a1[61]);
      a1[60] = 0;
    }
    else
    {
      sub_39BEE0(a1 + 6, *(_DWORD *)(a3 + 12));
      v27 = a1[60];
      v70 = v27;
      if ( v27 )
        ++*(_DWORD *)(v27 + 8);
      sub_6EFE70(a1 + 7, &v70);
      sub_3A9A20(a1 + 10, *(_DWORD *)(a3 + 12));
      v28 = a1[64];
      if ( !v28 )
      {
        v64 = sub_15DE370(a1[1]);
        v28 = v64;
        if ( v64 )
          ++*(_DWORD *)(v64 + 8);
        sub_6EF3E0(a1[64], a1[65]);
        a1[64] = v28;
      }
      v29 = sub_15E2470(a1[1], a1[62], v28);
      v30 = a1[63];
      v31 = a1[62];
      v32 = v29;
      if ( v29 )
      {
        ++*(_DWORD *)(v29 + 8);
        sub_6EF3E0(v31, v30);
        a1[62] = v32;
        ++*(_DWORD *)(v32 + 8);
        v71 = v32;
      }
      else
      {
        sub_6EF3E0(v31, v30);
        a1[62] = 0;
        v71 = 0;
      }
      sub_6EF800(a1 + 11, &v71);
      sub_6EF3E0(a1[64], a1[65]);
      a1[64] = 0;
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        sub_15843A0(a1, a2, a1[60], a1[62]);
      v33 = a1[5];
      v34 = *(_DWORD *)(v33 - 4);
      *(_DWORD *)(v33 - 4) = v34 - 1;
      if ( v34 != 1 )
        *(_BYTE *)(v33 + 16LL * (unsigned int)(v34 - 2) + 8) |= 2u;
      sub_6EF400(a1[60], a1[61]);
      v35 = a1[63];
      v36 = a1[62];
      a1[60] = 0;
      sub_6EF3E0(v36, v35);
      a1[62] = 0;
    }
    return sub_6EF3E0(v23, v68);
  }
  return result;
}

