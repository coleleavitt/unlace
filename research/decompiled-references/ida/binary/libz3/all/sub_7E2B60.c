__int64 __fastcall sub_7E2B60(__int64 a1)
{
  char **exception; // rbx
  unsigned __int8 (*v2)(void); // rax
  __int64 v3; // rdx
  unsigned int v4; // r12d
  __int64 result; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rbp
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned int v16; // r12d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 48LL);
  if ( (char *)v2 != (char *)sub_7E29E0 )
    return v2();
  v3 = *(_QWORD *)(a1 + 1424);
  if ( !v3 )
    return 0;
  v4 = *(_DWORD *)(a1 + 1432);
  result = 0;
  if ( v4 < *(_DWORD *)(v3 - 4) )
  {
    v6 = *(_QWORD *)(a1 + 80);
    v7 = sub_180C100(v6 + 2144, 24);
    v8 = *(_QWORD **)(v6 + 2128);
    v9 = v7;
    *(_QWORD *)v7 = &off_1C4C070;
    *(_QWORD *)(v7 + 8) = a1 + 1432;
    *(_DWORD *)(v7 + 16) = v4;
    if ( v8 )
    {
      v10 = *((_DWORD *)v8 - 1);
      if ( v10 == *((_DWORD *)v8 - 2) )
      {
        v16 = (3 * v10 + 1) >> 1;
        v17 = 8 * v16 + 8;
        if ( 8 * v10 + 8 >= (unsigned int)v17 || v10 >= v16 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v21, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v21);
          sub_233E40((__int64)v21);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v18 = (unsigned int *)sub_186B300(v8 - 1, v17);
        v19 = v18[1];
        v8 = v18 + 2;
        *(_QWORD *)(v6 + 2128) = v18 + 2;
        *v18 = v16;
        LODWORD(v18) = v19;
        v13 = &v8[v19];
        v12 = (_DWORD)v18 + 1;
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
      v20 = (_QWORD *)sub_186B270(0x18u);
      v8 = v20 + 1;
      *v20 = 2;
      v12 = 1;
      *(_QWORD *)(v6 + 2128) = v8;
      v13 = v8;
    }
    v14 = *(_QWORD *)(a1 + 1424);
    *v13 = v9;
    *((_DWORD *)v8 - 1) = v12;
    if ( v14 )
    {
      v15 = *(unsigned int *)(a1 + 1432);
      do
      {
        if ( (unsigned int)v15 >= *(_DWORD *)(v14 - 4) )
          break;
        sub_7E2750((_QWORD *)a1, (char *)(16 * v15 + v14));
        v14 = *(_QWORD *)(a1 + 1424);
        v15 = (unsigned int)(*(_DWORD *)(a1 + 1432) + 1);
        *(_DWORD *)(a1 + 1432) = v15;
      }
      while ( v14 );
    }
    return 1;
  }
  return result;
}

