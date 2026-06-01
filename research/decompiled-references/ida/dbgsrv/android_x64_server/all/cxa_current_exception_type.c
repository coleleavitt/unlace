/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_current_exception_type
// Address: 0x00000000000CF5A0

//----- (00000000000CF5A0) ----------------------------------------------------
struct type_info *_cxa_current_exception_type()
{
  __int64 *globals_fast; // rax
  __int64 v1; // rax

  globals_fast = (__int64 *)_cxa_get_globals_fast();
  if ( !globals_fast )
    return nullptr;
  v1 = *globals_fast;
  if ( !v1 )
    return nullptr;
  if ( *(_QWORD *)(v1 + 96) >> 8 == 0x434C4E47432B2BLL )
    return *(struct type_info **)(v1 + 8);
  return nullptr;
}
