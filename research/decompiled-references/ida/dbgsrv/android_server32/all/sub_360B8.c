/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_360B8
// Address: 0x000360B8

//----- (000360B8) --------------------------------------------------------
int __fastcall sub_360B8(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v6; // r6
  char **v7; // r0
  int v8; // r1
  char *v9; // r0
  char *v10; // r1
  _DWORD *v11; // r6
  _DWORD *v12; // r0
  int v13; // r1
  _DWORD *v14; // r0
  char *v15; // r1
  int v16; // r2
  int v17; // r0
  __int64 *v18; // r2

  v6 = (_DWORD *)a1[2];
  v7 = (char **)(v6 + 3);
  v8 = v6[4];
  if ( v6[5] >= (unsigned int)(v8 + 1) )
  {
    v9 = *v7;
  }
  else
  {
    v9 = (char *)qvector_reserve((int)v7, (void *)v6[3], v8 + 1, 0x18u);
    v6[3] = v9;
    v8 = v6[4];
  }
  v10 = &v9[24 * v8];
  *((_DWORD *)v10 + 4) = 0;
  *((_DWORD *)v10 + 3) = 0;
  *((_DWORD *)v10 + 5) = 0;
  ++v6[4];
  *(_DWORD *)v10 = a3;
  *((_DWORD *)v10 + 1) = a4;
  *((_DWORD *)v10 + 2) = *(_DWORD *)(a1[2] + 44);
  v11 = (_DWORD *)a1[2];
  v12 = v11 + 10;
  v13 = v11[11];
  if ( v11[12] >= (unsigned int)(v13 + 1) )
  {
    v14 = (_DWORD *)*v12;
  }
  else
  {
    v14 = qvector_reserve((int)v12, (void *)v11[10], v13 + 1, 0xCu);
    v11[10] = v14;
    v13 = v11[11];
  }
  v14[3 * v13] = 0;
  v15 = (char *)&v14[3 * v13];
  *((_DWORD *)v15 + 1) = 0;
  *((_DWORD *)v15 + 2) = 0;
  ++v11[11];
  v16 = a1[3];
  v17 = a1[1];
  if ( v16 == 2 )
  {
    v18 = (__int64 *)(v17 + 264);
  }
  else
  {
    if ( v16 != 1 )
    {
      if ( !under_debugger )
        interr(20086);
      __debugbreak();
    }
    v18 = (__int64 *)(v17 + 232);
  }
  return sub_32154(v17, (void **)v15, v18, *(_DWORD *)(a2 + 4));
}
// E0550: using guessed type char under_debugger;
