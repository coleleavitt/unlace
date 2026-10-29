/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8056190
// Address: 0x08056190

//----- (08056190) --------------------------------------------------------
unsigned int __cdecl sub_8056190(int a1, _DWORD *a2, int a3)
{
  bool v3; // cc
  void *v4; // eax
  char *v5; // eax
  int v6; // ecx
  __m128i *v7; // eax
  __m128i v8; // xmm0
  unsigned int result; // eax
  __m128i v10; // [esp+10h] [ebp-3Ch] BYREF
  __m128i v11; // [esp+20h] [ebp-2Ch] BYREF
  unsigned int v12; // [esp+30h] [ebp-1Ch]

  v12 = __readgsdword(0x14u);
  v10 = _mm_loadu_si128((const __m128i *)(a1 + 16 * a3 + 904));
  v3 = *a2 < -1;
  v11 = _mm_loadu_si128((const __m128i *)(a1 + 16 * a3 + 1320));
  if ( !v3 )
  {
    v4 = (void *)a2[1];
    if ( v4 )
    {
      a2[2] = 0;
      sub_80CF780(v4);
    }
    *a2 = -2;
  }
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  v5 = (char *)sub_80CF920((int)(a2 + 1), nullptr, 0x20u, 1u);
  v6 = a2[2];
  a2[1] = v5;
  memset(&v5[v6], 0, 32 - v6);
  v7 = (__m128i *)a2[1];
  v8 = _mm_loadu_si128(&v10);
  a2[2] = 32;
  *v7 = v8;
  v7[1] = _mm_loadu_si128(&v11);
  *a2 = 0;
  result = v12 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
