__int64 __fastcall sub_CB5C10(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // r15
  __int64 v6; // r14
  char v7; // al
  __int64 v8; // rbp
  char v9; // al
  __int64 v10; // r12
  char v11; // al
  int v12; // r8d
  int v13; // r9d
  char v14; // al
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // r14
  char v18; // al
  char v19; // al
  unsigned int v20; // r13d
  bool v21; // zf
  __int64 v23; // rax
  unsigned int v24; // r13d
  __int64 v25; // rax
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rax
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rbp
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rax
  char v52; // al
  int v53; // r8d
  int v54; // r9d
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v59; // [rsp+10h] [rbp-88h]
  __int64 v61; // [rsp+20h] [rbp-78h]
  __int64 v62; // [rsp+28h] [rbp-70h]
  __int64 v63; // [rsp+30h] [rbp-68h] BYREF
  __int64 v64; // [rsp+38h] [rbp-60h]
  int v65[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v66; // [rsp+48h] [rbp-50h]
  int v67[2]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v68; // [rsp+58h] [rbp-40h]

  v5 = *a1;
  v61 = v5;
  v63 = 0;
  v64 = v5;
  if ( (unsigned __int8)sub_CB20E0((__int64)a1, a2, &v63) )
  {
    *(_QWORD *)v65 = 0;
    v6 = v63;
    v59 = v64;
    v66 = v5;
    v7 = sub_CB1F80((__int64)a1, a3, (__int64 *)v65);
    v8 = *(_QWORD *)v65;
    v5 = v66;
    if ( v7 )
    {
LABEL_24:
      v23 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(v6) + 24) + 8LL);
      if ( *(_BYTE *)(v23 + 8) )
        sub_A8ADA((__int64)"std::get: wrong index for variant");
      v24 = *(_DWORD *)v23;
      v25 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(v8) + 24) + 8LL);
      if ( *(_BYTE *)(v25 + 8) )
        sub_A8ADA((__int64)"std::get: wrong index for variant");
      v28 = sub_CB29F0((__int64)a1, *(_DWORD *)v25, v6, 0, v26, v27);
      v10 = v28;
      if ( v28 )
        ++*(_DWORD *)(v28 + 8);
      v21 = (*(_DWORD *)(v6 + 8))-- == 1;
      if ( v21 )
        sub_15D7BC0(v59, v6);
      v31 = sub_CB29F0((__int64)a1, v24, v8, 0, v29, v30);
      v32 = v31;
      if ( v31 )
        ++*(_DWORD *)(v31 + 8);
      v21 = (*(_DWORD *)(v8 + 8))-- == 1;
      if ( v21 )
        sub_15D7BC0(v5, v8);
      v33 = sub_15E1B70(a1[3]);
      v34 = sub_16747F0(a1 + 2, v33);
      v35 = v34;
      if ( v34 )
        ++*(_DWORD *)(v34 + 8);
      v36 = *a4;
      if ( *a4 )
      {
        v37 = a4[1];
        v21 = (*(_DWORD *)(v36 + 8))-- == 1;
        if ( v21 )
          sub_15D7BC0(v37, v36);
      }
      goto LABEL_39;
    }
  }
  else
  {
    v8 = 0;
  }
  if ( (unsigned __int8)sub_CB20E0((__int64)a1, a3, &v63) )
  {
    *(_QWORD *)v65 = v8;
    v6 = v63;
    v59 = v64;
    v66 = v5;
    v9 = sub_CB1F80((__int64)a1, a2, (__int64 *)v65);
    v8 = *(_QWORD *)v65;
    v5 = v66;
    if ( v9 )
      goto LABEL_24;
  }
  if ( (unsigned __int8)sub_CB1F80((__int64)a1, a2, &v63) )
  {
    *(_QWORD *)v65 = v8;
    v10 = v63;
    v59 = v64;
    v66 = v5;
    v11 = sub_CB1F80((__int64)a1, a3, (__int64 *)v65);
    v8 = *(_QWORD *)v65;
    v5 = v66;
    if ( v11 )
    {
      v50 = sub_CB56B0((__int64)a1, v10, *(__int64 *)v65, 0, v12, v13);
      v51 = sub_16747F0(a1 + 2, v50);
      v35 = v51;
      if ( v51 )
        ++*(_DWORD *)(v51 + 8);
      sub_CB1660(*a4, a4[1]);
      v32 = v8;
LABEL_39:
      v8 = v32;
      v20 = 4;
      *a4 = v35;
      goto LABEL_15;
    }
  }
  if ( (unsigned __int8)sub_CB1F80((__int64)a1, a2, &v63) )
  {
    *(_QWORD *)v65 = v8;
    v10 = v63;
    v59 = v64;
    v66 = v5;
    *(_QWORD *)v67 = 0;
    v68 = v61;
    v14 = sub_CB2220((__int64)a1, a3, (__int64 *)v65, (__int64 *)v67);
    v8 = *(_QWORD *)v65;
    v17 = *(_QWORD *)v67;
    v5 = v66;
    v62 = v68;
    if ( v14 )
    {
LABEL_40:
      v38 = sub_CB56B0((__int64)a1, v10, v8, 0, v15, v16);
      v39 = sub_16747F0(a1 + 2, v38);
      v42 = v39;
      if ( v39 )
        ++*(_DWORD *)(v39 + 8);
      if ( v8 )
      {
        v21 = (*(_DWORD *)(v8 + 8))-- == 1;
        if ( v21 )
          sub_15D7BC0(v5, v8);
      }
      v43 = sub_CB56B0((__int64)a1, v10, v17, 0, v40, v41);
      v44 = sub_16747F0(a1 + 2, v43);
      v45 = v44;
      if ( v44 )
        ++*(_DWORD *)(v44 + 8);
      if ( v17 )
      {
        v21 = (*(_DWORD *)(v17 + 8))-- == 1;
        if ( v21 )
          sub_15D7BC0(v62, v17);
      }
      v46 = sub_15E1B70(a1[5]);
      v47 = v46;
      if ( v46 )
        ++*(_DWORD *)(v46 + 8);
      v48 = *a4;
      if ( *a4 )
      {
        v49 = a4[1];
        v21 = (*(_DWORD *)(v48 + 8))-- == 1;
        if ( v21 )
          sub_15D7BC0(v49, v48);
      }
      v17 = v45;
      v8 = v42;
      v20 = 4;
      *a4 = v47;
      goto LABEL_12;
    }
  }
  else
  {
    v17 = 0;
    v62 = v61;
  }
  if ( (unsigned __int8)sub_CB1F80((__int64)a1, a3, &v63) )
  {
    *(_QWORD *)v65 = v8;
    v10 = v63;
    v59 = v64;
    v66 = v5;
    *(_QWORD *)v67 = v17;
    v68 = v62;
    v18 = sub_CB2220((__int64)a1, a2, (__int64 *)v65, (__int64 *)v67);
    v8 = *(_QWORD *)v65;
    v17 = *(_QWORD *)v67;
    v5 = v66;
    v62 = v68;
    if ( v18 )
      goto LABEL_40;
  }
  v19 = sub_CB3490(a1, a2, &v63);
  v10 = v63;
  v20 = 5;
  v59 = v64;
  if ( v19 )
  {
    *(_QWORD *)v65 = v8;
    v66 = v5;
    v52 = sub_CB3490(a1, a3, (__int64 *)v65);
    v8 = *(_QWORD *)v65;
    v5 = v66;
    v20 = 5;
    if ( v52 )
    {
      v55 = sub_CB56B0((__int64)a1, v10, *(__int64 *)v65, 1, v53, v54);
      v56 = sub_CB26C0(a1, v55);
      v57 = v56;
      if ( v56 )
        ++*(_DWORD *)(v56 + 8);
      sub_CB1660(*a4, a4[1]);
      *a4 = v57;
      v20 = 4;
    }
  }
LABEL_12:
  if ( v17 )
  {
    v21 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v62, v17);
  }
LABEL_15:
  if ( v8 )
  {
    v21 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v5, v8);
  }
  if ( v10 )
  {
    v21 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v59, v10);
  }
  return v20;
}

