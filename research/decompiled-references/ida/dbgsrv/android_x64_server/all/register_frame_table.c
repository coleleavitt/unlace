/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: register_frame_table
// Address: 0x00000000000EA6B6

//----- (00000000000EA6B6) ----------------------------------------------------
int __fastcall _register_frame_table(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // r8d

  v1 = malloc(0x30u);
  return _register_frame_info_table(a1, v1, v2, v3, v4);
}
// EA6CB: variable 'v2' is possibly undefined
// EA6CB: variable 'v3' is possibly undefined
// EA6CB: variable 'v4' is possibly undefined
