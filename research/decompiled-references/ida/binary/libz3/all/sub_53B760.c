int *__fastcall sub_53B760(int **a1, __int64 a2)
{
  int *v4; // r15
  __int64 v5; // rax
  int *result; // rax
  char v7; // cl
  __int64 v8; // rdx
  char v9; // cl
  __int64 v10; // rdx
  unsigned int v11; // r12d
  size_t v12; // rdi
  __int64 v13; // rax
  int *v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rdx
  int *v17; // rax
  int *v18; // rdi
  int v19; // ecx
  char v20; // si
  __int64 v21; // rcx
  char v22; // si
  __int64 v23; // rcx
  __int64 v24; // r14
  int *v25; // r14
  void *v26; // r12
  _QWORD *v27; // rsi
  _QWORD *v28; // rax
  char **exception; // rbx
  _DWORD *v30; // [rsp+0h] [rbp-78h]
  unsigned int v31; // [rsp+Ch] [rbp-6Ch]
  __int64 v32[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *a1;
  if ( *a1 )
  {
    v5 = (unsigned int)*(v4 - 1);
    if ( (_DWORD)v5 == *(v4 - 2) )
    {
      v11 = (unsigned int)(3 * v5 + 1) >> 1;
      v31 = v11;
      v12 = 32 * v11 + 8;
      if ( 32 * (int)v5 + 8 >= (unsigned int)v12 || (unsigned int)v5 >= v11 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v32, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v32);
        sub_233E40((__int64)v32);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v13 = sub_186B270(v12);
      v14 = *a1;
      v30 = (_DWORD *)v13;
      v4 = (int *)(v13 + 8);
      if ( *a1 )
      {
        v15 = (unsigned int)*(v14 - 1);
        v16 = v13 + 8;
        *(_DWORD *)(v13 + 4) = v15;
        v17 = v14;
        v18 = &v14[8 * v15];
        if ( v14 != v18 )
        {
          do
          {
            v19 = *v17;
            v20 = *((_BYTE *)v17 + 4);
            v17 += 8;
            v16 += 32;
            *(_DWORD *)(v16 - 32) = v19;
            *(_BYTE *)(v16 - 28) = v20 & 3 | *(_BYTE *)(v16 - 28) & 0xFC;
            v21 = *((_QWORD *)v17 - 3);
            *((_QWORD *)v17 - 3) = 0;
            *(_QWORD *)(v16 - 24) = v21;
            v22 = *((_BYTE *)v17 - 12);
            *(_DWORD *)(v16 - 16) = *(v17 - 4);
            *(_BYTE *)(v16 - 12) = v22 & 3 | *(_BYTE *)(v16 - 12) & 0xFC;
            v23 = *((_QWORD *)v17 - 1);
            *((_QWORD *)v17 - 1) = 0;
            *(_QWORD *)(v16 - 8) = v23;
          }
          while ( v17 != v18 );
        }
        v24 = (unsigned int)*(v14 - 1);
        if ( (_DWORD)v24 )
        {
          v25 = &v14[8 * v24];
          do
          {
            v26 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v14);
            v27 = v14 + 4;
            v14 += 8;
            sub_182CBA0(v26, v27);
          }
          while ( v14 != v25 );
          v14 = *a1;
        }
        sub_186B220(v14 - 2);
        result = &v4[8 * v30[1]];
      }
      else
      {
        *(_DWORD *)(v13 + 4) = 0;
        result = (int *)(v13 + 8);
      }
      *a1 = v4;
      *v30 = v31;
    }
    else
    {
      result = &v4[8 * v5];
    }
  }
  else
  {
    v28 = (_QWORD *)sub_186B270(0x48u);
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
  ++*(v4 - 1);
  return result;
}

