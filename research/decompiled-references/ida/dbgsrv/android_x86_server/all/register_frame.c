/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: register_frame
// Address: 0x000DBEBA

//----- (000DBEBA) --------------------------------------------------------
void __cdecl _register_frame(_DWORD *a1)
{
  _DWORD *v1; // eax

  if ( *a1 )
  {
    v1 = malloc(0x18u);
    _register_frame_info(a1, v1);
  }
}
