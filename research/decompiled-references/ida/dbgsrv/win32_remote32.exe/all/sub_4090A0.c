/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4090A0
// Address: 0x004090A0

//----- (004090A0) --------------------------------------------------------
int __cdecl sub_4090A0(int a1, _DWORD *a2, int a3)
{
  unsigned int v3; // ebx
  LPVOID v4; // eax

  *(_DWORD *)a1 = *a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)a3;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a3 + 4);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  v3 = *(_DWORD *)(a3 + 16);
  if ( v3 )
  {
    v4 = sub_4539E0(*(_DWORD *)(a3 + 16));
    *(_DWORD *)(a1 + 16) = v4;
    *(_DWORD *)(a1 + 24) = v3;
    sub_464310((unsigned int)v4, *(_DWORD *)(a3 + 12), v3);
    *(_DWORD *)(a1 + 20) = v3;
  }
  *(_OWORD *)(a1 + 28) = *(_OWORD *)(a3 + 24);
  *(_QWORD *)(a1 + 44) = *(_QWORD *)(a3 + 40);
  return a1;
}
