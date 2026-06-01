/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D68C8
// Address: 0x00000000000D68C8

//----- (00000000000D68C8) ----------------------------------------------------
void __fastcall sub_D68C8(int a1, __int64 a2)
{
  int *v2; // x19
  __int64 v3; // x0
  unsigned __int64 *v4; // x20
  unsigned __int64 v5; // x8
  unsigned __int64 v6; // x8
  void (*v7)(void); // x8

  if ( a1 != 1 )
    sub_D6CF8(*(void (**)(void))(a2 - 64));
  v2 = (int *)(a2 - 96);
  v3 = *(_QWORD *)(a2 - 96);
  if ( v3 )
  {
    v4 = (unsigned __int64 *)(v3 - 128);
    do
    {
      v5 = __ldaxr(v4);
      v6 = v5 - 1;
    }
    while ( __stlxr(v6, v4) );
    if ( !v6 )
    {
      v7 = *(void (**)(void))(v3 - 112);
      if ( v7 )
        v7();
      _cxa_free_dependent_exception_0((int *)v4);
    }
  }
  _cxa_free_dependent_exception_0(v2);
}
