__int64 __fastcall sub_39BC80(__int64 *a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ebp
  size_t v4; // rdi
  __int64 result; // rax
  __int64 *v6; // r14
  _DWORD *v7; // r12
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rdx
  int v11; // edi
  __int64 *v12; // rax
  __int64 *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 *v16; // r15
  __int64 *v17; // rdi
  _QWORD *v18; // rax
  char **exception; // rbx
  __int64 v20[11]; // [rsp+0h] [rbp-58h] BYREF

  if ( *a1 )
  {
    v2 = *(_DWORD *)(*a1 - 8);
    v3 = (3 * v2 + 1) >> 1;
    v4 = 16 * v3 + 8;
    if ( 16 * v2 + 8 >= (unsigned int)v4 || v2 >= v3 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_399470(v20, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v20);
      sub_233E40((__int64)v20);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    result = sub_186B270(v4);
    v6 = (__int64 *)*a1;
    v7 = (_DWORD *)result;
    v8 = result + 8;
    if ( *a1 )
    {
      v9 = *((unsigned int *)v6 - 1);
      v10 = result + 8;
      *(_DWORD *)(result + 4) = v9;
      v11 = v9;
      v12 = v6;
      v13 = &v6[2 * v9];
      if ( v6 != v13 )
      {
        do
        {
          v14 = *v12;
          v12 += 2;
          v10 += 16;
          *(_QWORD *)(v10 - 16) = v14;
          v15 = *(v12 - 1);
          *(v12 - 1) = 0;
          *(_QWORD *)(v10 - 8) = v15;
        }
        while ( v13 != v12 );
      }
      v16 = &v6[2 * v9];
      if ( v11 )
      {
        do
        {
          v17 = v6;
          v6 += 2;
          sub_2334C0(v17);
        }
        while ( v16 != v6 );
        v6 = (__int64 *)*a1;
      }
      result = sub_186B220(v6 - 1);
    }
    else
    {
      *(_DWORD *)(result + 4) = 0;
    }
    *a1 = v8;
    *v7 = v3;
  }
  else
  {
    v18 = (_QWORD *)sub_186B270(0x28u);
    *v18 = 2;
    result = (__int64)(v18 + 1);
    *a1 = result;
  }
  return result;
}

