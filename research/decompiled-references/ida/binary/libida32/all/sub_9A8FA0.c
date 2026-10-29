void __fastcall sub_9A8FA0(__int64 a1, unsigned __int16 **a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __m128i *v5; // rbx
  __m128i *v6; // rbp
  __m128i *v10; // rdx
  unsigned int v11; // eax
  __int64 *v12; // rdx

  v5 = *(__m128i **)(a1 + 40);
  v6 = &v5[2 * *(unsigned int *)(a1 + 48)];
  while ( v5 != v6 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(a4 + 36);
      if ( v5[1].m128i_i32[2] )
        break;
      v10 = v5;
      v5 += 2;
      sub_9A8C40(a2, a3, v10, *(unsigned __int8 *)(a4 + 33), v11, a5);
      if ( v5 == v6 )
        return;
    }
    v12 = (__int64 *)v5;
    v5 += 2;
    sub_9A8720(a2, a3, v12, v11, a5);
  }
}

