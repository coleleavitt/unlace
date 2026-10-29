__int64 *__fastcall sub_D85120(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r13
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdi
  bool v21; // zf
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // [rsp+0h] [rbp-90h]
  __int64 v37; // [rsp+10h] [rbp-80h]
  __int64 v39; // [rsp+20h] [rbp-70h] BYREF
  __int64 v40; // [rsp+28h] [rbp-68h]
  __int64 v41; // [rsp+30h] [rbp-60h] BYREF
  __int64 v42; // [rsp+38h] [rbp-58h]
  int v43[2]; // [rsp+40h] [rbp-50h] BYREF
  __int64 v44; // [rsp+48h] [rbp-48h]
  __int64 v45; // [rsp+50h] [rbp-40h] BYREF
  __int64 v46; // [rsp+58h] [rbp-38h]

  v6 = *(_QWORD *)(a2 + 536);
  *a1 = 0;
  a1[1] = v6;
  v39 = 0;
  v40 = v6;
  sub_D8DBA0(a2, a4, &v39, a2 + 496);
  v7 = v39;
  v8 = *(_QWORD *)(a2 + 560);
  v35 = v40;
  v9 = *(_DWORD **)(sub_15D1F10(a4) + 24);
  if ( v9 && *(_DWORD *)(v8 + 448) == *v9 && v9[1] == 1 )
  {
    v12 = *(_QWORD *)(v7 + 32);
    v46 = v6;
    v45 = 0;
    sub_14B9BF0(a3, v12, &v45);
    v13 = *(_QWORD *)(a2 + 560);
    v14 = *(_QWORD *)(v13 + 432);
    v15 = *(unsigned int *)(v13 + 448);
    *(_QWORD *)v43 = v45;
    v16 = sub_15D2CD0(v14, v15, 1, 0, 0);
    v17 = sub_15DCAD0(v14, (int)v43, v16);
    v18 = v17;
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
    v19 = *a1;
    if ( *a1 )
    {
      v20 = a1[1];
      v21 = (*(_DWORD *)(v19 + 8))-- == 1;
      if ( v21 )
        sub_15D7BC0(v20, v19);
    }
    v22 = v45;
    *a1 = v18;
    if ( v22 )
    {
      v23 = v46;
      v21 = (*(_DWORD *)(v22 + 8))-- == 1;
      if ( v21 )
        sub_15D7BC0(v23, v22);
    }
LABEL_17:
    v21 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v35, v7);
    return a1;
  }
  v37 = *(_QWORD *)(a2 + 560);
  v10 = *(_DWORD **)(sub_15D1F10(a4) + 24);
  if ( !v10 || *(_DWORD *)(v37 + 448) != *v10 || v10[1] )
  {
    sub_1872CE0("");
    sub_1873130(114, 320);
  }
  v42 = v6;
  v44 = v6;
  v24 = *(_QWORD *)(a2 + 560);
  v46 = v6;
  v41 = 0;
  *(_QWORD *)v43 = 0;
  v45 = 0;
  sub_D51BC0(v24, v7, &v41, &v45, (__int64 *)v43);
  sub_14B9B80(a3, &v41);
  sub_14B9B80(a3, &v45);
  sub_14B9B80(a3, v43);
  v25 = sub_15E1BF0(*(_QWORD *)(*(_QWORD *)(a2 + 560) + 432LL));
  v26 = v25;
  if ( v25 )
    ++*(_DWORD *)(v25 + 8);
  v27 = *a1;
  if ( *a1 )
  {
    v28 = a1[1];
    v21 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v28, v27);
  }
  v29 = v45;
  *a1 = v26;
  if ( v29 )
  {
    v30 = v46;
    v21 = (*(_DWORD *)(v29 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v30, v29);
  }
  v31 = *(_QWORD *)v43;
  if ( *(_QWORD *)v43 )
  {
    v32 = v44;
    v21 = (*(_DWORD *)(*(_QWORD *)v43 + 8LL))-- == 1;
    if ( v21 )
      sub_15D7BC0(v32, v31);
  }
  v33 = v41;
  if ( v41 )
  {
    v34 = v42;
    v21 = (*(_DWORD *)(v41 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v34, v33);
  }
  if ( v7 )
    goto LABEL_17;
  return a1;
}

