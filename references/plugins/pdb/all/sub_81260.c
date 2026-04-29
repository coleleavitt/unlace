_QWORD *__fastcall sub_81260(_QWORD *a1, __int64 a2, const __m128i *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rcx
  bool v11; // zf

  v5 = operator new(0x40u);
  v6 = *(_QWORD *)(a2 + 464);
  v7 = v5;
  v8 = *(_QWORD *)(a2 + 64);
  v9 = _mm_unpacklo_epi32(_mm_loadl_epi64(a3), (__m128i)0LL);
  *(_QWORD *)(v7 + 16) = a2;
  *(_QWORD *)(v7 + 8) = v8;
  *(_QWORD *)v7 = off_B23F8;
  LODWORD(v8) = a3->m128i_i32[3];
  *(_QWORD *)(v7 + 24) = v6;
  *(_DWORD *)(v7 + 32) = v8;
  *(_BYTE *)(v7 + 56) = 1;
  *(__m128i *)(v7 + 40) = v9;
  if ( qlseek(v6, v9.m128i_i64[0], 0, v10) == v9.m128i_i64[0] )
  {
    v11 = *(_QWORD *)(v7 + 48) == 0;
    *(_BYTE *)(v7 + 56) = 1;
    if ( v11 )
      *(_QWORD *)(v7 + 48) = qlsize(*(_QWORD *)(v7 + 24)) - *(_QWORD *)(v7 + 40);
  }
  else
  {
    sub_37FD0(*(__int64 **)(v7 + 8), (__int64)"COFF failed to seek at 0x%llX", v9.m128i_i64[0]);
    *(_BYTE *)(v7 + 56) = 0;
  }
  *a1 = v7;
  return a1;
}
