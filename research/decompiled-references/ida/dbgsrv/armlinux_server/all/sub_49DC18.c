/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49DC18
// Address: 0x000000000049DC18

//----- (000000000049DC18) ----------------------------------------------------
void __fastcall sub_49DC18(unsigned int a1, __int64 a2)
{
  unsigned int *v2; // x0
  unsigned int v3; // w2
  unsigned int v4; // w2
  void (__fastcall *v5)(__int64); // x2
  __int64 v6; // x19

  if ( a1 > 1 )
    sub_49DB68(*(void (**)(void))(a2 - 56));
  v2 = (unsigned int *)(a2 - 96);
  do
  {
    v3 = __ldaxr(v2);
    v4 = v3 - 1;
  }
  while ( __stlxr(v4, v2) );
  if ( !v4 )
  {
    v5 = *(void (__fastcall **)(__int64))(a2 - 72);
    v6 = a2 + 32;
    if ( v5 )
      v5(a2 + 32);
    sub_49DAB8(v6);
  }
}
