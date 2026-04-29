__int64 __fastcall sub_618A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbp
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __m128i v16; // xmm0
  int v17; // r12d
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v21; // rax
  __int64 v22; // rax

  v3 = ((__int64 (*)(void))sub_1CE070)();
  *(_DWORD *)(v3 + 76) = 0;
  v4 = *(_DWORD *)(v3 + 24);
  BYTE1(v4) &= ~2u;
  LOBYTE(v4) = v4 | 0x80;
  *(_DWORD *)(v3 + 24) = v4;
  v5 = sub_1CE070(a1);
  *(_DWORD *)(v3 + 76) = 3;
  v6 = *(_QWORD *)(v3 + 368);
  v7 = v5;
  v8 = *(_DWORD *)(v3 + 72) + 1;
  v9 = *(_QWORD *)(v3 + 376);
  if ( *(_QWORD *)(v3 + 384) < (unsigned __int64)(v9 + 1) )
  {
    v21 = qvector_reserve(v3 + 368, v6, v9 + 1, 4);
    *(_QWORD *)(v3 + 368) = v21;
    v6 = v21;
    v9 = *(_QWORD *)(v3 + 376);
  }
  *(_DWORD *)(v6 + 4 * v9) = v8;
  ++*(_QWORD *)(v3 + 376);
  sub_331110(v3, a2);
  v10 = sub_329920(a1, *(_QWORD *)(a2 + 24));
  sub_329730(v3, v10, 0);
  v11 = *(_QWORD *)(v7 + 160);
  *(_QWORD *)(v7 + 160) = *(_QWORD *)(v3 + 160);
  v12 = *(_QWORD *)(v3 + 168);
  *(_QWORD *)(v3 + 160) = v11;
  v13 = *(_QWORD *)(v7 + 168);
  *(_QWORD *)(v7 + 168) = v12;
  v14 = *(_QWORD *)(v3 + 176);
  *(_QWORD *)(v3 + 168) = v13;
  v15 = *(_QWORD *)(v7 + 176);
  *(_QWORD *)(v7 + 176) = v14;
  v16 = _mm_loadu_si128((const __m128i *)(v7 + 184));
  *(_QWORD *)(v7 + 184) = *(_QWORD *)(v3 + 184);
  *(_QWORD *)(v7 + 192) = *(_QWORD *)(v3 + 192);
  v17 = *(_DWORD *)(v3 + 72);
  *(_QWORD *)(v3 + 176) = v15;
  *(__m128i *)(v3 + 184) = v16;
  v18 = *(_QWORD *)(v7 + 352);
  v19 = *(_QWORD *)(v7 + 344);
  if ( *(_QWORD *)(v7 + 360) < (unsigned __int64)(v18 + 1) )
  {
    v22 = qvector_reserve(v7 + 344, v19, v18 + 1, 4);
    *(_QWORD *)(v7 + 344) = v22;
    v19 = v22;
    v18 = *(_QWORD *)(v7 + 352);
  }
  *(_DWORD *)(v19 + 4 * v18) = v17;
  ++*(_QWORD *)(v7 + 352);
  sub_1CE0C0(v3, v7);
  return v3;
}
