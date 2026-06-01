/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140009950
// Address: 0x0000000140009950

//----- (0000000140009950) ----------------------------------------------------
void __fastcall sub_140009950(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  void *v6; // rsi
  _QWORD *v7; // rbx
  void *v8; // rcx
  void *v9; // rcx

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_140009950(a1, a2, v3[2]);
      v6 = v3;
      v7 = v3;
      v3 = (_QWORD *)*v3;
      v8 = (void *)v7[10];
      if ( v8 )
      {
        v7[11] = 0;
        j_free(v8);
        v7[10] = 0;
        v7[12] = 0;
      }
      v9 = (void *)v7[6];
      if ( v9 )
      {
        v7[7] = 0;
        j_free(v9);
        v7[6] = 0;
        v7[8] = 0;
      }
      j_j_free(v6);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
}
