__int64 __fastcall sub_5A4920(__int64 a1, __int64 a2, char *a3)
{
  char **exception; // rbx
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // r13
  char *v7; // r14
  char *v8; // r13
  unsigned int v9; // ebp
  _QWORD *v10; // rax
  unsigned int v11; // ebx
  _BYTE *v12; // rax
  _BYTE *v13; // r12
  char v14; // cl
  __int64 v15; // rax
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rax
  int v19; // ebx
  __int64 v20; // rax
  signed __int64 v21; // rdx
  void *v22; // r13
  void *v23; // rcx
  unsigned int v24; // ebx
  __int64 v26; // [rsp+20h] [rbp-58h] BYREF
  void *v27; // [rsp+28h] [rbp-50h]

  v4 = a2 + 16;
  v5 = *(_QWORD *)(a2 + 16);
  if ( v5 && (v6 = *(unsigned int *)(v5 - 4), (_DWORD)v6) )
  {
    v7 = a3;
    v8 = &a3[v6];
    v9 = 2;
    v10 = (_QWORD *)sub_186B270(0xAu);
    v11 = 1;
    *v10 = 2;
    v12 = v10 + 1;
    v13 = v12;
    while ( 1 )
    {
      v14 = *v7++;
      *v12 = v14;
      *((_DWORD *)v13 - 1) = v11;
      if ( v8 == v7 )
        break;
      v9 = *((_DWORD *)v13 - 2);
      if ( v9 == v11 )
      {
        v9 = (3 * v9 + 1) >> 1;
        v16 = v9 + 8;
        if ( v11 + 8 >= (unsigned int)v16 || v11 >= v9 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v26, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v26);
          sub_233E40((__int64)&v26);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v17 = (unsigned int *)sub_186B300(v13 - 8, v16);
        v13 = v17 + 2;
        *v17 = v9;
        v18 = v17[1];
        v19 = v18;
        v12 = &v13[v18];
        v11 = v19 + 1;
      }
      else
      {
        v15 = v11++;
        v12 = &v13[v15];
      }
    }
    LODWORD(v26) = -1;
    v20 = sub_186B270(v9 + 8LL);
    v21 = *((unsigned int *)v13 - 1);
    *(_DWORD *)v20 = v9;
    v22 = (void *)v20;
    v23 = (void *)(v20 + 8);
    *(_DWORD *)(v20 + 4) = v11;
    if ( v21 <= 1 )
    {
      if ( v21 == 1 )
        *(_BYTE *)(v20 + 8) = *v13;
    }
    else
    {
      v23 = memcpy((void *)(v20 + 8), v13, v21);
    }
    v27 = v23;
    v24 = sub_5AD3C0(a1 + 48, v4, &v26);
    sub_186B220(v22);
    sub_186B220(v13 - 8);
  }
  else
  {
    LODWORD(v26) = -1;
    v27 = nullptr;
    return (unsigned int)sub_5AD3C0(a1 + 48, a2 + 16, &v26);
  }
  return v24;
}

