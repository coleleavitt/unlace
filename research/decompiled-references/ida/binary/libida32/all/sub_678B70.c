unsigned __int64 __fastcall sub_678B70(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rsi
  __int64 v8; // rbp
  int v9; // eax
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v14; // rdx
  int v15; // r13d
  __int64 v16; // rax
  __m128i v17; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v18 = __readfsqword(0x28u);
  v6 = *(_QWORD **)(a1 + 1648);
  v7 = v3 + v4;
  v17 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v7);
  v8 = unpack_dq(&v17, v7);
  v9 = unpack_dd(&v17);
  v10 = 4 * v8;
  v11 = v6[5];
  if ( a3 )
  {
    v14 = v6[6];
    v15 = v9;
    if ( v6[7] < (unsigned __int64)(v14 + 1) )
    {
      v16 = qvector_reserve(v6 + 5, v11, v14 + 1, 4);
      v14 = v6[6];
      v6[5] = v16;
      v11 = v16;
    }
    memmove((void *)(v11 + v10 + 4), (const void *)(v11 + v10), 4 * v14 - v10);
    *(_DWORD *)(v11 + 4 * v8) = v15;
    v12 = v6[6] + 1LL;
  }
  else
  {
    memmove((void *)(v11 + v10), (const void *)(v11 + v10 + 4), 4 * (v6[6] - v8) - 4);
    v12 = v6[6] - 1LL;
  }
  v6[6] = v12;
  v6[8] = -1;
  return v18 - __readfsqword(0x28u);
}

