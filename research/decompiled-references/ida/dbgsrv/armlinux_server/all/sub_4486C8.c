/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4486C8
// Address: 0x00000000004486C8

//----- (00000000004486C8) ----------------------------------------------------
void __fastcall sub_4486C8(__int64 a1, __int64 *a2)
{
  __int64 *v2; // x19
  __int64 *v4; // x20
  __int64 *v5; // x0

  if ( a2 )
  {
    v2 = a2;
    do
    {
      sub_4486C8(a1, (_QWORD *)v2[3]);
      v4 = (__int64 *)v2[2];
      sub_448310(v2 + 5);
      v5 = v2;
      v2 = v4;
      j__free_0(v5);
    }
    while ( v4 );
  }
}
