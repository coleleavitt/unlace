__int64 __fastcall sub_99BFF0(_QWORD *a1, __int64 *a2, int *a3, int *a4)
{
  __int64 result; // rax
  __int64 v6; // r10
  int i; // ecx
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // r11
  int v12; // edx
  int v13; // edx

  result = *a2;
  *a3 = -1;
  *a4 = -1;
  if ( !result )
    return result;
  v6 = result + 40LL * *(unsigned int *)(result - 4);
  if ( result == v6 )
    return result;
  for ( i = 0; ; ++i )
  {
    v9 = *(unsigned int *)(result + 32);
    if ( (_DWORD)v9 != -1 )
      break;
    result += 40;
    if ( v6 == result )
      return result;
  }
  if ( *(_BYTE *)(a1[42] + 25LL) && ((*(_BYTE *)(result + 4) & 1) != 0 || (*(_BYTE *)(result + 20) & 1) != 0) )
  {
    *a3 = -2;
    *a4 = -2;
    return result;
  }
  while ( 1 )
  {
    v10 = *(_DWORD *)result;
    v11 = a1[78];
    if ( *(_QWORD *)(a1[77] + 8 * v9) )
    {
      if ( *(_QWORD *)(v11 + 8 * v9) )
      {
LABEL_10:
        if ( *a3 != -2 )
          goto LABEL_11;
        goto LABEL_23;
      }
      if ( v10 <= 0 )
        goto LABEL_35;
      if ( *a3 != -1 )
        goto LABEL_22;
      goto LABEL_30;
    }
    if ( v10 > 0 )
    {
      v12 = -2;
      if ( *a4 == -1 )
        v12 = i;
      *a4 = v12;
      if ( *(_QWORD *)(v11 + 8LL * *(unsigned int *)(result + 32)) )
        goto LABEL_10;
      if ( *a3 != -1 )
      {
LABEL_22:
        *a3 = -2;
        goto LABEL_23;
      }
LABEL_30:
      *a3 = i;
      goto LABEL_11;
    }
    if ( *a3 != -1 )
      break;
    *a3 = i;
    if ( !*(_QWORD *)(v11 + 8LL * *(unsigned int *)(result + 32)) )
      goto LABEL_35;
    do
    {
LABEL_11:
      result += 40;
      ++i;
      if ( v6 == result )
        return result;
      v9 = *(unsigned int *)(result + 32);
    }
    while ( (_DWORD)v9 == -1 );
    if ( *(_BYTE *)(a1[42] + 25LL) && ((*(_BYTE *)(result + 4) & 1) != 0 || (*(_BYTE *)(result + 20) & 1) != 0) )
    {
      *a3 = -2;
      *a4 = -2;
      return result;
    }
  }
  *a3 = -2;
  if ( !*(_QWORD *)(v11 + 8LL * *(unsigned int *)(result + 32)) )
  {
LABEL_35:
    v13 = -2;
    if ( *a4 == -1 )
      v13 = i;
    *a4 = v13;
    goto LABEL_10;
  }
LABEL_23:
  if ( *a4 != -2 )
    goto LABEL_11;
  return result;
}

