/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79CC0
// Address: 0x00079CC0

//----- (00079CC0) --------------------------------------------------------
int __cdecl sub_79CC0(_DWORD *a1, int a2)
{
  void *v2; // eax
  void *v3; // eax
  int v4; // edx
  int v5; // eax
  signed int v6; // edx
  _QWORD *v7; // eax
  __int128 v8; // xmm0

  v2 = *(void **)(a2 + 12);
  if ( v2 )
  {
    *(_DWORD *)(a2 + 16) = 0;
    qfree(v2);
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 20) = 0;
  }
  v3 = *(void **)a2;
  if ( *(_DWORD *)a2 )
  {
    *(_DWORD *)(a2 + 4) = 0;
    qfree(v3);
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 8) = 0;
  }
  v4 = a1[1];
  v5 = *a1 + 40 * v4 - a2;
  if ( v5 >= 41 )
  {
    v6 = v5 / 0x28u - 2;
    v7 = (_QWORD *)(a2 + 64);
    do
    {
      v8 = *(_OWORD *)(v7 - 3);
      *((_DWORD *)v7 - 6) = 0;
      *((_DWORD *)v7 - 5) = 0;
      *((_DWORD *)v7 - 4) = 0;
      *((_OWORD *)v7 - 4) = v8;
      *((_DWORD *)v7 - 3) = 0;
      *((_DWORD *)v7 - 12) = *((_DWORD *)v7 - 2);
      *((_DWORD *)v7 - 2) = 0;
      *((_DWORD *)v7 - 11) = *((_DWORD *)v7 - 1);
      *((_DWORD *)v7 - 1) = 0;
      *(v7 - 5) = *v7;
      *(v7 - 4) = v7[1];
      v7 += 5;
      --v6;
    }
    while ( v6 >= 0 );
    v4 = a1[1];
  }
  a1[1] = v4 - 1;
  return a2;
}
