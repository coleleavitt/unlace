__int64 __fastcall sub_4DCC60(int a1, int a2, int *a3, int a4)
{
  char **exception; // r12
  __int64 v7; // rbp
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _DWORD *v10; // rax
  int *v11; // r13
  _DWORD *v12; // rdx
  int v13; // ecx
  int v14; // edi
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // r14d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rax
  __int64 v22[9]; // [rsp+0h] [rbp-48h] BYREF

  v7 = sub_186B270(0x60u);
  *(_OWORD *)(v7 + 8) = 0;
  sub_6299B0(v7 + 24);
  sub_6299B0(v7 + 32);
  *(_BYTE *)(v7 + 40) = 0;
  *(_QWORD *)v7 = off_1C66400;
  v8 = (_QWORD *)sub_186B270(0xC0u);
  *v8 = 0;
  v8[3] = 0;
  v8[6] = 0;
  v8[9] = 0;
  v8[12] = 0;
  v8[15] = 0;
  v8[18] = 0;
  v8[21] = 0;
  *(_QWORD *)(v7 + 48) = v8;
  *(_QWORD *)(v7 + 56) = 8;
  *(_DWORD *)(v7 + 64) = 0;
  *(_QWORD *)v7 = off_1C4F800;
  *(_BYTE *)(v7 + 72) = 0;
  *(_DWORD *)(v7 + 76) = a1;
  *(_QWORD *)(v7 + 80) = 0;
  if ( a2 )
  {
    v9 = (_QWORD *)sub_186B270(0x10u);
    *v9 = 2;
    v10 = v9 + 1;
    v11 = &a3[a2];
    *(_QWORD *)(v7 + 80) = v10;
    v12 = v10;
    while ( 1 )
    {
      v13 = *a3++;
      *v10 = v13;
      v14 = *(v12 - 1);
      v15 = (unsigned int)(v14 + 1);
      *(v12 - 1) = v15;
      if ( v11 == a3 )
        break;
      v16 = *(v12 - 2);
      if ( v16 == (_DWORD)v15 )
      {
        v17 = (3 * v16 + 1) >> 1;
        v18 = 4 * v17 + 8;
        if ( 4 * v14 + 12 >= (unsigned int)v18 || v16 >= v17 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_4D9940(v22, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v22);
          sub_233E40((__int64)v22);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v19 = (unsigned int *)sub_186B300(v12 - 2, v18);
        v12 = v19 + 2;
        *v19 = v17;
        v20 = v19[1];
        *(_QWORD *)(v7 + 80) = v12;
        v10 = &v12[v20];
      }
      else
      {
        v10 = &v12[v15];
      }
    }
  }
  *(_DWORD *)(v7 + 88) = a4;
  return v7;
}

