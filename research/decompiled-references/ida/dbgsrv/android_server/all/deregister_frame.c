/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deregister_frame
// Address: 0x00000000000F0FA4

//----- (00000000000F0FA4) ----------------------------------------------------
void __fastcall _deregister_frame(_DWORD *a1)
{
  void *v1; // x0

  if ( *a1 )
  {
    v1 = (void *)_deregister_frame_info();
    free(v1);
  }
}
// F0FA0: using guessed type __int64 _deregister_frame_info(void);
