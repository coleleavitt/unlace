__int64 __fastcall sub_1EDA630(__int64 a1, const __m128i *a2)
{
  const __m128i *v2; // rbp
  __int64 v3; // rax
  const __m128i *v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  __int32 v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // r13
  signed __int64 v14; // rbp
  __m128i *v15; // r14
  int v16; // ebx
  __int64 v17; // rdx
  __m128i *v18; // r14
  int v19; // ebx
  __int64 v20; // rax
  __m128i v21; // [rsp+0h] [rbp-68h]
  __m128i v22; // [rsp+10h] [rbp-58h] BYREF
  __int32 v23; // [rsp+20h] [rbp-48h]
  _DWORD v24[12]; // [rsp+38h] [rbp-30h] BYREF

  v2 = a2;
  v3 = *(unsigned int *)(a1 + 8);
  v4 = *(const __m128i **)a1;
  v5 = v3 + 1;
  v6 = *(_QWORD *)a1 + 352 * v3;
  if ( v3 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    v13 = a1 + 16;
    if ( v4 > a2 || v6 <= (unsigned __int64)a2 )
    {
      v18 = (__m128i *)sub_2237400(a1, a1 + 16, v5, 352, v24);
      sub_1EDA380(a1, v18);
      v19 = v24[0];
      if ( *(_QWORD *)a1 != v13 )
        free(*(void **)a1);
      v20 = *(unsigned int *)(a1 + 8);
      *(_DWORD *)(a1 + 12) = v19;
      *(_QWORD *)a1 = v18;
      v6 = (unsigned __int64)&v18[22 * v20];
    }
    else
    {
      v14 = (char *)a2 - (char *)v4;
      v15 = (__m128i *)sub_2237400(a1, a1 + 16, v5, 352, v24);
      sub_1EDA380(a1, v15);
      v16 = v24[0];
      if ( *(_QWORD *)a1 != v13 )
        free(*(void **)a1);
      v17 = *(unsigned int *)(a1 + 8);
      *(_DWORD *)(a1 + 12) = v16;
      v2 = (__m128i *)((char *)v15 + v14);
      *(_QWORD *)a1 = v15;
      v6 = (unsigned __int64)&v15[22 * v17];
    }
  }
  v21 = _mm_loadu_si128(v2);
  v22 = _mm_loadu_si128(v2 + 1);
  v23 = v2[2].m128i_i32[0];
  *(__m128i *)v6 = v21;
  *(__m128i *)(v6 + 16) = _mm_load_si128(&v22);
  *(_DWORD *)(v6 + 32) = v23;
  v7 = v2[2].m128i_i32[1];
  *(_QWORD *)(v6 + 48) = 0;
  *(_QWORD *)(v6 + 56) = 0;
  *(_DWORD *)(v6 + 36) = v7;
  *(_QWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 40) = v2[2].m128i_i64[1];
  v8 = v2[3].m128i_i64[0];
  v2[2].m128i_i64[1] = 0;
  v9 = *(_QWORD *)(v6 + 48);
  *(_QWORD *)(v6 + 48) = v8;
  v10 = v2[3].m128i_i64[1];
  v2[3].m128i_i64[0] = v9;
  v11 = *(_QWORD *)(v6 + 56);
  *(_QWORD *)(v6 + 56) = v10;
  v2[3].m128i_i64[1] = v11;
  *(_QWORD *)(v6 + 64) = v6 + 80;
  *(_QWORD *)(v6 + 72) = 0x800000000LL;
  if ( v2[4].m128i_i32[2] )
    sub_1EC2EC0(v6 + 64, (__int64)v2[4].m128i_i64);
  *(_QWORD *)(v6 + 336) = v2[21].m128i_i64[0];
  result = v2[21].m128i_i64[1];
  *(_QWORD *)(v6 + 344) = result;
  ++*(_DWORD *)(a1 + 8);
  return result;
}
