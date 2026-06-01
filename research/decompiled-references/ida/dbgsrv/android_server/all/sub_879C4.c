/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_879C4
// Address: 0x00000000000879C4

//----- (00000000000879C4) ----------------------------------------------------
__int64 *__usercall sub_879C4@<X0>(__int64 *result@<X0>, __int64 *a2@<X1>, __int64 a3@<X8>)
{
  unsigned __int64 v3; // x11
  __int64 v4; // x15
  unsigned __int64 v5; // x9
  unsigned __int64 v6; // x13
  __int64 v7; // x12
  unsigned __int64 v8; // x14
  __int64 *v9; // x9
  __int64 *v10; // x10
  unsigned __int64 v11; // x16
  unsigned __int64 v12; // x16
  unsigned __int64 v13; // x15

  v4 = *result;
  v3 = result[1];
  v5 = a2[1];
  v6 = v3 - 1;
  v7 = (v3 - 1) & v5;
  if ( v5 >= v3 )
    v5 %= v3;
  v8 = v6 & v3;
  if ( (v6 & v3) != 0 )
    v7 = v5;
  v9 = *(__int64 **)(v4 + 8 * v7);
  do
  {
    v10 = v9;
    v9 = (__int64 *)*v9;
  }
  while ( v9 != a2 );
  if ( v10 == result + 2 )
    goto LABEL_12;
  v11 = v10[1];
  if ( !v8 )
  {
    if ( (v11 & v6) == v7 )
      goto LABEL_22;
LABEL_12:
    if ( *a2 )
    {
      v12 = *(_QWORD *)(*a2 + 8);
      if ( v8 )
      {
        if ( v12 >= v3 )
          v12 %= v3;
        if ( v12 == v7 )
          goto LABEL_22;
      }
      else if ( (v12 & v6) == v7 )
      {
        goto LABEL_22;
      }
    }
    *(_QWORD *)(v4 + 8 * v7) = 0;
    goto LABEL_22;
  }
  if ( v11 >= v3 )
    v11 %= v3;
  if ( v11 != v7 )
    goto LABEL_12;
LABEL_22:
  if ( *a2 )
  {
    v13 = *(_QWORD *)(*a2 + 8);
    if ( !v8 )
    {
      v13 &= v6;
      if ( v13 == v7 )
        goto LABEL_28;
      goto LABEL_27;
    }
    if ( v13 >= v3 )
      v13 %= v3;
    if ( v13 != v7 )
LABEL_27:
      *(_QWORD *)(*result + 8 * v13) = v10;
  }
LABEL_28:
  *v10 = *a2;
  *a2 = 0;
  --result[3];
  *(_QWORD *)a3 = a2;
  *(_QWORD *)(a3 + 8) = result + 2;
  *(_BYTE *)(a3 + 16) = 1;
  return result;
}
