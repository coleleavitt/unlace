__int64 __fastcall sub_251FD0(__int64 a1, __int64 a2)
{
  char **exception; // r12
  char **v3; // rbp
  _QWORD *v6; // rbx
  _QWORD *v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 result; // rax
  _QWORD *v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // rdx
  _QWORD *v15; // rdx
  unsigned int v16; // ebx
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 224) )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v6 = *(_QWORD **)(a1 + 1392);
    if ( !v6 )
      goto LABEL_20;
    v7 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 >= v7 )
      goto LABEL_12;
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          v9 = *(_QWORD *)(a1 + 1384);
          if ( (*(_DWORD *)(v8 + 8))-- == 1 )
            break;
        }
        if ( ++v6 >= v7 )
          goto LABEL_11;
      }
      sub_15D7BC0(v9, v8);
      ++v6;
    }
    while ( v6 < v7 );
LABEL_11:
    v6 = *(_QWORD **)(a1 + 1392);
    if ( v6 )
    {
LABEL_12:
      result = *((unsigned int *)v6 - 2);
      *((_DWORD *)v6 - 1) = 0;
      if ( !(_DWORD)result )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v21, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v21);
        sub_233E40((__int64)v21);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
    }
    else
    {
LABEL_20:
      result = sub_186B270(0x18u);
      v6 = (_QWORD *)(result + 8);
      *(_QWORD *)result = 2;
      *(_QWORD *)(a1 + 1392) = result + 8;
    }
    *v6 = a2;
    *((_DWORD *)v6 - 1) = 1;
  }
  else
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v12 = *(_QWORD **)(a1 + 1392);
    if ( v12 )
    {
      v13 = *((_DWORD *)v12 - 1);
      if ( v13 == *((_DWORD *)v12 - 2) )
      {
        v16 = (3 * v13 + 1) >> 1;
        v17 = 8 * v16 + 8;
        if ( 8 * v13 + 8 >= (unsigned int)v17 || v13 >= v16 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v21, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v21);
          sub_233E40((__int64)v21);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v18 = (unsigned int *)sub_186B300(v12 - 1, v17);
        v19 = v18[1];
        v12 = v18 + 2;
        *v18 = v16;
        *(_QWORD *)(a1 + 1392) = v18 + 2;
        LODWORD(v18) = v19;
        v15 = &v12[v19];
        result = (unsigned int)((_DWORD)v18 + 1);
      }
      else
      {
        v14 = v13;
        result = v13 + 1;
        v15 = &v12[v14];
      }
    }
    else
    {
      v20 = (_QWORD *)sub_186B270(0x18u);
      v12 = v20 + 1;
      *v20 = 2;
      result = 1;
      *(_QWORD *)(a1 + 1392) = v12;
      v15 = v12;
    }
    *v15 = a2;
    *((_DWORD *)v12 - 1) = result;
  }
  return result;
}

