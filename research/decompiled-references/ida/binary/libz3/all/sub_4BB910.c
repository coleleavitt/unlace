__int64 __fastcall sub_4BB910(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v7; // r13d
  __int64 v8; // rsi
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rsi
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  int v19; // eax
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // r13
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // r14
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // r13
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdi
  int v38; // ecx
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // rdx
  __int64 *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // r13
  __int64 v54; // rax
  int v55; // ecx
  __int64 v56; // rax
  __int64 v57; // rax
  int v58; // [rsp+0h] [rbp-78h]
  __int64 v59; // [rsp+0h] [rbp-78h]
  __int64 v60; // [rsp+0h] [rbp-78h]
  __int64 v61; // [rsp+8h] [rbp-70h]
  int v62[2]; // [rsp+10h] [rbp-68h]
  __int64 v63; // [rsp+18h] [rbp-60h]
  int v64; // [rsp+20h] [rbp-58h]
  char v65; // [rsp+28h] [rbp-50h]
  __int64 v66; // [rsp+30h] [rbp-48h] BYREF
  __int64 v67; // [rsp+38h] [rbp-40h] BYREF
  int v68; // [rsp+40h] [rbp-38h]
  void *v69; // [rsp+48h] [rbp-30h]

  v3 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v3 == 2 )
  {
    v39 = 515;
LABEL_37:
    sub_1872CE0("");
    sub_1873130(107, v39);
  }
  if ( v3 == 3 )
  {
    v39 = 520;
    goto LABEL_37;
  }
  if ( v3 )
  {
    v40 = a1[11];
    v41 = a1[1];
    v42 = 0x7FFFFFFF8LL;
    if ( v40 )
      v42 = 8LL * (unsigned int)(*(_DWORD *)(v40 - 4) - 1);
    v43 = *(_QWORD *)(v40 + v42);
    if ( v43 )
      ++*(_DWORD *)(v43 + 8);
    sub_3A8160(a1 + 10);
    v44 = a1[11];
    v45 = a1 + 10;
    v46 = 0x7FFFFFFF8LL;
    if ( v44 )
      v46 = 8LL * (unsigned int)(*(_DWORD *)(v44 - 4) - 1);
    v47 = *(_QWORD *)(v44 + v46);
    if ( v47 )
      ++*(_DWORD *)(v47 + 8);
    sub_3A8160(v45);
    v48 = sub_15E2470(a1[1], v47, v43);
    v49 = a1[63];
    v50 = a1[62];
    if ( v48 )
    {
      ++*(_DWORD *)(v48 + 8);
      v60 = v48;
      sub_4B1840(v50, v49);
      a1[62] = v60;
      ++*(_DWORD *)(v60 + 8);
      v67 = v60;
    }
    else
    {
      sub_4B1840(v50, v49);
      a1[62] = 0;
      v67 = 0;
    }
    sub_4B2860(a1 + 11, &v67);
    sub_4B1840(v47, v41);
    sub_4B1840(v43, v41);
    v51 = a1[7];
    v52 = 0x7FFFFFFF8LL;
    if ( v51 )
      v52 = 8LL * (unsigned int)(*(_DWORD *)(v51 - 4) - 1);
    v53 = *(_QWORD *)(v51 + v52);
    if ( v53 )
      ++*(_DWORD *)(v53 + 8);
    sub_4B1860(a1[60], a1[61]);
    a1[60] = v53;
    sub_39BF70(a1 + 6);
    sub_39BF70(a1 + 6);
    v54 = a1[60];
    v67 = v54;
    if ( v54 )
      ++*(_DWORD *)(v54 + 8);
    sub_4B2920(a1 + 7, &v67);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_15843A0(a1, a2, a1[60], a1[62]);
    result = a1[5];
    v55 = *(_DWORD *)(result - 4);
    *(_DWORD *)(result - 4) = v55 - 1;
    if ( v55 != 1 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v55 - 2) + 8) |= 2u;
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
      result = sub_4BAA60(a1, v8, ((unsigned __int8)v9 >> 4) & 3);
      if ( !(_BYTE)result )
        return result;
    }
    *(_QWORD *)v62 = *(_QWORD *)(a2 + 16);
    v13 = a1[7];
    if ( v13 )
      v14 = *(_DWORD *)(v13 - 4);
    else
      v14 = 0;
    v15 = *(unsigned int *)(a3 + 12);
    HIDWORD(v63) = v14 - v15;
    v64 = v13 + 8 * v15;
    v61 = a1[1];
    sub_1584610(a1, v15);
    v18 = a1[11];
    if ( v18 )
      v19 = *(_DWORD *)(v18 - 4);
    else
      v19 = 0;
    if ( v19 == *(_DWORD *)(a3 + 12) )
    {
      ++*(_DWORD *)(a2 + 8);
      sub_4B1840(a1[62], a1[63]);
      v59 = a2;
      v22 = 0;
    }
    else
    {
      v56 = sub_15DC610(
              a1[1],
              v62[0],
              SHIDWORD(v63),
              v64,
              v16,
              v17,
              v58,
              v61,
              v62[0],
              v63,
              v64,
              v65,
              v66,
              v67,
              v68,
              v69);
      v59 = v56;
      if ( v56 )
        ++*(_DWORD *)(v56 + 8);
      v57 = sub_15E2980(a1[1]);
      v22 = v57;
      if ( v57 )
        ++*(_DWORD *)(v57 + 8);
      sub_4B1840(a1[62], a1[63]);
    }
    v23 = a1[18];
    a1[62] = v22;
    v24 = (unsigned int)(*(_DWORD *)(v23 + 168) - 1);
    v25 = *(_QWORD *)(*(_QWORD *)(v23 + 160) + 8 * v24);
    *(_DWORD *)(v23 + 168) = v24;
    if ( !*(_WORD *)(v25 + 4) )
    {
      v26 = *(unsigned int *)(v25 + 24);
      if ( (_DWORD)v26 )
      {
        v27 = v25;
        v28 = v25 + 8 * v26;
        v29 = v23 + 80;
        while ( !(unsigned __int8)sub_15D37A0(v29, *(_QWORD *)(v27 + 32)) )
        {
          v27 += 8;
          if ( v28 == v27 )
            goto LABEL_19;
        }
        sub_15D0A90(v29, v25, 1);
      }
    }
