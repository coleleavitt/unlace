__int64 __fastcall sub_5CC700(_QWORD *a1, const char *a2)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rsi
  size_t v7; // rax
  __int64 v8; // r14
  size_t v9; // r15
  size_t v10; // r8
  __int64 v11; // rsi
  size_t v12; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  size_t v16; // [rsp+0h] [rbp-48h]
  size_t v17; // [rsp+8h] [rbp-40h]

  v3 = a1[76];
  if ( v3 )
  {
    v4 = v3 + 1;
    v5 = a1[76];
    --v3;
  }
  else
  {
    v5 = 1;
    v4 = 2;
  }
  v6 = a1[75];
  if ( a1[77] < v4 )
  {
    v14 = qvector_reserve(a1 + 75, v6, v4, 1);
    a1[75] = v14;
    v6 = v14;
  }
  a1[76] = v4;
  *(_BYTE *)(v6 + v3) = 46;
  *(_BYTE *)(a1[75] + v5) = 0;
  if ( a2 )
  {
    v7 = strlen(a2);
    v8 = a1[76];
    v9 = v7;
    v10 = v7;
    if ( v8 )
    {
      --v8;
      v10 = v7 + v8;
    }
    v11 = a1[75];
    v12 = v10 + 1;
    if ( a1[77] < v10 + 1 )
    {
      v17 = v10;
      v16 = v10 + 1;
      v15 = qvector_reserve(a1 + 75, v11, v12, 1);
      v10 = v17;
      v12 = v16;
      a1[75] = v15;
      v11 = v15;
    }
    a1[76] = v12;
    *(_BYTE *)(v11 + v10) = 0;
    memmove((void *)(v8 + a1[75]), a2, v9);
  }
  return v3;
}

