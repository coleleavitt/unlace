__int64 __fastcall sub_4DB9C0(int a1, int *a2, __int64 a3)
{
  char **exception; // r12
  int *v5; // rbx
  __int64 v6; // rbp
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _DWORD *v9; // rax
  int *v10; // r13
  _DWORD *v11; // rdx
  int v12; // ecx
  int v13; // edi
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // r14d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rax
  __int64 v21[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = a2;
  v6 = sub_186B270(0x58u);
  *(_OWORD *)(v6 + 8) = 0;
  sub_6299B0(v6 + 24);
  sub_6299B0(v6 + 32);
  *(_BYTE *)(v6 + 40) = 0;
  *(_QWORD *)v6 = off_1C66400;
  v7 = (_QWORD *)sub_186B270(0xC0u);
  *v7 = 0;
  v7[3] = 0;
  v7[6] = 0;
  v7[9] = 0;
  v7[12] = 0;
  v7[15] = 0;
  v7[18] = 0;
  v7[21] = 0;
  *(_QWORD *)(v6 + 48) = v7;
  *(_QWORD *)(v6 + 56) = 8;
  *(_DWORD *)(v6 + 64) = 0;
  *(_QWORD *)v6 = off_1C4F608;
  *(_QWORD *)(v6 + 72) = 0;
  if ( a1 )
  {
    v8 = (_QWORD *)sub_186B270(0x10u);
    *v8 = 2;
    v9 = v8 + 1;
    v10 = &a2[a1];
    *(_QWORD *)(v6 + 72) = v9;
    v11 = v9;
    while ( 1 )
    {
      v12 = *v5++;
      *v9 = v12;
      v13 = *(v11 - 1);
      v14 = (unsigned int)(v13 + 1);
      *(v11 - 1) = v14;
      if ( v10 == v5 )
        break;
      v15 = *(v11 - 2);
      if ( v15 == (_DWORD)v14 )
      {
        v16 = (3 * v15 + 1) >> 1;
        v17 = 4 * v16 + 8;
        if ( 4 * v13 + 12 >= (unsigned int)v17 || v15 >= v16 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_4D9940(v21, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v21);
          sub_233E40((__int64)v21);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v18 = (unsigned int *)sub_186B300(v11 - 2, v17);
        v11 = v18 + 2;
        *v18 = v16;
        v19 = v18[1];
        *(_QWORD *)(v6 + 72) = v11;
        v9 = &v11[v19];
      }
      else
      {
        v9 = &v11[v14];
      }
    }
  }
  *(_QWORD *)(v6 + 80) = a3;
  return v6;
}

