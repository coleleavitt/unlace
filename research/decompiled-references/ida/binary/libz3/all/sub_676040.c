void __fastcall sub_676040(__int64 *a1, unsigned int a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  _QWORD *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  _QWORD *v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // ebp
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rbp
  __int64 *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rdi
  _QWORD *v21; // rax
  __int64 v22[9]; // [rsp+0h] [rbp-48h] BYREF

  v6 = (_QWORD *)a1[1];
  if ( v6 )
  {
    v7 = *((unsigned int *)v6 - 1);
    if ( a2 < (unsigned int)v7 )
    {
      v16 = (unsigned __int64)&v6[v7];
      v17 = &v6[a2];
      if ( (unsigned __int64)v17 >= v16 )
        goto LABEL_18;
      do
      {
        while ( 1 )
        {
          v18 = *v17;
          if ( *v17 )
          {
            v19 = *a1;
            if ( (*(_DWORD *)(v18 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v17 >= v16 )
            goto LABEL_17;
        }
        sub_15D7BC0(v19, v18);
        ++v17;
      }
      while ( (unsigned __int64)v17 < v16 );
LABEL_17:
      v6 = (_QWORD *)a1[1];
      if ( v6 )
LABEL_18:
        *((_DWORD *)v6 - 1) = a2;
    }
    else if ( (unsigned int)v7 < a2 )
    {
      do
      {
        v11 = *((_DWORD *)v6 - 1);
        if ( v11 == *((_DWORD *)v6 - 2) )
        {
          v12 = (3 * v11 + 1) >> 1;
          v13 = 8 * v12 + 8;
          if ( 8 * v11 + 8 >= (unsigned int)v13 || v11 >= v12 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_107EF6(v22, "Overflow encountered when expanding vector", v3);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v22);
            sub_233E40((__int64)v22);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v14 = (unsigned int *)sub_186B300(v6 - 1, v13);
          v15 = v14[1];
          v6 = v14 + 2;
          *v14 = v12;
          a1[1] = (__int64)(v14 + 2);
          LODWORD(v14) = v15;
          v10 = &v6[v15];
          v9 = (_DWORD)v14 + 1;
        }
        else
        {
          v8 = v11;
          v9 = v11 + 1;
          v10 = &v6[v8];
        }
LABEL_6:
        LODWORD(v7) = v7 + 1;
        *v10 = 0;
        *((_DWORD *)v6 - 1) = v9;
      }
      while ( a2 != (_DWORD)v7 );
    }
  }
  else if ( a2 )
  {
    LODWORD(v7) = 0;
    v21 = (_QWORD *)sub_186B270(0x18u);
    v6 = v21 + 1;
    *v21 = 2;
    v9 = 1;
    a1[1] = (__int64)v6;
    v10 = v6;
    goto LABEL_6;
  }
}

