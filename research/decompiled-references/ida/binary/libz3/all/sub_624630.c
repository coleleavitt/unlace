__int64 __fastcall sub_624630(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  char **exception; // r12
  __int64 v5; // r12
  _QWORD *v7; // rax
  __int64 *v8; // r15
  unsigned int v9; // eax
  unsigned int v10; // r9d
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // r12d
  size_t v14; // rsi
  unsigned int *v15; // rax
  _DWORD *v16; // rcx
  _QWORD *v17; // r15
  __int64 v18; // rbx
  int v20[2]; // [rsp+8h] [rbp-68h]
  __int64 v21[10]; // [rsp+20h] [rbp-50h] BYREF

  v5 = a3;
  v7 = (_QWORD *)sub_186B270(0x18u);
  v7[1] = a2;
  *(_QWORD *)v20 = v7 + 1;
  *v7 = 0x100000002LL;
  if ( (_DWORD)v5 )
  {
    v8 = &a4[v5];
    v9 = 2;
    v10 = 1;
    while ( 1 )
    {
      v11 = *a4;
      v12 = v10;
      ++a4;
      ++v10;
      *(_QWORD *)(*(_QWORD *)v20 + 8 * v12) = v11;
      *(_DWORD *)(*(_QWORD *)v20 - 4LL) = v10;
      if ( v8 == a4 )
        break;
      if ( v9 == v10 )
      {
        v13 = (3 * v9 + 1) >> 1;
        v14 = 8 * v13 + 8;
        if ( 8 * v9 + 8 >= (unsigned int)v14 || v9 >= v13 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v21, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v21);
          sub_233E40((__int64)v21);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v15 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v20 - 8LL), v14);
        v16 = v15 + 2;
        *v15 = v13;
        v10 = v15[1];
        v9 = v13;
        *(_QWORD *)v20 = v16;
      }
    }
    v17 = *(_QWORD **)v20;
  }
  else
  {
    v17 = v7 + 1;
  }
  v18 = sub_15DCAD0(*(_QWORD *)(a1 + 48), (int)v17, 0);
  sub_186B220(v17 - 1);
  return v18;
}

