/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140009860
// Address: 0x0000000140009860

//----- (0000000140009860) ----------------------------------------------------
void __fastcall sub_140009860(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rsi
  _QWORD *v7; // rdi
  void *v8; // rcx

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_140009860(a1, a2, v3[2]);
      v6 = v3;
      v7 = v3;
      v3 = (_QWORD *)*v3;
      v8 = (void *)v7[8];
      if ( v8 )
      {
        v7[9] = 0;
        j_free(v8);
        v7[8] = 0;
        v7[10] = 0;
      }
      j_j_free(v6);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
}
