__int64 __fastcall sub_EE90C0(__int64 a1, const __m128i *a2)
{
  int v4; // ebx
  int v5; // r14d
  __int64 v6; // r12
  size_t v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v17; // [rsp+0h] [rbp-58h]

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 > 0 )
  {
    do
    {
      v6 = *(_QWORD *)a1;
      ++v4;
      v7 = j__strlen("  ");
      sub_9717A0(v6, "  ", v7);
    }
    while ( v5 != v4 );
  }
  v8 = *(_QWORD *)a1;
  if ( a2->m128i_i8[12] )
    sub_971800(v8, "__if_exists (");
  else
    sub_971800(v8, "__if_not_exists (");
  v13 = a2[1].m128i_i64[0];
  v14 = *(_QWORD *)a1;
  if ( v13 )
  {
    sub_E6C510(v13, v14, (const __m128i *)(a1 + 24), 0, 1);
    v14 = *(_QWORD *)a1;
  }
  v17 = _mm_loadu_si128(a2 + 2).m128i_u64[0];
  v15 = sub_B62D60(v14, v14, v9, v10, v11, v12, v17);
  sub_971800(v15, ") ");
  return sub_EE8810((_QWORD *)a1, a2[3].m128i_i64[1], *(double *)&v17);
}

