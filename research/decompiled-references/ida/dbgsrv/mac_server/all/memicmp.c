/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: memicmp
// Address: 0x000000010007DB00

//----- (000000010007DB00) ----------------------------------------------------
__int64 __fastcall memicmp(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r13
  int v5; // r12d
  unsigned int v6; // r12d

  if ( a3 <= 0 )
  {
    return 0;
  }
  else
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = __tolower(*(unsigned __int8 *)(a1 + v4));
      v6 = v5 - __tolower(*(unsigned __int8 *)(a2 + v4));
      if ( v6 )
        break;
      if ( a3 == (_DWORD)++v4 )
        return 0;
    }
  }
  return v6;
}
