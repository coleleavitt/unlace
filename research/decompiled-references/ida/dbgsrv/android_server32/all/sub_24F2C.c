/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_24F2C
// Address: 0x00024F2C

//----- (00024F2C) --------------------------------------------------------
int __fastcall sub_24F2C(int a1, int a2)
{
  void **v3; // r6
  int v4; // r6

  v3 = (void **)(a1 + 196);
  if ( *(_DWORD *)(a1 + 196) )
  {
    sub_1B470((int *)(a1 + 196), 0);
    qfree(*v3);
    *v3 = nullptr;
    *(_DWORD *)(a1 + 204) = 0;
  }
  v4 = 0;
  *(_BYTE *)(a1 + 1022) = 0;
  sub_250CA(a1 + 900, *(_DWORD **)(a1 + 904));
  *(_DWORD *)(a1 + 900) = a1 + 904;
  *(_DWORD *)(a1 + 908) = 0;
  *(_DWORD *)(a1 + 904) = 0;
  if ( sub_66D60((_DWORD *)a1) && sub_22938(a1, a2, 2) )
  {
    sub_1F2C8((_DWORD *)a1);
    return 1;
  }
  return v4;
}
