/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4EF80
// Address: 0x0004EF80

//----- (0004EF80) --------------------------------------------------------
void __cdecl sub_4EF80(char **a1, unsigned int a2, char *a3)
{
  unsigned int v3; // ecx
  char *v4; // eax
  int v5; // edx
  unsigned int j; // ecx
  unsigned int i; // ecx
  unsigned int v8; // [esp+8h] [ebp-14h]
  int v9; // [esp+8h] [ebp-14h]

  v3 = (unsigned int)a1[1];
  if ( v3 > a2 )
  {
LABEL_2:
    a1[1] = (char *)a2;
    return;
  }
  if ( v3 < a2 )
  {
    v4 = *a1;
    v8 = (unsigned int)a1[2];
    if ( *a1 > a3 || &v4[4 * v8] <= a3 )
    {
      if ( v8 < a2 )
      {
        v4 = (char *)qvector_reserve((int)a1, v4, a2, 4u);
        *a1 = v4;
        v3 = (unsigned int)a1[1];
      }
      if ( v3 < a2 )
      {
        *(_DWORD *)&v4[4 * v3] = *(_DWORD *)a3;
        for ( i = v3 + 1; a2 != i; ++i )
          *(_DWORD *)&(*a1)[4 * i] = *(_DWORD *)a3;
      }
    }
    else
    {
      v5 = *(_DWORD *)a3;
      if ( v8 < a2 )
      {
        v9 = *(_DWORD *)a3;
        v4 = (char *)qvector_reserve((int)a1, v4, a2, 4u);
        v5 = v9;
        *a1 = v4;
        v3 = (unsigned int)a1[1];
      }
      if ( v3 < a2 )
      {
        *(_DWORD *)&v4[4 * v3] = v5;
        for ( j = v3 + 1; a2 != j; ++j )
          *(_DWORD *)&(*a1)[4 * j] = v5;
      }
    }
    goto LABEL_2;
  }
}
