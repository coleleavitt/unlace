__int64 __fastcall sub_DE2D20(__int64 a1, _DWORD *a2)
{
  char **exception; // rbx
  __int64 v5; // rax
  int v6; // r13d
  __int64 v7; // r12
  _QWORD *v9; // rdi
  __int64 v10; // rax
  _DWORD *v11; // rax
  unsigned int v12; // r14d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a2);
  v6 = a2[2];
  v7 = v5;
  if ( !(unsigned __int8)sub_186AF10(a2) )
  {
    v9 = *(_QWORD **)(a1 + 24);
    if ( v9 )
    {
      v10 = *((unsigned int *)v9 - 1);
      if ( (_DWORD)v10 == *((_DWORD *)v9 - 2) )
      {
        v12 = (unsigned int)(3 * v10 + 1) >> 1;
        v13 = 4 * v12 + 8;
        if ( 4 * (int)v10 + 8 >= (unsigned int)v13 || (unsigned int)v10 >= v12 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v17, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v17);
          sub_233E40((__int64)v17);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v14 = (unsigned int *)sub_186B300(v9 - 1, v13);
        v9 = v14 + 2;
        *v14 = v12;
        v15 = v14[1];
        *(_QWORD *)(a1 + 24) = v9;
        v11 = (_DWORD *)v9 + v15;
      }
      else
      {
        v11 = (_DWORD *)v9 + v10;
      }
    }
    else
    {
      v16 = (_QWORD *)sub_186B270(0x10u);
      v9 = v16 + 1;
      *v16 = 2;
      *(_QWORD *)(a1 + 24) = v16 + 1;
      v11 = v16 + 1;
    }
    *v11 = v6;
    ++*((_DWORD *)v9 - 1);
  }
  (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a2 + 16LL))(a2, a1);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 24LL))(a2);
  return sub_17E9C40(*(_QWORD *)(a1 + 8), v7, a2);
}

