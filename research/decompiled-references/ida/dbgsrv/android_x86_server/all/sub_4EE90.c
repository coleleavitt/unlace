/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4EE90
// Address: 0x0004EE90

//----- (0004EE90) --------------------------------------------------------
void __cdecl sub_4EE90(char **a1, unsigned int a2, char *a3)
{
  unsigned int v3; // ecx
  char *v4; // eax
  __int16 v5; // dx
  unsigned int j; // ecx
  unsigned int i; // ecx
  unsigned int v8; // [esp+8h] [ebp-14h]
  __int16 v9; // [esp+8h] [ebp-14h]

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
    if ( *a1 > a3 || &v4[2 * v8] <= a3 )
    {
      if ( v8 < a2 )
      {
        v4 = (char *)qvector_reserve((int)a1, v4, a2, 2u);
        *a1 = v4;
        v3 = (unsigned int)a1[1];
      }
      if ( v3 < a2 )
      {
        *(_WORD *)&v4[2 * v3] = *(_WORD *)a3;
        for ( i = v3 + 1; a2 != i; ++i )
          *(_WORD *)&(*a1)[2 * i] = *(_WORD *)a3;
      }
    }
    else
    {
      v5 = *(_WORD *)a3;
      if ( v8 < a2 )
      {
        v9 = *(_WORD *)a3;
        v4 = (char *)qvector_reserve((int)a1, v4, a2, 2u);
        v5 = v9;
        *a1 = v4;
        v3 = (unsigned int)a1[1];
      }
      if ( v3 < a2 )
      {
        *(_WORD *)&v4[2 * v3] = v5;
        for ( j = v3 + 1; a2 != j; ++j )
          *(_WORD *)&(*a1)[2 * j] = v5;
      }
    }
    goto LABEL_2;
  }
}
