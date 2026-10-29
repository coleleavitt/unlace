/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100058C48
// Address: 0x0000000100058C48

//----- (0000000100058C48) ----------------------------------------------------
_QWORD *__fastcall sub_100058C48(_QWORD *result, __int64 *a2)
{
  _QWORD *v2; // x19
  __int64 v3; // x22
  __int64 v4; // x23
  unsigned __int64 v5; // x8
  size_t v6; // x20
  _QWORD *v7; // x1
  __int64 v8; // x8
  bool v9; // cf
  __int64 v10; // x8
  __int64 v11; // x24
  unsigned __int64 v12; // x21
  _QWORD *v13; // x1
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 v16; // x21
  unsigned __int64 v17; // x8
  unsigned __int64 v18; // x21
  unsigned __int64 v19; // x20
  _QWORD *v20; // x1

  v2 = result;
  v3 = 24 * a2[1];
  if ( v3 )
  {
    v4 = *a2;
    do
    {
      result = strchr(*(char **)v4, 61);
      if ( result )
      {
        v5 = *(_QWORD *)(v4 + 8);
        if ( v5 )
          v6 = v5 - 1;
        else
          v6 = 0;
        if ( v5 >= 2 )
        {
          v7 = (_QWORD *)*v2;
          v8 = v2[1];
          v9 = v8 != 0;
          v10 = v8 - 1;
          if ( v9 )
            v11 = v10;
          else
            v11 = 0;
          v12 = v11 + v6 + 1;
          if ( v2[2] < v12 )
          {
            v7 = qvector_reserve(v2, v7, v11 + v6 + 1, 1u);
            *v2 = v7;
          }
          v2[1] = v12;
          *((_BYTE *)v7 + v11 + v6) = 0;
          result = memcpy((void *)(*v2 + v11), *(const void **)v4, v6);
        }
        v13 = (_QWORD *)*v2;
        v14 = v2[1];
        v9 = v14 != 0;
        v15 = v14 - 1;
        if ( v9 )
          v16 = v15;
        else
          v16 = 0;
        if ( v2[2] < (unsigned __int64)(v16 + 2) )
        {
          result = qvector_reserve(v2, v13, v16 + 2, 1u);
          v13 = result;
          *v2 = result;
        }
        v2[1] = v16 + 2;
        *((_BYTE *)v13 + v16) = 0;
        *(_BYTE *)(*v2 + v16 + 1) = 0;
      }
      v4 += 24;
      v3 -= 24;
    }
    while ( v3 );
  }
  v17 = v2[1];
  if ( v17 >= 2 )
  {
    v18 = v17 - 1;
    v19 = v17 + 1;
    v20 = (_QWORD *)*v2;
    if ( v2[2] < v17 + 1 )
    {
      result = qvector_reserve(v2, v20, v19, 1u);
      v20 = result;
      *v2 = result;
    }
    v2[1] = v19;
    *((_BYTE *)v20 + v18) = 0;
    *(_BYTE *)(*v2 + v18 + 1) = 0;
  }
  return result;
}
