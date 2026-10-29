__int64 __fastcall sub_2272A60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  __m128i v13; // xmm1
  __int64 v14; // rax
  _BYTE *v15; // rdi
  __m128i v17; // [rsp+8h] [rbp-60h] BYREF
  void *v18; // [rsp+18h] [rbp-50h]
  __int64 v19; // [rsp+20h] [rbp-48h]
  _BYTE v20[64]; // [rsp+28h] [rbp-40h] BYREF

  sub_22719B0(a1, *(_DWORD *)(a1 + 60), 9, (unsigned __int64 *)(a1 + 176), a5, a6);
  v9 = *(_DWORD *)(a1 + 232);
  if ( v9 && *(_DWORD *)(a1 + 68) == *(_DWORD *)(*(_QWORD *)(a1 + 224) + 24LL * v9 - 8) )
    *(_DWORD *)(a1 + 232) = v9 - 1;
  v20[0] = 0;
  *(_WORD *)(a1 + 73) = 1;
  v18 = v20;
  v10 = *(_QWORD *)(a1 + 40);
  v19 = 0;
  v17.m128i_i64[0] = v10;
  *(_QWORD *)(a1 + 40) = v10 + 1;
  v11 = *(_QWORD *)(a1 + 80);
  ++*(_DWORD *)(a1 + 60);
  v12 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)(a1 + 160) += 72LL;
  v17.m128i_i64[1] = 1;
  if ( *(_QWORD *)(a1 + 88) >= v12 + 72 && v11 )
    *(_QWORD *)(a1 + 80) = v12 + 72;
  else
    v12 = sub_986170(a1 + 80, 72, 72, 4, v7, v8);
  *(_DWORD *)(v12 + 16) = 7;
  v13 = _mm_loadu_si128(&v17);
  *(_OWORD *)v12 = 0;
  *(_QWORD *)(v12 + 40) = v12 + 56;
  *(__m128i *)(v12 + 24) = v13;
  sub_226E090((_QWORD *)(v12 + 40), v18, (__int64)v18 + v19);
  v14 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(v12 + 8) = a1 + 176;
  *(_QWORD *)v12 = v14;
  *(_QWORD *)(v14 + 8) = v12;
  v15 = v18;
  *(_QWORD *)(a1 + 176) = v12;
  if ( v15 != v20 )
    operator delete(v15);
  return 1;
}
