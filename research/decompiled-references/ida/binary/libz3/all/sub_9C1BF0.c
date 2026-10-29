_QWORD *__fastcall sub_9C1BF0(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  _OWORD *v3; // rax
  __int64 v4; // rax
  _QWORD *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // edx
  __int64 v14; // rdx
  unsigned int v15; // ebp
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  char **exception; // rbx
  __int64 v21[7]; // [rsp+0h] [rbp-38h] BYREF

  sub_966D90(a1);
  v1 = *(_QWORD **)(a1 + 1160);
  if ( v1 )
  {
    v2 = *((unsigned int *)v1 - 1);
    if ( (_DWORD)v2 == *((_DWORD *)v1 - 2) )
    {
      v15 = (unsigned int)(3 * v2 + 1) >> 1;
      v16 = 32 * v15 + 8;
      if ( 32 * (int)v2 + 8 >= (unsigned int)v16 || (unsigned int)v2 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_98B3B0(v21, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v21);
        sub_233E40((__int64)v21);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = (unsigned int *)sub_186B300(v1 - 1, v16);
      v1 = v17 + 2;
      *v17 = v15;
      v18 = v17[1];
      *(_QWORD *)(a1 + 1160) = v1;
      v3 = &v1[4 * v18];
    }
    else
    {
      v3 = &v1[4 * v2];
    }
  }
  else
  {
    v19 = (_QWORD *)sub_186B270(0x48u);
    v1 = v19 + 1;
    *v19 = 2;
    *(_QWORD *)(a1 + 1160) = v19 + 1;
    v3 = v19 + 1;
  }
  *v3 = 0;
  v3[1] = 0;
  v4 = *((unsigned int *)v1 - 1);
  *((_DWORD *)v1 - 1) = v4 + 1;
  result = &v1[4 * v4];
  v6 = *(_QWORD *)(a1 + 792);
  if ( v6 )
  {
    *(_DWORD *)result = *(_DWORD *)(v6 - 4);
    v7 = *(_QWORD *)(a1 + 1136);
    if ( v7 )
      goto LABEL_6;
  }
  else
  {
    *(_DWORD *)result = 0;
    v7 = *(_QWORD *)(a1 + 1136);
    if ( v7 )
    {
LABEL_6:
      *((_DWORD *)result + 1) = *(_DWORD *)(v7 - 4);
      v8 = *(_QWORD *)(a1 + 1144);
      if ( v8 )
        goto LABEL_7;
LABEL_20:
      *((_DWORD *)result + 2) = 0;
      v9 = *(_QWORD *)(a1 + 800);
      if ( v9 )
        goto LABEL_8;
      goto LABEL_21;
    }
  }
  *((_DWORD *)result + 1) = 0;
  v8 = *(_QWORD *)(a1 + 1144);
  if ( !v8 )
    goto LABEL_20;
LABEL_7:
  *((_DWORD *)result + 2) = *(_DWORD *)(v8 - 4);
  v9 = *(_QWORD *)(a1 + 800);
  if ( v9 )
  {
LABEL_8:
    v10 = _mm_cvtsi32_si128(*(_DWORD *)(v9 - 4));
    goto LABEL_9;
  }
LABEL_21:
  v10 = 0;
LABEL_9:
  v11 = *(_QWORD *)(a1 + 1152);
  *(_QWORD *)((char *)result + 12) = _mm_unpacklo_epi32(v10, _mm_cvtsi32_si128(*(_DWORD *)(a1 + 808))).m128i_u64[0];
  if ( v11 )
  {
    *((_DWORD *)result + 5) = *(_DWORD *)(v11 - 4);
    v12 = *(_QWORD *)(a1 + 824);
    if ( v12 )
    {
LABEL_11:
      v13 = *(_DWORD *)(v12 - 4);
      goto LABEL_12;
    }
  }
  else
  {
    *((_DWORD *)result + 5) = 0;
    v12 = *(_QWORD *)(a1 + 824);
    if ( v12 )
      goto LABEL_11;
  }
  v13 = 0;
LABEL_12:
  *((_DWORD *)result + 6) = v13;
  v14 = *(_QWORD *)(a1 + 832);
  if ( v14 )
    *((_DWORD *)result + 7) = *(_DWORD *)(v14 - 4);
  else
    *((_DWORD *)result + 7) = 0;
  return result;
}

