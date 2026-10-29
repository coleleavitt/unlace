__m128 *__fastcall sub_B0B420(__m128 *a1, __int64 a2, __int64 a3)
{
  char **exception; // r13
  unsigned int v4; // r14d
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r15
  unsigned int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  _QWORD *v14; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned int v21; // edx
  size_t v22; // rsi
  unsigned int *v23; // rax
  _QWORD *v24; // rax
  unsigned int v26; // [rsp+14h] [rbp-84h]
  __int64 v27; // [rsp+18h] [rbp-80h] BYREF
  __int64 v28[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v29[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v30[11]; // [rsp+40h] [rbp-58h] BYREF

  v4 = 0;
  v7 = 0;
  v27 = *(_QWORD *)(a3 + 24);
  v28[0] = v27;
  v8 = *(_QWORD *)(a2 + 8);
  if ( v8 )
  {
    while ( v4 < *(_DWORD *)(v8 - 4) )
    {
      sub_B06250(v29, a3, *(unsigned int *)(v8 + 4LL * v4));
      v9 = v29[0];
      v10 = v29[1];
      if ( v29[0] )
        ++*(_DWORD *)(v29[0] + 8LL);
      if ( v7 )
      {
        v11 = *(_DWORD *)(v7 - 4);
        if ( v11 == *(_DWORD *)(v7 - 8) )
        {
          v21 = (3 * v11 + 1) >> 1;
          v22 = 8 * v21 + 8;
          if ( 8 * v11 + 8 >= (unsigned int)v22 || v11 >= v21 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_B035D0(v30, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v30);
            sub_233E40((__int64)v30);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v26 = (3 * v11 + 1) >> 1;
          v23 = (unsigned int *)sub_186B300((void *)(v7 - 8), v22);
          v7 = (__int64)(v23 + 2);
          *v23 = v26;
          LODWORD(v23) = v23[1];
          v14 = (_QWORD *)(v7 + 8LL * (unsigned int)v23);
          v13 = (_DWORD)v23 + 1;
        }
        else
        {
          v12 = v11;
          v13 = v11 + 1;
          v14 = (_QWORD *)(v7 + 8 * v12);
        }
      }
      else
      {
        v24 = (_QWORD *)sub_186B270(0x18u);
        v14 = v24 + 1;
        *v24 = 2;
        v13 = 1;
        v7 = (__int64)v14;
      }
      *v14 = v9;
      *(_DWORD *)(v7 - 4) = v13;
      if ( v9 )
      {
        if ( (*(_DWORD *)(v9 + 8))-- == 1 )
          sub_15D7BC0(v10, v9);
      }
      v8 = *(_QWORD *)(a2 + 8);
      ++v4;
      if ( !v8 )
      {
        v16 = *(unsigned int *)(a2 + 16);
        v17 = a3 + 712;
LABEL_13:
        v18 = *(unsigned int *)(v7 - 4);
        goto LABEL_14;
      }
    }
    v16 = *(unsigned int *)(a2 + 16);
    v17 = a3 + 712;
    if ( v7 )
      goto LABEL_13;
    v18 = 0;
  }
  else
  {
    v16 = *(unsigned int *)(a2 + 16);
    v17 = a3 + 712;
    v18 = 0;
  }
LABEL_14:
  v19 = sub_168DA70(v17, v18, v7, v16);
  *a1 = _mm_loadh_ps((const double *)&v27);
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  v28[1] = v7;
  sub_2334C0(v28);
  return a1;
}

