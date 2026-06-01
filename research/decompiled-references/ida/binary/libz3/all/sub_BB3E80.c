__int64 __fastcall sub_BB3E80(__int64 a1, __int64 a2, _QWORD *a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  __int64 v7; // rdx
  unsigned int *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r15
  unsigned int *v12; // r13
  unsigned int *v13; // r14
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 result; // rax
  _QWORD *v18; // rdi
  __int64 *v19; // rcx
  int v20; // edx
  _DWORD *v21; // rax
  __int64 v22; // r13
  __int64 v23; // r14
  __int64 v24; // r13
  unsigned int v25; // ebp
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rax
  __m128i v30; // [rsp+0h] [rbp-68h] BYREF
  __int64 v31[11]; // [rsp+10h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(a1 + 152);
  v8 = *(unsigned int **)(a2 + 8);
  if ( v7 )
  {
    v9 = *v8;
    if ( (unsigned int)v9 < *(_DWORD *)(v7 - 4) )
    {
      v10 = v7 + 24 * v9;
      v11 = *(_QWORD *)(v10 + 8);
      if ( v11 )
      {
        v12 = *(unsigned int **)(v10 + 16);
        v13 = *(unsigned int **)(a2 + 16);
        v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v13);
        if ( v12 )
        {
          if ( v13 != v12 && v13 )
          {
            v14 = sub_180C100(*(_QWORD *)(a1 + 120), 24);
            v15 = _mm_load_si128(&v30);
            *v12 = (*v12 + 1) & 0x3FFFFFFF | *v12 & 0xC0000000;
            v12 = (unsigned int *)v14;
            *v13 = (*v13 + 1) & 0x3FFFFFFF | *v13 & 0xC0000000;
            *(_QWORD *)v14 = 0;
            *(__m128i *)(v14 + 8) = v15;
          }
        }
        else
        {
          v12 = v13;
        }
        v16 = sub_BB3CA0(a1, a2, v11, (__int64)v12);
        sub_BB3E80(a1, v16, a3);
        goto LABEL_9;
      }
    }
  }
  if ( !*((_WORD *)v8 + 2) )
  {
    v21 = *(_DWORD **)(*((_QWORD *)v8 + 2) + 24LL);
    if ( v21 )
    {
      if ( *(_DWORD *)(a1 + 1744) == *v21 && v21[1] == 2 && v8[6] == 2 )
      {
        v22 = *((_QWORD *)v8 + 5);
        v23 = sub_BB3CA0(a1, a2, *((_QWORD *)v8 + 4), *(_QWORD *)(a2 + 16));
        v24 = sub_BB3CA0(a1, 0, v22, 0);
        sub_BB3E80(a1, v23, a3);
        sub_BB3E80(a1, v24, a3);
LABEL_9:
        result = 0xFFFFFFFFLL;
        if ( *a3 )
          result = (unsigned int)(*(_DWORD *)(*a3 - 4LL) - 1);
        goto LABEL_11;
      }
    }
  }
  v18 = (_QWORD *)*a3;
  if ( *a3 )
  {
    result = *((unsigned int *)v18 - 1);
    if ( (_DWORD)result == *((_DWORD *)v18 - 2) )
    {
      v25 = (unsigned int)(3 * result + 1) >> 1;
      v26 = 8 * v25 + 8;
      if ( 8 * (int)result + 8 >= (unsigned int)v26 || (unsigned int)result >= v25 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_154526(v31, "Overflow encountered when expanding vector", v4);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v31);
        sub_233E40((__int64)v31);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v27 = (unsigned int *)sub_186B300(v18 - 1, v26);
      v28 = v27[1];
      v18 = v27 + 2;
      *v27 = v25;
      *a3 = v27 + 2;
      result = v28;
      v19 = &v18[v28];
      v20 = v28 + 1;
    }
    else
    {
      v19 = &v18[(unsigned int)result];
      v20 = result + 1;
    }
  }
  else
  {
    v29 = (_QWORD *)sub_186B270(0x18u);
    v20 = 1;
    v18 = v29 + 1;
    *v29 = 2;
    result = 0;
    *a3 = v18;
    v19 = v18;
  }
  *v19 = a2;
  *((_DWORD *)v18 - 1) = v20;
LABEL_11:
  *(_DWORD *)(a2 + 24) = result;
  return result;
}

