/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140009A60
// Address: 0x0000000140009A60

//----- (0000000140009A60) ----------------------------------------------------
void __fastcall sub_140009A60(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_140009A60(a1, a2, v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      j_j_free(v6);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
}
