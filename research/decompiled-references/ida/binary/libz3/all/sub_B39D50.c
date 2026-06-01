void __fastcall sub_B39D50(__int64 a1, __int64 a2, int a3)
{
  char **exception; // rbx
  int v4; // r13d
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 *v13; // rcx
  unsigned int v14; // r13d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *(_DWORD *)(a1 + 36);
  if ( v4 != a3 )
  {
    v7 = sub_180C100(a2 + 8400, 24);
    v8 = *(_QWORD **)(a2 + 9456);
    v9 = v7;
    *(_QWORD *)v7 = &off_1C4C070;
    *(_QWORD *)(v7 + 8) = a1 + 36;
    *(_DWORD *)(v7 + 16) = v4;
    if ( v8 )
    {
      v10 = *((_DWORD *)v8 - 1);
      if ( v10 == *((_DWORD *)v8 - 2) )
      {
        v14 = (3 * v10 + 1) >> 1;
        v15 = 8 * v14 + 8;
        if ( 8 * v10 + 8 >= (unsigned int)v15 || v10 >= v14 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v19, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v19);
          sub_233E40((__int64)v19);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v16 = (unsigned int *)sub_186B300(v8 - 1, v15);
        v17 = v16[1];
        v8 = v16 + 2;
        *v16 = v14;
        *(_QWORD *)(a2 + 9456) = v16 + 2;
        LODWORD(v16) = v17;
        v13 = &v8[v17];
        v12 = (_DWORD)v16 + 1;
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
      v18 = (_QWORD *)sub_186B270(0x18u);
      v8 = v18 + 1;
      *v18 = 2;
      v12 = 1;
      *(_QWORD *)(a2 + 9456) = v8;
      v13 = v8;
    }
    *v13 = v9;
    *((_DWORD *)v8 - 1) = v12;
    *(_DWORD *)(a1 + 36) = a3;
  }
}

