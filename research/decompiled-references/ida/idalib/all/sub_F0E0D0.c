void __fastcall sub_F0E0D0(__int64 a1, const __m128i *a2)
{
  int v3; // r14d
  int i; // ebx
  __int64 v5; // r12
  size_t v6; // rax
  __int64 v7; // rsi
  __m128i v8; // xmm0
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __m128i v12; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+10h] [rbp-48h]

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 > 0 )
  {
    for ( i = 0; i != v3; ++i )
    {
      v5 = *(_QWORD *)a1;
      v6 = j__strlen("  ");
      sub_9954E0(v5, "  ", v6);
    }
  }
  sub_995540(*(_QWORD *)a1, "#pragma omp critical");
  if ( a2[2].m128i_i64[0] )
  {
    sub_995540(*(_QWORD *)a1, " (");
    v7 = *(_QWORD *)a1;
    v8 = _mm_loadu_si128(a2 + 2);
    v9 = *(_QWORD *)(a1 + 24);
    v10 = *(_QWORD *)(a1 + 32);
    v13 = a2[3].m128i_i64[0];
    v12 = v8;
    sub_B85C90(v12.m128i_i64, v7, v9, v10, v11);
    sub_995540(*(_QWORD *)a1, ")");
  }
  sub_F0DC70(a1, (__int64)a2);
}
