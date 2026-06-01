__int64 __fastcall sub_696E50(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  int v7; // edi
  __int64 v8; // rsi
  __int64 i; // rcx
  unsigned __int64 v10; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a1 + 8;
  if ( !v2 )
    return v3;
  v4 = *a2;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(v2 + 32);
      if ( v5 >= v4 )
        break;
LABEL_6:
      v2 = *(_QWORD *)(v2 + 24);
      if ( !v2 )
        return v3;
    }
    if ( v4 == v5 )
    {
      v7 = *((_DWORD *)a2 + 2);
      if ( *(_DWORD *)(v2 + 40) < v7 )
        goto LABEL_6;
      if ( *(_DWORD *)(v2 + 40) <= v7 )
        break;
    }
    v3 = v2;
    v2 = *(_QWORD *)(v2 + 16);
    if ( !v2 )
      return v3;
  }
  v8 = *(_QWORD *)(v2 + 16);
  for ( i = *(_QWORD *)(v2 + 24); i; i = *(_QWORD *)(i + 16) )
  {
    while ( v4 >= *(_QWORD *)(i + 32) && (v4 != *(_QWORD *)(i + 32) || v7 >= *(_DWORD *)(i + 40)) )
    {
      i = *(_QWORD *)(i + 24);
      if ( !i )
        goto LABEL_16;
    }
  }
LABEL_16:
  while ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 32);
    if ( v10 < v4 )
    {
LABEL_21:
      v8 = *(_QWORD *)(v8 + 24);
    }
    else
    {
      while ( v4 != v10 || v7 <= *(_DWORD *)(v8 + 40) )
      {
        v2 = v8;
        v8 = *(_QWORD *)(v8 + 16);
        if ( !v8 )
          return v2;
        v10 = *(_QWORD *)(v8 + 32);
        if ( v10 < v4 )
          goto LABEL_21;
      }
      v8 = *(_QWORD *)(v8 + 24);
    }
  }
  return v2;
}
