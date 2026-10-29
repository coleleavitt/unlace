/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A750
// Address: 0x000000000042A750

//----- (000000000042A750) ----------------------------------------------------
_QWORD *__usercall sub_42A750@<X0>(__int64 a1@<X0>, _QWORD *a2@<X8>)
{
  char *v4; // x0
  _QWORD *v5; // x8
  char *v6; // x20
  size_t v7; // x0
  size_t v8; // x22
  size_t v9; // x21
  void *v10; // x0

  v4 = sub_421C38(a1);
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  if ( v4 )
  {
    v6 = v4;
    v7 = strlen(v4);
    v8 = v7 + 1;
    v9 = v7;
    v10 = sub_491288((__int64)a2, nullptr, v7 + 1, 1u);
    *a2 = v10;
    a2[1] = v8;
    memmove(v10, v6, v9);
    *(_BYTE *)(*a2 + v9) = 0;
    if ( a2[1] > 1u )
      return a2;
  }
  sub_40CD68((__int64)a2, "Unknown CPU [%u]", *(unsigned __int16 *)(a1 + 522));
  return a2;
}
// 42A764: variable 'v5' is possibly undefined
