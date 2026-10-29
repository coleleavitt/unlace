__int64 __fastcall sub_C171D0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  char i; // r14
  int v5; // eax
  __int64 v6; // r14
  bool v7; // zf
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  int v18; // edx
  unsigned int v19; // ebp
  __int64 v21; // rax
  int v22; // [rsp+0h] [rbp-78h]
  int v23[2]; // [rsp+8h] [rbp-70h]
  int v24; // [rsp+10h] [rbp-68h]
  __int64 v25; // [rsp+18h] [rbp-60h] BYREF
  __int64 v26; // [rsp+20h] [rbp-58h] BYREF
  __int64 v27; // [rsp+28h] [rbp-50h] BYREF
  __int64 v28; // [rsp+30h] [rbp-48h] BYREF
  __int64 v29; // [rsp+38h] [rbp-40h] BYREF
  int v30; // [rsp+40h] [rbp-38h]
  int v31; // [rsp+48h] [rbp-30h]
  int v32; // [rsp+50h] [rbp-28h]
  int v33; // [rsp+58h] [rbp-20h]
  int v34; // [rsp+60h] [rbp-18h]
  void *v35; // [rsp+68h] [rbp-10h]

  *(_QWORD *)v23 = a1[1];
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v3 = a2;
  for ( i = 0; ; i = 1 )
  {
    v5 = sub_15358B0(
           a1[18],
           *(_QWORD *)(v3 + 16),
           0,
           0,
           (int)a1 + 480,
           (int)a1 + 496,
           v22,
           v23[0],
           v24,
           v25,
           v26,
           v27,
           v28,
           v29,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35);
    if ( v5 == 4 )
    {
      v11 = a1[60];
      goto LABEL_16;
    }
    if ( v5 == 5 )
    {
      v8 = *(_DWORD *)(v3 + 8) + 1;
      if ( !i )
      {
        *(_DWORD *)(v3 + 8) = v8;
        v25 = v3;
        sub_C10880(a1 + 7, &v25);
        v26 = 0;
        sub_C0FED0(a1 + 11, &v26);
LABEL_29:
        v19 = 1;
        goto LABEL_30;
      }
      v9 = a1[60];
      *(_DWORD *)(v3 + 8) = v8;
      if ( !v9 )
      {
        a1[60] = v3;
        v11 = v3;
        v27 = v3;
        goto LABEL_17;
      }
      v10 = a1[61];
      v7 = (*(_DWORD *)(v9 + 8))-- == 1;
      if ( v7 )
        sub_15D7BC0(v10, v9);
      a1[60] = v3;
      v11 = v3;
LABEL_16:
      v27 = v11;
      if ( !v11 )
      {
LABEL_18:
        sub_C10880(a1 + 7, &v27);
        v12 = a1[62];
        if ( v12 )
        {
          ++*(_DWORD *)(v12 + 8);
          v28 = v12;
          sub_C0FED0(a1 + 11, &v28);
        }
        else
        {
          v21 = sub_15DE370(a1[1]);
          v29 = v21;
          if ( v21 )
            ++*(_DWORD *)(v21 + 8);
          sub_C0FED0(a1 + 11, &v29);
        }
        v13 = a1[62];
        if ( v13 )
        {
          v14 = a1[63];
          v7 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v14, v13);
        }
        v15 = a1[60];
        a1[62] = 0;
        if ( v15 )
        {
          v16 = a1[61];
          v7 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v7 )
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
        goto LABEL_29;
      }
LABEL_17:
      ++*(_DWORD *)(v11 + 8);
      goto LABEL_18;
    }
    v6 = a1[60];
    if ( *(_WORD *)(v6 + 4) || *(_DWORD *)(v6 + 24) )
      break;
    ++*(_DWORD *)(v6 + 8);
    v7 = (*(_DWORD *)(v3 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(*(_QWORD *)v23, v3);
    v3 = v6;
  }
  v19 = 0;
LABEL_30:
  v7 = (*(_DWORD *)(v3 + 8))-- == 1;
  if ( v7 )
    sub_15D7BC0(*(_QWORD *)v23, v3);
  return v19;
}

