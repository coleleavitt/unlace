/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400018E0
// Address: 0x00000001400018E0

//----- (00000001400018E0) ----------------------------------------------------
void __fastcall sub_1400018E0(__int64 a1, int a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rbx
  __int64 *i; // rax
  __int64 v6; // rsi
  void *v7; // rbx

  v2 = *(_QWORD *)(a1 + 1328);
  v3 = 0;
  if ( v2 )
  {
    for ( i = *(__int64 **)(a1 + 1320); *(_DWORD *)(*i + 320) != a2; ++i )
    {
      if ( ++v3 >= v2 )
        return;
    }
    sub_140008F10(*i);
    v6 = 8 * v3;
    v7 = *(void **)(8 * v3 + *(_QWORD *)(a1 + 1320));
    if ( v7 )
    {
      sub_140003500((__int64)v7);
      j_j_free(v7);
    }
    memcpy(
      (void *)(*(_QWORD *)(a1 + 1320) + v6),
      (const void *)(*(_QWORD *)(a1 + 1320) + v6 + 8),
      8 * ((8LL * *(_QWORD *)(a1 + 1328) - v6) >> 3) - 8);
    --*(_QWORD *)(a1 + 1328);
  }
}
