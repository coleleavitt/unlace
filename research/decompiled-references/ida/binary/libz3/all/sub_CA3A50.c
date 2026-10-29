int *__fastcall sub_CA3A50(int **a1, __int64 a2)
{
  int *v4; // r14
  __int64 v5; // rax
  int *result; // rax
  char v7; // cl
  __int64 v8; // rdx
  char v9; // cl
  __int64 v10; // rdx
  unsigned int v11; // ebp
  size_t v12; // rdi
  __int64 v13; // rax
  int *v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rax
  int *v17; // rdx
  int *v18; // rdi
  int *i; // rax
  int v20; // ecx
  char v21; // si
  __int64 v22; // rcx
  char v23; // si
  __int64 v24; // rcx
  __int64 v25; // rax
  void *v26; // r15
  _QWORD *v27; // rsi
  _QWORD *v28; // rax
  char **exception; // rbx
  int *v30; // [rsp+0h] [rbp-68h]
  _DWORD *v31; // [rsp+8h] [rbp-60h]
  __int64 v32[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = *a1;
  if ( *a1 )
  {
    v5 = (unsigned int)*(v4 - 1);
    if ( (_DWORD)v5 == *(v4 - 2) )
    {
      v11 = (unsigned int)(3 * v5 + 1) >> 1;
      v12 = 40 * v11 + 8;
      if ( 40 * (int)v5 + 8 >= (unsigned int)v12 || (unsigned int)v5 >= v11 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_C9E960(v32, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v32);
        sub_233E40((__int64)v32);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v13 = sub_186B270(v12);
      v14 = *a1;
      v31 = (_DWORD *)v13;
      v4 = (int *)(v13 + 8);
      if ( *a1 )
      {
        v15 = v13;
        v16 = (unsigned int)*(v14 - 1);
        v17 = v4;
        *(_DWORD *)(v15 + 4) = v16;
        v18 = &v14[10 * v16];
        for ( i = v14; v18 != i; *((_QWORD *)v17 - 1) = *((_QWORD *)i - 1) )
        {
          v20 = *i;
          v21 = *((_BYTE *)i + 4);
          i += 10;
          v17 += 10;
          *(v17 - 10) = v20;
          *((_BYTE *)v17 - 36) = v21 & 3 | *(_BYTE *)(v17 - 9) & 0xFC;
          v22 = *((_QWORD *)i - 4);
          *((_QWORD *)i - 4) = 0;
          *((_QWORD *)v17 - 4) = v22;
          v23 = *((_BYTE *)i - 20);
          *(v17 - 6) = *(i - 6);
          *((_BYTE *)v17 - 20) = v23 & 3 | *(_BYTE *)(v17 - 5) & 0xFC;
          v24 = *((_QWORD *)i - 2);
          *((_QWORD *)i - 2) = 0;
          *((_QWORD *)v17 - 2) = v24;
        }
        v25 = (unsigned int)*(v14 - 1);
        if ( (_DWORD)v25 )
        {
          v30 = &v14[10 * v25];
          do
          {
            v26 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v14);
            v27 = v14 + 4;
            v14 += 10;
            sub_182CBA0(v26, v27);
          }
          while ( v14 != v30 );
          v14 = *a1;
        }
        sub_186B220(v14 - 2);
        result = &v4[10 * v31[1]];
      }
      else
      {
        *(_DWORD *)(v13 + 4) = 0;
        result = (int *)(v13 + 8);
      }
      *a1 = v4;
      *v31 = v11;
    }
    else
    {
      result = &v4[10 * v5];
    }
  }
  else
  {
    v28 = (_QWORD *)sub_186B270(0x58u);
    v4 = (int *)(v28 + 1);
    *v28 = 2;
    *a1 = (int *)(v28 + 1);
    result = (int *)(v28 + 1);
  }
  v7 = *(_BYTE *)(a2 + 4);
  *result = *(_DWORD *)a2;
  *((_BYTE *)result + 4) = v7 & 3 | result[1] & 0xFC;
  v8 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0;
  *((_QWORD *)result + 1) = v8;
  v9 = *(_BYTE *)(a2 + 20);
  result[4] = *(_DWORD *)(a2 + 16);
  *((_BYTE *)result + 20) = v9 & 3 | result[5] & 0xFC;
  v10 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0;
  *((_QWORD *)result + 3) = v10;
  *((_QWORD *)result + 4) = *(_QWORD *)(a2 + 32);
  ++*(v4 - 1);
  return result;
}

