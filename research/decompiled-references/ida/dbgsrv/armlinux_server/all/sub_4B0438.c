/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B0438
// Address: 0x00000000004B0438

//----- (00000000004B0438) ----------------------------------------------------
void __fastcall sub_4B0438(_QWORD *a1)
{
  unsigned __int64 v1; // x1

  v1 = 15;
  if ( (_QWORD *)*a1 != a1 + 2 )
    v1 = a1[2];
  if ( a1[1] < v1 )
    sub_4B0328(a1, 0);
}
