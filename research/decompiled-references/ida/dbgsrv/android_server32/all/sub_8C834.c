/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C834
// Address: 0x0008C834

//----- (0008C834) --------------------------------------------------------
int __fastcall sub_8C834(const char *a1, const char *a2, unsigned int a3)
{
  int v4; // r3
  int v5; // r4
  int v6; // r2

  if ( a3 < 2 )
    return strcmp(a1, a2);
  while ( 1 )
  {
    v4 = *(unsigned __int8 *)a2 - 32;
    if ( (unsigned __int8)(*a2 - 97) >= 0x1Au )
      v4 = *(unsigned __int8 *)a2;
    v5 = *(unsigned __int8 *)a1 - 32;
    if ( (unsigned __int8)(*a1 - 97) >= 0x1Au )
      v5 = *(unsigned __int8 *)a1;
    ++a2;
    ++a1;
    if ( !(v5 << 24) )
    {
      v6 = -1;
      if ( !(_BYTE)v4 )
        return 0;
      return v6;
    }
    if ( !(v4 << 24) )
      break;
    v6 = -1;
    if ( (unsigned __int8)v5 >= (unsigned int)(unsigned __int8)v4 )
    {
      v6 = 1;
      if ( (unsigned __int8)v5 <= (unsigned int)(unsigned __int8)v4 )
        continue;
    }
    return v6;
  }
  return 1;
}
