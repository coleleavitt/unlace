/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809DE80
// Address: 0x0809DE80

//----- (0809DE80) --------------------------------------------------------
int __cdecl sub_809DE80(_DWORD *a1, int a2, _BYTE *a3, int a4)
{
  _DWORD *(__cdecl *v4)(int, int); // eax
  _DWORD *v5; // eax
  int v6; // ecx
  _DWORD *v7; // edx
  char *v8; // edx

  v4 = *(_DWORD *(__cdecl **)(int, int))(*a1 + 28);
  if ( v4 == sub_809D670 )
  {
    v5 = (_DWORD *)a1[5];
    v6 = 8 * a1[6];
    v7 = &v5[v6];
    if ( !(v6 * 4) )
      goto LABEL_10;
    while ( *v5 != a2 )
    {
      v5 += 8;
      if ( v7 == v5 )
        goto LABEL_10;
    }
  }
  else
  {
    v5 = v4((int)a1, a2);
  }
  if ( !v5 )
  {
LABEL_10:
    sub_80D3B60(a3, a4, "%08X", a2);
    return 0;
  }
  v8 = (char *)&dword_80DDFD8;
  if ( v5[3] )
    v8 = (char *)v5[2];
  sub_80D0740((unsigned int)a3, v8, a4);
  return 1;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
