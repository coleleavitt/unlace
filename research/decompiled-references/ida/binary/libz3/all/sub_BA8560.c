__int64 __fastcall sub_BA8560(__int64 a1, _QWORD *a2)
{
  char **exception; // rbx
  int v5; // eax
  _QWORD *v6; // rdx
  unsigned int v7; // r12d
  _QWORD *v8; // rcx
  int v9; // eax
  _QWORD *v10; // rdi
  __int64 v11; // rbx
  unsigned int v13; // r13d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = sub_B39350((__int64)a2, *(_DWORD *)(a1 + 8));
  v6 = *(_QWORD **)(a1 + 32);
  if ( v5 != -1 && a2 == (_QWORD *)v6[v5] )
    return sub_B39350((__int64)a2, *(_DWORD *)(a1 + 8));
  if ( v6 )
  {
    v7 = *((_DWORD *)v6 - 1);
    if ( v7 == *((_DWORD *)v6 - 2) )
    {
      v13 = (3 * v7 + 1) >> 1;
      v14 = 8 * v13 + 8;
      if ( 8 * v7 + 8 >= (unsigned int)v14 || v7 >= v13 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v18, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v18);
        sub_233E40((__int64)v18);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v15 = (unsigned int *)sub_186B300(v6 - 1, v14);
      v16 = v15[1];
      v6 = v15 + 2;
      *v15 = v13;
      *(_QWORD *)(a1 + 32) = v15 + 2;
      LODWORD(v15) = v16;
      v8 = &v6[v16];
      v9 = (_DWORD)v15 + 1;
    }
    else
    {
      v8 = &v6[v7];
      v9 = v7 + 1;
    }
  }
  else
  {
    v7 = 0;
    v17 = (_QWORD *)sub_186B270(0x18u);
    v6 = v17 + 1;
    *v17 = 2;
    v9 = 1;
    *(_QWORD *)(a1 + 32) = v6;
    v8 = v6;
  }
  *v8 = a2;
  v10 = *(_QWORD **)(a1 + 16);
  *((_DWORD *)v6 - 1) = v9;
  sub_B66EF0(v10, (__int64)a2, (unsigned int *)a1, v7);
  v11 = *(_QWORD *)(a1 + 16);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v11 + 7488) + 48LL))(*(_QWORD *)(v11 + 7488), *a2);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 7488) + 64LL))(*(_QWORD *)(v11 + 7488));
  return v7;
}

