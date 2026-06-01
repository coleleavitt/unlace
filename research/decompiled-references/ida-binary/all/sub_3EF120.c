__int64 __fastcall sub_3EF120(int *a1, __int64 a2)
{
  __int64 v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // r12
  int v6; // eax
  __int64 v7; // rdi
  int *v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // r13
  __m128i v11; // xmm0
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdi

  v3 = operator new(0x40u);
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 10));
  v5 = v3;
  LODWORD(v3) = a1[8];
  *(_QWORD *)(v5 + 56) = *((_QWORD *)a1 + 7);
  *(_DWORD *)(v5 + 32) = v3;
  *(__m128i *)(v5 + 40) = v4;
  if ( v4.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v4.m128i_i64[0], 1u);
  v6 = *a1;
  v7 = *((_QWORD *)a1 + 3);
  *(_QWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 24) = 0;
  *(_DWORD *)v5 = v6;
  *(_QWORD *)(v5 + 8) = a2;
  if ( v7 )
    *(_QWORD *)(v5 + 24) = sub_3EF120(v7, v5);
  v8 = *((int **)a1 + 2);
  if ( v8 )
  {
    v9 = v5;
    do
    {
      v10 = v9;
      v9 = operator new(0x40u);
      *(_DWORD *)(v9 + 32) = v8[8];
      v11 = _mm_loadu_si128((const __m128i *)(v8 + 10));
      v12 = *((_QWORD *)v8 + 7);
      *(__m128i *)(v9 + 40) = v11;
      *(_QWORD *)(v9 + 56) = v12;
      if ( v11.m128i_i64[0] )
        _InterlockedAdd((volatile signed __int32 *)v11.m128i_i64[0], 1u);
      v13 = *v8;
      *(_QWORD *)(v9 + 16) = 0;
      *(_QWORD *)(v9 + 24) = 0;
      *(_DWORD *)v9 = v13;
      *(_QWORD *)(v10 + 16) = v9;
      *(_QWORD *)(v9 + 8) = v10;
      v14 = *((_QWORD *)v8 + 3);
      if ( v14 )
        *(_QWORD *)(v9 + 24) = sub_3EF120(v14, v9);
      v8 = *((int **)v8 + 2);
    }
    while ( v8 );
  }
  return v5;
}
