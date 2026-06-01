__int64 __fastcall sub_B540A0(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 *v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 result; // rax
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  __int64 v17; // r15
  _DWORD *v18; // rax
  _DWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdi
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rbp
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdi
  _DWORD *v36; // rax
  _DWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // [rsp+0h] [rbp-98h]
  __int64 v43; // [rsp+0h] [rbp-98h]
  __int64 v44; // [rsp+8h] [rbp-90h]
  __int64 v45; // [rsp+10h] [rbp-88h]
  __int64 v46; // [rsp+18h] [rbp-80h]
  __int64 v47[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v48[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v49; // [rsp+40h] [rbp-58h] BYREF
  __int64 v50; // [rsp+48h] [rbp-50h]
  int v51[2]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v52; // [rsp+58h] [rbp-40h]

  v7 = a1[4];
  v8 = a1[173];
  v9 = *(__int64 **)(v7 + 8LL * a2);
  v10 = *v9;
  v11 = **(_QWORD **)(v7 + 8LL * a3);
  result = *(unsigned int *)(v8 + 16);
  if ( !*(_WORD *)(*v9 + 4)
    && *(_QWORD *)(*(_QWORD *)(v10 + 16) + 24LL)
    && **(_QWORD **)(*(_QWORD *)(v10 + 16) + 24LL) == ((unsigned int)result | 0x3000000000LL)
    || !*(_WORD *)(v11 + 4)
    && *(_QWORD *)(*(_QWORD *)(v11 + 16) + 24LL)
    && **(_QWORD **)(*(_QWORD *)(v11 + 16) + 24LL) == ((unsigned int)result | 0x3000000000LL) )
  {
    return result;
  }
  sub_B53280(v47, (__int64)a1, *v9, (__int64)v9, a5, a6);
  v13 = v47[0];
  v45 = v47[1];
  sub_B53280(v48, (__int64)a1, v11, v14, v15, v16);
  v17 = v48[0];
  v49 = 0;
  v44 = v48[1];
  v50 = a1[3];
  v18 = *(_DWORD **)(sub_15D1F10(v10) + 24);
  if ( v18
    && *(_DWORD *)(v8 + 16) == *v18
    && !v18[1]
    && (v37 = *(_DWORD **)(sub_15D1F10(v11) + 24)) != nullptr
    && *(_DWORD *)(v8 + 16) == *v37
    && !v37[1]
    || (v19 = *(_DWORD **)(sub_15D1F10(v10) + 24)) != nullptr
    && *(_DWORD *)(v8 + 16) == *v19
    && v19[1] == 1
    && (v36 = *(_DWORD **)(sub_15D1F10(v11) + 24)) != nullptr
    && *(_DWORD *)(v8 + 16) == *v36
    && v36[1] == 1 )
  {
    sub_D5C100(a1 + 9, v13, v17, &v49);
    v38 = sub_15E1A70(a1[3]);
    v39 = v38;
    if ( v38 )
      ++*(_DWORD *)(v38 + 8);
    v40 = v49;
    if ( v49 )
    {
      v41 = v50;
      v25 = (*(_DWORD *)(v49 + 8))-- == 1;
      if ( v25 )
        sub_15D7BC0(v41, v40);
    }
    v49 = v39;
    goto LABEL_18;
  }
  v46 = a1[3];
  v20 = sub_15E1B70(v46);
  v21 = v20;
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  v22 = sub_15E1A70(a1[3]);
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  v23 = v49;
  if ( v49 && (v24 = v50, v25 = *(_DWORD *)(v49 + 8) == 1, --*(_DWORD *)(v49 + 8), v25) )
  {
    v43 = v22;
    sub_15D7BC0(v24, v23);
    v49 = v43;
    if ( v21 )
    {
LABEL_16:
      v25 = (*(_DWORD *)(v21 + 8))-- == 1;
      if ( v25 )
        sub_15D7BC0(v46, v21);
    }
  }
  else
  {
    v49 = v22;
    if ( v21 )
      goto LABEL_16;
  }
LABEL_18:
  sub_14B9B80(a1 + 7, &v49);
  v42 = a1[3];
  v26 = sub_15E1B70(v42);
  v27 = v26;
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  v28 = sub_15E1A70(a1[3]);
  v29 = v28;
  if ( v28 )
    ++*(_DWORD *)(v28 + 8);
  v30 = sub_15E1B70(a1[3]);
  v31 = v30;
  if ( v30 )
    ++*(_DWORD *)(v30 + 8);
  sub_B52AB0((__int64)a1, v30);
  sub_B537F0((__int64 *)v51, a1);
  result = sub_B52AB0((__int64)a1, *(__int64 *)v51);
  v32 = *(_QWORD *)v51;
  if ( *(_QWORD *)v51 )
  {
    v33 = v52;
    v25 = (*(_DWORD *)(*(_QWORD *)v51 + 8LL))-- == 1;
    if ( v25 )
      result = sub_15D7BC0(v33, v32);
  }
  if ( v31 )
  {
    v25 = (*(_DWORD *)(v31 + 8))-- == 1;
    if ( v25 )
      result = sub_15D7BC0(v42, v31);
  }
  if ( v29 )
  {
    v25 = (*(_DWORD *)(v29 + 8))-- == 1;
    if ( v25 )
      result = sub_15D7BC0(v42, v29);
  }
  if ( v27 )
  {
    v25 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v25 )
      result = sub_15D7BC0(v42, v27);
  }
  v34 = v49;
  if ( v49 )
  {
    v35 = v50;
    v25 = (*(_DWORD *)(v49 + 8))-- == 1;
    if ( v25 )
      result = sub_15D7BC0(v35, v34);
  }
  if ( v17 )
  {
    v25 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v25 )
      result = sub_15D7BC0(v44, v17);
  }
  if ( v13 )
  {
    v25 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v25 )
      return sub_15D7BC0(v45, v13);
  }
  return result;
}

