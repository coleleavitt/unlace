__int64 __fastcall sub_57BC10(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4, __int64 *a5)
{
  char **exception; // r13
  __int64 v7; // r13
  _QWORD *v9; // rax
  __m128i v10; // xmm0
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  size_t v14; // rdx
  int v15; // eax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 *v18; // r13
  unsigned int v19; // edx
  _DWORD *v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned int v23; // r14d
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rax
  int v27; // edx
  __int64 v29[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = a4;
  v9 = (_QWORD *)*a3;
  *(_QWORD *)a1 = qword_1C665B0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  if ( v9 )
  {
    v10 = _mm_loadl_epi64((const __m128i *)(v9 - 1));
    v12 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v10) + 8);
    v13 = (_QWORD *)*a3;
    *(_QWORD *)(a1 + 16) = v12 + 1;
    *v12 = v10.m128i_i64[0];
    if ( v13 )
    {
      v14 = 8LL * *((unsigned int *)v13 - 1);
      if ( v14 <= 8 )
      {
        if ( v14 == 8 )
          v12[1] = *v13;
      }
      else
      {
        memmove(v12 + 1, v13, v14);
      }
    }
  }
  v15 = *(_DWORD *)(a2 + 8);
  *(_BYTE *)(a1 + 28) = 1;
  *(_OWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 24) = v15;
  *(_QWORD *)a1 = &off_1C67CA0;
  if ( (_DWORD)v7 )
  {
    v16 = (_QWORD *)sub_186B270(0x18u);
    *v16 = 2;
    v17 = v16 + 1;
    v18 = &a5[v7];
    v19 = 1;
    *(_QWORD *)(a1 + 32) = v17;
    v20 = v17;
    while ( 1 )
    {
      v21 = *a5++;
      *v17 = v21;
      *(v20 - 1) = v19;
      if ( v18 == a5 )
        break;
      if ( *(v20 - 2) == v19 )
      {
        v23 = (3 * v19 + 1) >> 1;
        v24 = 8 * v23 + 8;
        if ( 8 * v19 + 8 >= (unsigned int)v24 || v19 >= v23 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v29, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v29);
          sub_233E40((__int64)v29);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v25 = (unsigned int *)sub_186B300(v20 - 2, v24);
        v20 = v25 + 2;
        *v25 = v23;
        v26 = v25[1];
        *(_QWORD *)(a1 + 32) = v20;
        v27 = v26;
        v17 = &v20[2 * v26];
        v19 = v27 + 1;
      }
      else
      {
        v22 = v19++;
        v17 = &v20[2 * v22];
      }
    }
  }
  return sub_57B9A0(a1);
}

