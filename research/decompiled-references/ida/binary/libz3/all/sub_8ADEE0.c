__int64 __fastcall sub_8ADEE0(int **a1, int *a2)
{
  int *v4; // r13
  __int64 v5; // rax
  int *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v10; // ebx
  size_t v11; // rdi
  __int64 v12; // rax
  int *v13; // r8
  _DWORD *v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rdx
  int *v17; // rax
  int *v18; // rdi
  int v19; // ecx
  char v20; // si
  __int64 v21; // rcx
  char v22; // si
  __int64 v23; // rcx
  _QWORD *v24; // rax
  char **exception; // rbx
  __int64 v26; // rdx
  __int64 v27[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *a1;
  if ( *a1 )
  {
    v5 = (unsigned int)*(v4 - 1);
    if ( (_DWORD)v5 == *(v4 - 2) )
    {
      v10 = (unsigned int)(3 * v5 + 1) >> 1;
      v11 = 32 * v10 + 8;
      if ( 32 * (int)v5 + 8 >= (unsigned int)v11 || (unsigned int)v5 >= v10 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_12D192(v27, "Overflow encountered when expanding vector", v26);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v27);
        sub_233E40((__int64)v27);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v12 = sub_186B270(v11);
      v13 = *a1;
      v14 = (_DWORD *)v12;
      v4 = (int *)(v12 + 8);
      if ( *a1 )
      {
        v15 = (unsigned int)*(v13 - 1);
        v16 = v12 + 8;
        *(_DWORD *)(v12 + 4) = v15;
        v17 = v13;
        v18 = &v13[8 * v15];
        if ( v18 != v13 )
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
          while ( v18 != v17 );
        }
        sub_186B220(v13 - 2);
        v6 = &v4[8 * v14[1]];
      }
      else
      {
        *(_DWORD *)(v12 + 4) = 0;
        v6 = (int *)(v12 + 8);
      }
      *a1 = v4;
      *v14 = v10;
    }
    else
    {
      v6 = &v4[8 * v5];
    }
  }
  else
  {
    v24 = (_QWORD *)sub_186B270(0x48u);
    v4 = (int *)(v24 + 1);
    *v24 = 2;
    *a1 = (int *)(v24 + 1);
    v6 = (int *)(v24 + 1);
  }
  *(_QWORD *)v6 = 0;
  *((_QWORD *)v6 + 2) = 1;
  v7 = (__int64)a1[1];
  *((_QWORD *)v6 + 1) = 0;
  *((_QWORD *)v6 + 3) = 0;
  v8 = (unsigned int)*(v4 - 1);
  *(v4 - 1) = v8 + 1;
  return sub_8ADE80(v7, (__int64)&v4[8 * v8], a2);
}

