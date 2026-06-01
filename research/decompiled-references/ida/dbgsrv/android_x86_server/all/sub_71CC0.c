/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71CC0
// Address: 0x00071CC0

//----- (00071CC0) --------------------------------------------------------
int __cdecl sub_71CC0(int a1, int a2)
{
  char v2; // cl
  int result; // eax
  int v4; // edi
  int v5; // esi

  v2 = *(_BYTE *)(a2 + 4);
  result = *(_DWORD *)(a1 + 4) << v2;
  v4 = *(_QWORD *)(a1 + 4) << v2 >> 32;
  v5 = 0;
  if ( (v2 & 0x20) != 0 )
    v4 = *(_DWORD *)(a1 + 4) << v2;
  else
    v5 = *(_DWORD *)(a1 + 4) << v2;
  *(_DWORD *)(a1 + 8) = v4;
  *(_DWORD *)(a1 + 4) = v5;
  return result;
}
