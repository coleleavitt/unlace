__int64 __fastcall sub_212530(__int64 *a1)
{
  _DWORD *v1; // r12
  unsigned __int8 *v2; // r12
  __int64 *v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rbp

  v1 = (_DWORD *)a1[4];
  if ( *v1 == 56 )
  {
    v2 = (unsigned __int8 *)(v1 + 8);
  }
  else
  {
    if ( *v1 != 57 )
      return 0;
    v2 = (unsigned __int8 *)(v1 + 12);
  }
  v3 = (__int64 *)a1[5];
  v4 = *v3;
  v5 = *v3 + 16 * v3[1];
  if ( *v3 != v5 )
  {
    do
    {
      if ( sub_125B60(v2, v4, 0) )
        break;
      v4 += 16;
    }
    while ( v5 != v4 );
    if ( v4 != *v3 + 16 * v3[1] )
      sub_FECE0(a1[2], a1[3], a1[4]);
  }
  return 0;
}
