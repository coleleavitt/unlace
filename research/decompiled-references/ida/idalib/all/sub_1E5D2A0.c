_DWORD *__fastcall sub_1E5D2A0(__int64 a1, int a2, char a3)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // rcx
  _DWORD *result; // rax
  int v7; // r10d
  _DWORD *v8; // rsi
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rsi

  if ( !a2 )
    return nullptr;
  v3 = *(_QWORD *)(a1 + 128);
  v4 = (unsigned int)(a2 - 1);
  v5 = 1LL << *(_DWORD *)(v3 + 144 * v4);
  for ( result = nullptr; (v5 & 0xB7) == 0; v5 = 1LL << *(_DWORD *)(v3 + 144 * v4) )
  {
    if ( (v5 & 8) != 0 )
    {
      if ( !(_DWORD)v4 )
        return result;
      v7 = v4 - 1;
      v8 = (_DWORD *)(v3 + 144LL * (unsigned int)(v4 - 1));
      v9 = *v8;
      if ( a3 )
      {
        while ( ((1LL << v9) & 0xEF) != 0 )
        {
          if ( (_DWORD)v4 == 1 )
            return result;
          v10 = (unsigned int)(v4 - 2);
          LODWORD(v4) = v4 - 1;
          v8 = (_DWORD *)(v3 + 144 * v10);
          v9 = *v8;
        }
      }
      else
      {
        while ( ((1LL << v9) & 0x21) == 0 && ((1LL << v9) & 0xCE) != 0 )
        {
          if ( !v7 )
            return result;
          LODWORD(v4) = v7;
          v11 = 144LL * (unsigned int)--v7;
          v8 = (_DWORD *)(v3 + v11);
          v9 = *v8;
        }
      }
      result = v8;
      a2 = v4 - 1;
      if ( (_DWORD)v4 == 1 )
        return result;
    }
    else
    {
      LODWORD(v4) = a2--;
      if ( !a2 )
        return result;
    }
    v4 = (unsigned int)(v4 - 2);
  }
  return result;
}
