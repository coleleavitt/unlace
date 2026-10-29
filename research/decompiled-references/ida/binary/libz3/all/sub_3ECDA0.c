__int64 __fastcall sub_3ECDA0(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rax
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  _BOOL4 v9; // edx
  _DWORD *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 result; // rax
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rdi
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // r13
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // r15
  _DWORD *v35; // rax
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // r13
  bool v40; // dl
  __int64 v41; // rdi
  __int64 v42; // rax
  bool v45; // [rsp+20h] [rbp-78h]
  _BOOL4 v46; // [rsp+20h] [rbp-78h]
  _QWORD *v47; // [rsp+30h] [rbp-68h]
  __int64 v48; // [rsp+38h] [rbp-60h]
  __int64 v49; // [rsp+40h] [rbp-58h] BYREF
  __int64 v50; // [rsp+48h] [rbp-50h]
  __int64 v51; // [rsp+50h] [rbp-48h] BYREF
  __int64 v52; // [rsp+58h] [rbp-40h]

  v48 = *a1;
  v47 = a1 + 1;
  v5 = sub_15D2CD0(a1[1], 5, 1, 0, 0);
  v9 = 0;
  v10 = *(_DWORD **)(v5 + 24);
  if ( v10 && *v10 == 5 )
    v9 = v10[1] == 1;
  v11 = a1[2];
  if ( !v11 )
  {
    v46 = v9;
    sub_16669E0(v47);
    v11 = a1[2];
    v9 = v46;
  }
  v12 = sub_166A700(v11, (unsigned int)&qword_1C7F2A0, v9, v6, v7, v8);
  v13 = v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v14 = *a1;
  v15 = 0;
  v49 = 0;
  v51 = 0;
  v50 = v14;
  v52 = v14;
  result = a1[6];
  if ( result )
  {
    while ( 1 )
    {
      if ( v15 >= *(_DWORD *)(result - 4) )
      {
LABEL_23:
        v28 = v51;
        v29 = v52;
        if ( v51 )
        {
          v23 = (*(_DWORD *)(v51 + 8))-- == 1;
          if ( v23 )
            result = sub_15D7BC0(v29, v28);
        }
        v30 = v49;
        v31 = v50;
        if ( v49 )
        {
          v23 = (*(_DWORD *)(v49 + 8))-- == 1;
          if ( v23 )
            result = sub_15D7BC0(v31, v30);
        }
        goto LABEL_29;
      }
      if ( a4 == v15 )
      {
        v27 = *(_QWORD *)(*a1 + 856);
        if ( v27 )
          ++*(_DWORD *)(v27 + 8);
        v32 = v51;
        if ( v51 )
        {
          v33 = v52;
          v23 = (*(_DWORD *)(v51 + 8))-- == 1;
          if ( v23 )
          {
            sub_15D7BC0(v33, v32);
            result = a1[6];
          }
        }
        v51 = v27;
        v17 = 8LL * v15;
        goto LABEL_22;
      }
      v17 = 8LL * v15;
      v18 = sub_15E1B70(a1[1]);
      v19 = v15;
      v20 = v18;
      if ( v18 )
        ++*(_DWORD *)(v18 + 8);
      v21 = v49;
      if ( v49 )
      {
        v22 = v50;
        v23 = (*(_DWORD *)(v49 + 8))-- == 1;
        if ( v23 )
        {
          sub_15D7BC0(v22, v21);
          v19 = v15;
        }
      }
      v24 = a1[10];
      v49 = v20;
      if ( *(_DWORD *)(v24 + 32LL * v15) )
        break;
      if ( *(_BYTE *)(a1[12] + v19) )
        v25 = sub_15E1B70(*a1);
      else
        v25 = sub_15E1B70(a1[1]);
      v26 = v25;
      if ( v25 )
        ++*(_DWORD *)(v25 + 8);
      sub_3E5D20(v51, v52);
      v51 = v26;
      sub_14B9B80(a1 + 3, &v51);
      v27 = v51;
      result = a1[6];
LABEL_22:
      sub_15B9070(a3, *(_QWORD *)(result + v17), v27, 0);
      result = a1[6];
      ++v15;
      if ( !result )
        goto LABEL_23;
    }
    sub_14B9B80(a1 + 3, &v49);
    v34 = *a1;
    v35 = *(_DWORD **)(sub_15D2CD0(a1[1], 5, 1, 0, 0) + 24);
    v39 = a1[10] + 32LL * v15;
    v40 = 0;
    if ( v35 && *v35 == 5 )
    {
      v41 = a1[2];
      v40 = v35[1] == 1;
      if ( v41 )
        goto LABEL_41;
    }
    else
    {
      v41 = a1[2];
      if ( v41 )
      {
LABEL_41:
        sub_166A700(v41, v39, v40, v36, v37, v38);
        sub_15E1B70(a1[1]);
        v42 = sub_15E1B70(v34);
        v27 = v42;
        if ( v42 )
          ++*(_DWORD *)(v42 + 8);
        sub_3E5D20(v51, v52);
        v51 = v27;
        result = a1[6];
        goto LABEL_22;
      }
    }
    v45 = v40;
    sub_16669E0(v47);
    v41 = a1[2];
    v40 = v45;
    goto LABEL_41;
  }
LABEL_29:
  if ( v13 )
  {
    v23 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v23 )
      return sub_15D7BC0(v48, v13);
  }
  return result;
}

