/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_862A4
// Address: 0x000862A4

//----- (000862A4) --------------------------------------------------------
int __fastcall sub_862A4(int a1, int a2)
{
  _BYTE *v2; // r3
  _DWORD *v4; // r5
  int v5; // r0

  v2 = *(_BYTE **)(a1 + 12);
  if ( *v2 == 74 )
  {
    *(_DWORD *)(a1 + 12) = v2 + 1;
    goto LABEL_4;
  }
  if ( a2 )
  {
LABEL_4:
    v4 = sub_857B4(a1);
    if ( !v4 )
      return 0;
    goto LABEL_5;
  }
  v4 = nullptr;
LABEL_5:
  v5 = sub_8609C(a1);
  if ( v5 )
    return sub_841E0(a1, 41, __SPAIR64__(v5, (unsigned int)v4));
  return 0;
}
