/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: memicmp
// Address: 0x00000000000C5460

//----- (00000000000C5460) ----------------------------------------------------
__int64 __fastcall memicmp(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  int v5; // ebp
  unsigned int v6; // ebp

  if ( a3 <= 0 )
  {
    return 0;
  }
  else
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = tolower(*(unsigned __int8 *)(a1 + v4));
      v6 = v5 - tolower(*(unsigned __int8 *)(a2 + v4));
      if ( v6 )
        break;
      if ( (int)++v4 >= a3 )
        return 0;
    }
  }
  return v6;
}
