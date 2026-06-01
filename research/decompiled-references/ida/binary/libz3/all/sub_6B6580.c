__int64 __fastcall sub_6B6580(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  int v5; // eax
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // r12
  _QWORD *v9; // r15
  unsigned __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned int *v15; // r13
  unsigned int *v16; // r15
  __int64 v17; // r12
  __int64 v18; // rax
  unsigned int v19; // edx
  unsigned int v20; // r8d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // r9
  __int64 v27; // r8
  void (__fastcall *v28)(__int64, __int64, _QWORD *, __m128 *, __int64, __int64); // r10
  __int64 v29; // rsi
  _QWORD *v30; // rax
  int v31; // edx
  _QWORD *v32; // rax
  char **exception; // r12
  __int64 v34; // [rsp+0h] [rbp-70h]
  unsigned int v35; // [rsp+Ch] [rbp-64h]
  __m128 v36; // [rsp+10h] [rbp-60h] BYREF
  __int64 v37[10]; // [rsp+20h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 728) + 72LL);
  v36 = _mm_loadh_ps((const double *)(a1 + 48));
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  v3 = nullptr;
  v34 = a1 + 360;
  while ( 1 )
  {
    v4 = *(_QWORD *)(a1 + 736);
    if ( !v4 )
      break;
    v5 = *(_DWORD *)(v4 - 4);
    if ( !v5 )
      break;
    v15 = *(unsigned int **)(v4 + 8LL * (unsigned int)(v5 - 1));
    if ( !v15 )
      goto LABEL_33;
    v16 = &v15[*(v15 - 1)];
    if ( v15 == v16 )
      goto LABEL_32;
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 728) + 16LL) + 8LL * *v15);
    if ( !v3 )
    {
      v30 = (_QWORD *)sub_186B270(0x18u);
      v3 = v30 + 1;
      v31 = 1;
      *v30 = 2;
      v32 = v30 + 1;
      goto LABEL_23;
    }
    while ( 1 )
    {
      v19 = *((_DWORD *)v3 - 1);
      if ( v19 != *((_DWORD *)v3 - 2) )
        break;
      v20 = (3 * v19 + 1) >> 1;
      v21 = 8 * v20 + 8;
      v35 = v20;
      if ( 8 * v19 + 8 >= (unsigned int)v21 || v19 >= v20 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_6A99E0(v37, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v37);
        sub_233E40((__int64)v37);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v22 = (unsigned int *)sub_186B300(v3 - 1, v21);
      v3 = v22 + 2;
      ++v15;
      *v22 = v35;
      v23 = v22[1];
      v3[v23] = v17;
      *((_DWORD *)v3 - 1) = v23 + 1;
      if ( v16 == v15 )
        goto LABEL_29;
LABEL_24:
      v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 728) + 16LL) + 8LL * *v15);
    }
    v18 = v19;
    v31 = v19 + 1;
    v32 = &v3[v18];
LABEL_23:
    ++v15;
    *v32 = v17;
    *((_DWORD *)v3 - 1) = v31;
    if ( v16 != v15 )
      goto LABEL_24;
LABEL_29:
    v24 = *(_QWORD *)(a1 + 736);
    if ( v24 )
      v15 = *(unsigned int **)(v24 + 8LL * (unsigned int)(*(_DWORD *)(v24 - 4) - 1));
    else
      v15 = (unsigned int *)MEMORY[0x7FFFFFFF8];
    if ( !v15 )
    {
      v25 = *(_QWORD *)(a1 + 56);
      --*(_DWORD *)(v24 - 4);
      v27 = a1 + 360;
      v26 = *(unsigned __int8 *)(a1 + 760);
      v28 = *(void (__fastcall **)(__int64, __int64, _QWORD *, __m128 *, __int64, __int64))(*(_QWORD *)v25 + 16LL);
      goto LABEL_34;
    }
LABEL_32:
    sub_186B220(v15 - 2);
    v4 = *(_QWORD *)(a1 + 736);
LABEL_33:
    v25 = *(_QWORD *)(a1 + 56);
    --*(_DWORD *)(v4 - 4);
    v26 = *(unsigned __int8 *)(a1 + 760);
    v27 = v34;
    v28 = *(void (__fastcall **)(__int64, __int64, _QWORD *, __m128 *, __int64, __int64))(*(_QWORD *)v25 + 16LL);
    if ( v3 )
LABEL_34:
      v29 = *((unsigned int *)v3 - 1);
    else
      v29 = 0;
    v28(v25, v29, v3, &v36, v27, v26);
    if ( v3 )
      *((_DWORD *)v3 - 1) = 0;
  }
  v6 = sub_6B61D0(*(_QWORD *)(a1 + 728), v36.m128_i64[0]);
  v7 = (_QWORD *)v6[2];
  v8 = v6;
  v9 = v7;
  if ( v7 )
  {
    v10 = (unsigned __int64)&v7[*((unsigned int *)v7 - 1)];
    if ( (unsigned __int64)v7 >= v10 )
      goto LABEL_14;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = v8[1];
          if ( (*(_DWORD *)(v11 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v9 >= v10 )
          goto LABEL_13;
      }
      sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( (unsigned __int64)v9 < v10 );
LABEL_13:
    v9 = (_QWORD *)v8[2];
    if ( v9 )
LABEL_14:
      *((_DWORD *)v9 - 1) = 0;
  }
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, 1, 0, 0, 0);
  if ( v3 )
    sub_186B220(v3 - 1);
  return sub_6A99C0(v36.m128_i64[0], v36.m128_i64[1]);
}

