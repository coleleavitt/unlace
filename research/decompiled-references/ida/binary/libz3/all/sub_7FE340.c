unsigned int *__fastcall sub_7FE340(unsigned int **a1)
{
  unsigned int v1; // eax
  size_t v2; // rdi
  char **v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  char **v6; // rax
  char **v7; // rdi
  _DWORD *v8; // rdx
  int v9; // ecx
  __int64 v10; // rcx
  char v11; // si
  __int64 v12; // rcx
  char v13; // si
  __int64 v14; // rcx
  __int64 v15; // rax
  void *v16; // r12
  char *v17; // r13
  __int64 v18; // rax
  char *v19; // r14
  char *v20; // r12
  void *v21; // r15
  char *v22; // rsi
  unsigned int *result; // rax
  _QWORD *v24; // rax
  char **exception; // rbx
  char **v26; // [rsp+8h] [rbp-90h]
  unsigned int *v28; // [rsp+18h] [rbp-80h]
  unsigned int v29; // [rsp+2Ch] [rbp-6Ch]
  __int64 v30[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( *a1 )
  {
    v1 = *(*a1 - 2);
    v29 = (3 * v1 + 1) >> 1;
    v2 = 56 * v29 + 8;
    if ( 56 * v1 + 8 >= (unsigned int)v2 || v1 >= (3 * v1 + 1) >> 1 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v30, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v30);
      sub_233E40((__int64)v30);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v28 = (unsigned int *)sub_186B270(v2);
    v3 = (char **)*a1;
    if ( *a1 )
    {
      v4 = *((unsigned int *)v3 - 1);
      v28[1] = v4;
      v5 = 7 * v4;
      v6 = v3;
      v7 = &v3[v5];
      v8 = v28 + 2;
      if ( v3 != v7 )
      {
        do
        {
          v9 = *((_DWORD *)v6 + 2);
          v6 += 7;
          v8 += 14;
          *(v8 - 12) = v9;
          v10 = (__int64)*(v6 - 7);
          *(v6 - 7) = nullptr;
          *((_QWORD *)v8 - 7) = v10;
          *(v8 - 11) = *((_DWORD *)v6 - 11);
          *(v8 - 10) = *((_DWORD *)v6 - 10);
          v11 = *((_BYTE *)v6 - 28);
          *(v8 - 8) = *((_DWORD *)v6 - 8);
          *((_BYTE *)v8 - 28) = v11 & 3 | *(_BYTE *)(v8 - 7) & 0xFC;
          v12 = (__int64)*(v6 - 3);
          *(v6 - 3) = nullptr;
          *((_QWORD *)v8 - 3) = v12;
          v13 = *((_BYTE *)v6 - 12);
          *(v8 - 4) = *((_DWORD *)v6 - 4);
          *((_BYTE *)v8 - 12) = v13 & 3 | *(_BYTE *)(v8 - 3) & 0xFC;
          v14 = (__int64)*(v6 - 1);
          *(v6 - 1) = nullptr;
          *((_QWORD *)v8 - 1) = v14;
        }
        while ( v7 != v6 );
      }
      v15 = *((unsigned int *)v3 - 1);
      if ( (_DWORD)v15 )
      {
        v26 = &v3[7 * v15];
        do
        {
          v16 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v3 + 3);
          sub_182CBA0(v16, v3 + 5);
          v17 = *v3;
          if ( *v3 )
          {
            v18 = *((unsigned int *)v3 + 2);
            if ( (_DWORD)v18 )
            {
              v19 = *v3;
              v20 = &v17[40 * v18];
              do
              {
                v21 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v19 + 8);
                v22 = v19 + 24;
                v19 += 40;
                sub_182CBA0(v21, v22);
              }
              while ( v19 != v20 );
            }
            sub_186B220(v17);
          }
          v3 += 7;
        }
        while ( v3 != v26 );
        v3 = (char **)*a1;
      }
      sub_186B220(v3 - 1);
    }
    else
    {
      v28[1] = 0;
    }
    *a1 = v28 + 2;
    *v28 = v29;
    return v28;
  }
  else
  {
    v24 = (_QWORD *)sub_186B270(0x78u);
    *v24 = 2;
    result = (unsigned int *)(v24 + 1);
    *a1 = result;
  }
  return result;
}

