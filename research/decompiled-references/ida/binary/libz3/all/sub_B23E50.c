__int64 __fastcall sub_B23E50(__int64 a1, __int64 a2)
{
  char **exception; // r12
  __int64 v4; // rax
  __int64 *v5; // rcx
  __int64 *v6; // r13
  int v7; // r14d
  _QWORD *v8; // rax
  int v9; // r14d
  int *v10; // rax
  int *v11; // rbx
  int v12; // edx
  int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // r15d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rdi
  int v19; // esi
  __int64 result; // rax
  __int64 v21; // [rsp-10h] [rbp-80h]
  __int64 *v22; // [rsp+8h] [rbp-68h]
  __int64 v23[10]; // [rsp+20h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  if ( !v4 || (v5 = *(__int64 **)(a2 + 8), v6 = &v5[*(unsigned int *)(v4 - 4)], v6 == v5) )
  {
    v18 = *(_QWORD *)(a1 + 16);
    v19 = *(_DWORD *)(a1 + 8);
    v11 = nullptr;
    v12 = 0;
  }
  else
  {
    v22 = *(__int64 **)(a2 + 8);
    v7 = sub_B232F0(a1, *v5);
    v8 = (_QWORD *)sub_186B270(0x10u);
    v9 = v7 ^ 1;
    *v8 = 2;
    v10 = (int *)(v8 + 1);
    v11 = v10;
    while ( 1 )
    {
      *v10 = v9;
      ++v22;
      v12 = *(v11 - 1) + 1;
      *(v11 - 1) = v12;
      if ( v6 == v22 )
        break;
      v13 = sub_B232F0(a1, *v22);
      v14 = (unsigned int)*(v11 - 1);
      v9 = v13 ^ 1;
      v10 = &v11[v14];
      if ( (_DWORD)v14 == *(v11 - 2) )
      {
        v15 = (unsigned int)(3 * v14 + 1) >> 1;
        v16 = 4 * v15 + 8;
        if ( 4 * (int)v14 + 8 >= (unsigned int)v16 || (unsigned int)v14 >= v15 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v23, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v23);
          sub_233E40((__int64)v23);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v17 = (unsigned int *)sub_186B300(v11 - 2, v16);
        v11 = (int *)(v17 + 2);
        *v17 = v15;
        v10 = (int *)&v17[v17[1] + 2];
      }
    }
    v18 = *(_QWORD *)(a1 + 16);
    v19 = *(_DWORD *)(a1 + 8);
  }
  sub_B69FE0(v18, v19, v12, (_DWORD)v11, 0, 0, 1);
  result = v21;
  if ( v11 )
    return sub_186B220(v11 - 2);
  return result;
}

