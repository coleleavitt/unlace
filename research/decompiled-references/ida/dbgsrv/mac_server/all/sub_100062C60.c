/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100062C60
// Address: 0x0000000100062C60

//----- (0000000100062C60) ----------------------------------------------------
void __fastcall sub_100062C60(__int64 a1)
{
  void *v1; // rax

  if ( *(int *)a1 >= -1 )
  {
    v1 = *(void **)(a1 + 8);
    if ( v1 )
    {
      *(_QWORD *)(a1 + 16) = 0;
      qfree(v1);
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
    }
    *(_DWORD *)a1 = -2;
  }
}
