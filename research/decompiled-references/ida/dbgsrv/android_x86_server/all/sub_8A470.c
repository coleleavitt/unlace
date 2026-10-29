/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A470
// Address: 0x0008A470

//----- (0008A470) --------------------------------------------------------
int __cdecl sub_8A470(int *a1)
{
  int *v1; // esi
  void **v2; // edi
  int v3; // esi
  int v4; // esi
  void *v5; // eax
  void *v6; // eax
  void ***v7; // edi

  v1 = a1;
  a1[63] = 0;
  sub_1BDA0(a1 + 49, 0);
  sub_1C390(a1 + 5, 0);
  if ( !a1[9] )
    goto LABEL_9;
  v2 = (void **)a1[11];
  v3 = a1[12];
  if ( (v3 & 0x3FFFFFFF) != 0 )
  {
    v4 = 4 * v3;
    do
    {
      qfree(*v2++);
      v4 -= 4;
    }
    while ( v4 );
    v1 = a1;
    v2 = (void **)a1[11];
    if ( v2 )
      goto LABEL_6;
  }
  else
  {
    v1 = a1;
    if ( v2 )
    {
LABEL_6:
      v1[12] = 0;
      qfree(v2);
      v1[11] = 0;
      v1[13] = 0;
    }
  }
  v5 = (void *)v1[8];
  if ( v5 )
  {
    v1[9] = 0;
    qfree(v5);
    v1[8] = 0;
    v1[10] = 0;
  }
LABEL_9:
  v6 = (void *)v1[46];
  if ( v6 )
  {
    v1[47] = 0;
    qfree(v6);
    v1[46] = 0;
    v1[48] = 0;
  }
  v7 = (void ***)v1;
  sub_1BE70((int)(v1 + 43), (void **)v1[44]);
  v1[45] = 0;
  v1[43] = (int)(v1 + 44);
  v1[44] = 0;
  sub_1BD00((int)(v7 + 65), v7[66]);
  v1[67] = 0;
  v1[65] = (int)(v1 + 66);
  v1[66] = 0;
  v1[68] = 0;
  *((_BYTE *)v1 + 389) = 0;
  return ((int (__cdecl *)(void ***))(*v7)[75])(v7);
}
