/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8075340
// Address: 0x08075340

//----- (08075340) --------------------------------------------------------
int __cdecl sub_8075340(int a1)
{
  _DWORD *v1; // edi
  int v2; // eax
  int v3; // edx
  char *v4; // eax
  char *v5; // eax
  int v6; // eax
  __m128i v7; // xmm0
  int v8; // edx
  int v9; // eax
  int v10; // eax
  int result; // eax
  int v12; // edx
  int v13; // eax
  int v14; // [esp-Ch] [ebp-48h]
  int v15; // [esp-8h] [ebp-44h]
  int v16; // [esp-4h] [ebp-40h]
  __m128i v17; // [esp+0h] [ebp-3Ch] BYREF
  unsigned __int8 v18[4]; // [esp+18h] [ebp-24h] BYREF
  __m128i v19; // [esp+1Ch] [ebp-20h]
  unsigned int v20; // [esp+2Ch] [ebp-10h]

  v20 = __readgsdword(0x14u);
  v1 = *(_DWORD **)(a1 + 104);
  v2 = *(_DWORD *)(a1 + 80);
  v3 = v1[9];
  if ( v3 )
  {
    if ( v3 + *(_DWORD *)(a1 + 240) + 1 != v2 )
    {
      result = sub_80C7880(1268);
      goto LABEL_9;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 240) = v2 - 1;
    v3 = v1[9];
  }
  v4 = (char *)v1[8];
  if ( v1[10] < (unsigned int)(v3 + 1) )
  {
    v4 = (char *)sub_80CF920((int)(v1 + 8), v4, v3 + 1, 0x14u);
    v3 = v1[9];
    v1[8] = v4;
  }
  v5 = &v4[20 * v3];
  *v5 = 2;
  *(_OWORD *)(v5 + 4) = 0;
  ++v1[9];
  if ( *(_DWORD *)(a1 + 232) != 1 )
  {
    if ( !byte_811F8A1 )
    {
      if ( v20 == __readgsdword(0x14u) )
        sub_80CFF40(1437, v14, v15, v16);
      sub_80D7AB0();
    }
    BUG();
  }
  v17 = 0;
  sub_8084300((__m128i *)v5, *(__m128i **)(a1 + 228));
  v6 = *(_DWORD *)(a1 + 232);
  v7 = _mm_load_si128(&v17);
  v18[0] = 2;
  v8 = 5 * v6;
  v9 = *(_DWORD *)(a1 + 228);
  v19 = v7;
  sub_8089810(v18, (unsigned __int8 *)(v9 + 4 * v8 - 20));
  v10 = *(_DWORD *)(a1 + 232);
  if ( v10 )
  {
    v12 = *(_DWORD *)(a1 + 228);
    v13 = v10 - 1;
    *(_DWORD *)(a1 + 232) = v13;
    sub_8089430(v12 + 20 * v13);
  }
  sub_8089430((int)v18);
  result = 0;
LABEL_9:
  if ( v20 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80754B7: variable 'v14' is possibly undefined
// 80754B7: variable 'v15' is possibly undefined
// 80754B7: variable 'v16' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
