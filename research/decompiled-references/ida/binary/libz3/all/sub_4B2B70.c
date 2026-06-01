__int64 __fastcall sub_4B2B70(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 result; // rax
  int v13; // edx
  __int64 v14; // rsi
  __int64 v15; // rdi
  _QWORD v16[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = a1[18];
  v3 = a1[60];
  v4 = *(_QWORD *)(v2 + 8);
  if ( v3 != v4 )
  {
    if ( v3 && (v5 = a1[61], v6 = *(_DWORD *)(v3 + 8) == 1, --*(_DWORD *)(v3 + 8), v6) )
    {
      sub_15D7BC0(v5, v3);
      v4 = *(_QWORD *)(v2 + 8);
      a1[60] = v4;
      if ( v4 )
        goto LABEL_5;
    }
    else
    {
      a1[60] = v4;
      if ( v4 )
      {
LABEL_5:
        v7 = a1[62];
        ++*(_DWORD *)(v4 + 8);
        if ( !v7 || (v8 = a1[63], v6 = *(_DWORD *)(v7 + 8) == 1, --*(_DWORD *)(v7 + 8), !v6) )
        {
          a1[62] = 0;
          v16[0] = v4;
LABEL_8:
          ++*(_DWORD *)(v4 + 8);
          goto LABEL_9;
        }
        goto LABEL_23;
      }
    }
    v7 = a1[62];
    if ( !v7 || (v8 = a1[63], v6 = *(_DWORD *)(v7 + 8) == 1, --*(_DWORD *)(v7 + 8), !v6) )
    {
      a1[62] = 0;
      v16[0] = 0;
      goto LABEL_9;
    }
    goto LABEL_23;
  }
  v7 = a1[62];
  if ( v7 )
  {
    v8 = a1[63];
    v6 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v6 )
    {
LABEL_23:
      sub_15D7BC0(v8, v7);
      v4 = a1[60];
    }
  }
  a1[62] = 0;
  v16[0] = v4;
  if ( v4 )
    goto LABEL_8;
LABEL_9:
  sub_4B2920(a1 + 7, v16);
  v9 = a1[62];
  v16[0] = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  sub_4B2860(a1 + 11, v16);
  v10 = a1[62];
  if ( v10 )
  {
    v11 = a1[63];
    v6 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v11, v10);
  }
  a1[62] = 0;
  result = a1[5];
  if ( result )
  {
    v13 = *(_DWORD *)(result - 4);
    if ( v13 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v13 - 1) + 8) |= 2u;
  }
  v14 = a1[60];
  if ( v14 )
  {
    v15 = a1[61];
    v6 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v6 )
      result = sub_15D7BC0(v15, v14);
  }
  a1[60] = 0;
  return result;
}

