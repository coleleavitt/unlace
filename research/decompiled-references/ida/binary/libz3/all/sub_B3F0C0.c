__int64 __fastcall sub_B3F0C0(__int64 a1)
{
  char **exception; // rbx
  _QWORD *v2; // rdx
  __int64 v3; // rax
  _OWORD *v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 result; // rax
  __m128i v10; // xmm0
  unsigned int v11; // ebp
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = *(_QWORD **)(a1 + 64);
  if ( v2 )
  {
    v3 = *((unsigned int *)v2 - 1);
    if ( (_DWORD)v3 == *((_DWORD *)v2 - 2) )
    {
      v11 = (unsigned int)(3 * v3 + 1) >> 1;
      v12 = 16 * v11 + 8;
      if ( 16 * (int)v3 + 8 >= (unsigned int)v12 || (unsigned int)v3 >= v11 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v16, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v16);
        sub_233E40((__int64)v16);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v13 = (unsigned int *)sub_186B300(v2 - 1, v12);
      v2 = v13 + 2;
      *v13 = v11;
      v14 = v13[1];
      *(_QWORD *)(a1 + 64) = v2;
      v4 = &v2[2 * v14];
    }
    else
    {
      v4 = &v2[2 * v3];
    }
  }
  else
  {
    v15 = (_QWORD *)sub_186B270(0x28u);
    v2 = v15 + 1;
    *v15 = 2;
    *(_QWORD *)(a1 + 64) = v15 + 1;
    v4 = v15 + 1;
  }
  *v4 = 0;
  v5 = *((unsigned int *)v2 - 1);
  *((_DWORD *)v2 - 1) = v5 + 1;
  v6 = &v2[2 * v5];
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
    v8 = _mm_cvtsi32_si128(*(_DWORD *)(v7 - 4));
  else
    v8 = 0;
  result = *(_QWORD *)(a1 + 48);
  *v6 = _mm_unpacklo_epi32(v8, _mm_cvtsi32_si128(*(_DWORD *)(a1 + 40))).m128i_u64[0];
  if ( result )
    v10 = _mm_cvtsi32_si128(*(_DWORD *)(result - 4));
  else
    v10 = 0;
  v6[1] = _mm_unpacklo_epi32(v10, _mm_cvtsi32_si128(*(_DWORD *)(a1 + 56))).m128i_u64[0];
  return result;
}

