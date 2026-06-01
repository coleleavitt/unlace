/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100042508
// Address: 0x0000000100042508

//----- (0000000100042508) ----------------------------------------------------
_QWORD **__fastcall sub_100042508(_QWORD **a1, const void *a2, size_t a3)
{
  _QWORD *v4; // x8
  _QWORD *v5; // x9
  bool v6; // cf
  char *v7; // x9
  char *v8; // x21
  char *v9; // x22
  unsigned __int64 v10; // x20
  const void *v11; // x23
  size_t v12; // x24
  _QWORD *v13; // x0

  v4 = *a1;
  v5 = a1[1];
  v6 = v5 != nullptr;
  v7 = (char *)v5 - 1;
  if ( v6 )
    v8 = v7;
  else
    v8 = nullptr;
  v9 = &v8[a3];
  v10 = (unsigned __int64)&v8[a3 + 1];
  if ( (unsigned __int64)a1[2] < v10 )
  {
    v11 = a2;
    v12 = a3;
    v13 = qvector_reserve(a1, *a1, (unsigned __int64)&v8[a3 + 1], 1u);
    a2 = v11;
    a3 = v12;
    v4 = v13;
    *a1 = v13;
  }
  a1[1] = (_QWORD *)v10;
  v9[(_QWORD)v4] = 0;
  memmove(&v8[(_QWORD)*a1], a2, a3);
  return a1;
}
