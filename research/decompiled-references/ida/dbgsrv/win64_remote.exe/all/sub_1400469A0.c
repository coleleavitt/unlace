/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400469A0
// Address: 0x00000001400469A0

//----- (00000001400469A0) ----------------------------------------------------
void __fastcall sub_1400469A0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // rdi
  _QWORD *v6; // rbx
  __int64 *v7; // rsi
  void *v8; // rcx
  void *v9; // rcx

  v3 = a3;
  while ( !*((_BYTE *)v3 + 25) )
  {
    sub_1400469A0(a1, a2, v3[2]);
    v6 = v3;
    v7 = v3;
    v3 = (__int64 *)*v3;
    v8 = (void *)v6[7];
    if ( v8 )
    {
      v7[8] = 0;
      j_free(v8);
      v6[7] = 0;
      v7[9] = 0;
    }
    v9 = (void *)v6[4];
    if ( v9 )
    {
      v6[5] = 0;
      j_free(v9);
      v6[4] = 0;
      v6[6] = 0;
    }
    j_j_free(v6);
  }
}
