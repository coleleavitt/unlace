/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A1BB8
// Address: 0x00000000004A1BB8

//----- (00000000004A1BB8) ----------------------------------------------------
unsigned int *__fastcall sub_4A1BB8(unsigned int **a1, size_t a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // x4
  unsigned __int64 v7; // x1
  __int64 v8; // x23
  __int64 v9; // x2
  unsigned __int64 v11; // x23
  size_t v13; // x19
  int v14; // w0
  _QWORD *v15; // x0
  _QWORD *v16; // x26
  unsigned int *v17; // x22
  unsigned int *v18; // x1
  unsigned int *v19; // x2
  unsigned int *v20; // x0
  unsigned int *result; // x0
  size_t v22; // x20
  size_t v23; // x25
  bool v24; // zf
  size_t v25; // x20
  unsigned int *v26; // x2
  int v27; // w1

  v4 = *a1;
  v7 = *((_QWORD *)*a1 - 2);
  v8 = a4 - a3;
  v9 = *((_QWORD *)*a1 - 3);
  v11 = v8 + v9;
  v13 = v9 - a2 - a3;
  if ( v11 > v7 || (v14 = atomic_load(v4 - 2), v14 > 0) )
  {
    v15 = sub_4A1858(v11, v7);
    v16 = v15;
    v17 = (unsigned int *)(v15 + 3);
    if ( a2 )
    {
      v18 = *a1;
      if ( a2 != 1 )
      {
        memcpy(v15 + 3, v18, a2);
        v19 = *a1;
        if ( !v13 )
          goto LABEL_7;
        goto LABEL_11;
      }
      *((_BYTE *)v15 + 24) = *(_BYTE *)v18;
    }
    v19 = *a1;
    if ( !v13 )
    {
LABEL_7:
      v20 = v19 - 6;
      if ( v19 - 6 != (unsigned int *)std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v26 = v19 - 2;
          do
            v27 = __ldaxr(v26);
          while ( __stlxr(v27 - 1, v26) );
        }
        else
        {
          v27 = *(v19 - 2);
          *(v19 - 2) = v27 - 1;
        }
        if ( v27 <= 0 )
          j_j__free_0_0(v20);
      }
      *a1 = v17;
LABEL_9:
      result = v17 - 6;
      if ( v17 - 6 == (unsigned int *)std::string::_Rep::_S_empty_rep_storage )
        return result;
LABEL_24:
      *((_QWORD *)v17 - 3) = v11;
      *(v17 - 2) = 0;
      *((_BYTE *)v17 + v11) = 0;
      return result;
    }
LABEL_11:
    v22 = a3 + a2;
    v23 = a2 + 24 + a4;
    if ( v13 == 1 )
      *((_BYTE *)v16 + v23) = *((_BYTE *)v19 + v22);
    else
      memcpy((char *)v16 + v23, (char *)v19 + v22, v13);
    v19 = *a1;
    goto LABEL_7;
  }
  v17 = v4;
  if ( v13 )
    v24 = a4 == a3;
  else
    v24 = 1;
  if ( !v24 )
  {
    v25 = a3 + a2;
    if ( v13 == 1 )
    {
      *((_BYTE *)v4 + a4 + a2) = *((_BYTE *)v4 + v25);
      v17 = *a1;
      goto LABEL_9;
    }
    memmove((char *)v4 + a4 + a2, (char *)v4 + v25, v13);
    v17 = *a1;
  }
  result = v17 - 6;
  if ( v17 - 6 != (unsigned int *)std::string::_Rep::_S_empty_rep_storage )
    goto LABEL_24;
  return result;
}
// 524590: using guessed type __int64 std::string::_Rep::_S_empty_rep_storage[4];
