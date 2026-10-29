void __fastcall sub_B73920(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  _QWORD *v4; // rsi
  _QWORD *v5; // rdx
  __int64 v7; // rdx
  _QWORD *v8; // rbp
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned int *v13; // rax
  unsigned int v14; // r12d
  size_t v15; // rsi
  unsigned int *v16; // rax
  _QWORD *v17; // rax
  __int64 v18[7]; // [rsp+10h] [rbp-38h] BYREF

  v4 = *(_QWORD **)(a1 + 16);
  v5 = *(_QWORD **)(a1 + 24);
  if ( v4 != v5 )
  {
    sub_98A120(a2, v4, v5);
    v7 = *(_QWORD *)(a2 + 24);
    v8 = *(_QWORD **)(a2 + 176);
    v9 = (_QWORD *)*v8;
    v10 = (unsigned int)(2 * *(_DWORD *)(*(_QWORD *)(v7 + 8832) + 4LL * ***(unsigned int ***)(a1 + 16)));
    v11 = v10 + (*(_BYTE *)(*(_QWORD *)(v7 + 8848) + v10) == 0xFF);
    if ( *v8 )
    {
      v12 = *((unsigned int *)v9 - 1);
      if ( (_DWORD)v12 == *((_DWORD *)v9 - 2) )
      {
        v14 = (unsigned int)(3 * v12 + 1) >> 1;
        v15 = 4 * v14 + 8;
        if ( 4 * (int)v12 + 8 >= (unsigned int)v15 || (unsigned int)v12 >= v14 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v18, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v18);
          sub_233E40((__int64)v18);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v16 = (unsigned int *)sub_186B300(v9 - 1, v15);
        v9 = v16 + 2;
        *v8 = v16 + 2;
        *v16 = v14;
        v13 = &v16[v16[1] + 2];
      }
      else
      {
        v13 = (unsigned int *)v9 + v12;
      }
    }
    else
    {
      v17 = (_QWORD *)sub_186B270(0x10u);
      v9 = v17 + 1;
      *v17 = 2;
      *v8 = v17 + 1;
      v13 = (unsigned int *)(v17 + 1);
    }
    *v13 = v11;
    ++*((_DWORD *)v9 - 1);
  }
}

