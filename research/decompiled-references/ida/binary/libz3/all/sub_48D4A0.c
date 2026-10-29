int *__fastcall sub_48D4A0(int **a1, _DWORD *a2)
{
  char **exception; // rbx
  int *v4; // rbx
  __int64 v5; // rax
  int *v6; // rax
  __int64 v7; // rax
  unsigned int v9; // r12d
  size_t v10; // rdi
  __int64 v11; // rax
  int *v12; // r8
  _DWORD *v13; // r13
  __int64 v14; // rax
  int *v15; // rdx
  int *v16; // rdi
  int *i; // rax
  int v18; // ecx
  char v19; // si
  __int64 v20; // rcx
  char v21; // si
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *a1;
  if ( *a1 )
  {
    v5 = (unsigned int)*(v4 - 1);
    *a2 = v5;
    if ( (_DWORD)v5 == *(v4 - 2) )
    {
      v9 = (unsigned int)(3 * v5 + 1) >> 1;
      v10 = 40 * v9 + 8;
      if ( 40 * (int)v5 + 8 >= (unsigned int)v10 || (unsigned int)v5 >= v9 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v24, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v24);
        sub_233E40((__int64)v24);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v11 = sub_186B270(v10);
      v12 = *a1;
      v13 = (_DWORD *)v11;
      v4 = (int *)(v11 + 8);
      if ( *a1 )
      {
        v14 = (unsigned int)*(v12 - 1);
        v15 = v4;
        v13[1] = v14;
        v16 = &v12[10 * v14];
        for ( i = v12; v16 != i; *(v15 - 1) = *(i - 1) )
        {
          v18 = *i;
          v19 = *((_BYTE *)i + 4);
          i += 10;
          v15 += 10;
          *(v15 - 10) = v18;
          *((_BYTE *)v15 - 36) = v19 & 3 | *(_BYTE *)(v15 - 9) & 0xFC;
          v20 = *((_QWORD *)i - 4);
          *((_QWORD *)i - 4) = 0;
          *((_QWORD *)v15 - 4) = v20;
          v21 = *((_BYTE *)i - 20);
          *(v15 - 6) = *(i - 6);
          *((_BYTE *)v15 - 20) = v21 & 3 | *(_BYTE *)(v15 - 5) & 0xFC;
          v22 = *((_QWORD *)i - 2);
          *((_QWORD *)i - 2) = 0;
          *((_QWORD *)v15 - 2) = v22;
          *(v15 - 2) = *(i - 2);
        }
        sub_186B220(v12 - 2);
        v6 = &v4[10 * v13[1]];
      }
      else
      {
        *(_DWORD *)(v11 + 4) = 0;
        v6 = (int *)(v11 + 8);
      }
      *a1 = v4;
      *v13 = v9;
    }
    else
    {
      v6 = &v4[10 * v5];
    }
  }
  else
  {
    *a2 = 0;
    v23 = (_QWORD *)sub_186B270(0x58u);
    v4 = (int *)(v23 + 1);
    *v23 = 2;
    *a1 = (int *)(v23 + 1);
    v6 = (int *)(v23 + 1);
  }
  *(_QWORD *)v6 = 0;
  *((_QWORD *)v6 + 1) = 0;
  *((_QWORD *)v6 + 2) = 1;
  *((_QWORD *)v6 + 3) = 0;
  *((_QWORD *)v6 + 4) = 0xFFFFFFFFLL;
  v7 = (unsigned int)*(v4 - 1);
  *(v4 - 1) = v7 + 1;
  return &v4[10 * v7];
}

