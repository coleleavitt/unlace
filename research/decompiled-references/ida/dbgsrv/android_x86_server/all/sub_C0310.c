/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C0310
// Address: 0x000C0310

//----- (000C0310) --------------------------------------------------------
int __cdecl sub_C0310(int *a1, int a2, _DWORD *a3, int a4, unsigned __int8 a5)
{
  int *v5; // edi
  int v6; // ecx
  int v7; // eax
  int v9; // edi

  v5 = a1;
  v6 = a1[1];
  v7 = v6 >> 8;
  if ( (v6 & 1) != 0 )
  {
    v7 = *(_DWORD *)(*a3 + v7);
    v5 = a1;
  }
  v9 = *v5;
  if ( (v6 & 2) == 0 )
    a4 = 2;
  return (*(int (__cdecl **)(int, int, int, int, _DWORD))(*(_DWORD *)v9 + 24))(v9, a2, (int)a3 + v7, a4, a5);
}
