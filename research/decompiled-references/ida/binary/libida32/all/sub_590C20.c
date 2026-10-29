void __fastcall sub_590C20(_QWORD *a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rsi
  __int64 v5; // rbp
  int v6; // r15d
  __int64 v7; // r12
  int v8; // eax
  const char *v9; // rsi
  int v10; // r14d
  int v11; // eax
  __m128i v13; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = v3 + *(unsigned int *)(a2 + 4);
  v14 = __readfsqword(0x28u);
  v5 = a1[175];
  v13 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v4);
  v6 = *(_DWORD *)(v5 + 32);
  v7 = unpack_dq(&v13, v4);
  v8 = unpack_dd(&v13);
  v9 = (const char *)v13.m128i_i64[1];
  v10 = v8;
  v11 = unpack_dd(&v13);
  if ( !a3 )
    v11 = v10;
  *(_DWORD *)(v5 + 4 * v7 + 32) = v11;
  if ( *(_DWORD *)(v5 + 32) != v6 )
  {
    sub_590A80(a1, v9);
    sub_356720((__int64)a1, 0xFFFFFFFF, 0);
  }
}

