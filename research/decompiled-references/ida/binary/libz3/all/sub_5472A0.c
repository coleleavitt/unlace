_QWORD *__fastcall sub_5472A0(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  char **exception; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  unsigned int *v9; // r14
  _QWORD *v10; // rax
  _DWORD *v11; // rax
  _DWORD *v12; // rdx
  int v13; // ecx
  int v14; // edi
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // r8d
  size_t v18; // rsi
  unsigned int v19; // r13d
  unsigned int *v20; // rax
  __int64 v21; // rax
  _DWORD *v22; // rcx
  unsigned int v23; // r14d
  _QWORD *v24; // rax
  _QWORD *v25; // rsi
  size_t v26; // rdx
  __int64 v27; // r8
  unsigned int *v28; // rax
  __int64 v29; // rdx
  unsigned int v32; // [rsp+Ch] [rbp-6Ch]
  __int64 v33[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = (_QWORD *)sub_186B270(0x18u);
  v7[1] = 0;
  v8 = v7;
  *v7 = qword_1C66768;
  v7[2] = 0;
  if ( !a3 )
  {
    if ( (_QWORD *)(a2 + 16) == v7 + 1 )
      goto LABEL_18;
    v22 = *(_DWORD **)(a2 + 16);
    if ( !v22 )
      goto LABEL_18;
    goto LABEL_11;
  }
  v9 = a4;
  v10 = (_QWORD *)sub_186B270(0x10u);
  *v10 = 2;
  v11 = v10 + 1;
  v8[2] = v11;
  v12 = v11;
  while ( 1 )
  {
    v13 = *v9++;
    *v11 = v13;
    v14 = *(v12 - 1);
    v15 = (unsigned int)(v14 + 1);
    *(v12 - 1) = v15;
    if ( &a4[a3] == v9 )
      break;
    v16 = *(v12 - 2);
    if ( v16 == (_DWORD)v15 )
    {
      v17 = (3 * v16 + 1) >> 1;
      v18 = 4 * v17 + 8;
      v19 = v17;
      if ( 4 * v14 + 12 >= (unsigned int)v18 || v16 >= v17 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v33, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v33);
        sub_233E40((__int64)v33);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v20 = (unsigned int *)sub_186B300(v12 - 2, v18);
      v12 = v20 + 2;
      *v20 = v19;
      v21 = v20[1];
      v8[2] = v12;
      v11 = &v12[v21];
    }
    else
    {
      v11 = &v12[v15];
    }
  }
  if ( v8 + 1 == (_QWORD *)(a2 + 16) )
  {
    v22 = nullptr;
  }
  else
  {
    v22 = *(_DWORD **)(a2 + 16);
    if ( v22 )
    {
LABEL_11:
      v23 = *(v22 - 1);
      v32 = *(v22 - 2);
      v24 = (_QWORD *)sub_186B270(8LL * v32 + 8);
      v22 = v24 + 1;
      v8[1] = v24 + 1;
      v25 = *(_QWORD **)(a2 + 16);
      *v24 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v32), _mm_cvtsi32_si128(v23)).m128i_u64[0];
      if ( v25 )
      {
        v26 = 8LL * *((unsigned int *)v25 - 1);
        if ( v26 <= 8 )
        {
          if ( v26 == 8 )
            v24[1] = *v25;
        }
        else
        {
          v22 = memmove(v24 + 1, v25, v26);
        }
      }
    }
  }
  if ( a3 > 1 )
  {
    v27 = *(_QWORD *)&v22[2 * *a4];
    v28 = a4;
    do
    {
      v29 = v28[1];
      *(_QWORD *)&v22[2 * *v28++] = *(_QWORD *)&v22[2 * v29];
    }
    while ( v28 != &a4[a3 - 1] );
    *(_QWORD *)&v22[2 * a4[a3 - 1]] = v27;
  }
LABEL_18:
  *v8 = &off_1C50A70;
  return v8;
}

