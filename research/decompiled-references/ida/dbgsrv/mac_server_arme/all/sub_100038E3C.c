/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100038E3C
// Address: 0x0000000100038E3C

//----- (0000000100038E3C) ----------------------------------------------------
_QWORD **__fastcall sub_100038E3C(_QWORD **a1, __int64 a2)
{
  unsigned __int64 v3; // x8
  size_t v4; // x20
  _QWORD *v5; // x8
  _QWORD *v6; // x9
  bool v7; // cf
  char *v8; // x9
  char *v9; // x22
  unsigned __int64 v10; // x21
  __int64 v11; // x24
  _QWORD *v12; // x0

  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
    v4 = v3 - 1;
  else
    v4 = 0;
  if ( v3 >= 2 )
  {
    v5 = *a1;
    v6 = a1[1];
    v7 = v6 != nullptr;
    v8 = (char *)v6 - 1;
    if ( v7 )
      v9 = v8;
    else
      v9 = nullptr;
    v10 = (unsigned __int64)&v9[v4 + 1];
    if ( (unsigned __int64)a1[2] < v10 )
    {
      v11 = a2;
      v12 = qvector_reserve(a1, *a1, (unsigned __int64)&v9[v4 + 1], 1u);
      a2 = v11;
      v5 = v12;
      *a1 = v12;
    }
    a1[1] = (_QWORD *)v10;
    v9[v4 + (_QWORD)v5] = 0;
    memcpy(&v9[(_QWORD)*a1], *(const void **)a2, v4);
  }
  return a1;
}
