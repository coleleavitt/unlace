/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C1B8
// Address: 0x000000000042C1B8

//----- (000000000042C1B8) ----------------------------------------------------
_QWORD *__usercall sub_42C1B8@<X0>(__int64 a1@<X0>, unsigned int a2@<W1>, _QWORD *a3@<X8>)
{
  char *v5; // x0
  _QWORD *v6; // x8
  char *v7; // x20
  size_t v8; // x0
  size_t v9; // x22
  size_t v10; // x21
  void *v11; // x0

  v5 = sub_423830(a1, a2);
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  if ( v5 )
  {
    v7 = v5;
    v8 = strlen(v5);
    v9 = v8 + 1;
    v10 = v8;
    v11 = sub_491288((__int64)a3, nullptr, v8 + 1, 1u);
    *a3 = v11;
    a3[1] = v9;
    memmove(v11, v7, v10);
    *(_BYTE *)(*a3 + v10) = 0;
    if ( a3[1] > 1u )
      return a3;
  }
  sub_40CD68((__int64)a3, "%08X", a2);
  return a3;
}
// 42C1CC: variable 'v6' is possibly undefined
