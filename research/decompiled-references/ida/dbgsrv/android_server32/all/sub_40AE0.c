/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40AE0
// Address: 0x00040AE0

//----- (00040AE0) --------------------------------------------------------
int __fastcall sub_40AE0(_DWORD *a1)
{
  _DWORD *v1; // r4
  void *v2; // r0
  char *v3; // r5
  unsigned int v4; // r7
  int i; // r6
  void *v6; // r0
  _DWORD *v7; // r6
  void *v8; // r0
  unsigned __int8 *v9; // r0
  unsigned int v10; // r5
  unsigned int v11; // r6
  int j; // r7
  unsigned int v14; // [sp+8h] [bp-8h]
  _DWORD *v15; // [sp+Ch] [bp-4h]

  v1 = a1;
  v2 = (void *)a1[4];
  v15 = v1;
  if ( v2 )
  {
    v1[5] = 0;
    qfree(v2);
    v1[6] = 0;
    v1[4] = 0;
  }
  v3 = (char *)v1[11];
  if ( v3 )
  {
    v14 = v1[12];
    if ( v14 )
    {
      v4 = 1;
      for ( i = 12; ; i += 16 )
      {
        v6 = *(void **)&v3[i - 8];
        if ( v6 )
        {
          *(_DWORD *)&v3[i - 4] = 0;
          qfree(v6);
          *(_DWORD *)&v3[i - 8] = 0;
          *(_DWORD *)&v3[i] = 0;
        }
        if ( v4 >= v14 )
          break;
        ++v4;
        v3 = (char *)v1[11];
      }
      v7 = v1;
      v3 = (char *)v1[11];
    }
    else
    {
      v7 = v1;
    }
    v7[12] = 0;
    qfree(v3);
    v7[13] = 0;
    v7[11] = 0;
    v1 = v7;
  }
  v8 = (void *)v1[14];
  if ( v8 )
  {
    v15[15] = 0;
    qfree(v8);
    v15[16] = 0;
    v15[14] = 0;
    v1 = v15;
  }
  v9 = (unsigned __int8 *)v1[8];
  if ( v9 )
  {
    v10 = v1[9];
    if ( v10 )
    {
      v11 = 1;
      for ( j = 0; ; j += 24 )
      {
        free_idcv(&v9[j]);
        if ( v11 >= v10 )
          break;
        ++v11;
        v9 = (unsigned __int8 *)v1[8];
      }
      v9 = (unsigned __int8 *)v1[8];
    }
    v1[9] = 0;
    qfree(v9);
    v1[10] = 0;
    v1[8] = 0;
  }
  v1[3] = 0;
  return 0;
}
