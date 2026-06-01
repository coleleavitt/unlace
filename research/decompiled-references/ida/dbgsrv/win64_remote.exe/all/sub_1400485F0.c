/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400485F0
// Address: 0x00000001400485F0

//----- (00000001400485F0) ----------------------------------------------------
void __fastcall sub_1400485F0(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  int v3; // edi
  __int64 v4; // rsi
  void *v5; // rcx

  v2 = *(void (__fastcall ****)(_QWORD, __int64))a1;
  if ( v2 )
  {
    (**v2)(v2, 1);
    *(_QWORD *)a1 = 0;
  }
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  if ( *(_QWORD *)(a1 + 104) )
  {
    sub_14004DFD0((_QWORD *)(a1 + 104), 0);
    j_free(*(void **)(a1 + 104));
    *(_QWORD *)(a1 + 104) = 0;
    *(_QWORD *)(a1 + 120) = 0;
  }
  v3 = 0;
  if ( *(_QWORD *)(a1 + 240) )
  {
    v4 = 0;
    do
    {
      j_free(*(void **)(v4 + *(_QWORD *)(a1 + 232) + 56));
      ++v3;
      v4 += 72;
    }
    while ( (unsigned __int64)v3 < *(_QWORD *)(a1 + 240) );
  }
  v5 = *(void **)(a1 + 128);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 136) = 0;
    j_free(v5);
    *(_QWORD *)(a1 + 128) = 0;
    *(_QWORD *)(a1 + 144) = 0;
  }
  if ( *(_QWORD *)(a1 + 256) )
  {
    sub_14001A6C0((_QWORD *)(a1 + 256), 0);
    j_free(*(void **)(a1 + 256));
    *(_QWORD *)(a1 + 256) = 0;
    *(_QWORD *)(a1 + 272) = 0;
  }
}
