__int64 __fastcall sub_B71780(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  char **exception; // rbx
  __int64 *v6; // r13
  _QWORD *v9; // rdx
  __int64 *v10; // r15
  __int64 v12; // rcx
  int v13; // eax
  unsigned int *v14; // rsi
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  size_t v18; // rsi
  unsigned int v19; // ebp
  unsigned int *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v24[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = a5;
  v9 = *(_QWORD **)(a1 + 64);
  if ( v9 )
  {
    *((_DWORD *)v9 - 1) = 0;
    v10 = &a5[a4];
    if ( a4 )
    {
      do
      {
        v16 = *((_DWORD *)v9 - 1);
        if ( v16 == *((_DWORD *)v9 - 2) )
        {
          v17 = (3 * v16 + 1) >> 1;
          v18 = 8 * v17 + 8;
          v19 = v17;
          if ( 8 * v16 + 8 >= (unsigned int)v18 || v16 >= v17 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v24, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v24);
            sub_233E40((__int64)v24);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v20 = (unsigned int *)sub_186B300(v9 - 1, v18);
          v21 = v20[1];
          v9 = v20 + 2;
          *v20 = v19;
          *(_QWORD *)(a1 + 64) = v20 + 2;
          v14 = &v20[2 * v21 + 2];
          v13 = v21 + 1;
        }
        else
        {
          v12 = v16;
          v13 = v16 + 1;
          v14 = (unsigned int *)&v9[v12];
        }
LABEL_5:
        v15 = *v6++;
        *(_QWORD *)v14 = v15;
        *((_DWORD *)v9 - 1) = v13;
      }
      while ( v10 != v6 );
    }
  }
  else if ( a4 )
  {
    v10 = &a5[a4];
    v22 = (_QWORD *)sub_186B270(0x18u);
    v9 = v22 + 1;
    *v22 = 2;
    v13 = 1;
    *(_QWORD *)(a1 + 64) = v9;
    v14 = (unsigned int *)v9;
    goto LABEL_5;
  }
  *(_DWORD *)(a1 + 80) = a3;
  *(_DWORD *)(a1 + 96) = a4;
  *(_QWORD *)(a1 + 72) = a2;
  *(_QWORD *)(a1 + 104) = v9;
  return a1 + 72;
}

