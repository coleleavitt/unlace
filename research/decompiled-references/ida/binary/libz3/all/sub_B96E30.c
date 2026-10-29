__int64 __fastcall sub_B96E30(__int64 a1)
{
  char **exception; // rbx
  __int64 v3; // rax
  int v4; // r12d
  int v5; // eax
  __int64 v6; // r13
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rbp
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int *v16; // rbp
  __int64 v17; // rax
  __m128i v18; // xmm1
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned int v21; // r13d
  unsigned int v22; // eax
  __int64 v23; // r14
  unsigned int v24; // ebp
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rdi
  unsigned int v30; // r12d
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  _OWORD v35[4]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 240);
  v4 = *(_DWORD *)(a1 + 300);
  if ( v3 )
    v5 = *(_DWORD *)(v3 - 4);
  else
    v5 = 0;
  if ( v4 == v5 )
    return 0;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = sub_180C100(v6 + 8400, 24);
  v8 = *(_QWORD **)(v6 + 9456);
  v9 = v7;
  *(_QWORD *)v7 = &off_1C4C070;
  *(_QWORD *)(v7 + 8) = a1 + 300;
  *(_DWORD *)(v7 + 16) = v4;
  if ( v8 )
  {
    v10 = *((_DWORD *)v8 - 1);
    if ( v10 == *((_DWORD *)v8 - 2) )
    {
      v30 = (3 * v10 + 1) >> 1;
      v31 = 8 * v30 + 8;
      if ( 8 * v10 + 8 >= (unsigned int)v31 || v10 >= v30 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v35, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v35);
        sub_233E40((__int64)v35);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v32 = (unsigned int *)sub_186B300(v8 - 1, v31);
      v33 = v32[1];
      v8 = v32 + 2;
      *(_QWORD *)(v6 + 9456) = v32 + 2;
      *v32 = v30;
      LODWORD(v32) = v33;
      v13 = &v8[v33];
      v12 = (_DWORD)v32 + 1;
    }
    else
    {
      v11 = v10;
      v12 = v10 + 1;
      v13 = &v8[v11];
    }
  }
  else
  {
    v34 = (_QWORD *)sub_186B270(0x18u);
    v8 = v34 + 1;
    *v34 = 2;
    v12 = 1;
    *(_QWORD *)(v6 + 9456) = v8;
    v13 = v8;
  }
  *v13 = v9;
  *((_DWORD *)v8 - 1) = v12;
  v14 = *(_QWORD *)(a1 + 240);
  if ( v14 )
  {
    v15 = *(unsigned int *)(a1 + 300);
    do
    {
      if ( (unsigned int)v15 >= *(_DWORD *)(v14 - 4) )
        break;
      v16 = *(unsigned int **)(v14 + 8 * v15);
      v17 = *(_QWORD *)(a1 + 160);
      v18 = _mm_loadl_epi64((const __m128i *)(a1 + 24));
      if ( v17 && (v19 = *v16, (unsigned int)v19 < *(_DWORD *)(v17 - 4)) )
      {
        v20 = *(_QWORD *)(v17 + 8 * v19);
        v35[0] = _mm_unpacklo_epi64((__m128i)v20, v18);
        if ( v20 )
          ++*(_DWORD *)(v20 + 8);
      }
      else
      {
        v35[0] = _mm_unpacklo_epi64((__m128i)0LL, v18);
      }
      sub_14B9B80(*(_QWORD *)(a1 + 16) + 7456LL, v35);
      v21 = sub_966440(a1, v16);
      v22 = sub_966440(a1, *(unsigned int **)&v35[0]);
      v23 = *(_QWORD *)(a1 + 16);
      v24 = v22;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v23 + 7488) + 48LL))(
        *(_QWORD *)(v23 + 7488),
        *(_QWORD *)(*(_QWORD *)(v23 + 8840) + 8LL * (v21 >> 1)));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v23 + 7488) + 64LL))(*(_QWORD *)(v23 + 7488));
      v25 = *(_QWORD *)(a1 + 16);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v25 + 7488) + 48LL))(
        *(_QWORD *)(v25 + 7488),
        *(_QWORD *)(*(_QWORD *)(v25 + 8840) + 8LL * (v24 >> 1)));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v25 + 7488) + 64LL))(*(_QWORD *)(v25 + 7488));
      sub_B6A470(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), v21 ^ 1, v24, 0, 0);
      sub_B6A470(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), v21, v24 ^ 1, 0, 0);
      v26 = *(_QWORD *)&v35[0];
      if ( *(_QWORD *)&v35[0] )
      {
        v27 = *((_QWORD *)&v35[0] + 1);
        if ( (*(_DWORD *)(*(_QWORD *)&v35[0] + 8LL))-- == 1 )
          sub_15D7BC0(v27, v26);
      }
      v14 = *(_QWORD *)(a1 + 240);
      v15 = (unsigned int)(*(_DWORD *)(a1 + 300) + 1);
      *(_DWORD *)(a1 + 300) = v15;
    }
    while ( v14 );
  }
  return 1;
}

