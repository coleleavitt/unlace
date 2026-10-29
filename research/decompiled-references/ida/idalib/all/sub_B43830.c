__int64 __fastcall sub_B43830(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 *a5, _BYTE *a6)
{
  unsigned int v6; // eax
  unsigned int v7; // ebp
  unsigned int v8; // r13d
  unsigned int v9; // r12d
  const __m128i *v10; // rcx
  __int32 v11; // edx
  __m128i v12; // xmm0
  __int64 v13; // rcx
  __int64 v14; // rcx
  const char *v15; // r8
  __int64 v16; // r9
  __int64 result; // rax
  __int64 v18; // rcx
  unsigned __int8 *v19; // r8
  _BYTE *v20; // r9
  __int64 v21; // rdx
  __m128i v22; // xmm0
  __int64 v23; // rcx
  __int64 v24; // [rsp+0h] [rbp-38h]
  __int64 v25; // [rsp+8h] [rbp-30h]

  v6 = *(_DWORD *)(a1 + 80);
  v7 = *(_DWORD *)(a1 + 48);
  v8 = *(_DWORD *)(a1 + 56);
  v9 = *(_DWORD *)(a1 + 60);
  if ( v6 )
  {
    v10 = (const __m128i *)(*(_QWORD *)(a1 + 72) + 24LL * v6 - 24);
    v11 = v10->m128i_i32[1];
    v12 = _mm_loadu_si128(v10);
    v13 = v10[1].m128i_i64[0];
    *(_DWORD *)(a1 + 80) = v6 - 1;
    *(__m128i *)(a1 + 48) = v12;
    *(_QWORD *)(a1 + 64) = v13;
  }
  else
  {
    sub_B433F0(*(_QWORD *)a1, a1 + 48, a3, a4, a5, a6, v24);
    v11 = *(_DWORD *)(a1 + 52);
  }
  if ( v11 == 10 )
  {
    v14 = *(unsigned int *)(a1 + 48);
    v15 = *(const char **)(a1 + 64);
    v16 = *(unsigned int *)(a1 + 56);
  }
  else
  {
    v14 = v7;
    if ( v9 > 1 )
      v14 = v9 + v7 - 1;
    v15 = &byte_22F0C30;
    v16 = 0;
  }
  result = sub_B548A0(*(_QWORD *)(a1 + 8), v7, v8, v14, v15, v16);
  v21 = *(unsigned int *)(a1 + 80);
  if ( (_DWORD)v21 )
  {
    v22 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 72) + 24LL * (unsigned int)v21 - 24));
    v23 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL * (unsigned int)v21 - 24 + 16);
    *(_DWORD *)(a1 + 80) = v21 - 1;
    *(__m128i *)(a1 + 48) = v22;
    *(_QWORD *)(a1 + 64) = v23;
  }
  else
  {
    v25 = result;
    sub_B433F0(*(_QWORD *)a1, a1 + 48, v21, v18, v19, v20, v24);
    return v25;
  }
  return result;
}
