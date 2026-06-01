__int64 __fastcall sub_7B5EC0(__int64 a1, unsigned int a2, __int64 a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // edx
  __int64 result; // rax
  _QWORD *v12; // rdx
  __int64 v13; // rax
  _DWORD *v14; // rcx
  unsigned int v15; // r14d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rax
  unsigned int *v19; // rax
  int v20; // edx
  __int64 v21; // r12
  unsigned int v22; // ebx
  __int64 v23; // rdi
  __int64 v24; // rax
  int v25; // esi
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rsi
  _QWORD *v31; // rax
  __int64 v32; // [rsp+0h] [rbp-58h] BYREF
  __int64 v33; // [rsp+8h] [rbp-50h]

  v5 = a2;
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 )
    *(_DWORD *)(v8 - 4) = 0;
  if ( !a2 )
    return *(_DWORD *)(a1 + 8) ^ 1u;
  v9 = 0;
  while ( 1 )
  {
    v10 = *(_DWORD *)(a3 + 4 * v9);
    result = *(unsigned int *)(a1 + 8);
    if ( (_DWORD)result == v10 )
      break;
    if ( v10 != ((unsigned int)result ^ 1) )
    {
      v12 = *(_QWORD **)(a1 + 16);
      if ( v12 )
      {
        v13 = *((unsigned int *)v12 - 1);
        v14 = (_DWORD *)v12 + v13;
        if ( (_DWORD)v13 == *((_DWORD *)v12 - 2) )
        {
          v15 = (unsigned int)(3 * v13 + 1) >> 1;
          v16 = 4 * v15 + 8;
          if ( 4 * (int)v13 + 8 >= (unsigned int)v16 || (unsigned int)v13 >= v15 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_113C8C(&v32, "Overflow encountered when expanding vector", v4);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v32);
            sub_233E40((__int64)&v32);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v17 = (unsigned int *)sub_186B300(v12 - 1, v16);
          v12 = v17 + 2;
          *v17 = v15;
          v18 = v17[1];
          *(_QWORD *)(a1 + 16) = v12;
          v14 = (_DWORD *)v12 + v18;
        }
      }
      else
      {
        v31 = (_QWORD *)sub_186B270(0x10u);
        v12 = v31 + 1;
        *v31 = 2;
        *(_QWORD *)(a1 + 16) = v31 + 1;
        v14 = v31 + 1;
      }
      *v14 = *(_DWORD *)(a3 + 4 * v9);
      ++*((_DWORD *)v12 - 1);
    }
    if ( (unsigned int)++v9 >= (unsigned int)v5 )
    {
      v19 = *(unsigned int **)(a1 + 16);
      if ( v19 )
      {
        v20 = *(v19 - 1);
        if ( v20 )
        {
          if ( v20 == 1 )
            return *v19;
          v21 = 0;
          v22 = 2 * sub_11CA540(*(_QWORD *)(*(_QWORD *)a1 + 24LL), 0, 1);
          do
          {
            v23 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
            v24 = *(_QWORD *)(a1 + 16);
            v32 = 0xFFFFFFFF00000001LL;
            v33 = 0;
            v25 = *(_DWORD *)(v24 + v21);
            v21 += 4;
            sub_11C4C70(v23, v25 ^ 1u, v22, &v32);
          }
          while ( v21 != 4 * v5 );
          LODWORD(v32) = v22 ^ 1;
          sub_7B5E20((_QWORD *)(a1 + 16), (unsigned int *)&v32);
          v28 = *(_QWORD *)(a1 + 16);
          v29 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
          v32 = 0xFFFFFFFF00000001LL;
          v33 = 0;
          if ( v28 )
            v30 = *(unsigned int *)(v28 - 4);
          else
            v30 = 0;
          sub_11C4C20(v29, v30, v28, &v32, v26, v27);
          return v22;
        }
      }
      return *(_DWORD *)(a1 + 8) ^ 1u;
    }
  }
  return result;
}

