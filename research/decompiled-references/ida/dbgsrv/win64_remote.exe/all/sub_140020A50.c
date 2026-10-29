/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140020A50
// Address: 0x0000000140020A50

//----- (0000000140020A50) ----------------------------------------------------
void __fastcall sub_140020A50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  void *v6; // rdi
  _QWORD *v7; // rsi
  void *v8; // rcx

  v3 = a3;
  while ( !*(_BYTE *)(v3 + 25) )
  {
    sub_140020A50(a1, a2, *(_QWORD *)(v3 + 16));
    v6 = (void *)v3;
    v7 = (_QWORD *)v3;
    v3 = *(_QWORD *)v3;
    sub_140029390((__int64)(v7 + 7));
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
}
