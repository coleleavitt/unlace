/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003E38C
// Address: 0x000000010003E38C

//----- (000000010003E38C) ----------------------------------------------------
__int64 __fastcall sub_10003E38C(_QWORD *a1, char **a2)
{
  const char *v2; // x21
  char *v5; // x0
  char *v6; // x8
  size_t v8; // x22
  unsigned __int64 v9; // x23
  _QWORD *v10; // x1
  unsigned __int64 v11; // x8
  _QWORD *v12; // x1
  unsigned __int64 v13; // x23
  __int64 v14; // x8
  bool v15; // cf
  __int64 v16; // x8

  v2 = *a2;
  if ( !**a2 )
    return -1;
  v5 = strchr(*a2, 10);
  if ( v5 )
    v6 = v5 + 1;
  else
    v6 = (char *)&v2[strlen(v2)];
  v8 = v6 - v2;
  a1[1] = 0;
  v9 = v6 - v2 + 1;
  v10 = (_QWORD *)*a1;
  if ( a1[2] < v9 )
  {
    v10 = qvector_reserve(a1, v10, v9, 1u);
    *a1 = v10;
  }
  a1[1] = v9;
  *((_BYTE *)v10 + v8) = 0;
  memmove((void *)*a1, v2, v8);
  v11 = a1[1];
  if ( v11 >= 2 )
  {
    v12 = (_QWORD *)*a1;
    if ( *(_BYTE *)(*a1 + v11 - 2) == 10 )
    {
      v13 = v11 - 1;
      if ( (__int64)(v11 - 1) > 1 )
      {
        if ( a1[2] < v13 )
        {
          v12 = qvector_reserve(a1, v12, v13, 1u);
          *a1 = v12;
        }
        a1[1] = v13;
        *((_BYTE *)v12 + v13 - 1) = 0;
      }
      else
      {
        a1[1] = 0;
        qfree(v12);
        *a1 = 0;
        a1[2] = 0;
      }
    }
  }
  *a2 = (char *)&v2[v8];
  v14 = a1[1];
  v15 = v14 != 0;
  v16 = v14 - 1;
  if ( v15 )
    return v16;
  else
    return 0;
}
