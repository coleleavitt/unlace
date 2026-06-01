/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: register_frame
// Address: 0x00000000000EA61F

//----- (00000000000EA61F) ----------------------------------------------------
void __fastcall _register_frame(_DWORD *a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // r8d

  if ( *a1 )
  {
    v1 = malloc(0x30u);
    _register_frame_info(a1, v1, v2, v3, v4);
  }
}
// EA639: variable 'v2' is possibly undefined
// EA639: variable 'v3' is possibly undefined
// EA639: variable 'v4' is possibly undefined
