/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400371C0
// Address: 0x00000001400371C0

//----- (00000001400371C0) ----------------------------------------------------
void __fastcall sub_1400371C0(__int64 a1)
{
  _QWORD *v2; // rbx
  void *v3; // rcx
  void *v4; // rcx

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 )
  {
    v3 = (void *)v2[6];
    if ( v3 )
    {
      v2[7] = 0;
      j_free(v3);
      v2[6] = 0;
      v2[8] = 0;
    }
    sub_140037230((__int64)(v2 + 2));
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
    j_j_free(v4);
}
