/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E3D0
// Address: 0x0004E3D0

//----- (0004E3D0) --------------------------------------------------------
int __fastcall sub_4E3D0(int a1, char *a2)
{
  _BYTE *v4; // r0
  FILE *v5; // r0
  int result; // r0

  while ( *(_DWORD *)(a1 + 140) )
    sub_4B03C(a1);
  *(_DWORD *)(a1 + 116) = a1;
  *(_DWORD *)(a1 + 156) = 0;
  *(_BYTE *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 112) = sub_4B534;
  *(_BYTE *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  if ( !a2 )
  {
    sub_70A2C(1);
    *_errno_location() = 2;
  }
  sub_77E08(*(void **)(a1 + 152));
  v4 = sub_77E44(a2);
  *(_DWORD *)(a1 + 152) = v4;
  if ( !v4 )
    return sub_70A10();
  v5 = sub_75CB0((int)v4);
  *(_DWORD *)(a1 + 148) = v5;
  if ( !v5 )
    return sub_70A10();
  result = *(unsigned __int8 *)(a1 + 644);
  if ( *(_BYTE *)(a1 + 644) )
    return sub_4DEB0(a1, 0, 0);
  return result;
}
