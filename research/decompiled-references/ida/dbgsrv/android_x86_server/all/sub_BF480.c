/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BF480
// Address: 0x000BF480

//----- (000BF480) --------------------------------------------------------
int __cdecl sub_BF480(int *a1, int a2, _DWORD *a3, int a4)
{
  int *v5; // edi
  int v6; // edx
  int v7; // eax
  int v8; // edi

  v5 = a1;
  v6 = a1[1];
  if ( a3 )
  {
    v7 = v6 >> 8;
    if ( (v6 & 1) != 0 )
    {
      v7 = *(_DWORD *)(*a3 + v7);
      v5 = a1;
    }
  }
  else
  {
    v7 = 0;
  }
  v8 = *v5;
  if ( (v6 & 2) == 0 )
    a4 = 2;
  return (*(int (__cdecl **)(int, int, int, int))(*(_DWORD *)v8 + 28))(v8, a2, (int)a3 + v7, a4);
}
