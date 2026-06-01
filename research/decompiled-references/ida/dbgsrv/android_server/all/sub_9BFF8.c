/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9BFF8
// Address: 0x000000000009BFF8

//----- (000000000009BFF8) ----------------------------------------------------
_QWORD *__fastcall sub_9BFF8(_QWORD *a1, unsigned __int64 a2, int a3)
{
  int v6; // w0
  _QWORD *v7; // x10
  _QWORD *v8; // x9
  unsigned __int64 v9; // x9
  _QWORD *result; // x0
  unsigned __int64 v11; // x11
  bool v12; // cf
  _BOOL4 v13; // w11
  unsigned __int64 v14; // x9
  _QWORD *v15; // x10
  _QWORD *v16; // x10
  _QWORD *v17; // x10
  int v18; // w10

  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 496LL))(a1);
  v7 = (_QWORD *)a1[64];
  v8 = a1 + 64;
  if ( v7 )
  {
    v9 = -v6 & a2;
    result = a1 + 64;
    do
    {
      v11 = v7[4];
      v12 = v11 >= v9;
      v13 = v11 < v9;
      if ( v12 )
        result = v7;
      v7 = (_QWORD *)v7[v13];
    }
    while ( v7 );
    v8 = a1 + 64;
    if ( result != a1 + 64 )
    {
      v15 = result + 4;
      v14 = result[4];
      if ( v14 < a2 + a3 )
        goto LABEL_17;
      v8 = result;
    }
  }
  if ( v8 == (_QWORD *)a1[63] )
    return a1 + 64;
  v16 = (_QWORD *)*v8;
  if ( *v8 )
  {
    do
    {
      result = v16;
      v16 = (_QWORD *)v16[1];
    }
    while ( v16 );
  }
  else
  {
    do
    {
      v17 = v8;
      v8 = (_QWORD *)v8[2];
    }
    while ( (_QWORD *)*v8 == v17 );
    result = v8;
  }
  v15 = result + 4;
  v14 = result[4];
LABEL_17:
  if ( !a3 )
    return a1 + 64;
  v18 = *((_DWORD *)v15 + 7);
  if ( !v18 || a2 + a3 - 1 < v14 || v14 + v18 - 1 < a2 )
    return a1 + 64;
  return result;
}
