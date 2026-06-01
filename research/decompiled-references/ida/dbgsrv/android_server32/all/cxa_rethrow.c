/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_rethrow
// Address: 0x0009026C

//----- (0009026C) --------------------------------------------------------
void __noreturn _cxa_rethrow()
{
  int *v0; // r0
  int v1; // r5
  int v2; // r2
  unsigned int v3; // r6
  int v4; // r1

  v0 = (int *)((int (*)(void))_cxa_get_globals)();
  v1 = *v0;
  if ( *v0 )
  {
    v2 = *(_DWORD *)(v1 + 44) ^ 0x434C4E47;
    v3 = *(_DWORD *)(v1 + 40) & 0xFFFFFF00 ^ 0x432B2B00 | v2;
    if ( v3 )
    {
      v4 = 0;
      *v0 = 0;
    }
    else
    {
      *(_DWORD *)(v1 + 24) = -*(_DWORD *)(v1 + 24);
      v4 = v0[1] + 1;
      v0[1] = v4;
    }
    Unwind_RaiseException((int *)(v1 + 40), v4, v2, 1129074247);
    _cxa_begin_catch((void *)(v1 + 40));
    if ( !v3 )
      sub_906A4(*(void (**)(void))(v1 + 16));
  }
  std::terminate();
}
