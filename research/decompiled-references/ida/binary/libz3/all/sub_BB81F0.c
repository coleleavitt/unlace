void __fastcall sub_BB81F0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  __int64 v5; // r13
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // r12
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  _QWORD *v12; // rcx
  unsigned int v13; // r14d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18[9]; // [rsp-48h] [rbp-48h] BYREF

  if ( !*(_QWORD *)(a1 + 4160) )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = (_QWORD *)sub_180C100(v5 + 8400, 24);
    v7 = *(_QWORD **)(v5 + 9456);
    v8 = v6;
    *v6 = off_1C55450;
    v6[1] = a1 + 4160;
    v6[2] = 0;
    if ( v7 )
    {
      v9 = *((_DWORD *)v7 - 1);
      if ( v9 == *((_DWORD *)v7 - 2) )
      {
        v13 = (3 * v9 + 1) >> 1;
        v14 = 8 * v13 + 8;
        if ( 8 * v9 + 8 >= (unsigned int)v14 || v9 >= v13 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_154526(v18, "Overflow encountered when expanding vector", v3);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v18);
          sub_233E40((__int64)v18);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v15 = (unsigned int *)sub_186B300(v7 - 1, v14);
        v16 = v15[1];
        v7 = v15 + 2;
        *(_QWORD *)(v5 + 9456) = v15 + 2;
        *v15 = v13;
        LODWORD(v15) = v16;
        v12 = &v7[v16];
        v11 = (_DWORD)v15 + 1;
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
      v17 = (_QWORD *)sub_186B270(0x18u);
      v7 = v17 + 1;
      *v17 = 2;
      v11 = 1;
      *(_QWORD *)(v5 + 9456) = v7;
      v12 = v7;
    }
    *v12 = v8;
    *((_DWORD *)v7 - 1) = v11;
    *(_QWORD *)(a1 + 4160) = a2;
  }
}

