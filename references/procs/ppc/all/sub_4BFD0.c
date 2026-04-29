__int64 __fastcall sub_4BFD0(__int64 a1, __int64 a2)
{
  const char *v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  int v6; // r14d
  __int64 v7; // rax
  __int64 *v8; // r15
  const char *v9; // rbx
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // r8
  char v14; // r15
  __int64 v15; // rdx
  int v17; // r13d
  __int64 v18; // rax
  __int64 v19; // rbx
  bool v20; // zf
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // [rsp+8h] [rbp-40h]
  __int64 v25; // [rsp+8h] [rbp-40h]
  __int64 v26; // [rsp+8h] [rbp-40h]

  v2 = s1;
  if ( *(_QWORD *)(a2 + 8) )
    v2 = *(const char **)a2;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v3 + 40);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 24);
    if ( v5 )
    {
      v6 = 0;
      v24 = *(_QWORD *)(v4 + 16);
      v7 = 0;
      while ( 1 )
      {
        v8 = (__int64 *)(v24 + 24 * v7);
        v9 = (const char *)v8[2];
        if ( !strcasecmp(v2, v9) )
          break;
        v7 = ++v6;
        if ( v6 >= v5 )
          goto LABEL_16;
      }
      v10 = *(_QWORD *)(v3 + 56);
      v25 = *(_QWORD *)(v3 + 64);
      v11 = v10 + 24 * v25;
      if ( v10 == v11 )
        goto LABEL_13;
      v12 = *(_QWORD *)(v3 + 56);
      while ( strcmp(v9, *(const char **)(v12 + 16)) )
      {
        v12 += 24;
        if ( v11 == v12 )
          goto LABEL_13;
      }
      if ( v12 == v11 )
      {
LABEL_13:
        v13 = *v8;
        v14 = *((_BYTE *)v8 + 8);
        v15 = v25 + 1;
        if ( *(_QWORD *)(v3 + 72) < (unsigned __int64)(v25 + 1) )
        {
          v26 = v13;
          v22 = qvector_reserve(v3 + 56, v10, v15, 24);
          v23 = *(_QWORD *)(v3 + 64);
          v13 = v26;
          *(_QWORD *)(v3 + 56) = v22;
          v11 = v22 + 24 * v23;
        }
        *(_QWORD *)v11 = v13;
        *(_BYTE *)(v11 + 8) = v14;
        *(_QWORD *)(v11 + 16) = v9;
        ++*(_QWORD *)(v3 + 64);
      }
    }
    else
    {
LABEL_16:
      sub_337D0((__int64)"ABI name contains unsupported postfix '%s' - ignored\n", v2);
    }
    return 1;
  }
  v17 = 0;
  v18 = 0;
  if ( *(_QWORD *)(v3 + 16) )
  {
    while ( 1 )
    {
      v19 = *(_QWORD *)(v3 + 8) + 32 * v18;
      if ( !strcmp(v2, *(const char **)v19) )
      {
        v20 = (unsigned __int8)getinf_flag(3, 4) == 0;
        v21 = *(_DWORD *)(v19 + 12);
        if ( v20 )
          v21 = *(_DWORD *)(v19 + 8);
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 32LL) = v21;
        v3 = *(_QWORD *)(a1 + 8);
        if ( *(_DWORD *)(v3 + 32) )
          break;
      }
      v18 = ++v17;
      if ( (unsigned __int64)v17 >= *(_QWORD *)(v3 + 16) )
        return 0;
    }
    *(_QWORD *)(v3 + 40) = v19;
    return 1;
  }
  return 0;
}
