int *__fastcall sub_893240(int **a1, _DWORD *a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  int *v5; // rbx
  __int64 v6; // rax
  int *v7; // rax
  __int64 v8; // rax
  unsigned int v10; // r12d
  size_t v11; // rdi
  __int64 v12; // rax
  int *v13; // r8
  _DWORD *v14; // r13
  __int64 v15; // rax
  int *v16; // rdx
  int *v17; // rdi
  int *i; // rax
  int v19; // ecx
  char v20; // si
  __int64 v21; // rcx
  char v22; // si
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = *a1;
  if ( *a1 )
  {
    v6 = (unsigned int)*(v5 - 1);
    *a2 = v6;
    if ( (_DWORD)v6 == *(v5 - 2) )
    {
      v10 = (unsigned int)(3 * v6 + 1) >> 1;
      v11 = 40 * v10 + 8;
      if ( 40 * (int)v6 + 8 >= (unsigned int)v11 || (unsigned int)v6 >= v10 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_12D192(v25, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v25);
        sub_233E40((__int64)v25);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v12 = sub_186B270(v11);
      v13 = *a1;
      v14 = (_DWORD *)v12;
      v5 = (int *)(v12 + 8);
      if ( *a1 )
      {
        v15 = (unsigned int)*(v13 - 1);
        v16 = v5;
        v14[1] = v15;
        v17 = &v13[10 * v15];
        for ( i = v13; v17 != i; *(v16 - 1) = *(i - 1) )
        {
          v19 = *i;
          v20 = *((_BYTE *)i + 4);
          i += 10;
          v16 += 10;
          *(v16 - 10) = v19;
          *((_BYTE *)v16 - 36) = v20 & 3 | *(_BYTE *)(v16 - 9) & 0xFC;
          v21 = *((_QWORD *)i - 4);
          *((_QWORD *)i - 4) = 0;
          *((_QWORD *)v16 - 4) = v21;
          v22 = *((_BYTE *)i - 20);
          *(v16 - 6) = *(i - 6);
          *((_BYTE *)v16 - 20) = v22 & 3 | *(_BYTE *)(v16 - 5) & 0xFC;
          v23 = *((_QWORD *)i - 2);
          *((_QWORD *)i - 2) = 0;
          *((_QWORD *)v16 - 2) = v23;
          *(v16 - 2) = *(i - 2);
        }
        sub_186B220(v13 - 2);
        v7 = &v5[10 * v14[1]];
      }
      else
      {
        *(_DWORD *)(v12 + 4) = 0;
        v7 = (int *)(v12 + 8);
      }
      *a1 = v5;
      *v14 = v10;
    }
    else
    {
      v7 = &v5[10 * v6];
    }
  }
  else
  {
    *a2 = 0;
    v24 = (_QWORD *)sub_186B270(0x58u);
    v5 = (int *)(v24 + 1);
    *v24 = 2;
    *a1 = (int *)(v24 + 1);
    v7 = (int *)(v24 + 1);
  }
  *(_QWORD *)v7 = 0;
  *((_QWORD *)v7 + 1) = 0;
  *((_QWORD *)v7 + 2) = 1;
  *((_QWORD *)v7 + 3) = 0;
  *((_QWORD *)v7 + 4) = 0xFFFFFFFFLL;
  v8 = (unsigned int)*(v5 - 1);
  *(v5 - 1) = v8 + 1;
  return &v5[10 * v8];
}

