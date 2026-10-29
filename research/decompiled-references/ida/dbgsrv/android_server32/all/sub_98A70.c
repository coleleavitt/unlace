/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98A70
// Address: 0x00098A70

//----- (00098A70) --------------------------------------------------------
int __fastcall sub_98A70(int a1, int a2)
{
  _BYTE *v5; // r1
  _BYTE *v6; // r2

  if ( *(_BYTE *)(a1 + 20) )
  {
    sub_93B8C(a2, "pixel vector[", "");
    sub_93B8C(a2, *(_BYTE **)(a1 + 12), *(_BYTE **)(a1 + 16));
    return sub_93B8C(a2, "]", "");
  }
  else
  {
    sub_923F8(*(unsigned __int8 **)(a1 + 8), a2);
    sub_93B8C(a2, " vector[", "");
    v5 = *(_BYTE **)(a1 + 12);
    if ( v5 )
    {
      v6 = *(_BYTE **)(a1 + 16);
      if ( v6 )
        sub_93B8C(a2, v5, v6);
      else
        sub_923F8(*(unsigned __int8 **)(a1 + 12), a2);
    }
    return sub_93B8C(a2, "]", "");
  }
}
