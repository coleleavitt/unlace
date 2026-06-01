__int64 __fastcall sub_1F6E390(_QWORD *a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // r9
  _DWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  int *v9; // r8

  if ( a2 <= 0 )
    return (unsigned int)a2;
  v3 = a1[412];
  v4 = a1[411];
  if ( v4 == v3 )
    return (unsigned int)a2;
  v5 = (_DWORD *)a1[411];
  v6 = v3 - v4;
  v7 = (v3 - v4) >> 2;
  if ( v6 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v8 = v7 >> 1;
        v9 = &v5[v7 >> 1];
        if ( a2 <= *v9 )
          break;
        v5 = v9 + 1;
        v7 = v7 - v8 - 1;
        if ( v7 <= 0 )
          return (unsigned int)(a2 - *(_DWORD *)(a1[414] + 4LL * (unsigned int)(((__int64)v5 - v4) >> 2)));
      }
      v7 >>= 1;
    }
    while ( v8 );
  }
  return (unsigned int)(a2 - *(_DWORD *)(a1[414] + 4LL * (unsigned int)(((__int64)v5 - v4) >> 2)));
}
