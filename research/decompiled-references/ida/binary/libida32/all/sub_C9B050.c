__int64 __fastcall sub_C9B050(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  int v6; // r8d
  __int64 v7; // rdx
  __int64 result; // rax
  __int32 v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __m128i *(__fastcall *v12)(__int64, const __m128i *); // rax
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rbx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // r13
  _QWORD *v22; // rdx
  void *v23; // rdi
  int v24; // r15d
  __m128i v25; // [rsp+0h] [rbp-68h] BYREF
  __int64 v26; // [rsp+18h] [rbp-50h] BYREF
  __m128i v27; // [rsp+20h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a1 + 496);
  if ( (v3 & 1) != 0 )
  {
    v5 = v3 & 0xFFFFFFFFFFFFFFF0LL;
    v6 = 1;
  }
  else
  {
    v5 = v3 & 0xFFFFFFFFFFFFFFF0LL;
    v6 = *(_DWORD *)(v5 + 8) & 1;
  }
  v7 = *(_QWORD *)v5;
  v27.m128i_i64[0] = a2 | 2;
  result = sub_E07C70(v4, (unsigned int)&v27, v7, unk_23CAED8, v6, 1, 0, 0, 0);
  if ( result )
  {
    v9 = sub_C7B590(a1, result);
    v10 = *(_QWORD *)(a1 + 552);
    v27.m128i_i32[0] = v9;
    v27.m128i_i64[1] = v11;
    while ( *(_QWORD *)(v10 + 16) )
      v10 = *(_QWORD *)(v10 + 16);
    v12 = *(__m128i *(__fastcall **)(__int64, const __m128i *))(*(_QWORD *)v10 + 16LL);
    if ( v12 == sub_C9AC50 )
    {
      v13 = *(_QWORD *)(v10 + 8);
      v14 = v13;
      if ( !*(_BYTE *)(v10 + 40) )
      {
        v18 = *(unsigned int *)(v13 + 72);
        *(_BYTE *)(v10 + 40) = 1;
        *(_DWORD *)(v10 + 36) = v18;
        if ( *(_DWORD *)(v13 + 76) <= (unsigned int)v18 )
        {
          v21 = sub_22136C0(v13 + 64, v13 + 80, 0, 144, &v26);
          v22 = (_QWORD *)(v21 + 144LL * *(unsigned int *)(v13 + 72));
          *v22 = v22 + 2;
          v22[1] = 0x800000000LL;
          sub_C9A980(v13 + 64, v21);
          v23 = *(void **)(v13 + 64);
          v24 = v26;
          if ( (void *)(v13 + 80) != v23 )
            free(v23);
          *(_QWORD *)(v13 + 64) = v21;
          *(_DWORD *)(v13 + 76) = v24;
          ++*(_DWORD *)(v13 + 72);
          v13 = *(_QWORD *)(v10 + 8);
        }
        else
        {
          v19 = (_QWORD *)(*(_QWORD *)(v13 + 64) + 144 * v18);
          v19[1] = 0x800000000LL;
          *v19 = v19 + 2;
          ++*(_DWORD *)(v13 + 72);
        }
        v26 = 0;
        sub_C814B0(v13, *(_DWORD *)(v10 + 36), &v26);
        v14 = *(_QWORD *)(v10 + 8);
      }
      v15 = *(_QWORD *)(v14 + 64) + 144LL * *(unsigned int *)(v10 + 36);
      v16 = *(unsigned int *)(v15 + 8);
      v17 = *(unsigned int *)(v15 + 12);
      if ( v16 >= v17 )
      {
        v20 = _mm_load_si128(&v27);
        if ( v17 < v16 + 1 )
        {
          v25 = v20;
          sub_22134E0(v15, v15 + 16, v16 + 1, 16);
          v16 = *(unsigned int *)(v15 + 8);
          v20 = _mm_load_si128(&v25);
        }
        *(__m128i *)(*(_QWORD *)v15 + 16 * v16) = v20;
        ++*(_DWORD *)(v15 + 8);
      }
      else
      {
        *(__m128i *)(*(_QWORD *)v15 + 16 * v16) = _mm_load_si128(&v27);
        ++*(_DWORD *)(v15 + 8);
      }
    }
    else
    {
      v12(v10, &v27);
    }
    return v27.m128i_u32[0] | 0x100000000LL;
  }
  return result;
}

