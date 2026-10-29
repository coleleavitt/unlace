__int64 __fastcall sub_C5FDD0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rbp
  char i; // r14
  __int64 v6; // rsi
  __int64 **v7; // r9
  __int64 v8; // r10
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // r14
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rax
  int v21; // edx
  unsigned int v22; // ebx
  __int64 v24; // rax
  __int64 **v25; // [rsp+0h] [rbp-78h]
  __int64 v26; // [rsp+8h] [rbp-70h]
  __int64 v27; // [rsp+18h] [rbp-60h] BYREF
  __int64 v28; // [rsp+20h] [rbp-58h] BYREF
  __int64 v29; // [rsp+28h] [rbp-50h] BYREF
  __int64 v30; // [rsp+30h] [rbp-48h] BYREF
  __int64 v31[8]; // [rsp+38h] [rbp-40h] BYREF

  v3 = a1[1];
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v4 = a2;
  for ( i = 0; ; i = 1 )
  {
    v6 = a1[62];
    v7 = (__int64 **)a1[18];
    v8 = *(_QWORD *)(v4 + 16);
    if ( v6 )
    {
      v9 = a1[63];
      v10 = (*(_DWORD *)(v6 + 8))-- == 1;
      if ( v10 )
      {
        v26 = v8;
        v25 = v7;
        sub_15D7BC0(v9, v6);
        v7 = v25;
        v8 = v26;
      }
    }
    a1[62] = 0;
    if ( (unsigned int)sub_C4FC60(v7, v8, 0, nullptr, a1 + 60) == 5 )
      break;
    v11 = a1[60];
    if ( *(_WORD *)(v11 + 4) || *(_DWORD *)(v11 + 24) )
    {
      v22 = 0;
      goto LABEL_29;
    }
    ++*(_DWORD *)(v11 + 8);
    v10 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v3, v4);
    v4 = v11;
  }
  v12 = *(_DWORD *)(v4 + 8) + 1;
  if ( i )
  {
    v13 = a1[60];
    *(_DWORD *)(v4 + 8) = v12;
    if ( v13 )
    {
      v14 = a1[61];
      v10 = (*(_DWORD *)(v13 + 8))-- == 1;
      if ( v10 )
        sub_15D7BC0(v14, v13);
    }
    a1[60] = v4;
    ++*(_DWORD *)(v4 + 8);
    v29 = v4;
    sub_C516F0(a1 + 7, &v29);
    v15 = a1[62];
    if ( v15 )
    {
      ++*(_DWORD *)(v15 + 8);
      v30 = v15;
      sub_C50B00(a1 + 11, &v30);
    }
    else
    {
      v24 = sub_15DE370(a1[1]);
      v31[0] = v24;
      if ( v24 )
        ++*(_DWORD *)(v24 + 8);
      sub_C50B00(a1 + 11, v31);
    }
    v16 = a1[62];
    if ( v16 )
    {
      v17 = a1[63];
      v10 = (*(_DWORD *)(v16 + 8))-- == 1;
      if ( v10 )
        sub_15D7BC0(v17, v16);
    }
    v18 = a1[60];
    a1[62] = 0;
    if ( v18 )
    {
      v19 = a1[61];
      v10 = (*(_DWORD *)(v18 + 8))-- == 1;
      if ( v10 )
        sub_15D7BC0(v19, v18);
    }
    a1[60] = 0;
    v20 = a1[5];
    if ( v20 )
    {
      v21 = *(_DWORD *)(v20 - 4);
      if ( v21 )
        *(_BYTE *)(v20 + 16LL * (unsigned int)(v21 - 1) + 8) |= 2u;
    }
  }
  else
  {
    *(_DWORD *)(v4 + 8) = v12;
    v27 = v4;
    sub_C516F0(a1 + 7, &v27);
    v28 = 0;
    sub_C50B00(a1 + 11, &v28);
  }
  v22 = 1;
LABEL_29:
  v10 = (*(_DWORD *)(v4 + 8))-- == 1;
  if ( v10 )
    sub_15D7BC0(v3, v4);
  return v22;
}

