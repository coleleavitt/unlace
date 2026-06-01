__int64 (__fastcall **__fastcall sub_7D9230(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, int a5))()
{
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r15
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  int v16; // r9d
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbx
  unsigned __int64 v21; // rax
  __int16 v22; // ax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r14
  __int64 *v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r15
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r15
  __int64 *v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 *v39; // rax
  unsigned __int64 v40; // r14
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // [rsp+10h] [rbp-98h]
  unsigned __int64 v46; // [rsp+10h] [rbp-98h]
  __int64 v47; // [rsp+10h] [rbp-98h]
  unsigned __int64 v48; // [rsp+20h] [rbp-88h]
  __int64 v50; // [rsp+38h] [rbp-70h]
  _QWORD v51[2]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v52; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v53; // [rsp+58h] [rbp-50h]
  unsigned __int64 v54; // [rsp+60h] [rbp-48h]
  unsigned __int64 v55; // [rsp+68h] [rbp-40h]

  if ( a5 == 1 )
  {
    v38 = sub_6CABB0(a2);
    v39 = sub_6C38B0(a2, v38, 0);
    v40 = sub_7D5420(a2, a3, 0, 0, 0, 0, 0, *v39, 0, (__int64)v39);
    v41 = sub_7D06A0(a2, a3, 0, 0, 0, 1u, 1, 1u);
    v16 = 2;
    *(_BYTE *)(v41 + 29) |= 2u;
    v53 = v41;
    v42 = a2[274];
    v52 = v40;
    a2[284] += 40LL;
    v17 = (v42 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v18 = v17 + 40;
    if ( a2[275] < v17 + 40 || !v42 )
    {
      v43 = sub_7CF9B0((__int64)(a2 + 274), 40, 3);
      v16 = 2;
      v17 = v43;
      goto LABEL_12;
    }
  }
  else if ( a5 == 2 )
  {
    v7 = sub_7D06A0(a2, a3, 0, 0, 1u, 0, 0, 1u);
    a2[284] += 32LL;
    v52 = v7;
    v50 = (__int64)(a2 + 274);
    v8 = a2[274];
    v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a2[275] >= (unsigned __int64)(v9 + 32) && v8 )
      a2[274] = v9 + 32;
    else
      v9 = sub_7CF9B0(v50, 32, 3);
    sub_7D1960(v9, (__int64)a2, 0, 0, (__int64)&v52, 1, 0, 0);
    v10 = sub_7D5B60(a2, a3, 0, 0, 0, 0, 0, 0, v9);
    v11 = sub_7D06A0(a2, a3, 0, 0, 1u, 0, 0, 0);
    v12 = a2[274];
    a2[284] += 32LL;
    v52 = v11;
    v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a2[275] >= (unsigned __int64)(v13 + 32) && v12 )
      a2[274] = v13 + 32;
    else
      v13 = sub_7CF9B0(v50, 32, 3);
    v45 = v13;
    sub_7D1960(v13, (__int64)a2, 0, 0, (__int64)&v52, 1, 0, 0);
    v48 = sub_7D5B60(a2, a3, 0, 0, 1, 0, 0, 0, v45);
    v46 = sub_7D06A0(a2, a3, 0, 0, 0, 2u, 0, 0);
    v14 = sub_7D06A0(a2, a3, 0, 0, 0, 3u, 0, 1u);
    v52 = v10;
    v55 = v14;
    v15 = a2[274];
    v16 = 4;
    v53 = v48;
    a2[284] += 56LL;
    v17 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v54 = v46;
    v18 = v17 + 56;
    if ( a2[275] < v17 + 56 || !v15 )
    {
      v44 = sub_7CF9B0(v50, 56, 3);
      v16 = 4;
      v17 = v44;
      goto LABEL_12;
    }
  }
  else
  {
    v24 = sub_7D06A0(a2, a3, 0, 0, 1u, 0, 1, 0);
    *(_BYTE *)(v24 + 29) |= 2u;
    v25 = v24;
    v26 = sub_6C38B0(a2, *(_QWORD *)(v24 + 48) & 0xFFFFFFFFFFFFFFF0LL, 0);
    v27 = sub_7D5420(a2, a3, 0, 0, 0, 1, 0, *v26, 1, (__int64)v26);
    *(_BYTE *)(v27 + 29) |= 2u;
    v51[1] = v27;
    v47 = (__int64)(a2 + 274);
    v28 = a2[274];
    v51[0] = v25;
    a2[284] += 40LL;
    v29 = (v28 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a2[275] >= (unsigned __int64)(v29 + 40) && v28 )
      a2[274] = v29 + 40;
    else
      v29 = sub_7CF9B0(v47, 40, 3);
    sub_7D1960(v29, (__int64)a2, 0, 0, (__int64)v51, 2, 0, 0);
    v30 = sub_7D5B60(a2, a3, 0, 0, 0, 0, 0, 0, v29);
    *(_BYTE *)(v30 + 29) |= 2u;
    v31 = v30;
    v32 = sub_7D06A0(a2, a3, 0, 0, 0, 1u, 1, 0);
    *(_BYTE *)(v32 + 29) |= 2u;
    v33 = v32;
    v34 = sub_6C38B0(a2, *(_QWORD *)(v32 + 48) & 0xFFFFFFFFFFFFFFF0LL, 0);
    v35 = sub_7D5420(a2, a3, 0, 0, 0, 2, 0, *v34, 0, (__int64)v34);
    v53 = v33;
    v16 = 3;
    v54 = v35;
    v36 = a2[274];
    v52 = v31;
    a2[284] += 48LL;
    v17 = (v36 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v18 = v17 + 48;
    if ( a2[275] < v17 + 48 || !v36 )
    {
      v37 = sub_7CF9B0(v47, 48, 3);
      v16 = 3;
      v17 = v37;
      goto LABEL_12;
    }
  }
  a2[274] = v18;
LABEL_12:
  sub_7D1960(v17, (__int64)a2, 0, 0, (__int64)&v52, v16, 0, 0);
  *(_QWORD *)a1 = off_49F5208;
  if ( !a3
    || (v19 = sub_79A2E0(a3), v20 = *(_QWORD *)(v19 + 8) & 7LL, (*(_QWORD *)(v19 + 8) & 7) == 0)
    || *(char *)(v19 + 29) < 0 && !sub_7946A0(v19) )
  {
    v20 = 0;
  }
  *(_QWORD *)(a1 + 8) = v20;
  v21 = *(_QWORD *)(a1 + 24) & 0xFFFF000000000000LL;
  *(_QWORD *)(a1 + 16) = a3 & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)(a1 + 24) = v21 | 0x604800000000LL;
  v22 = sub_799DF0(0x48u);
  *(_BYTE *)(a1 + 32) &= 0xF8u;
  *(_WORD *)(a1 + 30) = v22 & 0x3FFF | *(_WORD *)(a1 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(72);
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = v17;
  *(_QWORD *)(a1 + 40) = a4;
  *(_DWORD *)(a1 + 64) = a5;
  *(_QWORD *)a1 = &off_49F6BC8;
  return &off_49F6BC8;
}

