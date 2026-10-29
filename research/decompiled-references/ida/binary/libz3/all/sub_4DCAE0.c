__int64 __fastcall sub_4DCAE0(int a1, int a2, int *a3)
{
  char **exception; // r12
  __int64 v5; // rbp
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _DWORD *v8; // rax
  int *v9; // r12
  _DWORD *v10; // rdx
  int v11; // ecx
  int v12; // edi
  __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // r13d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rax
  __int64 v20[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = sub_186B270(0x58u);
  *(_OWORD *)(v5 + 8) = 0;
  sub_6299B0(v5 + 24);
  sub_6299B0(v5 + 32);
  *(_BYTE *)(v5 + 40) = 0;
  *(_QWORD *)v5 = off_1C66400;
  v6 = (_QWORD *)sub_186B270(0xC0u);
  *v6 = 0;
  v6[3] = 0;
  v6[6] = 0;
  v6[9] = 0;
  v6[12] = 0;
  v6[15] = 0;
  v6[18] = 0;
  v6[21] = 0;
  *(_QWORD *)(v5 + 48) = v6;
  *(_QWORD *)(v5 + 56) = 8;
  *(_DWORD *)(v5 + 64) = 0;
  *(_QWORD *)v5 = off_1C4F6E0;
  *(_DWORD *)(v5 + 72) = a1;
  *(_QWORD *)(v5 + 80) = 0;
  if ( a2 )
  {
    v7 = (_QWORD *)sub_186B270(0x10u);
    *v7 = 2;
    v8 = v7 + 1;
    v9 = &a3[a2];
    *(_QWORD *)(v5 + 80) = v8;
    v10 = v8;
    while ( 1 )
    {
      v11 = *a3++;
      *v8 = v11;
      v12 = *(v10 - 1);
      v13 = (unsigned int)(v12 + 1);
      *(v10 - 1) = v13;
      if ( v9 == a3 )
        break;
      v14 = *(v10 - 2);
      if ( v14 == (_DWORD)v13 )
      {
        v15 = (3 * v14 + 1) >> 1;
        v16 = 4 * v15 + 8;
        if ( 4 * v12 + 12 >= (unsigned int)v16 || v14 >= v15 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_4D9940(v20, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v20);
          sub_233E40((__int64)v20);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v17 = (unsigned int *)sub_186B300(v10 - 2, v16);
        v10 = v17 + 2;
        *v17 = v15;
        v18 = v17[1];
        *(_QWORD *)(v5 + 80) = v10;
        v8 = &v10[v18];
      }
      else
      {
        v8 = &v10[v13];
      }
    }
  }
  return v5;
}

