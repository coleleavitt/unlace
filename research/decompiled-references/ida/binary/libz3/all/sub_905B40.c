__int64 __fastcall sub_905B40(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // r15
  char i; // r14
  int v6; // eax
  __int64 v7; // r14
  bool v8; // zf
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // edx
  unsigned int v17; // ebx
  __int64 v19; // [rsp+0h] [rbp-48h] BYREF
  __int64 v20; // [rsp+8h] [rbp-40h] BYREF
  int v21; // [rsp+10h] [rbp-38h]
  int v22; // [rsp+18h] [rbp-30h]
  int v23; // [rsp+20h] [rbp-28h]
  __int64 v24; // [rsp+28h] [rbp-20h]
  __int64 v25; // [rsp+30h] [rbp-18h]

  v2 = a2;
  v4 = a1[1];
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  for ( i = 0; ; i = 1 )
  {
    v6 = sub_157A5F0(
           a1[18],
           *(_QWORD *)(v2 + 16),
           0,
           0,
           (int)a1 + 480,
           (int)a1 + 496,
           v19,
           v20,
           v21,
           v22,
           v23,
           v24,
           v25);
    if ( v6 == 4 )
    {
      v12 = a1[60];
      goto LABEL_16;
    }
    if ( v6 == 5 )
    {
      v9 = *(_DWORD *)(v2 + 8) + 1;
      if ( !i )
      {
        *(_DWORD *)(v2 + 8) = v9;
        v19 = v2;
        sub_8F15F0(a1 + 7, &v19);
LABEL_24:
        v17 = 1;
        goto LABEL_25;
      }
      v10 = a1[60];
      *(_DWORD *)(v2 + 8) = v9;
      if ( !v10 )
      {
        a1[60] = v2;
        v12 = v2;
        v20 = v2;
LABEL_17:
        ++*(_DWORD *)(v12 + 8);
LABEL_18:
        sub_8F15F0(a1 + 7, &v20);
        v13 = a1[60];
        if ( v13 )
        {
          v14 = a1[61];
          v8 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v8 )
            sub_15D7BC0(v14, v13);
        }
        a1[60] = 0;
        v15 = a1[5];
        if ( v15 )
        {
          v16 = *(_DWORD *)(v15 - 4);
          if ( v16 )
            *(_BYTE *)(v15 + 16LL * (unsigned int)(v16 - 1) + 8) |= 2u;
        }
        goto LABEL_24;
      }
      v11 = a1[61];
      v8 = (*(_DWORD *)(v10 + 8))-- == 1;
      if ( v8 )
        sub_15D7BC0(v11, v10);
      a1[60] = v2;
      v12 = v2;
LABEL_16:
      v20 = v12;
      if ( !v12 )
        goto LABEL_18;
      goto LABEL_17;
    }
    v7 = a1[60];
    if ( *(_WORD *)(v7 + 4) || *(_DWORD *)(v7 + 24) )
      break;
    ++*(_DWORD *)(v7 + 8);
    v8 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v4, v2);
    v2 = v7;
  }
  v17 = 0;
LABEL_25:
  v8 = (*(_DWORD *)(v2 + 8))-- == 1;
  if ( v8 )
    sub_15D7BC0(v4, v2);
  return v17;
}

