char __fastcall sub_101D610(__int64 a1, int *a2, int *a3)
{
  int v3; // ecx
  int v4; // esi
  char result; // al
  _DWORD *v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  _DWORD *v9; // r10
  __int64 v10; // rdi
  int *v11; // r8
  __int64 v12; // rdx
  int *v13; // rcx

  v3 = *a2;
  v4 = *a3;
  result = 0;
  if ( v3 < 0 == *a3 < 0 )
  {
    result = 1;
    if ( v3 < 0 )
    {
      v6 = *(_DWORD **)(a1 + 296);
      v7 = (4LL * *(unsigned int *)(a1 + 304)) >> 2;
      if ( 4LL * *(unsigned int *)(a1 + 304) )
      {
        v8 = (4LL * *(unsigned int *)(a1 + 304)) >> 2;
        v9 = *(_DWORD **)(a1 + 296);
        do
        {
          while ( 1 )
          {
            v10 = v8 >> 1;
            v11 = &v9[v8 >> 1];
            if ( v3 >= *v11 )
              break;
            v9 = v11 + 1;
            v8 = v8 - v10 - 1;
            if ( v8 <= 0 )
              goto LABEL_8;
          }
          v8 >>= 1;
        }
        while ( v10 );
        do
        {
LABEL_8:
          while ( 1 )
          {
            v12 = v7 >> 1;
            v13 = &v6[v7 >> 1];
            if ( v4 >= *v13 )
              break;
            v6 = v13 + 1;
            v7 = v7 - v12 - 1;
            if ( v7 <= 0 )
              return v9 == v6;
          }
          v7 >>= 1;
        }
        while ( v12 );
      }
      else
      {
        v9 = *(_DWORD **)(a1 + 296);
      }
      return v9 == v6;
    }
  }
  return result;
}
