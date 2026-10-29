__int64 __fastcall sub_C16F00(__int64 *a1)
{
  unsigned int v2; // edx
  unsigned int v3; // r12d
  size_t v4; // rdi
  __int64 result; // rax
  __int64 *v6; // r14
  _DWORD *v7; // rbp
  __int64 v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 *v11; // rsi
  __int64 *i; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 *v16; // r15
  __int64 v17; // rsi
  bool v18; // zf
  __int64 v19; // rsi
  __int64 v20; // rdi
  _QWORD *v21; // rax
  char **exception; // rbx
  __int64 v23[11]; // [rsp+0h] [rbp-58h] BYREF

  if ( *a1 )
  {
    v2 = *(_DWORD *)(*a1 - 8);
    v3 = (3 * v2 + 1) >> 1;
    v4 = 8 * (v3 + ((3 * v2 + 1) & 0xFFFFFFFE)) + 8;
    if ( 24 * v2 + 8 >= (unsigned int)v4 || v2 >= v3 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_C0E620(v23, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v23);
      sub_233E40((__int64)v23);
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
      v11 = &v6[3 * v9];
      for ( i = v6; v11 != i; *(_QWORD *)(v10 - 8) = v15 )
      {
        v13 = *i;
        i += 3;
        v10 += 24;
        *(_QWORD *)(v10 - 24) = v13;
        v14 = *(i - 2);
        *(i - 2) = 0;
        *(_QWORD *)(v10 - 16) = v14;
        v15 = *(i - 1);
        *(i - 1) = 0;
      }
      if ( (_DWORD)v9 )
      {
        v16 = &v6[3 * v9];
        do
        {
          while ( 1 )
          {
            v19 = v6[1];
            v20 = *v6;
            if ( v19 )
            {
              v18 = (*(_DWORD *)(v19 + 8))-- == 1;
              if ( v18 )
              {
                sub_15D7BC0(v20, v19);
                v20 = *v6;
              }
            }
            v17 = v6[2];
            if ( v17 )
            {
              v18 = (*(_DWORD *)(v17 + 8))-- == 1;
              if ( v18 )
                break;
            }
            v6 += 3;
            if ( v16 == v6 )
              goto LABEL_16;
          }
          sub_15D7BC0(v20, v17);
          v6 += 3;
        }
        while ( v16 != v6 );
LABEL_16:
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
    v21 = (_QWORD *)sub_186B270(0x38u);
    *v21 = 2;
    result = (__int64)(v21 + 1);
    *a1 = result;
  }
  return result;
}

