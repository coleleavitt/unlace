/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A25F0
// Address: 0x00000000004A25F0

//----- (00000000004A25F0) ----------------------------------------------------
unsigned int **__fastcall sub_4A25F0(unsigned int **a1, size_t a2, unsigned int *a3, unsigned __int64 a4)
{
  unsigned int *v4; // x6
  size_t v5; // x5
  int v9; // w5
  signed __int64 v10; // x19
  unsigned int *v11; // x0
  unsigned __int64 v12; // x4
  char *v13; // x1
  char *v14; // x3
  size_t v15; // x22
  size_t v16; // x2
  char *v17; // x0

  v4 = *a1;
  v5 = *((_QWORD *)*a1 - 3);
  if ( a2 > v5 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::insert", a2, v5);
  if ( a4 > 0x3FFFFFFFFFFFFFF9LL - v5 )
    sub_4A04D0("basic_string::insert");
  if ( a3 < v4 )
    return sub_4A2388(a1, a2, 0, a3, a4);
  if ( a3 > (unsigned int *)((char *)v4 + v5) )
    return sub_4A2388(a1, a2, 0, a3, a4);
  v9 = atomic_load(v4 - 2);
  if ( v9 > 0 )
    return sub_4A2388(a1, a2, 0, a3, a4);
  v10 = (char *)a3 - (char *)v4;
  sub_4A1BB8(a1, a2, 0, a4);
  v11 = *a1;
  v12 = a4;
  v13 = (char *)*a1 + v10;
  v14 = (char *)*a1 + a2;
  if ( &v13[a4] <= v14 )
  {
    if ( a4 == 1 )
    {
      *((_BYTE *)v11 + a2) = *((_BYTE *)v11 + v10);
    }
    else if ( a4 )
    {
      memcpy((char *)*a1 + a2, v13, a4);
    }
  }
  else if ( v13 < v14 )
  {
    v15 = a2 - v10;
    if ( a2 - v10 == 1 )
    {
      *((_BYTE *)v11 + a2) = *((_BYTE *)v11 + v10);
    }
    else if ( v15 )
    {
      v17 = (char *)memcpy(v14, v13, a2 - v10);
      v12 = a4;
      v14 = v17;
    }
    v16 = v12 - v15;
    if ( v12 - v15 == 1 )
    {
      v14[v15] = v14[v12];
    }
    else if ( v16 )
    {
      memcpy(&v14[v15], &v14[v12], v16);
    }
  }
  else if ( a4 == 1 )
  {
    *((_BYTE *)v11 + a2) = v13[1];
  }
  else if ( a4 )
  {
    memcpy((char *)*a1 + a2, &v13[a4], a4);
  }
  return a1;
}
