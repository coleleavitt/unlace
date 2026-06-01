__m128 *__fastcall sub_E56D20(__int64 a1, const __m128i *a2, double a3, double a4, __m128 a5, __m128 a6)
{
  __int64 v7; // r12
  _QWORD *v8; // r13
  __int64 v9; // rax
  __m128 *result; // rax
  __m128 v11; // xmm1
  __m128 v12; // xmm0
  unsigned __int64 v13; // xmm2_8
  _DWORD *v14; // xmm3_8
  unsigned int v15; // ebp
  size_t v16; // rdi
  __int64 v17; // rax
  __int64 *v18; // rbx
  __int64 v19; // r15
  __int64 v20; // rdx
  int v21; // r8d
  __int64 *v22; // rax
  __int64 *v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 *v28; // r15
  __int64 *v29; // rdi
  __int64 v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // rbp
  unsigned int v33; // eax
  __int64 v34; // rsi
  int v35; // eax
  __int64 *v36; // rsi
  _QWORD *v37; // rax
  unsigned int v38; // ecx
  size_t v39; // rsi
  unsigned int v40; // r13d
  unsigned int *v41; // rax
  __int64 v42; // rsi
  _QWORD *v43; // rdx
  char **exception; // rbp
  _DWORD *v45; // [rsp+8h] [rbp-70h]
  __int64 v46[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(a1 + 160);
  *(_BYTE *)(a1 + 272) = 1;
  if ( a2->m128i_i64[1] == *(_QWORD *)(*(_QWORD *)(v7 + 96) + 864LL) && !*(_BYTE *)(v7 + 472) )
  {
    v30 = sub_180C100(v7 + 240, 24);
    v31 = *(_QWORD **)(v7 + 224);
    v32 = v30;
    *(_QWORD *)v30 = off_1C54EE8;
    *(_QWORD *)(v30 + 8) = v7 + 472;
    *(_BYTE *)(v30 + 16) = 0;
    if ( v31 )
    {
      v33 = *((_DWORD *)v31 - 1);
      if ( v33 == *((_DWORD *)v31 - 2) )
      {
        v38 = (3 * v33 + 1) >> 1;
        v39 = 8 * v38 + 8;
        v40 = v38;
        if ( 8 * v33 + 8 >= (unsigned int)v39 || v33 >= v38 )
          goto LABEL_33;
        v41 = (unsigned int *)sub_186B300(v31 - 1, v39);
        v42 = v41[1];
        v31 = v41 + 2;
        *(_QWORD *)(v7 + 224) = v41 + 2;
        *v41 = v40;
        LODWORD(v41) = v42;
        v36 = &v31[v42];
        v35 = (_DWORD)v41 + 1;
      }
      else
      {
        v34 = v33;
        v35 = v33 + 1;
        v36 = &v31[v34];
      }
    }
    else
    {
      v43 = (_QWORD *)sub_186B270(0x18u);
      *v43 = 2;
      v35 = 1;
      v31 = v43 + 1;
      *(_QWORD *)(v7 + 224) = v31;
      v36 = v31;
    }
    *v36 = v32;
    *((_DWORD *)v31 - 1) = v35;
    *(_BYTE *)(v7 + 472) = 1;
    v7 = *(_QWORD *)(a1 + 160);
  }
  v8 = *(_QWORD **)(v7 + 112);
  if ( !v8 )
  {
    v37 = (_QWORD *)sub_186B270(0x48u);
    v8 = v37 + 1;
    *v37 = 2;
    *(_QWORD *)(v7 + 112) = v37 + 1;
    result = (__m128 *)(v37 + 1);
    goto LABEL_5;
  }
  v9 = *((unsigned int *)v8 - 1);
  if ( (_DWORD)v9 != *((_DWORD *)v8 - 2) )
  {
    result = (__m128 *)&v8[4 * v9];
    goto LABEL_5;
  }
  v15 = (unsigned int)(3 * v9 + 1) >> 1;
  v16 = 32 * v15 + 8;
  if ( 32 * (int)v9 + 8 >= (unsigned int)v16 || (unsigned int)v9 >= v15 )
  {
LABEL_33:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v46, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v46);
    sub_233E40((__int64)v46);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v17 = sub_186B270(v16);
  v18 = *(__int64 **)(v7 + 112);
  v45 = (_DWORD *)v17;
  v8 = (_QWORD *)(v17 + 8);
  if ( v18 )
  {
    v19 = *((unsigned int *)v18 - 1);
    v20 = v17 + 8;
    *(_DWORD *)(v17 + 4) = v19;
    v21 = v19;
    v22 = v18;
    v23 = &v18[4 * v19];
    if ( v18 != v23 )
    {
      do
      {
        v24 = *v22;
        v22 += 4;
        v20 += 32;
        *(_QWORD *)(v20 - 32) = v24;
        v25 = *(v22 - 3);
        *(v22 - 3) = 0;
        *(_QWORD *)(v20 - 24) = v25;
        v26 = *(v22 - 2);
        *(v22 - 2) = 0;
        *(_QWORD *)(v20 - 16) = v26;
        v27 = *(v22 - 1);
        *(v22 - 1) = 0;
        *(_QWORD *)(v20 - 8) = v27;
      }
      while ( v23 != v22 );
    }
    v28 = &v18[4 * v19];
    if ( v21 )
    {
      do
      {
        v29 = v18;
        v18 += 4;
        sub_234F80(v29);
      }
      while ( v18 != v28 );
      v18 = *(__int64 **)(v7 + 112);
    }
    sub_186B220(v18 - 1);
    result = (__m128 *)&v8[4 * (unsigned int)v45[1]];
  }
  else
  {
    *(_DWORD *)(v17 + 4) = 0;
    result = (__m128 *)(v17 + 8);
  }
  *(_QWORD *)(v7 + 112) = v8;
  *v45 = v15;
LABEL_5:
  v11 = (__m128)_mm_loadu_si128(a2);
  v12 = (__m128)_mm_loadu_si128(a2 + 1);
  v13 = _mm_movehl_ps(a5, v11).m128_u64[0];
  v14 = (_DWORD *)_mm_movehl_ps(a6, v12).m128_u64[0];
  *result = v11;
  result[1] = v12;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  if ( v12.m128_u64[0] )
    ++*(_DWORD *)(v12.m128_u64[0] + 8);
  if ( v14 )
  {
    result = (__m128 *)((*v14 + 1) & 0x3FFFFFFF | *v14 & 0xC0000000);
    *v14 = (_DWORD)result;
  }
  ++*((_DWORD *)v8 - 1);
  return result;
}

