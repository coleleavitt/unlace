__int64 __fastcall sub_64D2A0(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  int v4; // r12d
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // r13
  int v8; // r12d
  int v9; // eax
  size_t v10; // r15
  const void *v11; // rcx
  unsigned int v12; // r14d
  int v13; // r9d
  __int64 v14; // r8
  const void *v15; // rsi
  unsigned int v16; // r14d
  int v17; // esi
  __int64 v18; // rdx
  unsigned int v19; // r14d
  __int64 v20; // rax
  int v21; // eax
  const void *v22; // [rsp+8h] [rbp-50h]
  __int64 v23; // [rsp+10h] [rbp-48h]
  int v24; // [rsp+1Ch] [rbp-3Ch]

  v4 = *((_DWORD *)a1 + 4);
  if ( !v4 )
  {
    v5 = 0;
    result = 0;
    goto LABEL_3;
  }
  v7 = *a1;
  v8 = v4 - 1;
  v9 = sub_25E60D0(*a2, a2[1]);
  v10 = a2[1];
  v11 = (const void *)*a2;
  v12 = v8 & v9;
  if ( v10 )
  {
    v13 = 1;
    v14 = 0;
    while ( 1 )
    {
      v5 = v7 + 24LL * v12;
      v15 = *(const void **)v5;
      if ( *(_QWORD *)v5 == -1 )
        break;
      if ( v15 == (const void *)-2LL )
      {
        if ( v11 == (const void *)-2LL )
          goto LABEL_11;
        if ( !v14 )
          v14 = v7 + 24LL * v12;
      }
      else if ( *(_QWORD *)(v5 + 8) == v10 )
      {
        v24 = v13;
        v23 = v14;
        v22 = v11;
        v21 = memcmp(v11, v15, v10);
        v11 = v22;
        v14 = v23;
        v13 = v24;
        if ( !v21 )
          goto LABEL_11;
      }
      v16 = v13 + v12;
      ++v13;
      v12 = v8 & v16;
    }
    result = 1;
    if ( v11 != (const void *)-1LL )
    {
      v20 = v7 + 24LL * v12;
      v5 = v14;
LABEL_19:
      if ( !v5 )
        v5 = v20;
      result = 0;
    }
  }
  else
  {
    v17 = 1;
    v18 = 0;
    while ( 1 )
    {
      v5 = v7 + 24LL * v12;
      if ( *(_QWORD *)v5 == -1 )
        break;
      if ( *(_QWORD *)v5 == -2 )
      {
        if ( v11 == (const void *)-2LL )
        {
LABEL_11:
          result = 1;
          goto LABEL_3;
        }
        if ( !v18 )
          v18 = v7 + 24LL * v12;
      }
      else if ( !*(_QWORD *)(v5 + 8) )
      {
        goto LABEL_11;
      }
      v19 = v17 + v12;
      ++v17;
      v12 = v8 & v19;
    }
    result = 1;
    if ( v11 != (const void *)-1LL )
    {
      v20 = v7 + 24LL * v12;
      v5 = v18;
      goto LABEL_19;
    }
  }
LABEL_3:
  *a3 = v5;
  return result;
}

