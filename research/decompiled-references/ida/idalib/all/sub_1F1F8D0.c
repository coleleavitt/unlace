unsigned __int64 __fastcall sub_1F1F8D0(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // r9
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int64 *v7; // rdx
  unsigned __int64 *v8; // rax

  v2 = *(_QWORD **)(a1 + 528);
  v3 = 2LL * *(unsigned int *)(a1 + 536);
  v4 = v2;
  v5 = (v3 * 8) >> 4;
  if ( !(v3 * 8) )
    return v4[v3 + 1];
  do
  {
    while ( 1 )
    {
      v6 = v5 >> 1;
      v7 = &v4[2 * (v5 >> 1)];
      if ( a2 < *v7 )
        break;
      v4 = v7 + 2;
      v5 = v5 - v6 - 1;
      if ( v5 <= 0 )
      {
        v8 = v7;
        if ( v2 == v4 )
          return v4[v3 + 1];
        return v8[1];
      }
    }
    v5 >>= 1;
  }
  while ( v6 );
  v8 = v4 - 2;
  if ( v2 != v4 )
    return v8[1];
  return v4[v3 + 1];
}
