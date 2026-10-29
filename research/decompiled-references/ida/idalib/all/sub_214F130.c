__int64 __fastcall sub_214F130(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r8
  int v10; // ecx
  unsigned __int64 v11; // rcx
  __m128i *v12; // rax
  const __m128i *v13; // r12
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // [rsp+0h] [rbp-48h] BYREF
  int v24; // [rsp+8h] [rbp-40h]
  __int64 v25; // [rsp+10h] [rbp-38h]
  int v26; // [rsp+18h] [rbp-30h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
  v3 = *(unsigned int *)(v2 + 128);
  v4 = *(_QWORD *)(v2 + 120);
  v5 = 32 * v3;
  if ( (_DWORD)v3 )
  {
    v6 = v4 + v5 - 32;
    v7 = *(_QWORD *)(v6 + 16);
    v8 = *(unsigned int *)(v6 + 24);
    v9 = *(_QWORD *)v6;
    v10 = *(_DWORD *)(v6 + 8);
  }
  else
  {
    v10 = 0;
    v8 = 0;
    v7 = 0;
    v9 = 0;
  }
  v24 = v10;
  v11 = *(unsigned int *)(v2 + 132);
  v12 = (__m128i *)(v4 + v5);
  v13 = (const __m128i *)&v23;
  v14 = v3 + 1;
  v23 = v9;
  v25 = v7;
  v26 = v8;
  if ( v14 > v11 )
  {
    v21 = v2 + 120;
    v8 = v2 + 136;
    if ( v4 > (unsigned __int64)&v23 || v12 <= (__m128i *)&v23 )
    {
      sub_2237220(v21, v8, v14, 32);
      v12 = (__m128i *)(*(_QWORD *)(v2 + 120) + 32LL * *(unsigned int *)(v2 + 128));
    }
    else
    {
      sub_2237220(v21, v8, v14, 32);
      v22 = *(_QWORD *)(v2 + 120);
      v13 = (const __m128i *)((char *)&v23 + v22 - v4);
      v12 = (__m128i *)(v22 + 32LL * *(unsigned int *)(v2 + 128));
    }
  }
  *v12 = _mm_loadu_si128(v13);
  v12[1] = _mm_loadu_si128(v13 + 1);
  ++*(_DWORD *)(v2 + 128);
  v17 = sub_214E840(a1);
  if ( (_BYTE)v17 )
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64, int))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 168LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
      v8,
      v15,
      v16,
      v18,
      v19,
      v23,
      v24,
      v25,
      v26);
  return v17;
}
