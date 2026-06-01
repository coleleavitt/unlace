__int64 __fastcall sub_5A7600(__int64 a1, __int64 *a2)
{
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rax
  int v6; // edx
  _QWORD *v7; // rdx
  unsigned int v8; // r14d
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // r15
  _QWORD *v12; // rcx
  __int64 v14; // rcx
  unsigned int v15; // r15d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  char **exception; // rbx
  __int64 v21[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL) + 8LL * *(unsigned int *)a2);
  v5 = *(_QWORD *)(v3 + 120);
  if ( v5 && (v6 = *(_DWORD *)(v5 - 4)) != 0 )
  {
    v14 = (unsigned int)(v6 - 1);
    v9 = *(unsigned int *)(v5 + 4 * v14);
    *(_DWORD *)(v5 - 4) = v14;
    v11 = v9;
  }
  else
  {
    v7 = *(_QWORD **)(v3 + 112);
    if ( v7 )
    {
      v8 = *((_DWORD *)v7 - 1);
      if ( v8 == *((_DWORD *)v7 - 2) )
      {
        v15 = (3 * v8 + 1) >> 1;
        v16 = 8 * v15 + 8;
        if ( 8 * v8 + 8 >= (unsigned int)v16 || v8 >= v15 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v21, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v21);
          sub_233E40((__int64)v21);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v17 = (unsigned int *)sub_186B300(v7 - 1, v16);
        v18 = v17[1];
        v7 = v17 + 2;
        *(_QWORD *)(v3 + 112) = v17 + 2;
        v3 = *(_QWORD *)(a1 + 8);
        v9 = v8;
        *v17 = v15;
        LODWORD(v17) = v18;
        v11 = v8;
        v12 = &v7[v18];
        v10 = (_DWORD)v17 + 1;
      }
      else
      {
        v9 = v8;
        v10 = v8 + 1;
        v11 = v8;
        v12 = &v7[v11];
      }
    }
    else
    {
      v11 = 0;
      v19 = (_QWORD *)sub_186B270(0x18u);
      v7 = v19 + 1;
      *v19 = 2;
      v10 = 1;
      *(_QWORD *)(v3 + 112) = v7;
      v12 = v7;
      v3 = *(_QWORD *)(a1 + 8);
      v9 = 0;
    }
    *v12 = 0;
    *((_DWORD *)v7 - 1) = v10;
  }
  *(_QWORD *)(*(_QWORD *)(v3 + 112) + v11 * 8) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 72LL))(v4);
  *a2 = v9;
  return 1;
}

