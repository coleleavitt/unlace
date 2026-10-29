bool __fastcall sub_ED7F90(_QWORD *a1, __int64 *a2)
{
  unsigned __int64 v2; // rdx
  bool result; // al
  _QWORD *v4; // r8
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v2 = *a1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*a1 & 4) == 0 )
  {
    result = 0;
    v4 = a1 + 1;
    if ( !v2 )
      return result;
    goto LABEL_3;
  }
  v6 = *(_QWORD **)v2;
  v7 = 8LL * *(unsigned int *)(v2 + 8);
  v4 = &v6[(unsigned __int64)v7 / 8];
  v8 = v7 >> 3;
  v9 = v7 >> 5;
  if ( !v9 )
  {
    a1 = v6;
LABEL_19:
    switch ( v8 )
    {
      case 2LL:
        v5 = *a2;
        break;
      case 3LL:
        v5 = *a2;
        if ( *a1 == *a2 )
          return v4 != a1;
        ++a1;
        break;
      case 1LL:
LABEL_3:
        v5 = *a2;
        goto LABEL_4;
      default:
        return 0;
    }
    if ( *a1 != v5 )
    {
      ++a1;
LABEL_4:
      result = 0;
      if ( *a1 == v5 )
        return a1 != v4;
      return result;
    }
    return v4 != a1;
  }
  v10 = *a2;
  if ( *v6 == *a2 )
    return v6 != v4;
  if ( v10 == v6[1] )
    return v4 != v6 + 1;
  if ( v10 == v6[2] )
    return v4 != v6 + 2;
  if ( v10 == v6[3] )
    return v4 != v6 + 3;
  while ( 1 )
  {
    a1 = v6 + 4;
    if ( !--v9 )
    {
      v8 = v4 - a1;
      goto LABEL_19;
    }
    if ( v6[4] == v10 )
      return v4 != a1;
    if ( v6[5] == v10 )
      return v4 != v6 + 5;
    if ( v6[6] == v10 )
      return v4 != v6 + 6;
    if ( v6[7] == v10 )
      return v4 != v6 + 7;
    v6 += 4;
  }
}
