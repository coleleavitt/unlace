__int64 __fastcall sub_22726D0(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // rbp
  __m128i v11; // xmm1
  _BYTE *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  bool v15; // zf
  _BYTE *v16; // rdi
  int v18; // eax
  unsigned __int64 v19; // r12
  const __m128i *v20; // rbp
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __m128i *v24; // rax
  __int64 v25; // rdi
  const void *v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+0h] [rbp-88h] BYREF
  int v29; // [rsp+8h] [rbp-80h]
  __int64 v30; // [rsp+Ch] [rbp-7Ch]
  int v31; // [rsp+14h] [rbp-74h]
  int v32; // [rsp+20h] [rbp-68h]
  __m128i v33; // [rsp+28h] [rbp-60h] BYREF
  void *v34; // [rsp+38h] [rbp-50h]
  __int64 v35; // [rsp+40h] [rbp-48h]
  _BYTE v36[64]; // [rsp+48h] [rbp-40h] BYREF

  v7 = *(_QWORD *)(a1 + 40);
  v36[0] = 0;
  v33.m128i_i64[0] = v7;
  v34 = v36;
  *(_QWORD *)(a1 + 40) = v7 + 1;
  v8 = *(_QWORD *)(a1 + 80);
  v9 = a2 == 0 ? 14 : 12;
  ++*(_DWORD *)(a1 + 60);
  v32 = v9;
  v10 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)(a1 + 160) += 72LL;
  v35 = 0;
  v33.m128i_i64[1] = 1;
  if ( *(_QWORD *)(a1 + 88) >= v10 + 72 && v8 )
  {
    *(_QWORD *)(a1 + 80) = v10 + 72;
  }
  else
  {
    v10 = sub_986170(a1 + 80, 72, 72, 4, a5, a6);
    v9 = v32;
  }
  v11 = _mm_loadu_si128(&v33);
  *(_DWORD *)(v10 + 16) = v9;
  *(_OWORD *)v10 = 0;
  *(__m128i *)(v10 + 24) = v11;
  v12 = v34;
  v13 = v35;
  *(_QWORD *)(v10 + 40) = v10 + 56;
  sub_226E090((_QWORD *)(v10 + 40), v12, (__int64)&v12[v13]);
  v14 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(v10 + 8) = a1 + 176;
  *(_QWORD *)v10 = v14;
  *(_QWORD *)(v14 + 8) = v10;
  v15 = *(_BYTE *)(a1 + 73) == 0;
  *(_QWORD *)(a1 + 176) = v10;
  if ( !v15 )
  {
    v18 = *(_DWORD *)(a1 + 60);
    v19 = *(_QWORD *)(a1 + 224);
    v28 = v10;
    v20 = (const __m128i *)&v28;
    v21 = *(unsigned int *)(a1 + 236);
    v31 = 0;
    v29 = v18 - 1;
    v30 = *(_QWORD *)(a1 + 64);
    v22 = *(unsigned int *)(a1 + 232);
    v23 = v22 + 1;
    v24 = (__m128i *)(v19 + 24 * v22);
    if ( v23 > v21 )
    {
      v25 = a1 + 224;
      v26 = (const void *)(a1 + 240);
      if ( v19 > (unsigned __int64)&v28 || v24 <= (__m128i *)&v28 )
      {
        sub_2237220(v25, v26, v23, 24);
        v24 = (__m128i *)(*(_QWORD *)(a1 + 224) + 24LL * *(unsigned int *)(a1 + 232));
      }
      else
      {
        sub_2237220(v25, v26, v23, 24);
        v27 = *(_QWORD *)(a1 + 224);
        v20 = (const __m128i *)((char *)&v28 + v27 - v19);
        v24 = (__m128i *)(v27 + 24LL * *(unsigned int *)(a1 + 232));
      }
    }
    *v24 = _mm_loadu_si128(v20);
    v24[1].m128i_i64[0] = v20[1].m128i_i64[0];
    ++*(_DWORD *)(a1 + 232);
  }
  v16 = v34;
  ++*(_DWORD *)(a1 + 68);
  *(_WORD *)(a1 + 73) = 1;
  if ( v16 != v36 )
    operator delete(v16);
  return 1;
}
