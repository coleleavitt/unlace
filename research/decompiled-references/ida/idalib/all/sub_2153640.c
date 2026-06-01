__int64 __fastcall sub_2153640(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // esi
  __int64 v13; // r8
  int v14; // ecx
  unsigned __int64 v15; // rcx
  __m128i *v16; // rax
  const __m128i *v17; // r13
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // ebx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // [rsp+0h] [rbp-48h] BYREF
  int v29; // [rsp+8h] [rbp-40h]
  __int64 v30; // [rsp+10h] [rbp-38h]
  int v31; // [rsp+18h] [rbp-30h]

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
  v7 = *(unsigned int *)(v6 + 128);
  v8 = *(_QWORD *)(v6 + 120);
  v9 = 32 * v7;
  if ( (_DWORD)v7 )
  {
    v10 = v8 + v9 - 32;
    v11 = *(_QWORD *)(v10 + 16);
    v12 = *(_DWORD *)(v10 + 24);
    v13 = *(_QWORD *)v10;
    v14 = *(_DWORD *)(v10 + 8);
  }
  else
  {
    v14 = 0;
    v12 = 0;
    v11 = 0;
    v13 = 0;
  }
  v29 = v14;
  v15 = *(unsigned int *)(v6 + 132);
  v16 = (__m128i *)(v8 + v9);
  v17 = (const __m128i *)&v28;
  v18 = v7 + 1;
  v28 = v13;
  v30 = v11;
  v31 = v12;
  if ( v18 > v15 )
  {
    v25 = v6 + 120;
    v26 = v6 + 136;
    if ( v8 > (unsigned __int64)&v28 || v16 <= (__m128i *)&v28 )
    {
      sub_2237220(v25, v26, v18, 32);
      v16 = (__m128i *)(*(_QWORD *)(v6 + 120) + 32LL * *(unsigned int *)(v6 + 128));
    }
    else
    {
      sub_2237220(v25, v26, v18, 32);
      v27 = *(_QWORD *)(v6 + 120);
      v17 = (const __m128i *)((char *)&v28 + v27 - v8);
      v16 = (__m128i *)(v27 + 32LL * *(unsigned int *)(v6 + 128));
    }
  }
  *v16 = _mm_loadu_si128(v17);
  v16[1] = _mm_loadu_si128(v17 + 1);
  ++*(_DWORD *)(v6 + 128);
  v21 = sub_2151610(a1, 1, a4);
  if ( (_BYTE)v21 )
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64, int))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 168LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
      1,
      v19,
      v20,
      v22,
      v23,
      v28,
      v29,
      v30,
      v31);
  return v21;
}
