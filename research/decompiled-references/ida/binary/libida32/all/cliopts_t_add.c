void __fastcall cliopts_t_add(__int64 *a1, char *a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // r12
  __int64 v6; // rdx
  __int64 v7; // rax
  char v8; // r15
  __m128i v9; // xmm0
  __int64 v10; // r14
  int v11; // r13d
  __int64 v12; // rsi
  __int64 v13; // rax
  __m128i v14; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+18h] [rbp-40h]

  if ( a3 )
  {
    v3 = a3;
    v4 = 0;
    v6 = a1[1];
    do
    {
      v8 = *a2;
      v9 = _mm_loadu_si128((const __m128i *)(a2 + 8));
      v10 = *((_QWORD *)a2 + 3);
      v11 = *((_DWORD *)a2 + 8);
      v12 = *a1;
      if ( a1[2] < (unsigned __int64)(v6 + 1) )
      {
        v15 = v3;
        v14 = v9;
        v13 = qvector_reserve(a1, v12, v6 + 1, 40);
        v6 = a1[1];
        v3 = v15;
        *a1 = v13;
        v9 = _mm_load_si128(&v14);
        v12 = v13;
      }
      ++v4;
      a2 += 40;
      v7 = v12 + 40 * v6;
      *(_BYTE *)v7 = v8;
      *(_QWORD *)(v7 + 24) = v10;
      *(_DWORD *)(v7 + 32) = v11;
      *(__m128i *)(v7 + 8) = v9;
      v6 = a1[1] + 1;
      a1[1] = v6;
    }
    while ( v3 != v4 );
  }
}

