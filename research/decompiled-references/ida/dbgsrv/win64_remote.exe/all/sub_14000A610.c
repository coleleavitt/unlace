/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000A610
// Address: 0x000000014000A610

//----- (000000014000A610) ----------------------------------------------------
void __fastcall sub_14000A610(__int64 a1)
{
  _QWORD **v2; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  sub_14000A670(a1 + 24);
  v2 = *(_QWORD ***)(a1 + 8);
  *v2[1] = 0;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      j_j_free(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  j_j_free(*(void **)(a1 + 8));
}
