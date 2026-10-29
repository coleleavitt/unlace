__int64 *__fastcall sub_FD6960(__int64 a1, const void *a2, size_t a3, const __m128i *a4)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // r15
  __int64 *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // r12
  __m128i v16; // xmm0
  __int32 v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // [rsp+Ch] [rbp-4Ch]
  __int64 *v20[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = sub_2220DF0(a2, a3);
  v7 = (unsigned int)sub_2220F70(a1, a2, a3, v6);
  v10 = (__int64 *)(*(_QWORD *)a1 + 8 * v7);
  if ( *v10 )
  {
    if ( *v10 != -8 )
    {
      sub_FD6880(v20, v10, 0);
      result = v20[0];
      v12 = *v20[0];
      *(__m128i *)(v12 + 8) = _mm_loadu_si128(a4);
      *(_WORD *)(v12 + 24) = a4[1].m128i_i16[0];
      return result;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v19 = v7;
  v13 = sub_220C370(a3 + 33, 8, v7, v7, v8, v9);
  v14 = v19;
  v15 = v13;
  if ( a3 )
  {
    memcpy((void *)(v13 + 32), a2, a3);
    v14 = v19;
  }
  v16 = _mm_loadu_si128(a4);
  v17 = a4[1].m128i_i32[0];
  *(_BYTE *)(v15 + a3 + 32) = 0;
  *(__m128i *)(v15 + 8) = v16;
  *(_QWORD *)v15 = a3;
  *(_DWORD *)(v15 + 24) = v17;
  *v10 = v15;
  ++*(_DWORD *)(a1 + 12);
  v18 = sub_2221390(a1, v14);
  sub_FD6880(v20, (__int64 *)(*(_QWORD *)a1 + 8LL * v18), 0);
  return v20[0];
}

