__int64 __fastcall sub_3419C0(_QWORD *a1, __int64 a2)
{
  char **exception; // rbp
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int v7; // r14d
  __int64 result; // rax
  __int64 v9; // r13
  _QWORD *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdi
  unsigned int v18; // r15d
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  unsigned __int8 v23; // [rsp+Fh] [rbp-69h]
  int v24[2]; // [rsp+10h] [rbp-68h] BYREF
  int v25[2]; // [rsp+18h] [rbp-60h]
  __int64 v26[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = a1[111];
  *(_QWORD *)v24 = 0;
  *(_QWORD *)v25 = v4;
  v5 = a1[116];
  if ( !v5 )
    return 1;
  v7 = 0;
  do
  {
    if ( v7 >= *(_DWORD *)(v5 - 4) )
      break;
    result = sub_33EE60(a1, v7, (__int64 *)v24);
    v9 = *(_QWORD *)v24;
    if ( !(_BYTE)result )
      goto LABEL_12;
    if ( *(_QWORD *)v24 )
      ++*(_DWORD *)(*(_QWORD *)v24 + 8LL);
    v10 = *(_QWORD **)(a2 + 8);
    if ( v10 )
    {
      v11 = *((_DWORD *)v10 - 1);
      if ( v11 == *((_DWORD *)v10 - 2) )
      {
        v18 = (3 * v11 + 1) >> 1;
        v19 = 8 * v18 + 8;
        if ( 8 * v11 + 8 >= (unsigned int)v19 || v11 >= v18 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_BFCE0(v26, "Overflow encountered when expanding vector", v3);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v26);
          sub_233E40((__int64)v26);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v20 = (unsigned int *)sub_186B300(v10 - 1, v19);
        v21 = v20[1];
        v10 = v20 + 2;
        *v20 = v18;
        *(_QWORD *)(a2 + 8) = v20 + 2;
        LODWORD(v20) = v21;
        v14 = &v10[v21];
        v13 = (_DWORD)v20 + 1;
      }
      else
      {
        v12 = v11;
        v13 = v11 + 1;
        v14 = &v10[v12];
      }
    }
    else
    {
      v22 = (_QWORD *)sub_186B270(0x18u);
      v10 = v22 + 1;
      *v22 = 2;
      v13 = 1;
      *(_QWORD *)(a2 + 8) = v10;
      v14 = v10;
    }
    *v14 = v9;
    ++v7;
    *((_DWORD *)v10 - 1) = v13;
    v5 = a1[116];
  }
  while ( v5 );
  result = 1;
LABEL_12:
  v15 = *(_QWORD *)v24;
  v16 = *(_QWORD *)v25;
  if ( *(_QWORD *)v24 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)v24 + 8LL))-- == 1 )
    {
      v23 = result;
      sub_15D7BC0(v16, v15);
      return v23;
    }
  }
  return result;
}

