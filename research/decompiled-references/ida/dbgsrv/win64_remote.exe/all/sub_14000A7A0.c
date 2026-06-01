/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000A7A0
// Address: 0x000000014000A7A0

//----- (000000014000A7A0) ----------------------------------------------------
void __fastcall sub_14000A7A0(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx
  void *v4; // rax

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 )
  {
    v3 = v2 + 13;
    v4 = (void *)v2[13];
    if ( v4 )
    {
      v2[14] = 0;
      j_free(v4);
      *v3 = 0;
      v3[2] = 0;
      v2 = *(_QWORD **)(a1 + 8);
    }
    if ( v2 )
      j_j_free(v2);
  }
}
