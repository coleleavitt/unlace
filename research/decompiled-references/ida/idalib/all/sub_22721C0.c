__int64 __fastcall sub_22721C0(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // rbp
  __m128i v13; // xmm1
  __int64 v14; // rax
  _BYTE *v15; // rdi
  __m128i v17; // [rsp+8h] [rbp-60h] BYREF
  void *v18; // [rsp+18h] [rbp-50h]
  __int64 v19; // [rsp+20h] [rbp-48h]
  _BYTE v20[64]; // [rsp+28h] [rbp-40h] BYREF

  sub_2270A60(a1, -1, a3, a4, a5, a6);
  v9 = *(_QWORD *)(a1 + 40);
  *(_WORD *)(a1 + 73) = 0;
  v18 = v20;
  v17.m128i_i64[0] = v9;
  *(_QWORD *)(a1 + 40) = v9 + 3;
  v10 = *(_QWORD *)(a1 + 80);
  v11 = (a2 == 0) + 5;
  *(_DWORD *)(a1 + 232) = 0;
  v20[0] = 0;
  v12 = (v10 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v19 = 0;
  v17.m128i_i64[1] = 3;
  *(_DWORD *)(a1 + 60) += 3;
  *(_QWORD *)(a1 + 160) += 72LL;
  if ( *(_QWORD *)(a1 + 88) >= v12 + 72 && v10 )
  {
    *(_QWORD *)(a1 + 80) = v12 + 72;
  }
  else
  {
    v12 = sub_986170(a1 + 80, 72, 72, 4, v7, v8);
    v11 = (a2 == 0) + 5;
  }
  *(_DWORD *)(v12 + 16) = v11;
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
