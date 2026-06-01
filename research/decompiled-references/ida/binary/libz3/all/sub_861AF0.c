__int64 __fastcall sub_861AF0(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // rbx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r12
  _QWORD *v8; // rax
  unsigned int v9; // r9d
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // r14d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rax
  int v18; // r9d
  __int64 v19; // r12
  __int64 v20; // r13
  unsigned int *v21; // rbx
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // r8
  int v25; // r9d
  unsigned int v26; // r15d
  unsigned int *v29; // [rsp+8h] [rbp-58h] BYREF
  __int64 v30[10]; // [rsp+10h] [rbp-50h] BYREF

  v5 = a2;
  ++*(_DWORD *)(a1 + 156);
  v29 = nullptr;
  if ( !(unsigned __int8)sub_16842C0(a1 + 112, a3, &v29) )
  {
    sub_1872CE0("");
    sub_1873130(114, 242);
  }
  v6 = *(unsigned int *)(a2 + 24);
  if ( (_DWORD)v6 )
  {
    v7 = a2 + 8 * v6;
    v8 = (_QWORD *)sub_186B270(0x18u);
    v9 = 1;
    *v8 = 2;
    v10 = v8 + 1;
    v11 = v10;
    while ( 1 )
    {
      v12 = *(_QWORD *)(v5 + 32);
      v5 += 8;
      *v10 = v12;
      *((_DWORD *)v11 - 1) = v9;
      if ( v7 == v5 )
        break;
      if ( *((_DWORD *)v11 - 2) == v9 )
      {
        v14 = (3 * v9 + 1) >> 1;
        v15 = 8 * v14 + 8;
        if ( 8 * v9 + 8 >= (unsigned int)v15 || v9 >= v14 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v30, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v30);
          sub_233E40((__int64)v30);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v16 = (unsigned int *)sub_186B300(v11 - 1, v15);
        v11 = v16 + 2;
        *v16 = v14;
        v17 = v16[1];
        v18 = v17;
        v10 = &v11[v17];
        v9 = v18 + 1;
      }
      else
      {
        v13 = v9++;
        v10 = &v11[v13];
      }
    }
    v19 = (__int64)(v11 - 1);
  }
  else
  {
    v19 = -8;
    v11 = nullptr;
  }
  *v11 = a3;
  v20 = *(_QWORD *)(a1 + 72);
  v21 = (unsigned int *)sub_15DCAD0(*(_QWORD *)(a1 + 120), (int)v11, 0);
  if ( v21 )
    ++v21[2];
  v22 = sub_7E5940(a1, v21);
  v23 = sub_7E4F00(a1, v29);
  v26 = sub_7CA650(*(_QWORD *)(a1 + 80), v22, v23, *(_QWORD *)(a1 + 464), v24, v25);
  if ( v21 )
  {
    if ( v21[2]-- == 1 )
      sub_15D7BC0(v20, v21);
  }
  sub_186B220((void *)v19);
  return v26;
}

