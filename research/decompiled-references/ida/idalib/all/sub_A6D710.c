unsigned __int64 __fastcall sub_A6D710(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __m128i v6; // xmm1
  __int32 v7; // r14d
  unsigned __int64 v8; // rbp
  unsigned __int16 epi16; // r13
  unsigned __int16 v10; // r12
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rax
  __m128i v23; // [rsp+0h] [rbp-38h] BYREF

  if ( !a2 )
    BUG();
  v4 = *(unsigned int *)(a3 + 8);
  v5 = *(unsigned int *)(a3 + 12);
  v23 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v6 = _mm_load_si128(&v23);
  v7 = v23.m128i_i32[0];
  v8 = v23.m128i_u64[1];
  epi16 = _mm_extract_epi16(v6, 2);
  v10 = _mm_extract_epi16(v6, 3);
  if ( v4 + 1 > v5 )
  {
    sub_2237220(a3, a3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v4) = v7;
  v11 = *(unsigned int *)(a3 + 12);
  v12 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v12;
  if ( v12 + 1 > v11 )
  {
    sub_2237220(a3, a3 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v12) = epi16;
  v13 = *(unsigned int *)(a3 + 12);
  v14 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v14;
  if ( v14 + 1 > v13 )
  {
    sub_2237220(a3, a3 + 16, v14 + 1, 4);
    v14 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v14) = v10;
  v15 = *(unsigned int *)(a3 + 12);
  v16 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v16;
  if ( v16 + 1 > v15 )
  {
    sub_2237220(a3, a3 + 16, v16 + 1, 4);
    v16 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v16) = v8;
  v17 = HIDWORD(v8);
  v18 = *(unsigned int *)(a3 + 12);
  v19 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v19;
  if ( v19 + 1 > v18 )
  {
    sub_2237220(a3, a3 + 16, v19 + 1, 4);
    v19 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v19) = v17;
  v20 = *(_QWORD **)a3;
  v21 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v21;
  return sub_985B10(v20, (__int64)v20 + 4 * v21);
}
