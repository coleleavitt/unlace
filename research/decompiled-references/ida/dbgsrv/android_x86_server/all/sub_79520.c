/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79520
// Address: 0x00079520

//----- (00079520) --------------------------------------------------------
int __cdecl sub_79520(int a1, int a2)
{
  int result; // eax
  char *v3; // edx

  result = a2;
  *(_QWORD *)(a2 + 20) = *(_QWORD *)a1;
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a2 + 40) = 0;
  if ( *(_DWORD *)(a1 + 16) )
    v3 = *(char **)(a1 + 12);
  else
    v3 = byte_EF875;
  *(_DWORD *)a2 = v3;
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 48) = 0;
  *(_DWORD *)(a2 + 68) = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a2 + 72) = 0;
  *(_QWORD *)(a2 + 4) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a2 + 52) = *(_QWORD *)(a1 + 48);
  return result;
}
