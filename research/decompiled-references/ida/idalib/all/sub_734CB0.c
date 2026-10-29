__int64 __fastcall sub_734CB0(__int64 a1, __int16 a2)
{
  unsigned __int16 v3; // si
  char *v4; // rax
  unsigned int v5; // esi
  _WORD *v6; // rdx

  v3 = *(_WORD *)(a1 + 32);
  if ( !v3 )
    return 0;
  while ( a2 != v3 )
  {
    v4 = sub_733BE0(*(__m128i **)(a1 + 8), v3, 0);
    if ( !v4 )
      return 0;
    v5 = *(unsigned __int16 *)v4;
    if ( (*(_DWORD *)a1 >> 1) - 4 < v5 )
      return 0;
    if ( (_WORD)v5 )
    {
      v6 = v4 + 4;
      while ( a2 != *v6 )
      {
        if ( ++v6 == (_WORD *)&v4[2 * v5 + 4] )
          goto LABEL_10;
      }
      return 1;
    }
LABEL_10:
    v3 = *((_WORD *)v4 + 1);
    if ( !v3 )
      return 0;
  }
  return 1;
}
