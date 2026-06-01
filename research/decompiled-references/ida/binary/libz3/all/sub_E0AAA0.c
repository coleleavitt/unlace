unsigned __int64 __fastcall sub_E0AAA0(__int64 a1, unsigned int a2)
{
  char **exception; // rbx
  unsigned __int64 result; // rax
  _QWORD *v6; // r14
  char *v7; // r15
  __int64 v8; // r13
  char *v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 *v11; // rsi
  _QWORD *v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // ebx
  size_t v15; // rdi
  unsigned int *v16; // rax
  __int64 v17; // rdi
  unsigned int *v18; // r15
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r13
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // [rsp+8h] [rbp-60h]
  __int64 v26[11]; // [rsp+10h] [rbp-58h] BYREF

  result = 16LL * a2;
  v6 = *(_QWORD **)(a1 + 720);
  v25 = result;
  v7 = (char *)v6 + result;
  if ( v6 )
  {
    v8 = *((unsigned int *)v6 - 1);
    result = 16 * v8;
    v9 = (char *)&v6[2 * v8];
    if ( 16LL * a2 == 16 * v8 )
      goto LABEL_6;
  }
  else
  {
    v9 = nullptr;
    if ( !result )
      goto LABEL_23;
  }
  do
  {
    v10 = *((_QWORD *)v7 + 1);
    v11 = (unsigned __int64 *)v7;
    v7 += 16;
    result = sub_E0A6D0(a1, v11, v10);
  }
  while ( v7 != v9 );
  v6 = *(_QWORD **)(a1 + 720);
  if ( v6 )
  {
    v8 = *((unsigned int *)v6 - 1);
LABEL_6:
    if ( (unsigned int)v8 >= a2 )
    {
      *((_DWORD *)v6 - 1) = a2;
      return result;
    }
    goto LABEL_9;
  }
LABEL_23:
  v8 = 0;
  if ( !a2 )
    return result;
  v12 = (_QWORD *)sub_186B270(0x28u);
  v6 = v12 + 1;
  *v12 = 2;
  *(_QWORD *)(a1 + 720) = v12 + 1;
LABEL_9:
  while ( 1 )
  {
    v13 = *((_DWORD *)v6 - 2);
    if ( v13 >= a2 )
      break;
    while ( 1 )
    {
      v14 = (3 * v13 + 1) >> 1;
      v15 = 16 * v14 + 8;
      if ( 16 * v13 + 8 >= (unsigned int)v15 || v13 >= v14 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_DF63A0(v26, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v26);
        sub_233E40((__int64)v26);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = (unsigned int *)sub_186B270(v15);
      v17 = *(_QWORD *)(a1 + 720);
      v18 = v16;
      v6 = v16 + 2;
      if ( !v17 )
        break;
      v19 = *(unsigned int *)(v17 - 4);
      v20 = 0;
      v18[1] = v19;
      v21 = 16 * v19;
      if ( v21 )
      {
        do
        {
          *(__m128i *)&v18[v20 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v17 + v20));
          v20 += 16LL;
        }
        while ( v21 != v20 );
      }
      sub_186B220((void *)(v17 - 8));
      *v18 = v14;
      v13 = *((_DWORD *)v6 - 2);
      *(_QWORD *)(a1 + 720) = v6;
      if ( v13 >= a2 )
        goto LABEL_16;
    }
    v16[1] = 0;
    *(_QWORD *)(a1 + 720) = v6;
    *v16 = v14;
  }
LABEL_16:
  result = v25;
  v22 = 16 * v8;
  *((_DWORD *)v6 - 1) = a2;
  if ( v25 != v22 )
  {
    v23 = 0;
    result = ((v25 - 16 - v22) >> 4) + 1;
    do
    {
      v24 = v23++;
      *(_OWORD *)&v6[2 * v24 + (unsigned __int64)v22 / 8] = 0;
    }
    while ( v23 < result );
  }
  return result;
}

