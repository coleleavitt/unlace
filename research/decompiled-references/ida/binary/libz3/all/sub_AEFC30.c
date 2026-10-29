__int64 __fastcall sub_AEFC30(__int64 a1, unsigned int *a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  unsigned int v9; // ebx
  _QWORD *v11; // rdi
  unsigned int v12; // ebx
  _QWORD *v13; // rdx
  int v14; // eax
  unsigned int v15; // r13d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(v5 + 8656);
  if ( !v6 || (v7 = *a2, (unsigned int)v7 >= *(_DWORD *)(v6 - 4)) || !*(_QWORD *)(v6 + 8 * v7) )
  {
    sub_B6F780(v5);
    v7 = *a2;
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
  }
  v8 = *(_QWORD *)(v6 + 8 * v7);
  v9 = sub_B39350(v8, *(unsigned int *)(a1 + 8));
  if ( v9 != -1 )
    return v9;
  v11 = *(_QWORD **)(a1 + 32);
  if ( v11 )
  {
    v12 = *((_DWORD *)v11 - 1);
    if ( v12 == *((_DWORD *)v11 - 2) )
    {
      v15 = (3 * v12 + 1) >> 1;
      v16 = 8 * v15 + 8;
      if ( 8 * v12 + 8 >= (unsigned int)v16 || v12 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_140FB4(v20, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v20);
        sub_233E40((__int64)v20);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = (unsigned int *)sub_186B300(v11 - 1, v16);
      v18 = v17[1];
      v11 = v17 + 2;
      *v17 = v15;
      *(_QWORD *)(a1 + 32) = v17 + 2;
      LODWORD(v17) = v18;
      v13 = &v11[v18];
      v14 = (_DWORD)v17 + 1;
    }
    else
    {
      v13 = &v11[v12];
      v14 = v12 + 1;
    }
  }
  else
  {
    v12 = 0;
    v19 = (_QWORD *)sub_186B270(0x18u);
    v11 = v19 + 1;
    *v19 = 2;
    v14 = 1;
    *(_QWORD *)(a1 + 32) = v11;
    v13 = v11;
  }
  *v13 = v8;
  *((_DWORD *)v11 - 1) = v14;
  sub_B66EF0(*(_QWORD *)(a1 + 16), v8, a1, v12);
  return v12;
}

