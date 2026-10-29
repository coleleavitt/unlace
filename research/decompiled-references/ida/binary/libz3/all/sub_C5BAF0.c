__int64 __fastcall sub_C5BAF0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // r14
  char i; // r13
  __int64 v6; // rsi
  __int64 **v7; // r15
  __int64 v8; // r9
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // r13
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  int v18; // edx
  unsigned int v19; // ebx
  __int64 v21; // [rsp+8h] [rbp-50h]
  __int64 v22; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v23[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = a2;
  v4 = a1[1];
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  for ( i = 0; ; i = 1 )
  {
    v6 = a1[62];
    v7 = (__int64 **)a1[18];
    v8 = *(_QWORD *)(v2 + 16);
    if ( v6 )
    {
      v9 = a1[63];
      v10 = (*(_DWORD *)(v6 + 8))-- == 1;
      if ( v10 )
      {
        v21 = v8;
        sub_15D7BC0(v9, v6);
        v8 = v21;
      }
    }
    a1[62] = 0;
    if ( (unsigned int)sub_C4FC60(v7, v8, 0, nullptr, a1 + 60) == 5 )
      break;
    v11 = a1[60];
    if ( *(_WORD *)(v11 + 4) || *(_DWORD *)(v11 + 24) )
    {
      v19 = 0;
      goto LABEL_24;
    }
    ++*(_DWORD *)(v11 + 8);
    v10 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v4, v2);
    v2 = v11;
  }
  v12 = *(_DWORD *)(v2 + 8) + 1;
  if ( i )
  {
    v13 = a1[60];
    *(_DWORD *)(v2 + 8) = v12;
    if ( v13 )
    {
      v14 = a1[61];
      v10 = (*(_DWORD *)(v13 + 8))-- == 1;
      if ( v10 )
        sub_15D7BC0(v14, v13);
    }
    a1[60] = v2;
    ++*(_DWORD *)(v2 + 8);
    v23[0] = v2;
    sub_C516F0(a1 + 7, v23);
    v15 = a1[60];
    if ( v15 )
    {
      v16 = a1[61];
      v10 = (*(_DWORD *)(v15 + 8))-- == 1;
      if ( v10 )
        sub_15D7BC0(v16, v15);
    }
    a1[60] = 0;
    v17 = a1[5];
    if ( v17 )
    {
      v18 = *(_DWORD *)(v17 - 4);
      if ( v18 )
        *(_BYTE *)(v17 + 16LL * (unsigned int)(v18 - 1) + 8) |= 2u;
    }
  }
  else
  {
    *(_DWORD *)(v2 + 8) = v12;
    v22 = v2;
    sub_C516F0(a1 + 7, &v22);
  }
  v19 = 1;
LABEL_24:
  v10 = (*(_DWORD *)(v2 + 8))-- == 1;
  if ( v10 )
    sub_15D7BC0(v4, v2);
  return v19;
}

