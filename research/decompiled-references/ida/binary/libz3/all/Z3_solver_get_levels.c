void __fastcall Z3_solver_get_levels(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  char **exception; // r13
  __int64 v8; // rbx
  char v9; // r15
  unsigned int v10; // r14d
  __int64 v11; // rsi
  int v12; // eax
  __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r15
  _DWORD *v16; // rax
  _QWORD *v17; // rdx
  unsigned int v18; // eax
  unsigned int v19; // r9d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rsi
  _QWORD *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rbx
  unsigned __int64 v31; // rax
  unsigned int v33; // [rsp+8h] [rbp-70h]
  char v34; // [rsp+Fh] [rbp-69h]
  _DWORD *v35; // [rsp+18h] [rbp-60h] BYREF
  __int64 v36[11]; // [rsp+20h] [rbp-58h] BYREF

  v8 = a4;
  v9 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v34 = v9;
  if ( v9 )
    sub_29DB30(a1, a2, a3, a4, a5);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !*(_QWORD *)(a2 + 32) )
    sub_2A74C0(a1, a2);
  if ( (_DWORD)v8 != (unsigned int)Z3_ast_vector_size(a1, a3) )
  {
    sub_24EA30(a1, 2u, nullptr);
    if ( !v9 )
      return;
LABEL_38:
    byte_1C7EBA0 = 1;
    return;
  }
  v35 = nullptr;
  if ( (_DWORD)v8 )
  {
    v10 = 0;
    while ( 1 )
    {
      v14 = Z3_ast_vector_get(a1, a3, v10);
      v15 = v14;
      if ( !*(_WORD *)(v14 + 4) )
      {
        v16 = *(_DWORD **)(*(_QWORD *)(v14 + 16) + 24LL);
        if ( v16 )
        {
          if ( !*v16 && v16[1] == 8 && *(_DWORD *)(v15 + 24) == 1 )
            v15 = *(_QWORD *)(v15 + 32);
        }
      }
      v17 = v35;
      if ( !v35 )
        break;
      v18 = *(v35 - 1);
      if ( v18 == *(v35 - 2) )
      {
        v19 = (3 * v18 + 1) >> 1;
        v20 = 8 * v19 + 8;
        if ( 8 * v18 + 8 >= (unsigned int)v20 || v18 >= v19 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v36, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v36);
          sub_233E40((__int64)v36);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v33 = (3 * v18 + 1) >> 1;
        v21 = (unsigned int *)sub_186B300(v35 - 2, v20);
        v22 = v21[1];
        ++v10;
        v35 = v21 + 2;
        *v21 = v33;
        *(_QWORD *)&v21[2 * v22 + 2] = v15;
        v21[1] = v22 + 1;
        if ( (_DWORD)v8 == v10 )
        {
LABEL_18:
          v23 = (_QWORD *)sub_186B270(4LL * (unsigned int)v8 + 8);
          v36[0] = (__int64)(v23 + 1);
          *v23 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v10), 224).m128i_u64[0];
          memset(v23 + 1, 0, 4LL * (unsigned int)v8);
          goto LABEL_19;
        }
      }
      else
      {
        v11 = v18;
        v12 = v18 + 1;
        v13 = (__int64 *)&v35[2 * v11];
LABEL_9:
        ++v10;
        *v13 = v15;
        *((_DWORD *)v17 - 1) = v12;
        if ( (_DWORD)v8 == v10 )
          goto LABEL_18;
      }
    }
    v29 = (_QWORD *)sub_186B270(0x18u);
    v17 = v29 + 1;
    *v29 = 2;
    v12 = 1;
    v35 = v17;
    v13 = v17;
    goto LABEL_9;
  }
  v36[0] = 0;
LABEL_19:
  (*(void (__fastcall **)(_QWORD, _DWORD **, __int64 *))(**(_QWORD **)(a2 + 32) + 360LL))(
    *(_QWORD *)(a2 + 32),
    &v35,
    v36);
  v24 = v36[0];
  if ( (_DWORD)v8 )
  {
    if ( (unsigned int)(v8 - 1) <= 2 || (unsigned __int64)a5 - v36[0] - 4 <= 8 )
    {
      v30 = 4 * v8;
      v31 = 0;
      do
      {
        a5[v31 / 4] = *(_DWORD *)(v24 + v31);
        v31 += 4LL;
      }
      while ( v30 != v31 );
    }
    else
    {
      v25 = 0;
      do
      {
        *(__m128i *)&a5[v25] = _mm_loadu_si128((const __m128i *)(v24 + v25 * 4));
        v25 += 4;
      }
      while ( v25 != 4LL * ((unsigned int)v8 >> 2) );
      v26 = v8 & 0xFFFFFFFC;
      if ( (v8 & 3) != 0 )
      {
        a5[v26] = *(_DWORD *)(v24 + 4LL * v26);
        v27 = v26 + 1;
        if ( (unsigned int)v27 < (unsigned int)v8 )
        {
          v28 = v26 + 2;
          a5[v27] = *(_DWORD *)(v24 + 4 * v27);
          if ( (unsigned int)v28 < (unsigned int)v8 )
            a5[v28] = *(_DWORD *)(v24 + 4 * v28);
        }
      }
    }
    goto LABEL_28;
  }
  if ( v36[0] )
LABEL_28:
    sub_186B220((void *)(v24 - 8));
  if ( v35 )
    sub_186B220(v35 - 2);
  if ( v34 )
    goto LABEL_38;
}

