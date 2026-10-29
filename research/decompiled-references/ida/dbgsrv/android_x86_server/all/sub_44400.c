/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44400
// Address: 0x00044400

//----- (00044400) --------------------------------------------------------
void __cdecl sub_44400(char **a1, unsigned int a2, char *a3)
{
  unsigned int v3; // ecx
  char *v4; // eax
  char v5; // dl
  unsigned int j; // ecx
  unsigned int i; // ecx
  unsigned int v8; // [esp+8h] [ebp-14h]
  char v9; // [esp+8h] [ebp-14h]

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
    if ( *a1 > a3 || &v4[v8] <= a3 )
    {
      if ( v8 < a2 )
      {
        v4 = (char *)qvector_reserve((int)a1, v4, a2, 1u);
        *a1 = v4;
        v3 = (unsigned int)a1[1];
      }
      if ( v3 < a2 )
      {
        v4[v3] = *a3;
        for ( i = v3 + 1; a2 != i; ++i )
          (*a1)[i] = *a3;
      }
    }
    else
    {
      v5 = *a3;
      if ( v8 < a2 )
      {
        v9 = *a3;
        v4 = (char *)qvector_reserve((int)a1, v4, a2, 1u);
        v5 = v9;
        *a1 = v4;
        v3 = (unsigned int)a1[1];
      }
      if ( v3 < a2 )
      {
        v4[v3] = v5;
        for ( j = v3 + 1; a2 != j; ++j )
          (*a1)[j] = v5;
      }
    }
    goto LABEL_2;
  }
}
