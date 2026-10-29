__int64 __fastcall sub_1D69CE0(__int64 a1, __m128 a2, __m128 a3)
{
  __m128 *v4; // rbp
  const __m128i *v5; // r9
  __int128 *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 *v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // r14
  unsigned __int64 v13; // rax
  _DWORD *v14; // r12
  __int64 result; // rax
  const __m128i *v16; // [rsp+8h] [rbp-40h]

  v4 = *(__m128 **)(a1 + 32);
  v5 = *(const __m128i **)(a1 + 24);
  v6 = *(__int128 **)(a1 + 16);
  v7 = **(_QWORD **)(a1 + 40);
  v8 = *(_QWORD *)(v7 + 120);
  v9 = (unsigned __int64 *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
  v10 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v8 )
  {
    if ( (v8 & 4) != 0 )
    {
      v10 = 0;
      if ( v9 )
        v10 = *v9;
    }
  }
  v16 = v5;
  v11 = v10 + 16;
  v12 = *(unsigned int *)(v10 + 8);
  v13 = sub_BBFE00(v7);
  v14 = *(_DWORD **)a1;
  result = sub_1D68F80(
             *(_QWORD *)(a1 + 8),
             **(__int64 ***)(a1 + 40),
             *(_QWORD *)(**(_QWORD **)(a1 + 40) + 144LL),
             v13,
             0,
             v16,
             a2,
             a3,
             v11,
             v12,
             *v6,
             v4,
             1);
  *v14 = result;
  return result;
}
