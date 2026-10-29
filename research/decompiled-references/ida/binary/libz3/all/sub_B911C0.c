__int64 __fastcall sub_B911C0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdx
  unsigned int v4; // ebp
  unsigned int v5; // esi
  __int64 *v6; // rcx
  int v7; // eax
  unsigned int v8; // r13d
  unsigned int v10; // r14d
  size_t v11; // rsi
  unsigned int *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  char **exception; // rbx
  __int64 v16[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = *(_QWORD **)(a1 + 32);
  if ( v3 )
  {
    v4 = *((_DWORD *)v3 - 1);
    if ( v4 == *((_DWORD *)v3 - 2) )
    {
      v10 = (3 * v4 + 1) >> 1;
      v11 = 8 * v10 + 8;
      if ( 8 * v4 + 8 >= (unsigned int)v11 || v4 >= v10 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_B75C60(v16, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v16);
        sub_233E40((__int64)v16);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v12 = (unsigned int *)sub_186B300(v3 - 1, v11);
      v5 = 2 * v4;
      v8 = (2 * v4) | 1;
      v13 = v12[1];
      v3 = v12 + 2;
      *v12 = v10;
      *(_QWORD *)(a1 + 32) = v12 + 2;
      LODWORD(v12) = v13;
      v6 = &v3[v13];
      v7 = (_DWORD)v12 + 1;
    }
    else
    {
      v5 = 2 * v4;
      v6 = &v3[v4];
      v7 = v4 + 1;
      v8 = (2 * v4) | 1;
    }
  }
  else
  {
    v8 = 1;
    v4 = 0;
    v14 = (_QWORD *)sub_186B270(0x18u);
    v5 = 0;
    v3 = v14 + 1;
    *v14 = 2;
    v7 = 1;
    *(_QWORD *)(a1 + 32) = v3;
    v6 = v3;
  }
  *v6 = a2;
  *((_DWORD *)v3 - 1) = v7;
  sub_B908E0(a1 + 968, v5);
  sub_B908E0(a1 + 968, v8);
  sub_B66EF0(*(_QWORD **)(a1 + 16), a2, (unsigned int *)a1, v4);
  return v4;
}

