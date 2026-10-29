/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_637B8
// Address: 0x00000000000637B8

//----- (00000000000637B8) ----------------------------------------------------
void __usercall sub_637B8(__int64 *a1@<X0>, _QWORD *a2@<X8>)
{
  __int64 v3; // x8
  __int64 v4; // x22
  __int64 v5; // x23
  __int64 v6; // x9
  size_t v7; // x21
  void *v9; // x0
  __int64 v10; // x20
  __int64 v11; // x21
  void **v12; // x19
  void *v13; // x0

  v4 = *a1;
  v3 = a1[1];
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v5 = v3 - 1;
  v6 = v4 + 24 * (v3 - 1);
  v7 = *(_QWORD *)(v6 + 8);
  if ( v7 )
  {
    v9 = qalloc_or_throw(*(_QWORD *)(v6 + 8));
    *a2 = v9;
    a2[2] = v7;
    memcpy(v9, *(const void **)(v4 + 24 * v5), v7);
    a2[1] = v7;
    v3 = a1[1];
  }
  if ( v3 )
  {
    v10 = *a1;
    v11 = v3 - 1;
    a1[1] = v3 - 1;
    v12 = (void **)(v10 + 24 * (v3 - 1));
    v13 = *v12;
    if ( *v12 )
    {
      *(_QWORD *)(v10 + 24 * v11 + 8) = 0;
      qfree(v13);
      *v12 = nullptr;
      *(_QWORD *)(v10 + 24 * v11 + 16) = 0;
    }
  }
}
