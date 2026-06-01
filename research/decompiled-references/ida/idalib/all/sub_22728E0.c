__int64 __fastcall sub_22728E0(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // rbp
  __m128i v11; // xmm1
  _BYTE *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  __m128i v17; // [rsp+8h] [rbp-60h] BYREF
  void *v18; // [rsp+18h] [rbp-50h]
  __int64 v19; // [rsp+20h] [rbp-48h]
  _BYTE v20[64]; // [rsp+28h] [rbp-40h] BYREF

  v6 = *(_DWORD *)(a1 + 232);
  if ( v6 && *(_DWORD *)(a1 + 68) == *(_DWORD *)(*(_QWORD *)(a1 + 224) + 24LL * v6 - 8) )
    *(_DWORD *)(a1 + 232) = v6 - 1;
  v7 = *(_QWORD *)(a1 + 40);
  *(_WORD *)(a1 + 73) = 256;
  v18 = v20;
  v17.m128i_i64[0] = v7;
  *(_QWORD *)(a1 + 40) = v7 + 1;
  v8 = *(_QWORD *)(a1 + 80);
  v9 = a2 == 0 ? 15 : 13;
  v19 = 0;
  v20[0] = 0;
  v10 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v17.m128i_i64[1] = 1;
  ++*(_DWORD *)(a1 + 60);
  *(_QWORD *)(a1 + 160) += 72LL;
  if ( *(_QWORD *)(a1 + 88) >= v10 + 72 && v8 )
  {
    *(_QWORD *)(a1 + 80) = v10 + 72;
  }
  else
  {
    v10 = sub_986170(a1 + 80, 72, 72, 4, a5, a6);
    v9 = a2 == 0 ? 15 : 13;
  }
  v11 = _mm_loadu_si128(&v17);
  *(_DWORD *)(v10 + 16) = v9;
  *(_OWORD *)v10 = 0;
  *(__m128i *)(v10 + 24) = v11;
  v12 = v18;
  v13 = v19;
  *(_QWORD *)(v10 + 40) = v10 + 56;
  sub_226E090((_QWORD *)(v10 + 40), v12, (__int64)&v12[v13]);
  v14 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(v10 + 8) = a1 + 176;
  *(_QWORD *)v10 = v14;
  *(_QWORD *)(v14 + 8) = v10;
  v15 = *(_DWORD *)(a1 + 68);
  *(_QWORD *)(a1 + 176) = v10;
  if ( v15 )
    *(_DWORD *)(a1 + 68) = v15 - 1;
  if ( v18 != v20 )
    operator delete(v18);
  return 1;
}
