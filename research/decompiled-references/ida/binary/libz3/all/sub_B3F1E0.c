__int64 __fastcall sub_B3F1E0(__int64 a1)
{
  char **exception; // rbx
  _QWORD *v3; // rdi
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 result; // rax
  __m128i v9; // xmm0
  unsigned int v10; // ebp
  size_t v11; // rsi
  unsigned int *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *(_QWORD **)(a1 + 72);
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 - 1);
    if ( (_DWORD)v4 == *((_DWORD *)v3 - 2) )
    {
      v10 = (unsigned int)(3 * v4 + 1) >> 1;
      v11 = 8 * v10 + 8;
      if ( 8 * (int)v4 + 8 >= (unsigned int)v11 || (unsigned int)v4 >= v10 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v15, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v15);
        sub_233E40((__int64)v15);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v12 = (unsigned int *)sub_186B300(v3 - 1, v11);
      v3 = v12 + 2;
      *v12 = v10;
      v13 = v12[1];
      *(_QWORD *)(a1 + 72) = v3;
      v5 = &v3[v13];
    }
    else
    {
      v5 = &v3[v4];
    }
  }
  else
  {
    v14 = (_QWORD *)sub_186B270(0x18u);
    v3 = v14 + 1;
    *v14 = 2;
    *(_QWORD *)(a1 + 72) = v14 + 1;
    v5 = v14 + 1;
  }
  *v5 = 0;
  v6 = *((unsigned int *)v3 - 1);
  *((_DWORD *)v3 - 1) = v6 + 1;
  v7 = &v3[v6];
  result = *(_QWORD *)(a1 + 32);
  if ( result )
    v9 = _mm_cvtsi32_si128(*(_DWORD *)(result - 4));
  else
    v9 = 0;
  *v7 = _mm_unpacklo_epi32(v9, _mm_cvtsi32_si128(*(_DWORD *)(a1 + 40))).m128i_u64[0];
  return result;
}

