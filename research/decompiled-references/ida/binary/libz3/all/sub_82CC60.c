_DWORD *__fastcall sub_82CC60(__int64 a1, int a2)
{
  char **v2; // rbp
  char **exception; // rbp
  _QWORD *v6; // rax
  __int64 v7; // rax
  char *v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __int64 v11; // rdx
  int v12; // edx
  bool v13; // zf
  _DWORD *(__fastcall *v14)(__int64); // rax
  _QWORD *v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // r13d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rdi
  __int64 v22; // rax
  _DWORD *result; // rax
  _QWORD *v24; // rax
  unsigned int v25; // ebp
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 104) )
  {
    do
    {
      while ( 1 )
      {
        v14 = *(_DWORD *(__fastcall **)(__int64))(*(_QWORD *)a1 + 512LL);
        if ( v14 == sub_82C0C0 )
          break;
        v14(a1);
        v13 = (*(_DWORD *)(a1 + 104))-- == 1;
        if ( v13 )
          goto LABEL_18;
      }
      v15 = *(_QWORD **)(a1 + 464);
      if ( v15 )
      {
        v16 = *((unsigned int *)v15 - 1);
        if ( (_DWORD)v16 == *((_DWORD *)v15 - 2) )
        {
          v17 = (unsigned int)(3 * v16 + 1) >> 1;
          v18 = 4 * (v17 + ((3 * (_DWORD)v16 + 1) & 0xFFFFFFFE)) + 8;
          if ( 12 * (int)v16 + 8 >= (unsigned int)v18 || (unsigned int)v16 >= v17 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v30, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v30);
            sub_233E40((__int64)v30);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v19 = (unsigned int *)sub_186B300(v15 - 1, v18);
          v15 = v19 + 2;
          *v19 = v17;
          v20 = v19[1];
          *(_QWORD *)(a1 + 464) = v15;
          v6 = (_QWORD *)((char *)v15 + 12 * v20);
        }
        else
        {
          v6 = (_QWORD *)((char *)v15 + 12 * v16);
        }
      }
      else
      {
        v24 = (_QWORD *)sub_186B270(0x20u);
        v15 = v24 + 1;
        *v24 = 2;
        *(_QWORD *)(a1 + 464) = v24 + 1;
        v6 = v24 + 1;
      }
      *v6 = 0;
      *((_DWORD *)v6 + 2) = 0;
      v7 = *((unsigned int *)v15 - 1);
      *((_DWORD *)v15 - 1) = v7 + 1;
      v8 = (char *)v15 + 12 * v7;
      v9 = *(_QWORD *)(a1 + 336);
      if ( v9 )
        v10 = _mm_cvtsi32_si128(*(_DWORD *)(v9 - 4));
      else
        v10 = 0;
      v11 = *(_QWORD *)(a1 + 248);
      *(_QWORD *)v8 = _mm_unpacklo_epi32(v10, _mm_cvtsi32_si128(*(_DWORD *)(a1 + 344))).m128i_u64[0];
      if ( v11 )
        v12 = *(_DWORD *)(v11 - 4);
      else
        v12 = 0;
      *((_DWORD *)v8 + 2) = v12;
      sub_1005020(*(_QWORD *)(a1 + 496));
      if ( *(_QWORD *)(a1 + 472) )
        sub_1021CA0();
      sub_7E64F0(a1);
      v13 = (*(_DWORD *)(a1 + 104))-- == 1;
    }
    while ( !v13 );
  }
LABEL_18:
  v21 = *(_QWORD **)(a1 + 248);
  if ( v21 )
  {
    v22 = *((unsigned int *)v21 - 1);
    if ( (_DWORD)v22 == *((_DWORD *)v21 - 2) )
    {
      v25 = (unsigned int)(3 * v22 + 1) >> 1;
      v26 = 4 * v25 + 8;
      if ( 4 * (int)v22 + 8 >= (unsigned int)v26 || (unsigned int)v22 >= v25 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v30, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v30);
        sub_233E40((__int64)v30);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v27 = (unsigned int *)sub_186B300(v21 - 1, v26);
      v21 = v27 + 2;
      *v27 = v25;
      v28 = v27[1];
      *(_QWORD *)(a1 + 248) = v21;
      result = (_DWORD *)v21 + v28;
    }
    else
    {
      result = (_DWORD *)v21 + v22;
    }
  }
  else
  {
    v29 = (_QWORD *)sub_186B270(0x10u);
    v21 = v29 + 1;
    *v29 = 2;
    *(_QWORD *)(a1 + 248) = v29 + 1;
    result = v29 + 1;
  }
  *result = a2;
  ++*((_DWORD *)v21 - 1);
  return result;
}

