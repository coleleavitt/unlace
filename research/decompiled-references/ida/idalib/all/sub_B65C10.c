__int64 __fastcall sub_B65C10(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 result; // rax
  _DWORD *v6; // rdx
  _DWORD **v7; // rsi
  _DWORD *v8; // rcx
  __int64 v9; // r8
  char v10; // dl

  v1 = *(_DWORD *)(a1 + 16) & 0x7FFFFFFF;
  if ( !v1 )
    return 0;
  v2 = 16LL * v1;
  if ( *(char *)(a1 + 19) < 0 )
  {
    v7 = (_DWORD **)(a1 + 40);
    v8 = (_DWORD *)(a1 + v2 + 40);
    v9 = a1 + v2 + 48 + 8LL * (v1 - 1);
    LODWORD(result) = 0;
    do
    {
      while ( 1 )
      {
        v10 = ((*v7[1] >> 14) | (**v7 >> 14)) & 0x1F;
        if ( !*v8 )
          break;
        v8 += 2;
        v7 += 2;
        result = v10 & 0x1A | (unsigned int)result;
        if ( v8 == (_DWORD *)v9 )
          return result;
      }
      v8 += 2;
      result = ((unsigned __int8)(*v7[1] >> 14) | (unsigned __int8)(**v7 >> 14)) & 0x1B | (unsigned int)result;
      v7 += 2;
    }
    while ( v8 != (_DWORD *)v9 );
  }
  else
  {
    v3 = a1 + 40;
    v4 = a1 + 16LL * (v1 - 1) + 56;
    LODWORD(result) = 0;
    do
    {
      v6 = *(_DWORD **)(v3 + 8);
      v3 += 16;
      result = ((unsigned __int8)(*v6 >> 14) | (unsigned __int8)(**(_DWORD **)(v3 - 16) >> 14)) & 0x1B
             | (unsigned int)result;
    }
    while ( v3 != v4 );
  }
  return result;
}
