_DWORD *__fastcall presolve_make_memlists(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r8
  _DWORD *result; // rax

  v3 = -66666666;
  if ( a3 > 0 )
  {
    v4 = 0;
    v5 = (unsigned int)(a3 - 1) + 1LL;
    do
    {
      while ( !*(_DWORD *)(a1 + 4 * v4) )
      {
        *(_DWORD *)(a2 + 8 * v4) = -66666666;
        *(_DWORD *)(a2 + 8 * v4++ + 4) = -66666666;
        if ( v5 == v4 )
          goto LABEL_8;
      }
      *(_DWORD *)(a2 + 8 * v4) = v3;
      if ( (_DWORD)v3 != -66666666 )
        *(_DWORD *)(a2 + 8 * v3 + 4) = v4;
      v3 = (int)v4++;
    }
    while ( v5 != v4 );
LABEL_8:
    if ( (_DWORD)v3 != -66666666 )
      *(_DWORD *)(a2 + 8LL * (int)v3 + 4) = a3;
  }
  result = (_DWORD *)(a2 + 8LL * a3);
  *result = v3;
  result[1] = -66666666;
  return result;
}

