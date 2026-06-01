void __fastcall sub_92D890(__int64 a1, __int64 a2, double a3)
{
  size_t v4; // rsi
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // r12
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rax
  unsigned int v17; // r14d
  unsigned int *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r12
  __int64 v21; // rax
  _QWORD *v22; // rax
  char **exception; // rbx
  __int64 v24[2]; // [rsp-10h] [rbp-58h] BYREF
  _BYTE v25[72]; // [rsp+0h] [rbp-48h] BYREF

  if ( !*(_BYTE *)(a1 + 232) )
  {
    v4 = 24;
    v6 = *(_QWORD *)(a1 + 16);
    v7 = v6 + 8400;
    v8 = sub_180C100(v6 + 8400, 24);
    v9 = *(_QWORD **)(v6 + 9456);
    v10 = v8;
    *(_QWORD *)v8 = off_1C54EE8;
    *(_QWORD *)(v8 + 8) = a1 + 232;
    *(_BYTE *)(v8 + 16) = 0;
    if ( v9 )
    {
      v11 = *((_DWORD *)v9 - 1);
      if ( v11 == *((_DWORD *)v9 - 2) )
      {
        v17 = (3 * v11 + 1) >> 1;
        v4 = 8 * v17 + 8;
        if ( 8 * v11 + 8 >= (unsigned int)v4 || v11 >= v17 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_91CD50(v24, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v24);
          sub_233E40((__int64)v24);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v7 = (__int64)(v9 - 1);
        v18 = (unsigned int *)sub_186B300(v9 - 1, v4);
        v19 = v18[1];
        v9 = v18 + 2;
        *(_QWORD *)(v6 + 9456) = v18 + 2;
        *v18 = v17;
        LODWORD(v18) = v19;
        v14 = &v9[v19];
        v13 = (_DWORD)v18 + 1;
      }
      else
      {
        v12 = v11;
        v13 = v11 + 1;
        v14 = &v9[v12];
      }
    }
    else
    {
      v7 = 24;
      v22 = (_QWORD *)sub_186B270(0x18u);
      v9 = v22 + 1;
      *v22 = 2;
      v13 = 1;
      *(_QWORD *)(v6 + 9456) = v9;
      v14 = v9;
    }
    *v14 = v10;
    *((_DWORD *)v9 - 1) = v13;
    sub_180B130(v7);
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v15 = sub_180B150(v7, v4);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v24, a2, *(_QWORD *)(a1 + 24), 0, 0, 0);
      v16 = sub_160E8B0(v15, v24);
      sub_91CD00(v16, ")\n");
      sub_18572D0(v25);
      sub_186A500(v25, ")\n");
    }
    else
    {
      v20 = sub_180B150(v7, v4);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v24, a2, *(_QWORD *)(a1 + 24), 0, 0, 0);
      v21 = sub_160E8B0(v20, v24);
      sub_91CD00(v21, ")\n");
      sub_18572D0(v25);
    }
    *(_BYTE *)(a1 + 232) = 1;
  }
}

