/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_656C0
// Address: 0x000656C0

//----- (000656C0) --------------------------------------------------------
int __fastcall sub_656C0(int a1)
{
  int v1; // r3
  int v2; // r0
  int v3; // t1

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
  {
    v2 = a1 + 4;
    v1 = 1;
    while ( 1 )
    {
      v3 = *(_DWORD *)(v2 + 4);
      v2 += 4;
      if ( !v3 )
        break;
      if ( ++v1 == 16 )
      {
        *_errno_location() = 23;
        return -1;
      }
    }
  }
  return v1;
}
