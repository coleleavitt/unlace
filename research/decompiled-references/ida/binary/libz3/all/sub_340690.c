__int64 __fastcall sub_340690(__int64 a1, unsigned int **a2)
{
  char **exception; // r12
  __int64 v3; // rdx
  __int64 result; // rax
  char *v6; // r12
  unsigned int *v7; // rdx
  char *v8; // r14
  _QWORD *v9; // rax
  unsigned int *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // r13d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rcx
  __int64 v18[4]; // [rsp+0h] [rbp-D8h] BYREF
  void *v19; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+28h] [rbp-B0h]
  _BYTE v21[168]; // [rsp+30h] [rbp-A8h] BYREF

  if ( *a2 )
    *(*a2 - 1) = 0;
  v19 = v21;
  v20 = 0x1000000000LL;
  sub_8E3840(a1 + 880, 0, &v19);
  result = (unsigned int)v20;
  v6 = (char *)v19;
  if ( (_DWORD)v20 )
  {
    v7 = *a2;
    v8 = (char *)v19 + 8 * (unsigned int)v20;
    if ( *a2 )
      goto LABEL_8;
    v9 = (_QWORD *)sub_186B270(0x18u);
    v7 = (unsigned int *)(v9 + 1);
    *v9 = 2;
    result = 1;
    *a2 = v7;
    v10 = v7;
    while ( 1 )
    {
      v12 = *(_QWORD *)v6;
      v6 += 8;
      *(_QWORD *)v10 = v12;
      *(v7 - 1) = result;
      if ( v6 == v8 )
        break;
LABEL_8:
      v13 = *(v7 - 1);
      if ( v13 == *(v7 - 2) )
      {
        v14 = (3 * v13 + 1) >> 1;
        v15 = 8 * v14 + 8;
        if ( 8 * v13 + 8 >= (unsigned int)v15 || v13 >= v14 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_BFCE0(v18, "Overflow encountered when expanding vector", v3);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v18);
          sub_233E40((__int64)v18);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v16 = (unsigned int *)sub_186B300(v7 - 2, v15);
        v17 = v16[1];
        v7 = v16 + 2;
        *v16 = v14;
        *a2 = v16 + 2;
        v10 = &v16[2 * v17 + 2];
        result = (unsigned int)(v17 + 1);
      }
      else
      {
        v11 = v13;
        result = v13 + 1;
        v10 = &v7[2 * v11];
      }
    }
    v6 = (char *)v19;
  }
  if ( v6 && v6 != v21 )
    return sub_186B220(v6);
  return result;
}

