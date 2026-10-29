_QWORD *__fastcall sub_502E70(__int64 a1, __int64 a2, int a3, int *a4)
{
  char **exception; // rbx
  _QWORD *v5; // r12
  int *v9; // rbp
  _QWORD *v10; // rax
  _DWORD *v11; // rax
  _DWORD *v12; // rdx
  int v13; // ecx
  int v14; // edi
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // r13d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rax
  __int64 v21[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = nullptr;
  if ( *(_QWORD *)(a2 + 8) == a1 )
  {
    v5 = (_QWORD *)sub_186B270(0x10u);
    *v5 = &off_1C50360;
    v5[1] = 0;
    if ( a3 )
    {
      v9 = &a4[a3];
      v10 = (_QWORD *)sub_186B270(0x10u);
      *v10 = 2;
      v11 = v10 + 1;
      v5[1] = v11;
      v12 = v11;
      while ( 1 )
      {
        v13 = *a4++;
        *v11 = v13;
        v14 = *(v12 - 1);
        v15 = (unsigned int)(v14 + 1);
        *(v12 - 1) = v15;
        if ( v9 == a4 )
          break;
        v16 = *(v12 - 2);
        if ( v16 == (_DWORD)v15 )
        {
          v17 = (3 * v16 + 1) >> 1;
          v18 = 4 * v17 + 8;
          if ( 4 * v14 + 12 >= (unsigned int)v18 || v16 >= v17 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v21, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v21);
            sub_233E40((__int64)v21);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v19 = (unsigned int *)sub_186B300(v12 - 2, v18);
          v12 = v19 + 2;
          *v19 = v17;
          v20 = v19[1];
          v5[1] = v12;
          v11 = &v12[v20];
        }
        else
        {
          v11 = &v12[v15];
        }
      }
    }
  }
  return v5;
}

