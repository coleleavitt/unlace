void __fastcall sub_B15990(unsigned int a1, _DWORD *a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v5; // rdx
  __int64 v7; // rax
  _DWORD *v8; // rbx
  unsigned int v9; // ebp
  _DWORD *v10; // rsi
  unsigned int v11; // r15d
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rax
  int *v15; // rbp
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  _DWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // r12d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  char **exception; // rbp
  __int64 v28[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( a1 )
  {
    v5 = (_QWORD *)*a3;
    if ( !v5 )
    {
      v8 = a2;
      v9 = 0;
      v25 = (_QWORD *)sub_186B270(0x10u);
      v5 = v25 + 1;
      *v25 = 2;
      *a3 = v25 + 1;
      v10 = v25 + 1;
      goto LABEL_16;
    }
    v7 = *((unsigned int *)v5 - 1);
    v8 = a2;
    v9 = 0;
    v10 = (_DWORD *)v5 + v7;
    if ( (_DWORD)v7 != *((_DWORD *)v5 - 2) )
      goto LABEL_16;
    while ( 1 )
    {
      v11 = (unsigned int)(3 * v7 + 1) >> 1;
      v12 = 4 * v11 + 8;
      if ( 4 * (int)v7 + 8 >= (unsigned int)v12 || (unsigned int)v7 >= v11 )
      {
LABEL_20:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_B035D0(v28, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v28);
        sub_233E40((__int64)v28);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v9 += 2;
      v13 = (unsigned int *)sub_186B300(v5 - 1, v12);
      v5 = v13 + 2;
      *v13 = v11;
      v14 = v13[1];
      *a3 = v5;
      *((_DWORD *)v5 + v14) = *v8;
      ++*((_DWORD *)v5 - 1);
      if ( v9 >= a1 )
        break;
      while ( 1 )
      {
        v8 = &a2[v9];
        v7 = *((unsigned int *)v5 - 1);
        v10 = (_DWORD *)v5 + v7;
        if ( (_DWORD)v7 == *((_DWORD *)v5 - 2) )
          break;
LABEL_16:
        v9 += 2;
        *v10 = *v8;
        ++*((_DWORD *)v5 - 1);
        if ( v9 >= a1 )
          goto LABEL_7;
      }
    }
LABEL_7:
    if ( a1 != 1 )
    {
      v15 = a2 + 1;
      v16 = (_QWORD *)*a4;
      if ( *a4 )
        goto LABEL_11;
      v17 = (_QWORD *)sub_186B270(0x10u);
      v16 = v17 + 1;
      *v17 = 2;
      v18 = v17 + 1;
      *a4 = v17 + 1;
      while ( 1 )
      {
        v19 = *v15;
        v15 += 2;
        *v18 = v19;
        ++*((_DWORD *)v16 - 1);
        if ( &a2[2 * ((a1 - 2) >> 1) + 3] == v15 )
          break;
LABEL_11:
        v20 = *((unsigned int *)v16 - 1);
        v18 = (_DWORD *)v16 + v20;
        if ( (_DWORD)v20 == *((_DWORD *)v16 - 2) )
        {
          v21 = (unsigned int)(3 * v20 + 1) >> 1;
          v22 = 4 * v21 + 8;
          if ( 4 * (int)v20 + 8 >= (unsigned int)v22 || (unsigned int)v20 >= v21 )
            goto LABEL_20;
          v23 = (unsigned int *)sub_186B300(v16 - 1, v22);
          v16 = v23 + 2;
          *v23 = v21;
          v24 = v23[1];
          *a4 = v16;
          v18 = (_DWORD *)v16 + v24;
        }
      }
    }
  }
}

