__int64 __fastcall sub_A886E0(__int64 a1)
{
  __int64 v2; // rax
  int v3; // r12d
  int v4; // eax
  __int64 v5; // r13
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rbp
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 *v12; // rcx
  __int64 i; // rax
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rbp
  __int64 v20; // r12
  __int64 result; // rax
  unsigned int v22; // r12d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  char **exception; // rbx
  char *v28[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 280);
  v3 = *(_DWORD *)(a1 + 288);
  if ( v2 )
    v4 = *(_DWORD *)(v2 - 4);
  else
    v4 = 0;
  if ( v3 != v4 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
    v6 = sub_180C100(v5 + 8400, 24);
    v7 = *(_QWORD **)(v5 + 9456);
    v8 = v6;
    *(_QWORD *)v6 = &off_1C4C070;
    *(_QWORD *)(v6 + 8) = a1 + 288;
    *(_DWORD *)(v6 + 16) = v3;
    if ( v7 )
    {
      v9 = *((_DWORD *)v7 - 1);
      if ( v9 == *((_DWORD *)v7 - 2) )
      {
        v22 = (3 * v9 + 1) >> 1;
        v23 = 8 * v22 + 8;
        if ( 8 * v9 + 8 >= (unsigned int)v23 || v9 >= v22 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_137C7A(v28);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v28);
          sub_233E40((__int64)v28);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v24 = (unsigned int *)sub_186B300(v7 - 1, v23);
        v25 = v24[1];
        v7 = v24 + 2;
        *(_QWORD *)(v5 + 9456) = v24 + 2;
        *v24 = v22;
        LODWORD(v24) = v25;
        v12 = &v7[v25];
        v11 = (_DWORD)v24 + 1;
      }
      else
      {
        v10 = v9;
        v11 = v9 + 1;
        v12 = &v7[v10];
      }
    }
    else
    {
      v26 = (_QWORD *)sub_186B270(0x18u);
      v7 = v26 + 1;
      *v26 = 2;
      v11 = 1;
      *(_QWORD *)(v5 + 9456) = v7;
      v12 = v7;
    }
    *v12 = v8;
    *((_DWORD *)v7 - 1) = v11;
    for ( i = *(_QWORD *)(a1 + 280); i; i = *(_QWORD *)(a1 + 280) )
    {
      v14 = *(_DWORD *)(a1 + 288);
      if ( v14 >= *(_DWORD *)(i - 4) )
        break;
      v15 = *(_QWORD *)(i + 8LL * v14);
      v16 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
      v17 = (unsigned int)v15;
      v18 = (unsigned int)v15;
      v15 >>= 32;
      v19 = *(_QWORD *)(v16 + 8 * v17);
      v20 = *(_QWORD *)(v16 + 8LL * (unsigned int)v15);
      *(_DWORD *)(a1 + 288) = v14 + 1;
      if ( (unsigned __int8)sub_A88370((_QWORD *)a1, v18, v15) )
      {
        if ( *(_QWORD *)(v20 + 8) != *(_QWORD *)(v19 + 8) )
        {
          result = sub_966370(*(_QWORD *)a1, v19, v20);
          if ( (_BYTE)result )
          {
            ++*(_DWORD *)(a1 + 484);
            return result;
          }
        }
      }
    }
  }
  return 0;
}

