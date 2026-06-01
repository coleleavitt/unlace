/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807DE60
// Address: 0x0807DE60

//----- (0807DE60) --------------------------------------------------------
int __cdecl sub_807DE60(int a1, int a2, const char *a3, __m128i **a4)
{
  int v4; // eax
  int v5; // esi
  int (__cdecl *v6)(int, int, const char *, __m128i **); // eax
  int result; // eax
  __m128i *v8; // eax

  v4 = sub_807DA60();
  if ( v4 )
  {
    v5 = v4;
    v6 = *(int (__cdecl **)(int, int, const char *, __m128i **))(v4 + 36);
    if ( v6 )
    {
      result = v6(a1, a2, a3, a4);
    }
    else
    {
      if ( a4 )
        sub_805ED10(a4, "the '%s' extlang des not implement the 'eval_expr' callback", *(_DWORD *)(v5 + 12));
      result = 0;
    }
    --*(_DWORD *)(v5 + 8);
  }
  else
  {
    v8 = *a4;
    if ( (unsigned int)a4[2] <= 0x15 )
    {
      v8 = (__m128i *)sub_80CF920((int)a4, v8, 0x16u, 1u);
      *a4 = v8;
    }
    a4[1] = (__m128i *)22;
    *(__int32 *)((char *)v8[1].m128i_i32 + 1) = 1684370021;
    *v8 = _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257540));
    *(__int32 *)((char *)&v8->m128i_i32[3] + 1) = 1953720679;
    (*a4)[1].m128i_i8[5] = 0;
    return sub_807DDE0(a1, a2, a3, (void **)a4);
  }
  return result;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
