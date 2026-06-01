/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deregister_frame
// Address: 0x00000000000EA79A

//----- (00000000000EA79A) ----------------------------------------------------
void __fastcall _deregister_frame(_DWORD *a1)
{
  void *v1; // rax

  if ( *a1 )
  {
    v1 = (void *)_deregister_frame_info(a1);
    free(v1);
  }
}
// EA795: using guessed type __int64 __fastcall _deregister_frame_info(_QWORD);
