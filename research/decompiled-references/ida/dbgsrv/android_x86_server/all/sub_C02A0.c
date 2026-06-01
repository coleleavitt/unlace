/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C02A0
// Address: 0x000C02A0

//----- (000C02A0) --------------------------------------------------------
int __cdecl sub_C02A0(int *a1, int a2, int a3, _DWORD *a4, int a5, unsigned __int8 a6)
{
  int *v6; // ecx
  int v7; // edx
  int v8; // eax
  int v10; // ecx

  v6 = a1;
  v7 = a1[1];
  v8 = v7 >> 8;
  if ( (v7 & 1) != 0 )
  {
    v8 = *(_DWORD *)(*a4 + v8);
    v6 = a1;
  }
  v10 = *v6;
  if ( (v7 & 2) == 0 )
    a5 = 2;
  return (*(int (__cdecl **)(int, int, int, int, int, _DWORD))(*(_DWORD *)v10 + 20))(v10, a2, a3, (int)a4 + v8, a5, a6);
}
