__int64 __fastcall sub_7F0DF0(__int64 a1, unsigned int a2)
{
  char **exception; // rbp
  char **v3; // rbp
  _QWORD *v5; // rbp
  __int64 v6; // rax
  _DWORD *v7; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rdx
  unsigned int v12; // r14d
  size_t v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdi
  _DWORD *v16; // r12
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // ebp
  size_t v21; // rdi
  __int64 v22; // rdi
  _DWORD *v23; // r14
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = *(_QWORD **)(a1 + 16);
  if ( v5 )
  {
    v6 = *((unsigned int *)v5 - 1);
    if ( (_DWORD)v6 == *((_DWORD *)v5 - 2) )
    {
      v12 = (unsigned int)(3 * v6 + 1) >> 1;
      v13 = 8 * v12 + 8;
      if ( 8 * (int)v6 + 8 >= (unsigned int)v13 || (unsigned int)v6 >= v12 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v28, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v28);
        sub_233E40((__int64)v28);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = sub_186B270(v13);
      v15 = *(_QWORD *)(a1 + 16);
      v16 = (_DWORD *)v14;
      v5 = (_QWORD *)(v14 + 8);
      if ( v15 )
      {
        v17 = *(unsigned int *)(v15 - 4);
        *(_DWORD *)(v14 + 4) = v17;
        v18 = 0;
        v19 = 8 * v17;
        if ( v19 )
        {
          do
          {
            *(_QWORD *)&v16[v18 / 4 + 2] = *(_QWORD *)(v15 + v18);
            v18 += 8LL;
          }
          while ( v18 != v19 );
        }
        sub_186B220((void *)(v15 - 8));
        v7 = &v5[v16[1]];
      }
      else
      {
        *(_DWORD *)(v14 + 4) = 0;
        v7 = (_DWORD *)(v14 + 8);
      }
      *(_QWORD *)(a1 + 16) = v5;
      *v16 = v12;
    }
    else
    {
      v7 = &v5[v6];
    }
  }
  else
  {
    v27 = (_QWORD *)sub_186B270(0x18u);
    v5 = v27 + 1;
    *v27 = 2;
    *(_QWORD *)(a1 + 16) = v27 + 1;
    v7 = v27 + 1;
  }
  v8 = *(_QWORD *)(a1 + 648);
  *v7 = 1;
  v7[1] = a2 >> 1;
  ++*((_DWORD *)v5 - 1);
  if ( v8 )
  {
    v9 = *(unsigned int *)(v8 - 4);
    if ( (_DWORD)v9 == *(_DWORD *)(v8 - 8) )
    {
      v20 = (unsigned int)(3 * v9 + 1) >> 1;
      v21 = 16 * v20 + 8;
      if ( 16 * (int)v9 + 8 >= (unsigned int)v21 || (unsigned int)v9 >= v20 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v28, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v28);
        sub_233E40((__int64)v28);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      result = sub_186B270(v21);
      v22 = *(_QWORD *)(a1 + 648);
      v23 = (_DWORD *)result;
      v8 = result + 8;
      if ( v22 )
      {
        v24 = *(unsigned int *)(v22 - 4);
        v25 = 0;
        v23[1] = v24;
        v26 = 16 * v24;
        if ( v26 )
        {
          do
          {
            *(__m128i *)&v23[v25 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v22 + v25));
            v25 += 16LL;
          }
          while ( v26 != v25 );
        }
        result = sub_186B220((void *)(v22 - 8));
        v11 = v8 + 16LL * (unsigned int)v23[1];
      }
      else
      {
        *(_DWORD *)(result + 4) = 0;
        v11 = result + 8;
      }
      *(_QWORD *)(a1 + 648) = v8;
      *v23 = v20;
    }
    else
    {
      result = 16 * v9;
      v11 = v8 + result;
    }
  }
  else
  {
    result = sub_186B270(0x28u);
    v8 = result + 8;
    *(_QWORD *)result = 2;
    *(_QWORD *)(a1 + 648) = result + 8;
    v11 = result + 8;
  }
  *(_DWORD *)v11 = a2;
  *(_QWORD *)(v11 + 8) = 0;
  ++*(_DWORD *)(v8 - 4);
  return result;
}

