__int64 *__fastcall sub_D90770(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  bool v6; // zf
  __int64 v8; // rsi
  _DWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // [rsp+0h] [rbp-38h] BYREF
  __int64 v20; // [rsp+8h] [rbp-30h]
  __int64 v21; // [rsp+10h] [rbp-28h] BYREF
  __int64 v22; // [rsp+18h] [rbp-20h]

  v5 = *(_QWORD *)(a2 + 8);
  *a1 = 0;
  a1[1] = v5;
  if ( !a4 )
    return a1;
  v6 = *(_WORD *)(a4 + 4) == 0;
  v19 = 0;
  v20 = v5;
  if ( !v6 )
    goto LABEL_6;
  v8 = *(_QWORD *)(a4 + 16);
  v9 = *(_DWORD **)(v8 + 24);
  if ( v9 && *v9 == *(_DWORD *)(a2 + 80) && !v9[1] )
  {
    sub_D90610(&v21, a2, a4);
    v18 = *a1;
    *a1 = v21;
    if ( v18 )
    {
      v6 = (*(_DWORD *)(v18 + 8))-- == 1;
      if ( v6 )
        sub_15D7BC0(v22, v18);
    }
    goto LABEL_12;
  }
  if ( (unsigned __int8)sub_135E850(a3, v8, &v19) )
  {
    sub_D90610(&v21, a2, v19);
    v17 = *a1;
    *a1 = v21;
    if ( v17 )
    {
      v6 = (*(_DWORD *)(v17 + 8))-- == 1;
      if ( v6 )
        sub_15D7BC0(v22, v17);
    }
  }
  else
  {
LABEL_6:
    v10 = sub_15E1AF0(*(_QWORD *)(a2 + 16));
    v11 = v10;
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    v12 = *a1;
    if ( *a1 )
    {
      v13 = a1[1];
      v6 = (*(_DWORD *)(v12 + 8))-- == 1;
      if ( v6 )
        sub_15D7BC0(v13, v12);
    }
    *a1 = v11;
  }
LABEL_12:
  v14 = v19;
  if ( !v19 )
    return a1;
  v15 = v20;
  v6 = (*(_DWORD *)(v19 + 8))-- == 1;
  if ( !v6 )
    return a1;
  sub_15D7BC0(v15, v14);
  return a1;
}

