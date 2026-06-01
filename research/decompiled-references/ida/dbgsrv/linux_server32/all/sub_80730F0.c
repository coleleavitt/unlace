/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80730F0
// Address: 0x080730F0

//----- (080730F0) --------------------------------------------------------
int __cdecl sub_80730F0(_DWORD *a1, int a2)
{
  unsigned int v2; // eax
  unsigned __int8 *v3; // edi
  int v4; // ebp
  int v5; // eax

  v2 = a1[2];
  if ( v2 > 1 )
  {
    v3 = (unsigned __int8 *)a1[1];
    v4 = (int)&v3[v2 - 1];
    do
    {
      v5 = *v3++;
      *(v3 - 1) = toupper(v5);
    }
    while ( v3 != (unsigned __int8 *)v4 );
  }
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 4) = a1[1];
  *(_DWORD *)(a2 + 8) = a1[2];
  *(_DWORD *)(a2 + 12) = a1[3];
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  return 0;
}
