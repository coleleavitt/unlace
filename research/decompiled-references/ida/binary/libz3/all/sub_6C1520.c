__int64 __fastcall sub_6C1520(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v17; // [rsp+0h] [rbp-38h] BYREF
  __int64 v18; // [rsp+8h] [rbp-30h]
  __int64 v19; // [rsp+10h] [rbp-28h] BYREF
  __int64 v20; // [rsp+18h] [rbp-20h]

  v4 = a1 + 256;
  v5 = *(_QWORD *)(v4 - 248);
  v6 = *a2;
  v17 = 0;
  v18 = v5;
  v19 = 0;
  v20 = v5;
  sub_1472F40(v4, v6, &v17, a1 + 752);
  sub_14B9BF0(a1 + 80, v17, &v19);
  v7 = *a2;
  v8 = v19;
  if ( v19 == *a2 )
  {
    v11 = 0;
    if ( !v19 )
      goto LABEL_8;
    v13 = v20;
    v12 = *(_DWORD *)(v19 + 8) - 1;
  }
  else
  {
    if ( v7 && (v9 = a2[1], v10 = *(_DWORD *)(v7 + 8) == 1, --*(_DWORD *)(v7 + 8), v10) )
    {
      sub_15D7BC0(v9, v7);
      v8 = v19;
      v11 = 1;
      *a2 = v19;
      if ( !v8 )
        goto LABEL_8;
    }
    else
    {
      *a2 = v8;
      v11 = 1;
      if ( !v8 )
        goto LABEL_8;
    }
    v12 = *(_DWORD *)(v8 + 8);
    v13 = v20;
    *(_DWORD *)(v8 + 8) = v12 + 1;
  }
  *(_DWORD *)(v8 + 8) = v12;
  if ( !v12 )
    sub_15D7BC0(v13, v8);
LABEL_8:
  v14 = v17;
  if ( !v17 )
    return v11;
  v15 = v18;
  v10 = (*(_DWORD *)(v17 + 8))-- == 1;
  if ( !v10 )
    return v11;
  sub_15D7BC0(v15, v14);
  return v11;
}

