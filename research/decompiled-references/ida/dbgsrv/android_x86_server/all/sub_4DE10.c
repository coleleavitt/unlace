/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4DE10
// Address: 0x0004DE10

//----- (0004DE10) --------------------------------------------------------
void __cdecl sub_4DE10(unsigned int *a1)
{
  unsigned int *v1; // edi
  char *v2; // eax
  unsigned int v3; // edi
  int i; // esi
  void *v5; // eax
  void *v6; // eax
  void *v7; // eax
  void *v8; // eax
  void *v9; // eax
  void *v10; // eax
  void *v11; // eax
  void *v12; // eax
  void *v13; // eax
  unsigned int v14; // [esp+8h] [ebp-14h]

  v1 = a1;
  sub_46D10(a1);
  a1[25] = 0;
  v2 = (char *)a1[57];
  if ( v2 )
  {
    v14 = a1[58];
    if ( v14 )
    {
      v3 = 1;
      for ( i = 0; ; i += 20 )
      {
        free_idcv(&v2[i]);
        if ( v3 >= v14 )
          break;
        v2 = (char *)a1[57];
        ++v3;
      }
      v1 = a1;
      v2 = (char *)a1[57];
    }
    v1[58] = 0;
    qfree(v2);
    v1[57] = 0;
    v1[59] = 0;
  }
  v5 = (void *)v1[53];
  if ( v5 )
  {
    v1[54] = 0;
    qfree(v5);
    v1[53] = 0;
    v1[55] = 0;
  }
  v6 = (void *)v1[50];
  if ( v6 )
  {
    v1[51] = 0;
    qfree(v6);
    v1[50] = 0;
    v1[52] = 0;
  }
  v7 = (void *)v1[47];
  if ( v7 )
  {
    v1[48] = 0;
    qfree(v7);
    v1[47] = 0;
    v1[49] = 0;
  }
  v8 = (void *)v1[44];
  if ( v8 )
  {
    v1[45] = 0;
    qfree(v8);
    v1[44] = 0;
    v1[46] = 0;
  }
  v9 = (void *)v1[41];
  if ( v9 )
  {
    v1[42] = 0;
    qfree(v9);
    v1[41] = 0;
    v1[43] = 0;
  }
  v10 = (void *)v1[38];
  if ( v10 )
  {
    v1[39] = 0;
    qfree(v10);
    v1[38] = 0;
    v1[40] = 0;
  }
  v11 = (void *)v1[35];
  if ( v11 )
  {
    v1[36] = 0;
    qfree(v11);
    v1[35] = 0;
    v1[37] = 0;
  }
  v12 = (void *)v1[32];
  if ( v12 )
  {
    v1[33] = 0;
    qfree(v12);
    v1[32] = 0;
    v1[34] = 0;
  }
  sub_1BC40((char **)v1 + 22);
  sub_1BC40((char **)v1 + 19);
  sub_1BC40((char **)v1 + 16);
  v13 = (void *)v1[5];
  if ( v13 )
  {
    v1[6] = 0;
    qfree(v13);
    v1[5] = 0;
    v1[7] = 0;
  }
}
