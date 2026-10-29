__int64 __fastcall sub_BB7A40(_QWORD *a1, __int64 a2)
{
  unsigned int *v3; // rax
  __int64 v4; // rdx
  unsigned int *v5; // rbp
  __int64 v6; // rsi
  unsigned int v7; // ecx
  __int64 i; // rax
  unsigned int *v9; // rax
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 (__fastcall *v12)(__int64, __int64); // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r12
  int v17; // eax
  __int64 v18; // rdi
  bool v19; // zf
  int v20; // eax
  __int64 v21; // rdi
  __int64 result; // rax
  __int64 v23; // rdi
  __int64 v24; // [rsp+8h] [rbp-50h]
  __int64 v25; // [rsp+18h] [rbp-40h] BYREF
  __int64 v26; // [rsp+20h] [rbp-38h] BYREF
  __int64 v27; // [rsp+28h] [rbp-30h]

  v27 = a1[3];
  v3 = (unsigned int *)sub_BB1CC0((__int64)a1, a2);
  v4 = a1[19];
  v5 = v3;
  if ( v4 )
  {
    v6 = (__int64)v3;
    v7 = *(_DWORD *)(v4 - 4);
    for ( i = *v3; (unsigned int)i < v7; i = *v9 )
    {
      v9 = *(unsigned int **)(v4 + 24 * i + 8);
      if ( !v9 )
        break;
      v6 = (__int64)v9;
    }
  }
  else
  {
    v6 = (__int64)v3;
  }
  ++*(_DWORD *)(v6 + 8);
  v26 = v6;
  if ( !(unsigned __int8)sub_1461420(a1 + 428) )
  {
    sub_14B9B80(a1 + 149, &v26);
    v15 = v26;
    goto LABEL_18;
  }
  v10 = a1[114];
  v11 = a1[3];
  v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 32LL);
  v13 = sub_15D1F10(v26);
  v14 = v12(v10, v13);
  v15 = v26;
  v16 = v14;
  if ( !v14 )
    goto LABEL_18;
  v17 = *(_DWORD *)(v14 + 8);
  *(_DWORD *)(v16 + 8) = v17 + 1;
  if ( v16 != v15 )
  {
    if ( v15 )
    {
      v18 = v27;
      v19 = (*(_DWORD *)(v15 + 8))-- == 1;
      if ( v19 )
        sub_15D7BC0(v18, v15);
      v20 = *(_DWORD *)(v16 + 8);
      v26 = v16;
      if ( v20 )
      {
        v25 = v16;
        v21 = a1[114];
        v15 = v16;
LABEL_13:
        ++*(_DWORD *)(v15 + 8);
        goto LABEL_14;
      }
      goto LABEL_25;
    }
    v26 = v16;
    v15 = v16;
    ++v17;
  }
  *(_DWORD *)(v16 + 8) = v17;
  if ( v17 )
  {
    v25 = v15;
    v21 = a1[114];
    goto LABEL_13;
  }
LABEL_25:
  sub_15D7BC0(v11, v16);
  v15 = v26;
LABEL_18:
  v25 = v15;
  v21 = a1[114];
  if ( v15 )
    goto LABEL_13;
LABEL_14:
  sub_BB70A0((_QWORD *)(v21 + 264), &v25);
  sub_BB77A0(a1 + 17, v5, v26, 0);
  result = v26;
  if ( v26 )
  {
    v23 = v27;
    v19 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v19 )
    {
      v24 = result;
      sub_15D7BC0(v23, result);
      return v24;
    }
  }
  return result;
}

