_QWORD *__fastcall sub_53D790(__int64 *a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ebp
  size_t v4; // rdi
  __int64 v5; // rax
  int *v6; // r13
  _DWORD *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  int *v11; // rax
  int *v12; // rdi
  int v13; // ecx
  char v14; // si
  __int64 v15; // rcx
  char v16; // si
  __int64 v17; // rcx
  __int64 v18; // r14
  int *v19; // r14
  void *v20; // r15
  int *v21; // rsi
  _QWORD *result; // rax
  _QWORD *v23; // rax
  char **exception; // rbx
  __int64 v25; // [rsp+8h] [rbp-70h]
  __int64 v26[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( *a1 )
  {
    v2 = *(_DWORD *)(*a1 - 8);
    v3 = (3 * v2 + 1) >> 1;
    v4 = 32 * v3 + 8;
    if ( 32 * v2 + 8 >= (unsigned int)v4 || v2 >= v3 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v26, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v26);
      sub_233E40((__int64)v26);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v5 = sub_186B270(v4);
    v6 = (int *)*a1;
    v7 = (_DWORD *)v5;
    v8 = v5 + 8;
    v25 = v8;
    if ( *a1 )
    {
      v9 = (unsigned int)*(v6 - 1);
      v10 = v8;
      v11 = (int *)*a1;
      v7[1] = v9;
      v12 = &v6[8 * v9];
      if ( v6 != v12 )
      {
        do
        {
          v13 = *v11;
          v14 = *((_BYTE *)v11 + 4);
          v11 += 8;
          v10 += 32;
          *(_DWORD *)(v10 - 32) = v13;
          *(_BYTE *)(v10 - 28) = v14 & 3 | *(_BYTE *)(v10 - 28) & 0xFC;
          v15 = *((_QWORD *)v11 - 3);
          *((_QWORD *)v11 - 3) = 0;
          *(_QWORD *)(v10 - 24) = v15;
          v16 = *((_BYTE *)v11 - 12);
          *(_DWORD *)(v10 - 16) = *(v11 - 4);
          *(_BYTE *)(v10 - 12) = v16 & 3 | *(_BYTE *)(v10 - 12) & 0xFC;
          v17 = *((_QWORD *)v11 - 1);
          *((_QWORD *)v11 - 1) = 0;
          *(_QWORD *)(v10 - 8) = v17;
        }
        while ( v12 != v11 );
      }
      v18 = (unsigned int)*(v6 - 1);
      if ( (_DWORD)v18 )
      {
        v19 = &v6[8 * v18];
        do
        {
          v20 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v6);
          v21 = v6 + 4;
          v6 += 8;
          sub_182CBA0(v20, v21);
        }
        while ( v6 != v19 );
        v6 = (int *)*a1;
      }
      sub_186B220(v6 - 2);
    }
    else
    {
      v7[1] = 0;
    }
    *v7 = v3;
    *a1 = v25;
    return (_QWORD *)v25;
  }
  else
  {
    v23 = (_QWORD *)sub_186B270(0x48u);
    *v23 = 2;
    result = v23 + 1;
    *a1 = (__int64)result;
  }
  return result;
}

