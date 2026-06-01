__int64 __fastcall sub_AF1C60(__int64 a1)
{
  char **v1; // rbp
  __int64 v2; // rdx
  char **exception; // rbp
  __int64 v4; // rdx
  _QWORD *v6; // rdi
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  int v14; // ebp
  int v15; // r12d
  __int64 v16; // rax
  _QWORD *v17; // rdx
  int v18; // r13d
  __int64 v19; // rax
  _DWORD *v20; // rax
  __int64 v21; // rax
  int v22; // ebp
  __int64 result; // rax
  __int64 v24; // rdx
  unsigned int v25; // r14d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rax
  unsigned int v29; // ebp
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35[9]; // [rsp+0h] [rbp-48h] BYREF

  v6 = *(_QWORD **)(a1 + 56);
  if ( v6 )
  {
    v7 = *((unsigned int *)v6 - 1);
    if ( (_DWORD)v7 == *((_DWORD *)v6 - 2) )
    {
      v29 = (unsigned int)(3 * v7 + 1) >> 1;
      v30 = 8 * v29 + 8;
      if ( 8 * (int)v7 + 8 >= (unsigned int)v30 || (unsigned int)v7 >= v29 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_140FB4(v35, "Overflow encountered when expanding vector", v4);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v35);
        sub_233E40((__int64)v35);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v31 = (unsigned int *)sub_186B300(v6 - 1, v30);
      v6 = v31 + 2;
      *v31 = v29;
      v32 = v31[1];
      *(_QWORD *)(a1 + 56) = v6;
      v8 = &v6[v32];
    }
    else
    {
      v8 = &v6[v7];
    }
  }
  else
  {
    v34 = (_QWORD *)sub_186B270(0x18u);
    v6 = v34 + 1;
    *v34 = 2;
    *(_QWORD *)(a1 + 56) = v34 + 1;
    v8 = v34 + 1;
  }
  *v8 = 0;
  v9 = *((unsigned int *)v6 - 1);
  *((_DWORD *)v6 - 1) = v9 + 1;
  v10 = &v6[v9];
  v11 = *(_QWORD *)(a1 + 40);
  if ( v11 )
    v12 = _mm_cvtsi32_si128(*(_DWORD *)(v11 - 4));
  else
    v12 = 0;
  v13 = *(_QWORD *)(a1 + 200);
  *v10 = _mm_unpacklo_epi32(v12, _mm_cvtsi32_si128(*(_DWORD *)(a1 + 48))).m128i_u64[0];
  v14 = *(_DWORD *)(a1 + 192);
  if ( v13 )
    v15 = *(_DWORD *)(v13 - 4);
  else
    v15 = 0;
  v16 = *(_QWORD *)(a1 + 104);
  if ( v16 )
  {
    v17 = *(_QWORD **)(a1 + 128);
    v18 = *(_DWORD *)(v16 - 4);
    if ( v17 )
      goto LABEL_10;
LABEL_25:
    v33 = (_QWORD *)sub_186B270(0x20u);
    v17 = v33 + 1;
    *v33 = 2;
    *(_QWORD *)(a1 + 128) = v33 + 1;
    v20 = v33 + 1;
    goto LABEL_12;
  }
  v17 = *(_QWORD **)(a1 + 128);
  v18 = 0;
  if ( !v17 )
    goto LABEL_25;
LABEL_10:
  v19 = *((unsigned int *)v17 - 1);
  if ( (_DWORD)v19 == *((_DWORD *)v17 - 2) )
  {
    v25 = (unsigned int)(3 * v19 + 1) >> 1;
    v26 = 4 * (v25 + ((3 * (_DWORD)v19 + 1) & 0xFFFFFFFE)) + 8;
    if ( 12 * (int)v19 + 8 >= (unsigned int)v26 || (unsigned int)v19 >= v25 )
    {
      v1 = (char **)__cxa_allocate_exception(0x28u);
      sub_140FB4(v35, "Overflow encountered when expanding vector", v2);
      *v1 = (char *)off_1C63128;
      sub_2333C0(v1 + 1, v35);
      sub_233E40((__int64)v35);
      __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v27 = (unsigned int *)sub_186B300(v17 - 1, v26);
    v17 = v27 + 2;
    *v27 = v25;
    v28 = v27[1];
    *(_QWORD *)(a1 + 128) = v17;
    v20 = (_DWORD *)v17 + 3 * v28;
  }
  else
  {
    v20 = (_DWORD *)v17 + 3 * v19;
  }
LABEL_12:
  *v20 = v18;
  v20[1] = v15;
  v20[2] = v14;
  ++*((_DWORD *)v17 - 1);
  sub_180C250(a1 + 448);
  v21 = *(_QWORD *)(a1 + 432);
  if ( v21 )
    v22 = *(_DWORD *)(v21 - 4);
  else
    v22 = 0;
  result = *(_QWORD *)(a1 + 440);
  if ( !result || (v24 = *(unsigned int *)(result - 4), (_DWORD)v24 == *(_DWORD *)(result - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 440));
    result = *(_QWORD *)(a1 + 440);
    v24 = *(unsigned int *)(result - 4);
  }
  *(_DWORD *)(result + 4 * v24) = v22;
  ++*(_DWORD *)(result - 4);
  return result;
}

