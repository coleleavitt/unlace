__int64 __fastcall sub_4B29E0(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 result; // rax
  int v10; // edx
  __int64 v11; // rsi
  __int64 v12; // rdi
  _QWORD v13[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = a1[18];
  v3 = a1[60];
  v4 = *(_QWORD *)(v2 + 8);
  if ( v3 == v4 )
  {
    v7 = a1[62];
    if ( !v7 || (v8 = a1[63], v6 = *(_DWORD *)(v7 + 8) == 1, --*(_DWORD *)(v7 + 8), !v6) )
    {
LABEL_19:
      a1[62] = 0;
      v13[0] = v4;
      if ( !v4 )
        goto LABEL_9;
      goto LABEL_8;
    }
LABEL_18:
    sub_15D7BC0(v8, v7);
    v4 = a1[60];
    goto LABEL_19;
  }
  if ( v3 )
  {
    v5 = a1[61];
    v6 = (*(_DWORD *)(v3 + 8))-- == 1;
    if ( v6 )
    {
      sub_15D7BC0(v5, v3);
      v4 = *(_QWORD *)(v2 + 8);
      a1[60] = v4;
      if ( v4 )
        goto LABEL_5;
LABEL_21:
      v7 = a1[62];
      if ( !v7 || (v8 = a1[63], v6 = *(_DWORD *)(v7 + 8) == 1, --*(_DWORD *)(v7 + 8), !v6) )
      {
        a1[62] = 0;
        v13[0] = 0;
        goto LABEL_9;
      }
      goto LABEL_18;
    }
  }
  a1[60] = v4;
  if ( !v4 )
    goto LABEL_21;
LABEL_5:
  v7 = a1[62];
  ++*(_DWORD *)(v4 + 8);
  if ( v7 )
  {
    v8 = a1[63];
    v6 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v6 )
      goto LABEL_18;
  }
  a1[62] = 0;
  v13[0] = v4;
LABEL_8:
  ++*(_DWORD *)(v4 + 8);
LABEL_9:
  sub_4B2920(a1 + 7, v13);
  result = a1[5];
  if ( result )
  {
    v10 = *(_DWORD *)(result - 4);
    if ( v10 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v10 - 1) + 8) |= 2u;
  }
  v11 = a1[60];
  if ( v11 )
  {
    v12 = a1[61];
    v6 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v6 )
      result = sub_15D7BC0(v12, v11);
  }
  a1[60] = 0;
  return result;
}

