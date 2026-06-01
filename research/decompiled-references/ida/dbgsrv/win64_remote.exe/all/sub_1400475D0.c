/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400475D0
// Address: 0x00000001400475D0

//----- (00000001400475D0) ----------------------------------------------------
void __fastcall sub_1400475D0(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  void *v5; // rcx

  if ( *(_QWORD *)a1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( v2 )
    {
      v3 = 0;
      do
      {
        v4 = (_QWORD *)(v3 + *(_QWORD *)a1);
        v5 = (void *)v4[2];
        if ( v5 )
        {
          v4[3] = 0;
          j_free(v5);
          v4[2] = 0;
          v4[4] = 0;
        }
        v3 += 40;
        --v2;
      }
      while ( v2 );
    }
    *(_QWORD *)(a1 + 8) = 0;
    j_free(*(void **)a1);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
