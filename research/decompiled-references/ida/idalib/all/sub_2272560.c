__int64 __fastcall sub_2272560(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  __m128i v11; // xmm1
  __int64 v12; // rax
  _BYTE *v13; // rdi
  __m128i v15; // [rsp+8h] [rbp-60h] BYREF
  void *v16; // [rsp+18h] [rbp-50h]
  __int64 v17; // [rsp+20h] [rbp-48h]
  _BYTE v18[64]; // [rsp+28h] [rbp-40h] BYREF

  v7 = *(_DWORD *)(a1 + 232);
  if ( v7 && *(_DWORD *)(a1 + 68) == *(_DWORD *)(*(_QWORD *)(a1 + 224) + 24LL * v7 - 8) )
    *(_DWORD *)(a1 + 232) = v7 - 1;
  v18[0] = 0;
  *(_WORD *)(a1 + 73) = 1;
  v16 = v18;
  v8 = *(_QWORD *)(a1 + 40);
  v17 = 0;
  v15.m128i_i64[0] = v8;
  *(_QWORD *)(a1 + 40) = v8 + 1;
  v9 = *(_QWORD *)(a1 + 80);
  ++*(_DWORD *)(a1 + 60);
  v10 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)(a1 + 160) += 72LL;
  v15.m128i_i64[1] = 1;
  if ( *(_QWORD *)(a1 + 88) >= v10 + 72 && v9 )
    *(_QWORD *)(a1 + 80) = v10 + 72;
  else
    v10 = sub_986170(a1 + 80, 72, 72, 4, a5, a6);
  *(_DWORD *)(v10 + 16) = 11;
  v11 = _mm_loadu_si128(&v15);
  *(_OWORD *)v10 = 0;
  *(_QWORD *)(v10 + 40) = v10 + 56;
  *(__m128i *)(v10 + 24) = v11;
  sub_226E090((_QWORD *)(v10 + 40), v16, (__int64)v16 + v17);
  v12 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(v10 + 8) = a1 + 176;
  *(_QWORD *)v10 = v12;
  *(_QWORD *)(v12 + 8) = v10;
  v13 = v16;
  *(_QWORD *)(a1 + 176) = v10;
  if ( v13 != v18 )
    operator delete(v13);
  return 1;
}
