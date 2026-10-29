bool __fastcall sub_1178040(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rdx
  __int64 v5; // rsi
  _QWORD *v6; // rdx

  v2 = *(_QWORD **)(a1 + 8);
  v3 = &v2[*(unsigned int *)(a1 + 16)];
  if ( v2 == v3 )
    return v3 != v2;
  v4 = v2 + 1;
  if ( !*v2 )
  {
    while ( 1 )
    {
      v2 = v4;
      if ( v3 == v4 )
        break;
      if ( *v4++ )
        goto LABEL_3;
    }
    v2 = v3;
    return v3 != v2;
  }
LABEL_3:
  v5 = *a2;
LABEL_4:
  if ( *v2 == v5 )
    return v3 != v2;
  while ( 1 )
  {
    v6 = v2 + 1;
    if ( v3 == v2 + 1 )
      return v3 != v6;
    if ( !v2[1] )
    {
      while ( 1 )
      {
        v2 = v6 + 1;
        if ( v3 == v6 + 1 )
          break;
        if ( v6[1] )
          goto LABEL_4;
        ++v6;
      }
      v6 = v3;
      return v3 != v6;
    }
    ++v2;
    if ( *v6 == v5 )
      return v3 != v2;
  }
}
