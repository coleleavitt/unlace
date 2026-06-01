/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56FA8
// Address: 0x0000000000056FA8

//----- (0000000000056FA8) ----------------------------------------------------
void __fastcall sub_56FA8(__int64 *a1)
{
  __int64 v1; // x8
  __int64 v2; // x19
  __int64 v3; // x20
  __int64 v4; // x21
  void *v5; // x0
  _QWORD *v6; // x21
  void *v7; // t1
  void **v8; // x21
  void *v9; // x0

  v1 = a1[1];
  if ( v1 )
  {
    v2 = *a1;
    v3 = v1 - 1;
    a1[1] = v1 - 1;
    v4 = v2 + 56 * (v1 - 1);
    v7 = *(void **)(v4 + 24);
    v6 = (_QWORD *)(v4 + 24);
    v5 = v7;
    if ( v7 )
    {
      *(_QWORD *)(v2 + 56 * v3 + 32) = 0;
      qfree(v5);
      *v6 = 0;
      *(_QWORD *)(v2 + 56 * v3 + 40) = 0;
    }
    v8 = (void **)(v2 + 56 * v3);
    v9 = *v8;
    if ( *v8 )
    {
      *(_QWORD *)(v2 + 56 * v3 + 8) = 0;
      qfree(v9);
      *v8 = nullptr;
      *(_QWORD *)(v2 + 56 * v3 + 16) = 0;
    }
  }
}
