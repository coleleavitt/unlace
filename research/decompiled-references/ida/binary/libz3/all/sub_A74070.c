__int64 __fastcall sub_A74070(__int64 a1)
{
  char **exception; // rbx
  __int64 v2; // rbx
  _QWORD *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // rax
  __int64 v8; // rdx
  __m128i v9; // xmm0
  __int64 v10; // rdx
  int v11; // edx
  __int64 result; // rax
  __int64 v13; // rdi
  unsigned int v14; // ebp
  size_t v15; // rsi
  unsigned int *v16; // rax
  _QWORD *v17; // rax
  char *v18[7]; // [rsp+0h] [rbp-38h] BYREF

  sub_966D90(a1);
  v2 = *(_QWORD *)(a1 + 64);
  v3 = *(_QWORD **)(v2 + 424);
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 - 1);
    if ( (_DWORD)v4 == *((_DWORD *)v3 - 2) )
    {
      v14 = (unsigned int)(3 * v4 + 1) >> 1;
      v15 = 4 * (v14 + ((3 * (_DWORD)v4 + 1) & 0xFFFFFFFE)) + 8;
      if ( 12 * (int)v4 + 8 >= (unsigned int)v15 || (unsigned int)v4 >= v14 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_137C7A(v18);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v18);
        sub_233E40((__int64)v18);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = (unsigned int *)sub_186B300(v3 - 1, v15);
      v3 = v16 + 2;
      *(_QWORD *)(v2 + 424) = v16 + 2;
      *v16 = v14;
      v5 = (__int64)&v16[3 * v16[1] + 2];
    }
    else
    {
      v5 = (__int64)v3 + 12 * v4;
    }
  }
  else
  {
    v17 = (_QWORD *)sub_186B270(0x20u);
    v3 = v17 + 1;
    *v17 = 2;
    *(_QWORD *)(v2 + 424) = v17 + 1;
    v5 = (__int64)(v17 + 1);
  }
  *(_QWORD *)v5 = 0;
  *(_DWORD *)(v5 + 8) = 0;
  v6 = *((unsigned int *)v3 - 1);
  *((_DWORD *)v3 - 1) = v6 + 1;
  v7 = (char *)v3 + 12 * v6;
  v8 = *(_QWORD *)(v2 + 256);
  if ( v8 )
    v9 = _mm_cvtsi32_si128(*(_DWORD *)(v8 - 4));
  else
    v9 = 0;
  v10 = *(_QWORD *)(v2 + 176);
  *(_QWORD *)v7 = _mm_unpacklo_epi32(v9, _mm_cvtsi32_si128(*(_DWORD *)(v2 + 264))).m128i_u64[0];
  if ( v10 )
    v11 = *(_DWORD *)(v10 - 4);
  else
    v11 = 0;
  *((_DWORD *)v7 + 2) = v11;
  result = sub_1005020(*(_QWORD *)(v2 + 504));
  v13 = *(_QWORD *)(v2 + 328);
  if ( v13 )
    return sub_1021CA0(v13);
  return result;
}

