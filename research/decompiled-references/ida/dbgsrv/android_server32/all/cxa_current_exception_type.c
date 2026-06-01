/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_current_exception_type
// Address: 0x00090234

//----- (00090234) --------------------------------------------------------
struct type_info *_cxa_current_exception_type()
{
  int *v0; // r0
  int v1; // r0

  v0 = (int *)((int (*)(void))_cxa_get_globals_fast)();
  if ( v0 && (v1 = *v0) != 0 && *(_QWORD *)(v1 + 40) >> 8 == 0x434C4E47432B2BLL )
    return *(struct type_info **)(v1 + 4);
  else
    return nullptr;
}
