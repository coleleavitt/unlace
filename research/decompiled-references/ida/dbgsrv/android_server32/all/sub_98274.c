/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98274
// Address: 0x00098274

//----- (00098274) --------------------------------------------------------
int __fastcall sub_98274(int a1, int a2)
{
  int v3; // r0

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 )
  {
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v3 + 12))(v3, a2);
    if ( !sub_94822(*(_DWORD *)(a1 + 8)) )
      sub_93B8C(a2, " ", "");
  }
  return sub_923F8(*(unsigned __int8 **)(a1 + 12), a2);
}
