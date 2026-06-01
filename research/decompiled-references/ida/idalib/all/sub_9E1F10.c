__int64 __fastcall sub_9E1F10(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 *v10; // rcx

  result = sub_BFBC70(*(_QWORD *)(a2 + 32));
  if ( !result )
    return result;
  v3 = result;
  if ( (*(_BYTE *)(result + 29) & 1) == 0 )
    return result;
  v4 = sub_B8C3D0(result);
  v5 = *(_QWORD *)v4;
  result = *(unsigned int *)(v4 + 8);
  v6 = v5 + 8 * result;
  if ( v5 >= v6 )
  {
    if ( v5 == v6 )
      goto LABEL_10;
    if ( *(_WORD *)(*(_QWORD *)v6 + 36LL) != 352 )
    {
      for ( result = v6 + 8; v5 != result; result += 8 )
      {
        v7 = *(_QWORD *)result;
        if ( *(_WORD *)(v7 + 36) == 352 )
          return sub_9E1D80(*a1, 1);
      }
      goto LABEL_10;
    }
    return sub_9E1D80(*a1, 1);
  }
  result = v5;
  while ( *(_WORD *)(*(_QWORD *)result + 36LL) != 352 )
  {
    result += 8;
    if ( v6 == result )
      goto LABEL_10;
  }
  if ( v6 != result )
    return sub_9E1D80(*a1, 1);
LABEL_10:
  if ( (*(_BYTE *)(v3 + 29) & 1) == 0 )
    return result;
  v8 = sub_B8C3D0(v3);
  v9 = *(_QWORD *)v8;
  result = *(unsigned int *)(v8 + 8);
  v10 = (__int64 *)(v9 + 8 * result);
  if ( v9 >= (unsigned __int64)v10 )
  {
    if ( (__int64 *)v9 == v10 )
      return result;
    while ( 1 )
    {
      result = *v10;
      if ( *(_WORD *)(*v10 + 36) == 130 )
        break;
      if ( (__int64 *)v9 == ++v10 )
        return result;
    }
    return sub_9E1D80(*a1, 0);
  }
  result = v9;
  while ( *(_WORD *)(*(_QWORD *)result + 36LL) != 130 )
  {
    result += 8;
    if ( v10 == (__int64 *)result )
      return result;
  }
  if ( v10 != (__int64 *)result )
    return sub_9E1D80(*a1, 0);
  return result;
}
