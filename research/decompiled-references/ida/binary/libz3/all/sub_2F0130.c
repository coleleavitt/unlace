int *__fastcall sub_2F0130(int **a1, int *a2)
{
  char **exception; // rbx
  int *v4; // rsi
  __int64 v5; // rax
  int *v6; // rsi
  void *v7; // rdi
  int *result; // rax
  unsigned int v9; // r13d
  size_t v10; // rdi
  __int64 v11; // rax
  int *v12; // r13
  _DWORD *v13; // r12
  _QWORD *v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // rdx
  int *v17; // rax
  int *v18; // rdi
  int v19; // ecx
  char v20; // si
  __int64 v21; // rcx
  char v22; // si
  __int64 v23; // rcx
  __int64 v24; // r15
  int *v25; // r15
  void *v26; // rbp
  int *v27; // rsi
  _QWORD *v28; // rax
  _QWORD *v30; // [rsp+10h] [rbp-68h]
  unsigned int v31; // [rsp+1Ch] [rbp-5Ch]
  __int64 v32[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *a1;
  if ( *a1 )
  {
    v5 = (unsigned int)*(v4 - 1);
    if ( (_DWORD)v5 == *(v4 - 2) )
    {
      v9 = (unsigned int)(3 * v5 + 1) >> 1;
      v31 = v9;
      v10 = 32 * v9 + 8;
      if ( 32 * (int)v5 + 8 >= (unsigned int)v10 || (unsigned int)v5 >= v9 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_2EB560(v32, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v32);
        sub_233E40((__int64)v32);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v11 = sub_186B270(v10);
      v12 = *a1;
      v13 = (_DWORD *)v11;
      v14 = (_QWORD *)(v11 + 8);
      v30 = v14;
      if ( *a1 )
      {
        v15 = (unsigned int)*(v12 - 1);
        v16 = v14;
        v17 = *a1;
        v13[1] = v15;
        v18 = &v12[8 * v15];
        if ( v12 != v18 )
        {
          do
          {
            v19 = *v17;
            v20 = *((_BYTE *)v17 + 4);
            v17 += 8;
            v16 += 4;
            *((_DWORD *)v16 - 8) = v19;
            *((_BYTE *)v16 - 28) = v20 & 3 | *((_BYTE *)v16 - 28) & 0xFC;
            v21 = *((_QWORD *)v17 - 3);
            *((_QWORD *)v17 - 3) = 0;
            *(v16 - 3) = v21;
            v22 = *((_BYTE *)v17 - 12);
            *((_DWORD *)v16 - 4) = *(v17 - 4);
            *((_BYTE *)v16 - 12) = v22 & 3 | *((_BYTE *)v16 - 12) & 0xFC;
            v23 = *((_QWORD *)v17 - 1);
            *((_QWORD *)v17 - 1) = 0;
            *(v16 - 1) = v23;
          }
          while ( v17 != v18 );
        }
        v24 = (unsigned int)*(v12 - 1);
        if ( (_DWORD)v24 )
        {
          v25 = &v12[8 * v24];
          do
          {
            v26 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v12);
            v27 = v12 + 4;
            v12 += 8;
            sub_182CBA0(v26, v27);
          }
          while ( v12 != v25 );
          v12 = *a1;
        }
        sub_186B220(v12 - 2);
        v14 = v30;
        v6 = (int *)&v30[4 * (unsigned int)v13[1]];
      }
      else
      {
        v13[1] = 0;
        v6 = (int *)v14;
      }
      *a1 = (int *)v14;
      *v13 = v31;
    }
    else
    {
      v6 = &v4[8 * v5];
    }
  }
  else
  {
    v28 = (_QWORD *)sub_186B270(0x48u);
    v6 = (int *)(v28 + 1);
    *v28 = 2;
    *a1 = (int *)(v28 + 1);
  }
  *(_QWORD *)v6 = 0;
  *((_QWORD *)v6 + 1) = 0;
  v7 = qword_1C7F2C0;
  *((_QWORD *)v6 + 2) = 1;
  *((_QWORD *)v6 + 3) = 0;
  sub_27B950((__int64)v7, (__int64)v6, a2);
  result = *a1;
  ++*(*a1 - 1);
  return result;
}

