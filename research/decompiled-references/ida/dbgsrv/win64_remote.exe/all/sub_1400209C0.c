/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400209C0
// Address: 0x00000001400209C0

//----- (00000001400209C0) ----------------------------------------------------
void __fastcall sub_1400209C0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rdi
  _QWORD *v7; // rsi
  void *v8; // rcx

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_1400209C0(a1, a2, v3[2]);
      v6 = v3;
      v7 = v3;
      v3 = (_QWORD *)*v3;
      v8 = (void *)v7[4];
      if ( v8 )
      {
        v7[5] = 0;
        j_free(v8);
        v7[4] = 0;
        v7[6] = 0;
      }
      j_j_free(v6);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
}
