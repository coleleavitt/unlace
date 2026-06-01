__int64 __fastcall sub_7A9670(__int64 a1, __int64 a2)
{
  char **exception; // r12
  __int64 *v3; // rbp
  __int64 *v4; // r13
  unsigned int v5; // r15d
  _QWORD *v6; // rax
  unsigned int *v7; // rax
  unsigned int *v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // edx
  size_t v12; // rsi
  unsigned int *v13; // rax
  unsigned int v15; // [rsp+Ch] [rbp-6Ch]
  __int64 v16[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(__int64 **)(a2 + 8);
  if ( !v3 )
    return sub_7E56B0(a1, 0, 0, 0, 0);
  v4 = &v3[*((unsigned int *)v3 - 1)];
  if ( v3 == v4 )
    return sub_7E56B0(a1, 0, 0, 0, 0);
  v5 = sub_79C480(*(_QWORD *)(a1 + 80), *v3);
  v6 = (_QWORD *)sub_186B270(0x10u);
  *v6 = 2;
  v7 = (unsigned int *)(v6 + 1);
  v8 = v7;
  while ( 1 )
  {
    *v7 = v5;
    ++v3;
    v9 = *(v8 - 1) + 1;
    *(v8 - 1) = v9;
    if ( v3 == v4 )
      break;
    v5 = sub_79C480(*(_QWORD *)(a1 + 80), *v3);
    v10 = *(v8 - 1);
    if ( (_DWORD)v10 == *(v8 - 2) )
    {
      v11 = (unsigned int)(3 * v10 + 1) >> 1;
      v12 = 4 * v11 + 8;
      if ( 4 * (int)v10 + 8 >= (unsigned int)v12 || (unsigned int)v10 >= v11 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v16, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v16);
        sub_233E40((__int64)v16);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v15 = (unsigned int)(3 * v10 + 1) >> 1;
      v13 = (unsigned int *)sub_186B300(v8 - 2, v12);
      v8 = v13 + 2;
      *v13 = v15;
      v7 = &v13[v13[1] + 2];
    }
    else
    {
      v7 = &v8[v10];
    }
  }
  sub_7E56B0(a1, v9, v8, 0, 0);
  return sub_186B220(v8 - 2);
}

