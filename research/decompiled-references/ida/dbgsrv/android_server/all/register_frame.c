/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: register_frame
// Address: 0x00000000000F0D94

//----- (00000000000F0D94) ----------------------------------------------------
__int64 *__fastcall _register_frame(__int64 *result)
{
  __int64 *v1; // x19
  _QWORD *v2; // x0

  if ( *(_DWORD *)result )
  {
    v1 = result;
    v2 = malloc(0x30u);
    return _register_frame_info(v1, v2);
  }
  return result;
}
