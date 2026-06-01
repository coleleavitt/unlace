void __fastcall sub_1C6B260(__m128 *a1, __m128 *a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  const __m128i **v8; // rbx
  const __m128i **v9; // r13
  __m128i *v10; // rax
  __int64 v11; // rcx
  __int64 i; // [rsp+0h] [rbp-48h]
  __m128i *v13; // [rsp+8h] [rbp-40h]

  v8 = *(const __m128i ***)(a3 + 8);
  v9 = &v8[*(unsigned int *)(a3 + 16)];
  for ( i = a4 + 16; v9 != v8; ++v8 )
  {
    v10 = sub_1C67B50(a1, a2, *v8, *(_QWORD *)a3, a5, a6);
    if ( v10 )
    {
      v11 = *(unsigned int *)(a4 + 8);
      if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 12) )
      {
        v13 = v10;
        sub_2237220(a4, i, v11 + 1, 8);
        v11 = *(unsigned int *)(a4 + 8);
        v10 = v13;
      }
      *(_QWORD *)(*(_QWORD *)a4 + 8 * v11) = v10;
      ++*(_DWORD *)(a4 + 8);
    }
  }
  sub_1C5F980((__int64 *)a1, a4);
  sub_1C5F160((__int64)a1, *(_QWORD **)a4, *(unsigned int *)(a4 + 8));
}
