/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8069850
// Address: 0x08069850

//----- (08069850) --------------------------------------------------------
int __cdecl sub_8069850(int a1, int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // eax
  int result; // eax
  __int64 v5; // xmm1_8
  __int16 v6; // dx
  __int64 v7; // xmm0_8
  __int64 v8; // xmm0_8
  size_t v9; // edx
  void *v10; // eax
  void *v11; // eax
  size_t v12; // [esp-2Ch] [ebp-2Ch]
  size_t v13; // [esp-2Ch] [ebp-2Ch]
  const void *v14; // [esp-28h] [ebp-28h]
  const void *v15; // [esp-28h] [ebp-28h]
  unsigned int v16; // [esp-24h] [ebp-24h]
  unsigned int v17; // [esp-24h] [ebp-24h]

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  if ( a2 != a1 )
  {
    v2 = *(_DWORD *)(a2 + 4);
    v16 = v2;
    if ( v2 > 1 )
    {
      v12 = v2 - 1;
      v15 = *(const void **)a2;
      v11 = sub_80CF920(a1, nullptr, v2, 1u);
      *(_DWORD *)a1 = v11;
      *(_DWORD *)(a1 + 4) = v16;
      memmove(v11, v15, v12);
      *(_BYTE *)(*(_DWORD *)a1 + v16 - 1) = 0;
    }
  }
  if ( a1 + 12 != a2 + 12 )
  {
    v3 = *(_DWORD *)(a2 + 16);
    v17 = v3;
    if ( !v3 || (v9 = v3 - 1, v3 == 1) )
    {
      *(_DWORD *)(a1 + 16) = 0;
    }
    else
    {
      v14 = *(const void **)(a2 + 12);
      v10 = *(void **)(a1 + 12);
      if ( *(_DWORD *)(a1 + 20) < v17 )
      {
        v13 = v9;
        v10 = sub_80CF920(a1 + 12, v10, v17, 1u);
        v9 = v13;
        *(_DWORD *)(a1 + 12) = v10;
      }
      *(_DWORD *)(a1 + 16) = v17;
      memmove(v10, v14, v9);
      *(_BYTE *)(*(_DWORD *)(a1 + 12) + v17 - 1) = 0;
    }
  }
  result = *(unsigned __int8 *)(a2 + 66);
  v5 = *(_QWORD *)(a2 + 56);
  v6 = *(_WORD *)(a2 + 64);
  *(__m128i *)(a1 + 24) = _mm_loadu_si128((const __m128i *)(a2 + 24));
  v7 = *(_QWORD *)(a2 + 40);
  *(_WORD *)(a1 + 64) = v6;
  *(_QWORD *)(a1 + 40) = v7;
  v8 = *(_QWORD *)(a2 + 48);
  *(_BYTE *)(a1 + 66) = result;
  *(_QWORD *)(a1 + 48) = v8;
  *(_QWORD *)(a1 + 56) = v5;
  return result;
}
