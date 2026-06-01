void __fastcall sub_1377190(__int64 a1, __int64 a2, int *a3, int a4)
{
  int v5; // eax
  _QWORD *v6; // rdx
  __int64 i; // rax
  unsigned __int64 v8; // rax
  _BYTE *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  __m128i *v13; // rcx
  unsigned __int64 v14; // rsi
  __m128i *v15; // rax
  _BYTE *v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdx
  void *v19[2]; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v20[40]; // [rsp+10h] [rbp-28h] BYREF

  if ( a4 )
  {
    if ( a4 != 3 && (!*a3 || (v5 = sub_1021680(*(_QWORD *)(a1 + 8), *a3)) == 0 || v5 == 3) )
    {
      v6 = *(_QWORD **)a2;
      for ( i = *(_QWORD *)(*(_QWORD *)a2 + 8LL); i; i = *(_QWORD *)(v8 + 8) )
      {
        if ( (i & 4) == 0 )
          break;
        v8 = i & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v8 )
          break;
        v6 = (_QWORD *)v8;
      }
      v9 = v6 + 4;
      if ( v6 == (_QWORD *)-32LL )
      {
        v20[0] = 0;
        v19[1] = nullptr;
        v19[0] = v20;
      }
      else
      {
        v10 = (__int64)&v9[*v6];
        v19[0] = v20;
        sub_1371340(v19, v9, v10);
      }
      v11 = *(unsigned int *)(a1 + 40);
      v12 = *(_QWORD *)(a1 + 32);
      v13 = (__m128i *)v19;
      v14 = v11 + 1;
      v15 = (__m128i *)(v12 + 32 * v11);
      if ( v14 > *(unsigned int *)(a1 + 44) )
      {
        v17 = a1 + 32;
        if ( v12 > (unsigned __int64)v19 || v15 <= (__m128i *)v19 )
        {
          sub_A8C1F0(v17, v14);
          v13 = (__m128i *)v19;
          v15 = (__m128i *)(*(_QWORD *)(a1 + 32) + 32LL * *(unsigned int *)(a1 + 40));
        }
        else
        {
          sub_A8C1F0(v17, v14);
          v18 = *(_QWORD *)(a1 + 32);
          v13 = (__m128i *)((char *)v19 + v18 - v12);
          v15 = (__m128i *)(v18 + 32LL * *(unsigned int *)(a1 + 40));
        }
      }
      v15->m128i_i64[0] = (__int64)v15[1].m128i_i64;
      if ( (__m128i *)v13->m128i_i64[0] == &v13[1] )
      {
        v15[1] = _mm_loadu_si128(v13 + 1);
      }
      else
      {
        v15->m128i_i64[0] = v13->m128i_i64[0];
        v15[1].m128i_i64[0] = v13[1].m128i_i64[0];
      }
      v15->m128i_i64[1] = v13->m128i_i64[1];
      v13->m128i_i64[0] = (__int64)v13[1].m128i_i64;
      v16 = v19[0];
      v13->m128i_i64[1] = 0;
      v13[1].m128i_i8[0] = 0;
      ++*(_DWORD *)(a1 + 40);
      if ( v16 != v20 )
        operator delete(v16);
    }
  }
}
