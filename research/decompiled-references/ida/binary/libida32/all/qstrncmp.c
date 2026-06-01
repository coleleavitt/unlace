__int64 __fastcall qstrncmp(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  int v4; // r8d
  int v5; // r9d
  __int64 result; // rax

  if ( !a3 )
    return 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = *(unsigned __int16 *)(a2 + 2 * v3);
    v5 = *(unsigned __int16 *)(a1 + 2 * v3);
    result = (unsigned int)(v5 - v4);
    if ( v5 != v4 || !(_WORD)v5 )
      break;
    if ( a3 == ++v3 )
      return 0;
  }
  return result;
}

