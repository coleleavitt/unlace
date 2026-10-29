/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3EDBC
// Address: 0x0003EDBC

//----- (0003EDBC) --------------------------------------------------------
int __fastcall sub_3EDBC(void **a1, char *a2)
{
  int v4; // r0
  int v5; // r6
  _DWORD *v6; // r4
  void *v7; // r0
  char *v8; // r0
  int v9; // r7
  int i; // r5
  char *v11; // r3
  void *v12; // r0
  void *v13; // r0
  unsigned __int8 *v14; // r0
  int v15; // r7
  int j; // r5
  int v17; // r3
  size_t v19; // r0
  size_t v20; // r6
  char *v21; // r3
  void *v22; // r1
  void *v23; // r0
  size_t v24; // r9
  void *v25; // r0

  v4 = sub_3ED68(a1, a2);
  if ( v4 == -1 )
  {
    v6 = sub_805CC(0x48u);
    *v6 = 0;
    v6[1] = 0;
    v6[2] = 0;
    v6[4] = 0;
    v6[5] = 0;
    v6[6] = 0;
    v6[8] = 0;
    v6[9] = 0;
    v6[10] = 0;
    v6[11] = 0;
    v6[12] = 0;
    v6[13] = 0;
    v6[14] = 0;
    v6[15] = 0;
    v6[16] = 0;
    if ( a2 )
    {
      v19 = strlen(a2);
      v20 = v19;
      if ( v19 )
      {
        v24 = v19 + 1;
        v25 = sub_77EB0((int)v6, nullptr, v19 + 1, 1u);
        v6[1] = v24;
        *v6 = v25;
        memmove(v25, a2, v20);
        *(_BYTE *)(*v6 + v20) = 0;
      }
    }
    v21 = (char *)a1[1];
    v22 = *a1;
    v5 = (int)v21;
    if ( v21 + 1 > a1[2] )
    {
      v23 = sub_77EB0((int)a1, v22, (unsigned int)(v21 + 1), 4u);
      v21 = (char *)a1[1];
      v22 = v23;
      *a1 = v23;
    }
    *((_DWORD *)v22 + (_DWORD)v21) = v6;
    a1[1] = (char *)a1[1] + 1;
  }
  else
  {
    v5 = v4;
    v6 = *((_DWORD **)*a1 + v4);
    if ( v6[17] )
      return -1;
    v7 = (void *)v6[4];
    if ( v7 )
    {
      v6[5] = 0;
      sub_77E08(v7);
      v6[4] = 0;
      v6[6] = 0;
    }
    v8 = (char *)v6[11];
    if ( v8 )
    {
      v9 = v6[12];
      if ( v9 )
      {
        for ( i = 0; i != v9; ++i )
        {
          v11 = &v8[16 * i];
          v12 = *((void **)v11 + 1);
          if ( v12 )
          {
            *((_DWORD *)v11 + 2) = 0;
            sub_77E08(v12);
          }
          v8 = (char *)v6[11];
        }
      }
      v6[12] = 0;
      sub_77E08(v8);
      v6[11] = 0;
      v6[13] = 0;
    }
    v13 = (void *)v6[14];
    if ( v13 )
    {
      v6[15] = 0;
      sub_77E08(v13);
      v6[14] = 0;
      v6[16] = 0;
    }
    v14 = (unsigned __int8 *)v6[8];
    if ( v14 )
    {
      v15 = v6[9];
      if ( v15 )
      {
        for ( j = 0; j != v15; ++j )
        {
          v17 = 3 * j;
          sub_455C8(&v14[8 * v17]);
          v14 = (unsigned __int8 *)v6[8];
        }
      }
      v6[9] = 0;
      sub_77E08(v14);
      v6[8] = 0;
      v6[10] = 0;
    }
    v6[3] = 0;
  }
  v6[17] = -1;
  v6[3] = 0;
  return v5;
}
