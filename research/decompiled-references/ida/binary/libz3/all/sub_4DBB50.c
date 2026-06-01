__int64 __fastcall sub_4DBB50(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4, int a5)
{
  char **exception; // r12
  __int64 v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rbp
  _QWORD *v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  _QWORD *v17; // rdx
  unsigned int v19; // r12d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 v24[11]; // [rsp+0h] [rbp-58h] BYREF

  v9 = sub_186B270(0x70u);
  *(_OWORD *)(v9 + 8) = 0;
  sub_6299B0(v9 + 24);
  sub_6299B0(v9 + 32);
  *(_BYTE *)(v9 + 40) = 0;
  *(_QWORD *)v9 = off_1C66400;
  v10 = (_QWORD *)sub_186B270(0xC0u);
  *v10 = 0;
  v10[3] = 0;
  v10[6] = 0;
  v10[9] = 0;
  v10[12] = 0;
  v10[15] = 0;
  v10[18] = 0;
  v10[21] = 0;
  *(_QWORD *)(v9 + 48) = v10;
  *(_QWORD *)(v9 + 56) = 8;
  *(_DWORD *)(v9 + 64) = 0;
  *(_QWORD *)v9 = &off_1C4F920;
  *(_QWORD *)(v9 + 72) = 0;
  *(_QWORD *)(v9 + 80) = a2;
  *(_DWORD *)(v9 + 88) = a5;
  *(_QWORD *)(v9 + 96) = a1;
  *(_QWORD *)(v9 + 104) = 0;
  v11 = (_QWORD *)sub_186B270(0x18u);
  v12 = *a4;
  *(_QWORD *)(v9 + 72) = v11 + 1;
  v11[1] = *a3;
  *v11 = 0x100000002LL;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v13 = *(_QWORD **)(v9 + 104);
  if ( v13 )
  {
    v14 = *((_DWORD *)v13 - 1);
    if ( v14 == *((_DWORD *)v13 - 2) )
    {
      v19 = (3 * v14 + 1) >> 1;
      v20 = 8 * v19 + 8;
      if ( 8 * v14 + 8 >= (unsigned int)v20 || v14 >= v19 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_4D9940(v24, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v24);
        sub_233E40((__int64)v24);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v21 = (unsigned int *)sub_186B300(v13 - 1, v20);
      v22 = v21[1];
      v13 = v21 + 2;
      *v21 = v19;
      *(_QWORD *)(v9 + 104) = v21 + 2;
      LODWORD(v21) = v22;
      v17 = &v13[v22];
      v16 = (_DWORD)v21 + 1;
    }
    else
    {
      v15 = v14;
      v16 = v14 + 1;
      v17 = &v13[v15];
    }
  }
  else
  {
    v23 = (_QWORD *)sub_186B270(0x18u);
    v13 = v23 + 1;
    *v23 = 2;
    v16 = 1;
    *(_QWORD *)(v9 + 104) = v13;
    v17 = v13;
  }
  *v17 = v12;
  *((_DWORD *)v13 - 1) = v16;
  return v9;
}

