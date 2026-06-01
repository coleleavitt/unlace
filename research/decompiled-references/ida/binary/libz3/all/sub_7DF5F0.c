__int64 __fastcall sub_7DF5F0(__int64 a1, unsigned int a2)
{
  char **exception; // rbp
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  _QWORD *v6; // r13
  __m128i *v7; // r12
  const __m128i *v8; // roff
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v14; // edi
  unsigned int v15; // edx
  __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 *v18; // r8
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r14
  unsigned __int64 v24; // r15
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  int v27; // eax
  _DWORD *v28; // rdx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  size_t v31; // rsi
  unsigned int *v32; // rax
  unsigned int v33; // [rsp+Ch] [rbp-6Ch]
  __int64 v34[11]; // [rsp+20h] [rbp-58h] BYREF

  result = a2 >> 1;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 2328LL);
  if ( v5 )
  {
    if ( (unsigned int)result >= *(_DWORD *)(v5 - 4) )
      v5 = 0;
    else
      v5 = *(_QWORD *)(v5 + 8 * result);
  }
  if ( (a2 & 1) != 0 )
    return result;
  if ( *(_WORD *)(v5 + 4) )
    return result;
  result = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 24LL);
  if ( !result || *(_DWORD *)(*(_QWORD *)(a1 + 120) + 8LL) != *(_DWORD *)result || *(_DWORD *)(result + 4) != 1 )
    return result;
  v6 = (_QWORD *)sub_186B270(0x20u);
  v7 = (__m128i *)sub_186B270(0x28u);
  v8 = *(const __m128i **)(a1 + 120);
  v9 = _mm_loadl_epi64(v8);
  ++*(_DWORD *)(v5 + 8);
  v7[2].m128i_i64[0] = 0;
  v7[1].m128i_i64[1] = v9.m128i_i64[0];
  *v7 = _mm_unpacklo_epi64((__m128i)v5, v9);
  v10 = v8[1].m128i_i64[0];
  v11 = *(_QWORD *)(v5 + 16);
  v12 = *(__int64 **)(v10 + 56);
  v13 = *(unsigned int *)(v10 + 64);
  v14 = *(_DWORD *)(v11 + 12);
  v15 = v13 - 1;
  v13 *= 16;
  v16 = (__int64 *)((char *)v12 + v13);
  v17 = 16LL * (v14 & v15);
  v18 = &v12[(unsigned __int64)v17 / 8];
  if ( v17 == v13 )
  {
LABEL_19:
    while ( v18 != v12 )
    {
      v21 = *v12;
      if ( (unsigned __int64)*v12 > 1 )
      {
        if ( *(_DWORD *)(v21 + 12) == v14 && v11 == v21 )
        {
          v19 = v12;
          goto LABEL_28;
        }
      }
      else if ( !v21 )
      {
        break;
      }
      v12 += 2;
    }
LABEL_41:
    BUG();
  }
  v19 = &v12[(unsigned __int64)v17 / 8];
  while ( 1 )
  {
    v20 = *v19;
    if ( (unsigned __int64)*v19 > 1 )
      break;
    if ( !v20 )
      goto LABEL_41;
LABEL_15:
    v19 += 2;
    if ( v16 == v19 )
      goto LABEL_19;
  }
  if ( *(_DWORD *)(v20 + 12) != v14 || v11 != v20 )
    goto LABEL_15;
LABEL_28:
  v7[1].m128i_i64[0] = v19[1];
  v22 = *(unsigned int *)(v5 + 24);
  if ( (_DWORD)v22 )
  {
    v23 = *(_QWORD *)(v5 + 32);
    v24 = v5 + 8 * v22;
    if ( v23 )
      ++*(_DWORD *)(v23 + 8);
    v25 = (_QWORD *)sub_186B270(0x18u);
    v26 = v25 + 1;
    *v25 = 2;
    v27 = 1;
    v7[2].m128i_i64[0] = (__int64)v26;
    v28 = v26;
    while ( 1 )
    {
      v5 += 8LL;
      *v26 = v23;
      *(v28 - 1) = v27;
      if ( v5 == v24 )
        break;
      while ( 1 )
      {
        v23 = *(_QWORD *)(v5 + 32);
        if ( v23 )
          ++*(_DWORD *)(v23 + 8);
        v29 = *(v28 - 1);
        if ( v29 == *(v28 - 2) )
          break;
        v5 += 8LL;
        *(_QWORD *)&v28[2 * v29] = v23;
        *(v28 - 1) = v29 + 1;
        if ( v5 == v24 )
          goto LABEL_37;
      }
      v30 = (3 * v29 + 1) >> 1;
      v31 = 8 * v30 + 8;
      if ( 8 * v29 + 8 >= (unsigned int)v31 || v29 >= v30 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v34, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v34);
        sub_233E40((__int64)v34);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v33 = (3 * v29 + 1) >> 1;
      v32 = (unsigned int *)sub_186B300(v28 - 2, v31);
      v28 = v32 + 2;
      v7[2].m128i_i64[0] = (__int64)(v32 + 2);
      *v32 = v33;
      LODWORD(v32) = v32[1];
      v26 = &v28[2 * (unsigned int)v32];
      v27 = (_DWORD)v32 + 1;
    }
  }
LABEL_37:
  *v6 = 0;
  v6[1] = v7;
  v6[2] = 0;
  v6[3] = 0;
  return sub_7DC960(a1, (__int64)v6);
}

