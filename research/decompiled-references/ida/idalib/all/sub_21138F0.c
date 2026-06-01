__int64 __fastcall sub_21138F0(__int64 a1, unsigned int a2, char a3)
{
  _DWORD *v3; // r8
  unsigned int v4; // eax
  __int64 v5; // rdx
  _DWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int *v9; // rcx

  v3 = *(_DWORD **)(a1 + 136);
  v4 = *(_DWORD *)(a1 + 116);
  if ( !a3 )
  {
    v3 = *(_DWORD **)(a1 + 128);
    v4 = *(_DWORD *)(a1 + 112);
  }
  if ( !v3 )
    return -1;
  v5 = 8LL * v4;
  v6 = &v3[(unsigned __int64)v5 / 4];
  v7 = v5 >> 3;
  if ( v5 )
  {
    do
    {
      while ( 1 )
      {
        v8 = v7 >> 1;
        v9 = &v3[2 * (v7 >> 1)];
        if ( a2 <= *v9 )
          break;
        v3 = v9 + 2;
        v7 = v7 - v8 - 1;
        if ( v7 <= 0 )
          goto LABEL_7;
      }
      v7 >>= 1;
    }
    while ( v8 );
  }
LABEL_7:
  if ( v6 != v3 && *v3 == a2 )
    return (int)v3[1];
  else
    return -1;
}
