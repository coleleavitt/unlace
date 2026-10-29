/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A58B0
// Address: 0x080A58B0

//----- (080A58B0) --------------------------------------------------------
int __cdecl sub_80A58B0(int a1, _DWORD *a2, unsigned int a3)
{
  int v3; // edx
  unsigned int *v4; // eax
  unsigned int v6; // eax

  if ( a2 && *a2 == 3 )
  {
    v6 = a3;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 8) - 1;
    if ( v3 < 0 )
    {
LABEL_8:
      sub_80CD730((int)a2, a3, 0);
      return 0;
    }
    v4 = (unsigned int *)(*(_DWORD *)(a1 + 4) + 16 * (*(_DWORD *)(a1 + 8) + 0xFFFFFFF));
    while ( a3 < *v4 || a3 >= v4[1] )
    {
      --v3;
      v4 -= 4;
      if ( v3 == -1 )
        goto LABEL_8;
    }
    v6 = a3 + v4[2] - *v4;
  }
  if ( v6 == -1 )
    goto LABEL_8;
  sub_80CD730((int)a2, v6, 0);
  return 1;
}
