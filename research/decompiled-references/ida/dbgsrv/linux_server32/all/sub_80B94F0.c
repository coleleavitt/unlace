/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B94F0
// Address: 0x080B94F0

//----- (080B94F0) --------------------------------------------------------
unsigned int __cdecl sub_80B94F0(_DWORD *a1, char **a2, _DWORD *a3, unsigned int *a4)
{
  unsigned int v4; // ebp
  unsigned int v5; // eax
  const void *v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // ecx
  char *v9; // edx
  unsigned int v10; // ebp
  unsigned int v11; // eax
  const void *v12; // eax
  unsigned int v13; // edx
  char *v14; // ecx
  unsigned int result; // eax
  char *v16; // edx
  char *v17; // edx
  char *v18; // eax
  char *v19; // eax

  sub_80B9180(a1, 1, a4);
  v4 = sub_80CDEC0(a4, a4[1]);
  v5 = (unsigned int)a2[1];
  if ( v5 < v4 )
  {
    v17 = *a2;
    if ( (unsigned int)a2[2] < v4 )
    {
      v19 = (char *)sub_80CF920((int)a2, v17, v4, 1u);
      *a2 = v19;
      v17 = v19;
      v5 = (unsigned int)a2[1];
    }
    memset(&v17[v5], 0, v4 - v5);
    a2[1] = (char *)v4;
  }
  else if ( v4 != v5 )
  {
    a2[1] = (char *)v4;
  }
  v6 = (const void *)*a4;
  v7 = a4[1];
  v8 = v4 + *a4;
  if ( !__CFADD__(v4, *a4) && v7 >= v8 )
  {
    v9 = *a2;
    *a4 = v8;
    memcpy(v9, v6, v4);
    v7 = a4[1];
  }
  a2[3] = (char *)(sub_80CE010(a4, v7) - 1);
  v10 = sub_80CDEC0(a4, a4[1]);
  v11 = (unsigned int)a2[5];
  if ( v11 < v10 )
  {
    v16 = a2[4];
    if ( (unsigned int)a2[6] < v10 )
    {
      v18 = (char *)sub_80CF920((int)(a2 + 4), v16, v10, 1u);
      a2[4] = v18;
      v16 = v18;
      v11 = (unsigned int)a2[5];
    }
    memset(&v16[v11], 0, v10 - v11);
    a2[5] = (char *)v10;
  }
  else if ( v10 != v11 )
  {
    a2[5] = (char *)v10;
  }
  v12 = (const void *)*a4;
  v13 = *a4 + v10;
  if ( a4[1] >= v13 && v13 >= (unsigned int)v12 )
  {
    v14 = a2[4];
    *a4 = v13;
    memcpy(v14, v12, v10);
  }
  result = (unsigned int)a3;
  if ( a3 )
    return sub_80B9180(a3, 0, a4);
  return result;
}
