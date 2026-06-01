/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71700
// Address: 0x00071700

//----- (00071700) --------------------------------------------------------
int __cdecl sub_71700(int a1, int a2)
{
  unsigned int v2; // edi
  unsigned int v3; // eax
  int v4; // ebx
  unsigned __int64 v5; // rax
  int v6; // edi

  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a2 + 4);
  v4 = v3 * *(_DWORD *)(a1 + 8);
  v5 = v2 * (unsigned __int64)v3;
  v6 = *(_DWORD *)(a2 + 8) * v2;
  *(_DWORD *)(a1 + 4) = v5;
  *(_DWORD *)(a1 + 8) = v4 + HIDWORD(v5) + v6;
  return v5;
}
