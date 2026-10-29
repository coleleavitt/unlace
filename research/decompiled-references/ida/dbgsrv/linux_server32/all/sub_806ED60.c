/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806ED60
// Address: 0x0806ED60

//----- (0806ED60) --------------------------------------------------------
int __cdecl sub_806ED60(int a1, __m128i *a2, __int64 a3)
{
  unsigned int v3; // eax
  int v4; // edx
  __m128i v5; // xmm0
  __m128i v6; // xmm2
  int v7; // ecx
  int v8; // eax
  int result; // eax
  unsigned __int64 v10; // [esp+0h] [ebp-38h]
  void *ptr[3]; // [esp+10h] [ebp-28h] BYREF
  unsigned int v12; // [esp+1Ch] [ebp-1Ch]

  v12 = __readgsdword(0x14u);
  v3 = *(_DWORD *)(a3 + 4);
  if ( v3 > 0xB || (v4 = 2645, !_bittest(&v4, v3)) )
  {
    v5 = _mm_loadl_epi64((const __m128i *)(a3 + 24));
    v10 = __PAIR64__(_mm_cvtsi128_si32(v5), _mm_cvtsi128_si32(_mm_srli_epi64(v5, 0x20u)));
    if ( v10 )
    {
      v6 = _mm_loadl_epi64(a2);
      v7 = _mm_cvtsi128_si32(v6);
      v8 = _mm_cvtsi128_si32(_mm_srli_epi64(v6, 0x20u));
      if ( (v7 != 0) + v8 <= 0 || !a2[1].m128i_i64[0] )
        goto LABEL_9;
      if ( v10 == __PAIR64__(v7, v8) )
        goto LABEL_10;
      if ( BYTE4(a3) )
      {
        sub_8069790();
        v5.m128i_i64[0] = *(_QWORD *)(a3 + 24);
LABEL_9:
        a2->m128i_i64[0] = v5.m128i_i64[0];
        a2->m128i_i64[1] = *(_QWORD *)(a3 + 16);
        a2[1].m128i_i64[0] = *(_QWORD *)(a3 + 32);
        goto LABEL_10;
      }
      if ( a2 == (__m128i *)(a1 + 260) )
      {
        if ( v12 == __readgsdword(0x14u) )
          return sub_8069790();
      }
      else if ( v12 == __readgsdword(0x14u) )
      {
        return sub_8069790();
      }
    }
    else if ( v12 == __readgsdword(0x14u) )
    {
      return sub_8058290();
    }
LABEL_20:
    sub_80D7AB0();
  }
  sub_806EC80(ptr, a1 + 40, *(_DWORD *)(a3 + 4));
  sub_8058290();
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    sub_80CF780(ptr[0]);
  }
LABEL_10:
  result = v12 - __readgsdword(0x14u);
  if ( result )
    goto LABEL_20;
  return result;
}
