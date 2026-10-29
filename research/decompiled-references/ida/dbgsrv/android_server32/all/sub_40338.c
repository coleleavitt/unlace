/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40338
// Address: 0x00040338

//----- (00040338) --------------------------------------------------------
int __fastcall sub_40338(_DWORD *a1, int a2)
{
  int v2; // r3

  v2 = a1[3];
  if ( v2 - a2 <= 3 || v2 - (a2 + 4) <= 3 )
  {
    if ( !under_debugger )
      interr(276);
    __debugbreak();
  }
  return (((*(unsigned __int8 *)(*a1 + a2 + 3) << 8) + *(unsigned __int8 *)(*a1 + a2 + 2)) << 16)
       + (*(unsigned __int8 *)(*a1 + a2 + 1) << 8)
       + *(unsigned __int8 *)(*a1 + a2);
}
// E0550: using guessed type char under_debugger;
