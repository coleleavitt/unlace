void __fastcall sub_B25F30(__int64 a1, unsigned int a2, char a3)
{
  char **exception; // rbp
  unsigned __int64 v5; // rbp
  _DWORD *v6; // rax
  _QWORD *v7; // r13
  __m128i *v8; // r12
  const __m128i *v9; // roff
  __m128i v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // edi
  unsigned int v16; // edx
  __int64 *v17; // rsi
  __int64 v18; // rdx
  __int64 *v19; // r8
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r14
  unsigned __int64 v25; // r15
  _QWORD *v26; // rax
  _QWORD *v27; // rcx
  int v28; // eax
  _DWORD *v29; // rdx
  unsigned int v30; // eax
  unsigned int v31; // ecx
  size_t v32; // rsi
  unsigned int *v33; // rax
  unsigned int v34; // [rsp+0h] [rbp-6Ch]
  __int64 v35[11]; // [rsp+14h] [rbp-58h] BYREF

  if ( !a3 )
    return;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8840LL) + 8LL * a2);
  if ( *(_WORD *)(v5 + 4) )
    return;
  v6 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL);
  if ( !v6 || *(_DWORD *)(*(_QWORD *)(a1 + 64) + 8LL) != *v6 || v6[1] != 1 )
    return;
  v7 = (_QWORD *)sub_186B270(0x20u);
  v8 = (__m128i *)sub_186B270(0x28u);
  v9 = *(const __m128i **)(a1 + 64);
  v10 = _mm_loadl_epi64(v9);
  ++*(_DWORD *)(v5 + 8);
  v8[2].m128i_i64[0] = 0;
  v8[1].m128i_i64[1] = v10.m128i_i64[0];
  *v8 = _mm_unpacklo_epi64((__m128i)v5, v10);
  v11 = v9[1].m128i_i64[0];
  v12 = *(_QWORD *)(v5 + 16);
  v13 = *(__int64 **)(v11 + 56);
  v14 = *(unsigned int *)(v11 + 64);
  v15 = *(_DWORD *)(v12 + 12);
  v16 = v14 - 1;
  v14 *= 16;
  v17 = (__int64 *)((char *)v13 + v14);
  v18 = 16LL * (v15 & v16);
  v19 = &v13[(unsigned __int64)v18 / 8];
  if ( v18 == v14 )
  {
LABEL_16:
    while ( v19 != v13 )
    {
      v22 = *v13;
      if ( (unsigned __int64)*v13 > 1 )
      {
        if ( *(_DWORD *)(v22 + 12) == v15 && v12 == v22 )
        {
          v20 = v13;
          goto LABEL_25;
        }
      }
      else if ( !v22 )
      {
        break;
      }
      v13 += 2;
    }
LABEL_38:
    BUG();
  }
  v20 = &v13[(unsigned __int64)v18 / 8];
  while ( 1 )
  {
    v21 = *v20;
    if ( (unsigned __int64)*v20 > 1 )
      break;
    if ( !v21 )
      goto LABEL_38;
LABEL_12:
    v20 += 2;
    if ( v17 == v20 )
      goto LABEL_16;
  }
  if ( *(_DWORD *)(v21 + 12) != v15 || v12 != v21 )
    goto LABEL_12;
LABEL_25:
  v8[1].m128i_i64[0] = v20[1];
  v23 = *(unsigned int *)(v5 + 24);
  if ( (_DWORD)v23 )
  {
    v24 = *(_QWORD *)(v5 + 32);
    v25 = v5 + 8 * v23;
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    v26 = (_QWORD *)sub_186B270(0x18u);
    v27 = v26 + 1;
    *v26 = 2;
    v28 = 1;
    v8[2].m128i_i64[0] = (__int64)v27;
    v29 = v27;
    while ( 1 )
    {
      v5 += 8LL;
      *v27 = v24;
      *(v29 - 1) = v28;
      if ( v5 == v25 )
        break;
      while ( 1 )
      {
        v24 = *(_QWORD *)(v5 + 32);
        if ( v24 )
          ++*(_DWORD *)(v24 + 8);
        v30 = *(v29 - 1);
        if ( v30 == *(v29 - 2) )
          break;
        v5 += 8LL;
        *(_QWORD *)&v29[2 * v30] = v24;
        *(v29 - 1) = v30 + 1;
        if ( v5 == v25 )
          goto LABEL_34;
      }
      v31 = (3 * v30 + 1) >> 1;
      v32 = 8 * v31 + 8;
      if ( 8 * v30 + 8 >= (unsigned int)v32 || v30 >= v31 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v35, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v35);
        sub_233E40((__int64)v35);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v34 = (3 * v30 + 1) >> 1;
      v33 = (unsigned int *)sub_186B300(v29 - 2, v32);
      v29 = v33 + 2;
      v8[2].m128i_i64[0] = (__int64)(v33 + 2);
      *v33 = v34;
      LODWORD(v33) = v33[1];
      v27 = &v29[2 * (unsigned int)v33];
      v28 = (_DWORD)v33 + 1;
    }
  }
LABEL_34:
  *v7 = 0;
  v7[1] = v8;
  v7[2] = 0;
  v7[3] = 0;
  sub_B23930(a1, (__int64)v7);
}

