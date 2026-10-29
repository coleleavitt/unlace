__int64 __fastcall sub_A80F60(_QWORD *a1, unsigned int a2, int a3)
{
  __m128i v3; // xmm0
  __int64 v5; // r14
  __int64 v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // r13
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 result; // rax
  _QWORD *v13; // rcx
  _DWORD *v14; // rbx
  unsigned int v15; // r15d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  char **exception; // rbx
  unsigned __int64 v21; // [rsp+0h] [rbp-60h]
  char *v22[11]; // [rsp+8h] [rbp-58h] BYREF

  v3 = _mm_cvtsi32_si128(a2);
  v5 = *(_QWORD *)(*a1 + 16LL);
  v6 = 4LL * (unsigned int)_mm_cvtsi128_si32(v3);
  v21 = _mm_unpacklo_epi32(v3, _mm_cvtsi32_si128(*(_DWORD *)(a1[31] + v6))).m128i_u64[0];
  v7 = (_QWORD *)sub_180C100(v5 + 8400, 24);
  v3.m128i_i64[0] = v21;
  v8 = *(_QWORD **)(v5 + 9456);
  v9 = v7;
  *v7 = off_1C55270;
  v7[1] = a1 + 31;
  v7[2] = v3.m128i_i64[0];
  if ( v8 )
  {
    v10 = *((_DWORD *)v8 - 1);
    if ( v10 == *((_DWORD *)v8 - 2) )
    {
      v15 = (3 * v10 + 1) >> 1;
      v16 = 8 * v15 + 8;
      if ( 8 * v10 + 8 >= (unsigned int)v16 || v10 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_137C7A(v22);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v22);
        sub_233E40((__int64)v22);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = (unsigned int *)sub_186B300(v8 - 1, v16);
      v18 = v17[1];
      v8 = v17 + 2;
      *(_QWORD *)(v5 + 9456) = v17 + 2;
      *v17 = v15;
      LODWORD(v17) = v18;
      v13 = &v8[v18];
      result = (unsigned int)((_DWORD)v17 + 1);
    }
    else
    {
      v11 = v10;
      result = v10 + 1;
      v13 = &v8[v11];
    }
  }
  else
  {
    v19 = (_QWORD *)sub_186B270(0x18u);
    v8 = v19 + 1;
    *v19 = 2;
    result = 1;
    *(_QWORD *)(v5 + 9456) = v8;
    v13 = v8;
  }
  v14 = (_DWORD *)(a1[31] + v6);
  *v13 = v9;
  *((_DWORD *)v8 - 1) = result;
  *v14 += a3;
  return result;
}

