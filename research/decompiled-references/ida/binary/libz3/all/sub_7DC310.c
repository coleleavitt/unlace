__int64 __fastcall sub_7DC310(__int64 a1, __int64 a2)
{
  char **exception; // r12
  _QWORD *v3; // rbp
  _QWORD *v4; // r13
  int v5; // r14d
  _QWORD *v6; // rax
  int v7; // r14d
  int *v8; // rax
  int *v9; // rbx
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // ecx
  size_t v14; // rsi
  unsigned int *v15; // rax
  unsigned int v17; // [rsp+Ch] [rbp-6Ch]
  __int64 v18[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(_QWORD **)(a2 + 8);
  if ( !v3 )
    return sub_7E56B0(a1, 0, 0, 0, 0);
  v4 = &v3[*((unsigned int *)v3 - 1)];
  if ( v4 == v3 )
    return sub_7E56B0(a1, 0, 0, 0, 0);
  v5 = sub_7E58C0(a1, *v3);
  v6 = (_QWORD *)sub_186B270(0x10u);
  v7 = v5 ^ 1;
  *v6 = 2;
  v8 = (int *)(v6 + 1);
  v9 = v8;
  while ( 1 )
  {
    *v8 = v7;
    ++v3;
    v10 = (unsigned int)(*(v9 - 1) + 1);
    *(v9 - 1) = v10;
    if ( v4 == v3 )
      break;
    v11 = sub_7E58C0(a1, *v3);
    v12 = (unsigned int)*(v9 - 1);
    v7 = v11 ^ 1;
    v8 = &v9[v12];
    if ( (_DWORD)v12 == *(v9 - 2) )
    {
      v13 = (unsigned int)(3 * v12 + 1) >> 1;
      v14 = 4 * v13 + 8;
      if ( 4 * (int)v12 + 8 >= (unsigned int)v14 || (unsigned int)v12 >= v13 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v18, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v18);
        sub_233E40((__int64)v18);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = (unsigned int)(3 * v12 + 1) >> 1;
      v15 = (unsigned int *)sub_186B300(v9 - 2, v14);
      v9 = (int *)(v15 + 2);
      *v15 = v17;
      v8 = (int *)&v15[v15[1] + 2];
    }
  }
  sub_7E56B0(a1, v10, v9, 0, 0);
  return sub_186B220(v9 - 2);
}

