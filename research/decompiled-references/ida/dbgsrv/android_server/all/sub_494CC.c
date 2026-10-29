/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_494CC
// Address: 0x00000000000494CC

//----- (00000000000494CC) ----------------------------------------------------
char *__fastcall sub_494CC(char *result, char *a2)
{
  char *v2; // x8
  unsigned __int64 v3; // x10
  _QWORD *v4; // x19
  __int128 v6; // q0
  __int64 v7; // x22
  __int64 v8; // x8
  _QWORD *v9; // x21
  __int64 v10; // x9
  char *v11; // x8
  __int64 v12; // x9
  __int64 v13; // x9
  char *v14; // x8
  __int128 v15; // [xsp+0h] [xbp-40h]

  v2 = *(char **)result;
  v3 = *((_QWORD *)result + 2);
  v4 = result;
  if ( *(_QWORD *)result > (unsigned __int64)a2 || &v2[24 * v3] <= a2 )
  {
    v9 = result + 8;
    v10 = *((_QWORD *)result + 1);
    if ( v3 < v10 + 1 )
    {
      result = (char *)qvector_reserve((pthread_mutex_t *)result, *(void **)result, v10 + 1, 0x18u);
      v10 = v4[1];
      v2 = result;
      *v4 = result;
    }
    v11 = &v2[24 * v10];
    *(_QWORD *)v11 = *(_QWORD *)a2;
    v12 = *((_QWORD *)a2 + 1);
    *(_QWORD *)a2 = 0;
    *((_QWORD *)v11 + 1) = v12;
    v13 = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 1) = 0;
    *((_QWORD *)v11 + 2) = v13;
    *((_QWORD *)a2 + 2) = 0;
  }
  else
  {
    v6 = *(_OWORD *)a2;
    v7 = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 1) = 0;
    *((_QWORD *)a2 + 2) = 0;
    *(_QWORD *)a2 = 0;
    v9 = result + 8;
    v8 = *((_QWORD *)result + 1);
    if ( *((_QWORD *)result + 2) >= (unsigned __int64)(v8 + 1) )
    {
      result = *(char **)result;
    }
    else
    {
      v15 = v6;
      result = (char *)qvector_reserve((pthread_mutex_t *)result, *(void **)result, v8 + 1, 0x18u);
      v8 = v4[1];
      v6 = v15;
      *v4 = result;
    }
    v14 = &result[24 * v8];
    *(_OWORD *)v14 = v6;
    *((_QWORD *)v14 + 2) = v7;
  }
  ++*v9;
  return result;
}
