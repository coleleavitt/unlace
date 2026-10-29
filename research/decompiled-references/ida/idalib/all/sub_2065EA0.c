_DWORD *__fastcall sub_2065EA0(__int64 a1, unsigned int a2)
{
  _DWORD *result; // rax
  _DWORD *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int *v7; // rdi

  result = *(_DWORD **)(a1 + 272);
  if ( !a2 )
    return result;
  v3 = *(_DWORD **)(a1 + 272);
  v4 = 5LL * *(unsigned int *)(a1 + 280);
  v5 = *(unsigned int *)(a1 + 280);
  if ( !(v4 * 4) )
  {
LABEL_5:
    if ( v3 == &result[v4] )
      return result;
    goto LABEL_6;
  }
  do
  {
    while ( 1 )
    {
      v6 = v5 >> 1;
      v7 = &v3[5 * (v5 >> 1)];
      if ( *v7 >= a2 )
        break;
      v3 = v7 + 5;
      v5 = v5 - v6 - 1;
      if ( v5 <= 0 )
        goto LABEL_5;
    }
    v5 >>= 1;
  }
  while ( v6 );
  if ( v3 != &result[v4] )
  {
LABEL_6:
    if ( *v3 == a2 )
      return v3;
  }
  return result;
}
