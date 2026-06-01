/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B0898
// Address: 0x00000000004B0898

//----- (00000000004B0898) ----------------------------------------------------
_QWORD *__fastcall sub_4B0898(_QWORD *a1, size_t a2, __int64 a3, size_t n, unsigned __int8 a5)
{
  __int64 v6; // x0
  int v9; // w23
  unsigned __int64 v10; // x21
  _QWORD *v11; // x1
  unsigned __int64 v12; // x4
  size_t v13; // x0
  bool v14; // zf
  size_t v15; // x3
  char *v16; // x4
  char *v17; // x1

  v6 = a1[1];
  if ( n > a3 + 0x7FFFFFFFFFFFFFFFLL - v6 )
    sub_4A04D0("basic_string::_M_replace_aux");
  v9 = a5;
  v10 = n - a3 + v6;
  v11 = (_QWORD *)*a1;
  v12 = 15;
  if ( (_QWORD *)*a1 != a1 + 2 )
    v12 = a1[2];
  if ( v12 < v10 )
  {
    sub_4AFE60(a1, a2, a3, nullptr, n);
    v11 = (_QWORD *)*a1;
  }
  else
  {
    v13 = v6 - a2 - a3;
    if ( v13 )
      v14 = a3 == n;
    else
      v14 = 1;
    if ( !v14 )
    {
      v15 = (size_t)v11 + a2;
      v16 = (char *)v11 + a2 + n;
      v17 = (char *)v11 + a2 + a3;
      if ( v13 == 1 )
        *(_BYTE *)(v15 + n) = *(_BYTE *)(v15 + a3);
      else
        memmove(v16, v17, v13);
      v11 = (_QWORD *)*a1;
    }
  }
  if ( !n )
    goto LABEL_15;
  if ( n != 1 )
  {
    memset((char *)v11 + a2, v9, n);
    v11 = (_QWORD *)*a1;
LABEL_15:
    a1[1] = v10;
    *((_BYTE *)v11 + v10) = 0;
    return a1;
  }
  *((_BYTE *)v11 + a2) = v9;
  a1[1] = v10;
  *(_BYTE *)(*a1 + v10) = 0;
  return a1;
}
