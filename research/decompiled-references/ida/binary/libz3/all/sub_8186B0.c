__int64 __fastcall sub_8186B0(__int64 a1, int a2)
{
  char **exception; // rbx
  __int64 result; // rax
  _QWORD *v5; // rdx
  unsigned int v6; // ebp
  unsigned int v7; // r12d
  unsigned int v8; // r12d
  __int64 v9; // r14
  _QWORD *v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // r13d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rcx
  int v21; // r12d
  _QWORD *v22; // rax
  __int64 v23[9]; // [rsp+10h] [rbp-48h] BYREF

  sub_7E4990(a1, a2);
  result = *(_QWORD *)(a1 + 88);
  v5 = *(_QWORD **)(a1 + 184);
  if ( !result )
  {
    if ( !v5 )
      return result;
    v21 = *((_DWORD *)v5 - 1);
    if ( !v21 )
      return result;
    v8 = v21 - 1;
    v6 = 0;
    goto LABEL_5;
  }
  v6 = *(_DWORD *)(result - 4);
  if ( v5 )
  {
    v7 = *((_DWORD *)v5 - 1);
    if ( v6 < v7 )
    {
      v8 = v7 - 1;
LABEL_5:
      v9 = v8;
      while ( 1 )
      {
        v10 = (_QWORD *)v5[v9];
        if ( v10 )
        {
          v11 = v10[3];
          if ( v11 )
            sub_186B220((void *)(v11 - 8));
          v12 = v10[2];
          if ( v12 )
            sub_186B220((void *)(v12 - 8));
          v13 = v10[1];
          if ( v13 )
            sub_186B220((void *)(v13 - 8));
          sub_186B220(v10);
          v5 = *(_QWORD **)(a1 + 184);
        }
        result = v8 - 1;
        --v9;
        if ( v6 >= v8 )
          break;
        --v8;
      }
      if ( v5 )
        *((_DWORD *)v5 - 1) = v6;
      return result;
    }
    if ( v7 < v6 )
    {
      do
      {
        v16 = *((_DWORD *)v5 - 1);
        if ( v16 == *((_DWORD *)v5 - 2) )
        {
          v17 = (3 * v16 + 1) >> 1;
          v18 = 8 * v17 + 8;
          if ( 8 * v16 + 8 >= (unsigned int)v18 || v16 >= v17 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v23, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v23);
            sub_233E40((__int64)v23);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v19 = (unsigned int *)sub_186B300(v5 - 1, v18);
          v20 = v19[1];
          v5 = v19 + 2;
          *v19 = v17;
          *(_QWORD *)(a1 + 184) = v19 + 2;
          LODWORD(v19) = v20;
          v15 = &v5[v20];
          result = (unsigned int)((_DWORD)v19 + 1);
        }
        else
        {
          v14 = v16;
          result = v16 + 1;
          v15 = &v5[v14];
        }
LABEL_22:
        ++v7;
        *v15 = 0;
        *((_DWORD *)v5 - 1) = result;
      }
      while ( v6 != v7 );
    }
  }
  else if ( v6 )
  {
    v7 = 0;
    v22 = (_QWORD *)sub_186B270(0x18u);
    v5 = v22 + 1;
    *v22 = 2;
    result = 1;
    *(_QWORD *)(a1 + 184) = v5;
    v15 = v5;
    goto LABEL_22;
  }
  return result;
}

