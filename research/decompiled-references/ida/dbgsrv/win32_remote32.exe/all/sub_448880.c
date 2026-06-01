/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448880
// Address: 0x00448880

//----- (00448880) --------------------------------------------------------
int __stdcall sub_448880(int a1, _DWORD *a2, int a3)
{
  int v4; // edi
  unsigned int v5; // eax
  __m128i *v6; // esi
  const CHAR *v7; // eax
  _DWORD *v9; // [esp+24h] [ebp+8h]

  v4 = *(_DWORD *)(a1 + 4) + 52;
  v9 = *(_DWORD **)(a1 + 8);
  v5 = *(_DWORD *)(v4 + 4) + 1;
  if ( v5 > *(_DWORD *)(v4 + 8) )
    *(_DWORD *)v4 = sub_453B00(v4, *(void **)v4, v5, 0x68u);
  v6 = (__m128i *)(*(_DWORD *)v4 + 104 * *(_DWORD *)(v4 + 4));
  sub_464890(v6, 0, 0x68u);
  ++*(_DWORD *)(v4 + 4);
  v6->m128i_i32[0] = a2[3];
  v6->m128i_i32[1] = 0;
  v6->m128i_i32[2] = a2[2];
  v6[1].m128i_i32[2] = 0;
  v6[1].m128i_i32[3] = 0;
  v6[2].m128i_i64[0] = (int)a2[5];
  sub_445F40(a1, (int)&v6->m128i_i32[3], (unsigned int)a2, v9);
  v6[2].m128i_i32[2] = 0;
  v6[2].m128i_i32[3] = 0;
  v7 = MultiByteStr;
  v6[3].m128i_i32[0] = 0;
  v6[3].m128i_i32[1] = 0;
  if ( v6[1].m128i_i32[0] )
    v7 = (const CHAR *)v6->m128i_i32[3];
  if ( !sub_467F80((int)v7, ".debug_", 7u) )
    *(_BYTE *)(a1 + 12) = 1;
  return 0;
}
