/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_current_exception_type
// Address: 0x000BD370

//----- (000BD370) --------------------------------------------------------
struct type_info *_cxa_current_exception_type()
{
  int *globals_fast; // ecx
  struct type_info *result; // eax
  int v2; // ecx
  int *v3; // [esp+0h] [ebp-8h]

  globals_fast = (int *)_cxa_get_globals_fast(v3);
  result = nullptr;
  if ( globals_fast )
  {
    v2 = *globals_fast;
    if ( v2 )
    {
      if ( *(_QWORD *)(v2 + 48) >> 8 == 0x434C4E47432B2BLL )
        return *(struct type_info **)v2;
    }
  }
  return result;
}
// BD384: variable 'v3' is possibly undefined
