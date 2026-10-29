__int64 __fastcall sub_ABA2E0(__int64 a1)
{
  char **exception; // rbx
  __int64 v2; // rdx
  __int64 (*v3)(void); // rax
  __int64 result; // rax
  unsigned int v5; // r12d
  __int64 v6; // r13
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rbp
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // r12d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = *(__int64 (**)(void))(*(_QWORD *)a1 + 176LL);
  if ( v3 == sub_AC38E0 )
  {
    result = *(_QWORD *)(a1 + 848);
    if ( !result )
      return result;
    v5 = *(_DWORD *)(a1 + 856);
    if ( v5 >= *(_DWORD *)(result - 4) )
      return result;
  }
  else
  {
    result = v3();
    if ( !(_BYTE)result )
      return result;
    v5 = *(_DWORD *)(a1 + 856);
  }
  v6 = *(_QWORD *)(a1 + 16);
  v7 = sub_180C100(v6 + 8400, 24);
  v8 = *(_QWORD **)(v6 + 9456);
  v9 = v7;
  *(_QWORD *)v7 = &off_1C4C070;
  *(_QWORD *)(v7 + 8) = a1 + 856;
  *(_DWORD *)(v7 + 16) = v5;
  if ( v8 )
  {
    v10 = *((_DWORD *)v8 - 1);
    if ( v10 == *((_DWORD *)v8 - 2) )
    {
      v15 = (3 * v10 + 1) >> 1;
      v16 = 8 * v15 + 8;
      if ( 8 * v10 + 8 >= (unsigned int)v16 || v10 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_139F3A(v20, "Overflow encountered when expanding vector", v2);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v20);
        sub_233E40((__int64)v20);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = (unsigned int *)sub_186B300(v8 - 1, v16);
      v18 = v17[1];
      v8 = v17 + 2;
      *(_QWORD *)(v6 + 9456) = v17 + 2;
      *v17 = v15;
      LODWORD(v17) = v18;
      v12 = &v8[v18];
      result = (unsigned int)((_DWORD)v17 + 1);
    }
    else
    {
      v11 = v10;
      result = v10 + 1;
      v12 = &v8[v11];
    }
  }
  else
  {
    v19 = (_QWORD *)sub_186B270(0x18u);
    v8 = v19 + 1;
    *v19 = 2;
    result = 1;
    *(_QWORD *)(v6 + 9456) = v8;
    v12 = v8;
  }
  *v12 = v9;
  *((_DWORD *)v8 - 1) = result;
  v13 = *(_QWORD *)(a1 + 848);
  if ( v13 )
  {
    result = *(unsigned int *)(a1 + 856);
    do
    {
      if ( (unsigned int)result >= *(_DWORD *)(v13 - 4) )
        break;
      v14 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v14 + 8984) != qword_1C7ECE8 )
        break;
      if ( *(_BYTE *)(v14 + 2416) )
        break;
      sub_AB3FE0(
        a1,
        *(_DWORD *)(v13 + 12 * result),
        *(_DWORD *)(v13 + 12 * result + 4),
        *(_DWORD *)(v13 + 12 * result + 8));
      v13 = *(_QWORD *)(a1 + 848);
      result = (unsigned int)(*(_DWORD *)(a1 + 856) + 1);
      *(_DWORD *)(a1 + 856) = result;
    }
    while ( v13 );
  }
  return result;
}

