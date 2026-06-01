_DWORD *__fastcall sub_82C0C0(__int64 a1)
{
  char **exception; // rbx
  _QWORD *v2; // rdx
  __int64 v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rax
  char *v6; // rax
  __int64 v7; // rdx
  __m128i v8; // xmm0
  __int64 v9; // rdx
  int v10; // edx
  unsigned int v12; // ebp
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = *(_QWORD **)(a1 + 464);
  if ( v2 )
  {
    v3 = *((unsigned int *)v2 - 1);
    if ( (_DWORD)v3 == *((_DWORD *)v2 - 2) )
    {
      v12 = (unsigned int)(3 * v3 + 1) >> 1;
      v13 = 4 * (v12 + ((3 * (_DWORD)v3 + 1) & 0xFFFFFFFE)) + 8;
      if ( 12 * (int)v3 + 8 >= (unsigned int)v13 || (unsigned int)v3 >= v12 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v17, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v17);
        sub_233E40((__int64)v17);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = (unsigned int *)sub_186B300(v2 - 1, v13);
      v2 = v14 + 2;
      *v14 = v12;
      v15 = v14[1];
      *(_QWORD *)(a1 + 464) = v2;
      v4 = (_QWORD *)((char *)v2 + 12 * v15);
    }
    else
    {
      v4 = (_QWORD *)((char *)v2 + 12 * v3);
    }
  }
  else
  {
    v16 = (_QWORD *)sub_186B270(0x20u);
    v2 = v16 + 1;
    *v16 = 2;
    *(_QWORD *)(a1 + 464) = v16 + 1;
    v4 = v16 + 1;
  }
  *v4 = 0;
  *((_DWORD *)v4 + 2) = 0;
  v5 = *((unsigned int *)v2 - 1);
  *((_DWORD *)v2 - 1) = v5 + 1;
  v6 = (char *)v2 + 12 * v5;
  v7 = *(_QWORD *)(a1 + 336);
  if ( v7 )
    v8 = _mm_cvtsi32_si128(*(_DWORD *)(v7 - 4));
  else
    v8 = 0;
  v9 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)v6 = _mm_unpacklo_epi32(v8, _mm_cvtsi32_si128(*(_DWORD *)(a1 + 344))).m128i_u64[0];
  if ( v9 )
    v10 = *(_DWORD *)(v9 - 4);
  else
    v10 = 0;
  *((_DWORD *)v6 + 2) = v10;
  sub_1005020(*(_QWORD *)(a1 + 496));
  if ( *(_QWORD *)(a1 + 472) )
    sub_1021CA0();
  return sub_7E64F0(a1);
}

