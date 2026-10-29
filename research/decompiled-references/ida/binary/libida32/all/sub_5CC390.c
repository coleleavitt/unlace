__int64 __fastcall sub_5CC390(_QWORD *a1, const char *a2)
{
  int v2; // r12d
  __int64 v4; // rax
  __int64 v5; // rsi
  int v6; // edx
  bool v7; // zf
  __int64 result; // rax
  unsigned __int64 v9; // r12
  size_t v10; // rax
  __int64 v11; // r12
  size_t v12; // r13
  size_t v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  v2 = 0;
  v4 = a1[76];
  v5 = a1[72];
  v6 = v4 - 1;
  v7 = v4 == 0;
  result = a1[73];
  if ( !v7 )
    v2 = v6;
  if ( a1[74] < (unsigned __int64)(result + 1) )
  {
    v16 = qvector_reserve(a1 + 72, v5, result + 1, 4);
    a1[72] = v16;
    v5 = v16;
    result = a1[73];
  }
  *(_DWORD *)(v5 + 4 * result) = v2;
  v9 = a1[76];
  ++a1[73];
  if ( v9 > 1 )
  {
    v15 = a1[75];
    if ( a1[77] < v9 + 2 )
    {
      v18 = qvector_reserve(a1 + 75, v15, v9 + 2, 1);
      a1[75] = v18;
      v15 = v18;
    }
    a1[76] = v9 + 2;
    result = 14906;
    *(_BYTE *)(v15 + v9 + 1) = 0;
    *(_WORD *)(a1[75] + v9 - 1) = 14906;
  }
  if ( a2 )
  {
    v10 = strlen(a2);
    v11 = a1[76];
    v12 = v10;
    v13 = v10;
    if ( v11 )
    {
      --v11;
      v13 = v10 + v11;
    }
    v14 = a1[75];
    if ( a1[77] < v13 + 1 )
    {
      v17 = qvector_reserve(a1 + 75, v14, v13 + 1, 1);
      a1[75] = v17;
      v14 = v17;
    }
    a1[76] = v13 + 1;
    *(_BYTE *)(v14 + v13) = 0;
    return (__int64)memmove((void *)(v11 + a1[75]), a2, v12);
  }
  return result;
}

