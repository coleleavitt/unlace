__int64 __fastcall sub_E00390(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  unsigned int v6; // ebx
  __int64 result; // rax
  _DWORD *v8; // rbp
  __int64 *v9; // r14
  _DWORD *v10; // rcx
  _DWORD *v11; // rdx
  __int64 v12; // rcx
  _DWORD *v13; // rdx
  __int64 v14; // rsi
  _DWORD *v15; // rdi

  v6 = sub_15D1320(*(_QWORD *)(a1 + 296) + 560LL, a2);
  result = sub_15D2690(*(_QWORD *)(a1 + 296), v6);
  v8 = (_DWORD *)*a4;
  if ( result && a3 )
  {
    if ( !v8 )
      return result;
    v9 = (__int64 *)result;
    result = (unsigned int)*(v8 - 1);
    v10 = &v8[result];
    if ( v10 == v8 )
      return result;
    v11 = (_DWORD *)*a4;
    while ( v6 != *v11 )
    {
      if ( v10 == ++v11 )
        goto LABEL_10;
    }
    sub_E00280(a1, v9);
    result = sub_DF9B00(a1, v9);
    v8 = (_DWORD *)*a4;
  }
  if ( !v8 )
    return result;
LABEL_10:
  v12 = (unsigned int)*(v8 - 1);
  v13 = &v8[v12];
  v14 = (4 * v12) >> 2;
  result = (4 * v12) >> 4;
  if ( result )
  {
    v15 = v8;
    result = (__int64)&v8[4 * result];
    while ( v6 != *v15 )
    {
      if ( v6 == v15[1] )
      {
        ++v15;
        goto LABEL_17;
      }
      if ( v6 == v15[2] )
      {
        v15 += 2;
        goto LABEL_17;
      }
      if ( v6 == v15[3] )
      {
        v15 += 3;
        goto LABEL_17;
      }
      v15 += 4;
      if ( (_DWORD *)result == v15 )
      {
        v14 = v13 - v15;
        goto LABEL_26;
      }
    }
    goto LABEL_17;
  }
  v15 = v8;
LABEL_26:
  if ( v14 == 2 )
  {
LABEL_33:
    if ( v6 != *v15 )
    {
      ++v15;
      goto LABEL_29;
    }
    goto LABEL_17;
  }
  if ( v14 != 3 )
  {
    if ( v14 != 1 )
      return result;
LABEL_29:
    if ( v6 != *v15 )
      return result;
    goto LABEL_17;
  }
  if ( v6 != *v15 )
  {
    ++v15;
    goto LABEL_33;
  }
LABEL_17:
  if ( v15 != v13 )
  {
    if ( v15 + 1 != v13 )
    {
      result = (__int64)memmove(v15, v15 + 1, (char *)(v13 - 1) - (char *)v15);
      LODWORD(v12) = *(v8 - 1);
    }
    *(v8 - 1) = v12 - 1;
  }
  return result;
}

