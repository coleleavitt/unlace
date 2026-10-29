__int64 __fastcall sub_1F5E590(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  bool v14; // zf
  unsigned __int64 v15; // rbp
  __int32 v16; // edx
  unsigned __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdx
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 result; // rax
  __m128i v27; // [rsp+0h] [rbp-48h] BYREF
  __int64 v28; // [rsp+10h] [rbp-38h]

  v7 = (__m128i *)a2;
  v8 = *a1;
  v9 = *(unsigned int *)(v8 + 24);
  v10 = *(_QWORD *)(v8 + 16);
  v11 = *(_QWORD *)(v8 + 32);
  v12 = *(_QWORD *)(v8 + 8);
  v13 = (unsigned int)(v9 + 1);
  v14 = *(_QWORD *)(v10 + 856) == 0;
  *(_DWORD *)(v8 + 24) = v13;
  v15 = *(_QWORD *)(v11 + 8 * v9);
  if ( !v14 )
  {
    a2 = v10;
    sub_1EDF870(v12, v10);
    v8 = *a1;
    v13 = *(unsigned int *)(*a1 + 24);
  }
  v16 = __ROR4__(v15, 1);
  v17 = HIDWORD(v15);
  if ( v17 )
  {
    v11 = *(_QWORD *)(v10 + 3320);
    a2 = (unsigned int)(v17 - 1);
    v10 = *(_QWORD *)(v11 + 8 * a2);
  }
  if ( v16 )
  {
    v11 = *(unsigned int *)(v10 + 1648);
    v16 = v16 + v11 - 2;
  }
  v7->m128i_i32[2] = v16;
  *(_DWORD *)(v8 + 24) = v13 + 1;
  v18 = *(_QWORD *)(v8 + 32);
  v7->m128i_i8[12] = *(_QWORD *)(v18 + 8 * v13) != 0;
  v19 = sub_1F194E0(v8, a2, v18, v11, v12, a6);
  v20 = *a1;
  v7[1].m128i_i64[0] = v19;
  v7[1].m128i_i64[1] = v21;
  sub_1F194A0((__int64)&v27, v20);
  v22 = _mm_loadu_si128(&v27);
  v7[3].m128i_i64[0] = v28;
  v23 = *a1;
  v7[2] = v22;
  v24 = *(_QWORD *)(v23 + 8);
  v25 = *(_QWORD *)(*(_QWORD *)(v24 + 13064) + 8LL * *(unsigned int *)(v24 + 13072) - 8);
  result = (unsigned int)(*(_DWORD *)(v24 + 13072) - 1);
  *(_DWORD *)(v24 + 13072) = result;
  v7[3].m128i_i64[1] = v25;
  return result;
}
