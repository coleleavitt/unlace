__int64 __fastcall sub_506520(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // r13
  _QWORD *v3; // rbx
  __int64 v4; // r15
  unsigned int v5; // ebp
  __int64 result; // rax
  unsigned int v7; // edx
  size_t v8; // rsi
  unsigned int v9; // r14d
  unsigned int *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // r15
  __int64 v13; // rdx
  _QWORD *v14; // rax
  char **exception; // rbx
  char v16; // [rsp+Ch] [rbp-6Ch]
  __int64 v17[11]; // [rsp+20h] [rbp-58h] BYREF

  v2 = a2 >> 5;
  v3 = (_QWORD *)*a1;
  v16 = a2;
  if ( *a1 )
  {
    v4 = *((unsigned int *)v3 - 1);
    v5 = v2 + 1;
    if ( (unsigned int)v2 < (unsigned int)v4 )
      goto LABEL_3;
  }
  else
  {
    v5 = v2 + 1;
    v4 = 0;
    v14 = (_QWORD *)sub_186B270(0x10u);
    v3 = v14 + 1;
    *v14 = 2;
    *a1 = v14 + 1;
  }
  while ( 1 )
  {
    v11 = *((_DWORD *)v3 - 2);
    if ( v11 >= v5 )
      break;
    v7 = (3 * v11 + 1) >> 1;
    v8 = 4 * v7 + 8;
    v9 = v7;
    if ( 4 * v11 + 8 >= (unsigned int)v8 || v11 >= v7 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v17, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v17);
      sub_233E40((__int64)v17);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v10 = (unsigned int *)sub_186B300(v3 - 1, v8);
    v3 = v10 + 2;
    *v10 = v9;
    *a1 = v10 + 2;
  }
  v12 = 4 * v4;
  *((_DWORD *)v3 - 1) = v5;
  v13 = 4LL * v5;
  if ( v12 != v13 )
    memset((char *)v3 + v12, 0, v13 - v12);
LABEL_3:
  result = (unsigned int)(1 << v16);
  *((_DWORD *)v3 + v2) |= result;
  return result;
}

