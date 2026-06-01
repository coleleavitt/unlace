_QWORD *__fastcall sub_50E180(__int64 a1, __int64 a2, int a3, int *a4)
{
  char **exception; // rbx
  _QWORD *v7; // r12
  int *v8; // rbp
  _QWORD *v9; // rax
  _DWORD *v10; // rax
  _DWORD *v11; // rdx
  int v12; // ecx
  int v13; // edi
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v17; // r13d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rax
  __int64 v21[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( *(_QWORD *)(a2 + 8) != a1 )
    return nullptr;
  v7 = (_QWORD *)sub_186B270(0x10u);
  *v7 = &off_1C50588;
  v7[1] = 0;
  if ( a3 )
  {
    v8 = &a4[a3];
    v9 = (_QWORD *)sub_186B270(0x10u);
    *v9 = 2;
    v10 = v9 + 1;
    v7[1] = v10;
    v11 = v10;
    while ( 1 )
    {
      v12 = *a4++;
      *v10 = v12;
      v13 = *(v11 - 1);
      v14 = (unsigned int)(v13 + 1);
      *(v11 - 1) = v14;
      if ( v8 == a4 )
        break;
      v15 = *(v11 - 2);
      if ( v15 == (_DWORD)v14 )
      {
        v17 = (3 * v15 + 1) >> 1;
        v18 = 4 * v17 + 8;
        if ( 4 * v13 + 12 >= (unsigned int)v18 || v15 >= v17 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v21, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v21);
          sub_233E40((__int64)v21);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v19 = (unsigned int *)sub_186B300(v11 - 2, v18);
        v11 = v19 + 2;
        *v19 = v17;
        v20 = v19[1];
        v7[1] = v11;
        v10 = &v11[v20];
      }
      else
      {
        v10 = &v11[v14];
      }
    }
  }
  return v7;
}

