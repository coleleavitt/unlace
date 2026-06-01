void __fastcall sub_5AADE0(_QWORD *a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __m128i v4; // xmm1
  __int64 v5; // rbp
  int v6; // r15d
  __int64 v7; // r12
  int v8; // r14d
  int v9; // eax
  __m128i v11; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = (__m128i)(v3 + *(unsigned int *)(a2 + 4));
  v12 = __readfsqword(0x28u);
  v5 = a1[199];
  v11 = _mm_unpacklo_epi64((__m128i)v3, v4);
  v6 = *(_DWORD *)(v5 + 32);
  v7 = unpack_dq(&v11);
  v8 = unpack_dd(&v11);
  v9 = unpack_dd(&v11);
  if ( !a3 )
    v9 = v8;
  *(_DWORD *)(v5 + 4 * v7 + 32) = v9;
  if ( *(_DWORD *)(v5 + 32) != v6 )
  {
    sub_5AAC40(a1);
    sub_359AE0((__int64)a1, 0xFFFFFFFFFFFFFFFFLL, 0);
  }
}
