/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_decrement_exception_refcount
// Address: 0x00000000000D656C

//----- (00000000000D656C) ----------------------------------------------------
void __fastcall _cxa_decrement_exception_refcount(__int64 a1)
{
  unsigned __int64 *v1; // x19
  unsigned __int64 v2; // x8
  unsigned __int64 v3; // x8
  void (*v4)(void); // x8

  if ( a1 )
  {
    v1 = (unsigned __int64 *)(a1 - 128);
    do
    {
      v2 = __ldaxr(v1);
      v3 = v2 - 1;
    }
    while ( __stlxr(v3, v1) );
    if ( !v3 )
    {
      v4 = *(void (**)(void))(a1 - 112);
      if ( v4 )
        v4();
      _cxa_free_dependent_exception_0((int *)v1);
    }
  }
}
