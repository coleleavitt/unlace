/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_current_primary_exception
// Address: 0x00000000000CF6B0

//----- (00000000000CF6B0) ----------------------------------------------------
__int64 _cxa_current_primary_exception()
{
  __int64 *globals_fast; // rax
  __int64 v1; // rax
  unsigned __int64 v2; // rcx

  globals_fast = (__int64 *)_cxa_get_globals_fast();
  if ( !globals_fast )
    return 0;
  v1 = *globals_fast;
  if ( !v1 )
    return 0;
  v2 = *(_QWORD *)(v1 + 96);
  if ( v2 >> 8 != 0x434C4E47432B2BLL )
    return 0;
  if ( (_BYTE)v2 == 1 )
    v1 = *(_QWORD *)v1 - 128LL;
  _InterlockedAdd64((volatile signed __int64 *)v1, 1u);
  return v1 + 128;
}
// CF6B0: using guessed type __int64 _cxa_current_primary_exception();
