/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400363A0
// Address: 0x00000001400363A0

//----- (00000001400363A0) ----------------------------------------------------
void __fastcall sub_1400363A0(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rsi
  void *v4; // rcx

  *a2[1] = 0;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      v4 = (void *)v2[6];
      if ( v4 )
      {
        v2[7] = 0;
        j_free(v4);
        v2[6] = 0;
        v2[8] = 0;
      }
      sub_140037230((__int64)(v2 + 2));
      j_j_free(v2);
      v2 = v3;
    }
    while ( v3 );
  }
}
