/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BB110
// Address: 0x000BB110

//----- (000BB110) --------------------------------------------------------
void __cdecl sub_BB110(char **a1, char *a2, int a3)
{
  int v3; // edx
  unsigned int v4; // edi
  char *v5; // eax
  unsigned int v6; // [esp+8h] [ebp-14h]

  if ( a1 )
  {
    v3 = a3;
    v4 = (unsigned int)a1[1];
    if ( v4 >= 2 )
    {
      v5 = *a1;
      if ( (*a1)[v4 - 2] != 10 )
      {
        v6 = v4 + 1;
        if ( (unsigned int)a1[2] < v4 + 1 )
        {
          v5 = (char *)qvector_reserve((int)a1, v5, v6, 1u);
          v3 = a3;
          *a1 = v5;
        }
        a1[1] = (char *)v6;
        v5[v4 - 1] = 10;
        (*a1)[v4] = 0;
      }
    }
    sub_43950((int)a1, a2, v3);
  }
}
