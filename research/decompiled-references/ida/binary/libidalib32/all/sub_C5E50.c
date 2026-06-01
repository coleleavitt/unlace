__int64 __fastcall sub_C5E50(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rdx
  unsigned __int8 v4; // dl

  v1 = *(int *)(a1 + 44);
  result = 0;
  if ( (v1 & 0x80000000) == 0LL && (int)v1 < *(_DWORD *)(dbg + 64LL) && v1 < (unsigned __int64)xmmword_251378 )
  {
    v3 = qword_251370 + 56 * v1;
    if ( v3 )
    {
      if ( *(_DWORD *)(v3 + 40) == -1 )
      {
        result = 1;
        if ( *(_BYTE *)(a1 + 32) == 0xFF )
        {
          v4 = *(_BYTE *)(v3 + 34);
          LOBYTE(result) = v4 <= 2u;
          return (v4 == 7) | (unsigned int)result;
        }
      }
    }
  }
  return result;
}

