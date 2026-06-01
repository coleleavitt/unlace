__int64 __fastcall sub_6FA1D0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rbp
  char i; // r14
  int v6; // eax
  __int64 v7; // r14
  bool v8; // zf
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  int v19; // edx
  unsigned int v20; // ebx
  __int64 v22; // rax
  __int64 v23; // [rsp+8h] [rbp-60h] BYREF
  __int64 v24; // [rsp+10h] [rbp-58h] BYREF
  __int64 v25; // [rsp+18h] [rbp-50h] BYREF
  __int64 v26; // [rsp+20h] [rbp-48h] BYREF
  __int64 v27[8]; // [rsp+28h] [rbp-40h] BYREF

  v3 = a1[1];
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v4 = a2;
  for ( i = 0; ; i = 1 )
  {
    v6 = sub_6EFF30(a1[18], *(_QWORD *)(v4 + 16), nullptr, a1 + 60);
    if ( v6 == 4 )
    {
      v12 = a1[60];
      goto LABEL_16;
    }
    if ( v6 == 5 )
    {
      v9 = *(_DWORD *)(v4 + 8) + 1;
      if ( !i )
      {
        *(_DWORD *)(v4 + 8) = v9;
        v23 = v4;
        sub_6EFE70(a1 + 7, &v23);
        v24 = 0;
        sub_6EF800(a1 + 11, &v24);
LABEL_29:
        v20 = 1;
        goto LABEL_30;
      }
      v10 = a1[60];
      *(_DWORD *)(v4 + 8) = v9;
      if ( !v10 )
      {
        a1[60] = v4;
        v12 = v4;
        v25 = v4;
        goto LABEL_17;
      }
      v11 = a1[61];
      v8 = (*(_DWORD *)(v10 + 8))-- == 1;
      if ( v8 )
        sub_15D7BC0(v11, v10);
      a1[60] = v4;
      v12 = v4;
LABEL_16:
      v25 = v12;
      if ( !v12 )
      {
LABEL_18:
        sub_6EFE70(a1 + 7, &v25);
        v13 = a1[62];
        if ( v13 )
        {
          ++*(_DWORD *)(v13 + 8);
          v26 = v13;
          sub_6EF800(a1 + 11, &v26);
        }
        else
        {
          v22 = sub_15DE370(a1[1]);
          v27[0] = v22;
          if ( v22 )
            ++*(_DWORD *)(v22 + 8);
          sub_6EF800(a1 + 11, v27);
        }
        v14 = a1[62];
        if ( v14 )
        {
          v15 = a1[63];
          v8 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v8 )
            sub_15D7BC0(v15, v14);
        }
        v16 = a1[60];
        a1[62] = 0;
        if ( v16 )
        {
          v17 = a1[61];
          v8 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v8 )
            sub_15D7BC0(v17, v16);
        }
        a1[60] = 0;
        v18 = a1[5];
        if ( v18 )
        {
          v19 = *(_DWORD *)(v18 - 4);
          if ( v19 )
            *(_BYTE *)(v18 + 16LL * (unsigned int)(v19 - 1) + 8) |= 2u;
        }
        goto LABEL_29;
      }
LABEL_17:
      ++*(_DWORD *)(v12 + 8);
      goto LABEL_18;
    }
    v7 = a1[60];
    if ( *(_WORD *)(v7 + 4) || *(_DWORD *)(v7 + 24) )
      break;
    ++*(_DWORD *)(v7 + 8);
    v8 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v3, v4);
    v4 = v7;
  }
  v20 = 0;
LABEL_30:
  v8 = (*(_DWORD *)(v4 + 8))-- == 1;
  if ( v8 )
    sub_15D7BC0(v3, v4);
  return v20;
}

