/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4843A0
// Address: 0x00000000004843A0

//----- (00000000004843A0) ----------------------------------------------------
void __fastcall sub_4843A0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // x19
  _QWORD *v4; // x20

  if ( a2 )
  {
    v2 = a2;
    do
    {
      sub_4843A0(a1, v2[3]);
      v4 = (_QWORD *)v2[2];
      j__free_0(v2);
      v2 = v4;
    }
    while ( v4 );
  }
}
