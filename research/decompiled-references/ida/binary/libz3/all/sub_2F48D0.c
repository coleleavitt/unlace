__int64 *__fastcall sub_2F48D0(__int64 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  int *v7; // r12
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // r12
  _DWORD *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 *v21; // r13
  unsigned int v22; // r14d
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rax
  unsigned int v26; // ecx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rbx
  __int64 v33; // rax
  __int64 v34; // [rsp+8h] [rbp-A0h]
  int v35[2]; // [rsp+10h] [rbp-98h]
  _QWORD *v36; // [rsp+30h] [rbp-78h]
  __int64 v37; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v38; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v39[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v40[9]; // [rsp+60h] [rbp-48h] BYREF

  v5 = a2[74];
  v6 = a2[1];
  *a1 = 0;
  v7 = (int *)(v5 + 104LL * a3);
  a1[1] = v6;
  v8 = a2[1];
  v9 = *v7;
  v37 = v8;
  if ( v9 == 1 )
  {
    v15 = *((_QWORD *)v7 + 1);
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    sub_2EB430(0, v6);
    goto LABEL_32;
  }
  if ( v9 != 2 )
  {
    if ( v9 )
    {
LABEL_33:
      v34 = 0;
      v21 = nullptr;
      goto LABEL_34;
    }
    v10 = *((_QWORD *)v7 + 1);
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    sub_2EB430(0, v6);
    *a1 = v10;
    v11 = *(_DWORD **)(sub_15D1F10(v10) + 24);
    v12 = *a1;
    if ( v11 && *v11 == 5 )
    {
      v33 = sub_15E1A70(a2[21]);
      v15 = v33;
      if ( v33 )
        ++*(_DWORD *)(v33 + 8);
    }
    else
    {
      v13 = sub_15D1F10(v12);
      if ( !(unsigned __int8)sub_1673B10(a2 + 23, v13) )
      {
        sub_1872CE0("");
        sub_1873130(114, 251);
      }
      v14 = sub_15E1A70(a2[24]);
      v15 = v14;
      if ( v14 )
        ++*(_DWORD *)(v14 + 8);
    }
    sub_2EB430(*a1, a1[1]);
LABEL_32:
    *a1 = v15;
    goto LABEL_33;
  }
  v39[0] = 0;
  v36 = a2 + 21;
  v39[1] = 0;
  v40[0] = 1;
  v40[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v40);
  v19 = a2[22];
  BYTE4(v40[0]) &= ~1u;
  LODWORD(v40[0]) = 1;
  if ( !v19 )
  {
    sub_16669E0(v36);
    v19 = a2[22];
  }
  v20 = sub_166A700(v19, (unsigned int)v39, 0, v16, v17, v18);
  v34 = v20;
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  v21 = nullptr;
  v22 = 0;
  sub_25A130((char *)v39);
  v25 = *((_QWORD *)v7 + 4);
  if ( !v25 )
  {
    v30 = a2[21];
LABEL_40:
    v21 = nullptr;
    goto LABEL_26;
  }
  do
  {
    if ( v22 >= *(_DWORD *)(v25 - 4) )
      break;
    v26 = v22;
    v27 = a2[22];
    *(_QWORD *)v35 = a2[1];
    v28 = *((_QWORD *)v7 + 5) + 32LL * v22;
    if ( !v27 )
    {
      sub_16669E0(v36);
      v27 = a2[22];
      v26 = v22;
    }
    sub_166A700(v27, v28, 0, v26, v23, v24);
    v29 = sub_15E1BF0(v35[0]);
    v39[0] = v29;
    if ( v29 )
      ++*(_DWORD *)(v29 + 8);
    v38 = v21;
    sub_2F13A0(&v38, v39);
    v25 = *((_QWORD *)v7 + 4);
    v21 = v38;
    ++v22;
  }
  while ( v25 );
  v30 = a2[21];
  if ( !v21 )
    goto LABEL_40;
  if ( *((_DWORD *)v21 - 1) == 1 )
  {
    v31 = *v21;
    if ( !*(_WORD *)(*v21 + 4) )
      goto LABEL_27;
  }
LABEL_26:
  v31 = sub_15E1AF0(v30);
  if ( v31 )
LABEL_27:
    ++*(_DWORD *)(v31 + 8);
  sub_2EB430(*a1, a1[1]);
  *a1 = v31;
LABEL_34:
  v38 = v21;
  sub_2334C0(&v37);
  sub_2EB430(v34, v8);
  return a1;
}

