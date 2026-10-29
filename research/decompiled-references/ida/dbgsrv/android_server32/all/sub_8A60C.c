/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A60C
// Address: 0x0008A60C

//----- (0008A60C) --------------------------------------------------------
int __fastcall sub_8A60C(_DWORD *a1, int a2)
{
  int result; // r0
  int v4; // r3

  result = -2;
  if ( a1 )
  {
    if ( a1[8] )
    {
      if ( a1[9] )
      {
        v4 = a1[7];
        if ( v4 )
        {
          if ( *(_DWORD **)v4 == a1
            && (unsigned int)(*(_DWORD *)(v4 + 4) - 16180) <= 0x1F
            && (*(_BYTE *)(v4 + 12) & 2) != 0 )
          {
            *(_DWORD *)(v4 + 36) = a2;
            *(_DWORD *)(a2 + 48) = 0;
            return 0;
          }
        }
      }
    }
  }
  return result;
}
