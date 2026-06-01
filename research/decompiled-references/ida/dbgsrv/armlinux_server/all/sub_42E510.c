/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E510
// Address: 0x000000000042E510

//----- (000000000042E510) ----------------------------------------------------
void __fastcall sub_42E510(__int64 a1, __int64 a2)
{
  __int64 v2; // x19
  __int64 v4; // x20
  void *v5; // x0

  if ( a2 )
  {
    v2 = a2;
    do
    {
      sub_42E510(a1, *(_QWORD *)(v2 + 24));
      v4 = *(_QWORD *)(v2 + 16);
      sub_42E4C8(v2 + 40, *(_QWORD **)(v2 + 56));
      v5 = (void *)v2;
      v2 = v4;
      j__free_0(v5);
    }
    while ( v4 );
  }
}
