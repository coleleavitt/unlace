__int64 __fastcall sub_B54D60(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 (*v5)(void); // rax
  _QWORD *v6; // rdi
  unsigned int v7; // ebp
  _QWORD *v8; // rdx
  int v9; // eax
  unsigned int v11; // r13d
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v16[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = **(__int64 (***)(void))a1;
  if ( (char *)v5 == (char *)sub_902EE0 )
  {
    v6 = *(_QWORD **)(a1 + 32);
    if ( v6 )
    {
      v7 = *((_DWORD *)v6 - 1);
      if ( v7 == *((_DWORD *)v6 - 2) )
      {
        v11 = (3 * v7 + 1) >> 1;
        v12 = 8 * v11 + 8;
        if ( 8 * v7 + 8 >= (unsigned int)v12 || v7 >= v11 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v16, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v16);
          sub_233E40((__int64)v16);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v13 = (unsigned int *)sub_186B300(v6 - 1, v12);
        v14 = v13[1];
        v6 = v13 + 2;
        *v13 = v11;
        *(_QWORD *)(a1 + 32) = v13 + 2;
        LODWORD(v13) = v14;
        v8 = &v6[v14];
        v9 = (_DWORD)v13 + 1;
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
      v15 = (_QWORD *)sub_186B270(0x18u);
      v6 = v15 + 1;
      *v15 = 2;
      v9 = 1;
      *(_QWORD *)(a1 + 32) = v6;
      v8 = v6;
    }
    *v8 = a2;
    *((_DWORD *)v6 - 1) = v9;
  }
  else
  {
    v7 = v5();
  }
  return sub_B66EF0(*(_QWORD *)(a1 + 16), a2, a1, v7);
}

