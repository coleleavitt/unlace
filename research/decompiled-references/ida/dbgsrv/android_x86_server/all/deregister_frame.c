/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deregister_frame
// Address: 0x000DC0C1

//----- (000DC0C1) --------------------------------------------------------
void __cdecl _deregister_frame(_DWORD *a1)
{
  void *v1; // eax

  if ( *a1 )
  {
    v1 = (void *)_deregister_frame_info(a1);
    free(v1);
  }
}
