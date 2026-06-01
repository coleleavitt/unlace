__int64 __fastcall sub_48E580(__int64 a1, unsigned int a2)
{
  _QWORD *v3; // r15
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // ebp
  size_t v9; // rsi
  unsigned int *v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rax
  _DWORD *v13; // rax
  _QWORD *v14; // rax
  unsigned int v15; // r12d
  size_t v16; // rdi
  __int64 v17; // rax
  _QWORD *v18; // r13
  _DWORD *v19; // rbp
  __int64 v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // r8
  _QWORD *i; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  _QWORD *v26; // r14
  void *v27; // rdi
  _QWORD *v28; // rax
  char **exception; // rbp
  __int64 v31[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(_QWORD **)(a1 + 24);
  if ( !v3 )
    goto LABEL_13;
LABEL_2:
  for ( result = *((unsigned int *)v3 - 1); a2 >= (unsigned int)result; result = *((unsigned int *)v3 - 1) )
  {
    if ( (_DWORD)result != *((_DWORD *)v3 - 2) )
    {
      v5 = (__int64)&v3[3 * result];
      goto LABEL_5;
    }
    v15 = (unsigned int)(3 * result + 1) >> 1;
    v16 = 8 * (v15 + ((3 * (_DWORD)result + 1) & 0xFFFFFFFE)) + 8;
    if ( 24 * (int)result + 8 >= (unsigned int)v16 || (unsigned int)result >= v15 )
    {
LABEL_30:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v31, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v31);
      sub_233E40((__int64)v31);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v17 = sub_186B270(v16);
    v18 = *(_QWORD **)(a1 + 24);
    v19 = (_DWORD *)v17;
    v3 = (_QWORD *)(v17 + 8);
    if ( v18 )
    {
      v20 = *((unsigned int *)v18 - 1);
      v21 = v3;
      v19[1] = v20;
      v22 = &v18[3 * v20];
      for ( i = v18; v22 != i; *((_DWORD *)v21 - 2) = *((_DWORD *)i - 2) )
      {
        v24 = *i;
        *i = 0;
        i += 3;
        v21 += 3;
        *(v21 - 3) = v24;
        *((_DWORD *)v21 - 4) = *((_DWORD *)i - 4);
        *((_DWORD *)v21 - 3) = *((_DWORD *)i - 3);
      }
      v25 = *((unsigned int *)v18 - 1);
      if ( (_DWORD)v25 )
      {
        v26 = &v18[3 * v25];
        do
        {
          while ( *v18 )
          {
            v27 = (void *)(*v18 - 8LL);
            v18 += 3;
            sub_186B220(v27);
            if ( v18 == v26 )
              goto LABEL_23;
          }
          v18 += 3;
        }
        while ( v18 != v26 );
LABEL_23:
        v18 = *(_QWORD **)(a1 + 24);
      }
      sub_186B220(v18 - 1);
      v5 = (__int64)&v3[3 * (unsigned int)v19[1]];
    }
    else
    {
      *(_DWORD *)(v17 + 4) = 0;
      v5 = v17 + 8;
    }
    *(_QWORD *)(a1 + 24) = v3;
    *v19 = v15;
    while ( 1 )
    {
LABEL_5:
      *(_QWORD *)v5 = 0;
      *(_QWORD *)(v5 + 8) = 0xFFFFFFFF00000000LL;
      v6 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(v5 + 16) = 0;
      ++*((_DWORD *)v3 - 1);
      if ( !v6 )
      {
        v28 = (_QWORD *)sub_186B270(0x10u);
        v3 = *(_QWORD **)(a1 + 24);
        v11 = v28 + 1;
        *v28 = 2;
        *(_QWORD *)(a1 + 32) = v28 + 1;
        v13 = v28 + 1;
        goto LABEL_12;
      }
      v7 = *(unsigned int *)(v6 - 4);
      if ( (_DWORD)v7 != *(_DWORD *)(v6 - 8) )
        break;
      v8 = (unsigned int)(3 * v7 + 1) >> 1;
      v9 = 4 * v8 + 8;
      if ( 4 * (int)v7 + 8 >= (unsigned int)v9 || (unsigned int)v7 >= v8 )
        goto LABEL_30;
      v10 = (unsigned int *)sub_186B300((void *)(v6 - 8), v9);
      v3 = *(_QWORD **)(a1 + 24);
      v11 = v10 + 2;
      *v10 = v8;
      v12 = v10[1];
      *(_QWORD *)(a1 + 32) = v11;
      v13 = (_DWORD *)v11 + v12;
LABEL_12:
      *v13 = -1;
      ++*((_DWORD *)v11 - 1);
      if ( v3 )
        goto LABEL_2;
LABEL_13:
      v14 = (_QWORD *)sub_186B270(0x38u);
      v3 = v14 + 1;
      *v14 = 2;
      v5 = (__int64)v3;
      *(_QWORD *)(a1 + 24) = v3;
    }
    *(_DWORD *)(v6 + 4 * v7) = -1;
    ++*(_DWORD *)(v6 - 4);
  }
  return result;
}