LABEL_19:
    if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
    {
      v30 = sub_15DC610(
              a1[1],
              v62[0],
              SHIDWORD(v63),
              v64,
              v20,
              v21,
              v59,
              v61,
              v62[0],
              v63,
              v64,
              v25,
              v66,
              v67,
              v68,
              v69);
      v31 = v30;
      if ( v30 )
        ++*(_DWORD *)(v30 + 8);
      sub_4B1860(a1[60], a1[61]);
      a1[60] = v31;
      v32 = sub_15DE370(a1[1]);
      v33 = v32;
      if ( v32 )
        ++*(_DWORD *)(v32 + 8);
      sub_4B1840(a1[62], a1[63]);
      a1[62] = v33;
    }
    else
    {
      ++*(_DWORD *)(a2 + 8);
      sub_4B1860(a1[60], a1[61]);
      a1[60] = a2;
    }
    sub_39BEE0(a1 + 6, *(_DWORD *)(a3 + 12));
    v34 = a1[60];
    v66 = v34;
    if ( v34 )
      ++*(_DWORD *)(v34 + 8);
    sub_4B2920(a1 + 7, &v66);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_15843A0(a1, a2, a1[60], a1[62]);
    sub_3A9A20(a1 + 10, *(_DWORD *)(a3 + 12));
    v35 = a1[62];
    v67 = v35;
    if ( v35 )
      ++*(_DWORD *)(v35 + 8);
    sub_4B2860(a1 + 11, &v67);
    sub_4B1840(a1[62], a1[63]);
    v36 = a1[5];
    v37 = a1[60];
    a1[62] = 0;
    v38 = *(_DWORD *)(v36 - 4);
    *(_DWORD *)(v36 - 4) = v38 - 1;
    if ( a2 != v37 && v38 != 1 )
    {
      *(_BYTE *)(v36 + 16LL * (unsigned int)(v38 - 2) + 8) |= 2u;
      v37 = a1[60];
    }
    sub_4B1860(v37, a1[61]);
    a1[60] = 0;
    return sub_4B1840(v59, v61);
  }
  return result;
}

