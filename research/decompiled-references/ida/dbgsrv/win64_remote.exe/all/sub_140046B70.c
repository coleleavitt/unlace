/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140046B70
// Address: 0x0000000140046B70

//----- (0000000140046B70) ----------------------------------------------------
void __fastcall sub_140046B70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbp
  void *v7; // rcx
  void *v8; // rcx

  v3 = a3 - 1;
  if ( a3 - 1 >= 0 )
  {
    v4 = a2 + 32;
    v5 = a1 + 16;
    v6 = a2 - a1;
    do
    {
      *(_QWORD *)(v5 - 16) = *(_QWORD *)(v5 + v6 - 16);
      *(_QWORD *)(v5 + v6 - 16) = 0;
      *(_QWORD *)(v5 - 8) = *(_QWORD *)(v4 - 24);
      *(_QWORD *)(v4 - 24) = 0;
      *(_QWORD *)v5 = *(_QWORD *)(v4 - 16);
      *(_QWORD *)(v4 - 16) = 0;
      *(_QWORD *)(v5 + 8) = *(_QWORD *)(v4 - 8);
      *(_QWORD *)(v4 - 8) = 0;
      *(_QWORD *)(v5 + 16) = *(_QWORD *)v4;
      *(_QWORD *)v4 = 0;
      *(_QWORD *)(v5 + 24) = *(_QWORD *)(v4 + 8);
      *(_QWORD *)(v4 + 8) = 0;
      *(_DWORD *)(v5 + 32) = *(_DWORD *)(v4 + 16);
      *(_QWORD *)(v5 + 40) = *(_QWORD *)(v4 + 24);
      *(_QWORD *)(v5 + 48) = *(_QWORD *)(v4 + 32);
      v7 = *(void **)(v4 - 8);
      if ( v7 )
      {
        *(_QWORD *)v4 = 0;
        j_free(v7);
        *(_QWORD *)(v4 - 8) = 0;
        *(_QWORD *)(v4 + 8) = 0;
      }
      v8 = *(void **)(v5 + v6 - 16);
      if ( v8 )
      {
        *(_QWORD *)(v4 - 24) = 0;
        j_free(v8);
        *(_QWORD *)(v5 + v6 - 16) = 0;
        *(_QWORD *)(v4 - 16) = 0;
      }
      v5 += 72;
      v4 += 72;
      --v3;
    }
    while ( v3 >= 0 );
  }
}
