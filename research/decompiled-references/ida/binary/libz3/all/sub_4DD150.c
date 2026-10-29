__int64 __fastcall sub_4DD150(int a1, int a2, unsigned int a3, int *a4, int *a5)
{
  char **v5; // rbp
  char **exception; // rbp
  __int64 v7; // r13
  __int64 v9; // r12
  _QWORD *v10; // rax
  _DWORD *v11; // rax
  __int64 v12; // r13
  int *v13; // r15
  _DWORD *v14; // rdx
  int v15; // ecx
  int v16; // edi
  __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // ebx
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  _DWORD *v24; // rax
  int *v25; // rbx
  _DWORD *v26; // rdx
  int *v27; // r13
  int v28; // ecx
  int v29; // edi
  __int64 v30; // rax
  unsigned int v31; // ecx
  unsigned int v32; // ebp
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rax
  __int64 v38[11]; // [rsp+10h] [rbp-58h] BYREF

  v7 = a3;
  v9 = sub_186B270(0x60u);
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
  *(_QWORD *)v9 = off_1C4F8D8;
  *(_DWORD *)(v9 + 72) = a1;
  *(_DWORD *)(v9 + 76) = a2;
  *(_QWORD *)(v9 + 80) = 0;
  if ( (_DWORD)v7 )
  {
    v11 = (_DWORD *)(sub_186B270(0x10u) + 8);
    v12 = v7;
    v13 = &a4[v12];
    *((_QWORD *)v11 - 1) = 2;
    v14 = v11;
    *(_QWORD *)(v9 + 80) = v11;
    while ( 1 )
    {
      v15 = *a4++;
      *v11 = v15;
      v16 = *(v14 - 1);
      v17 = (unsigned int)(v16 + 1);
      *(v14 - 1) = v17;
      if ( v13 == a4 )
        break;
      v18 = *(v14 - 2);
      if ( v18 == (_DWORD)v17 )
      {
        v19 = (3 * v18 + 1) >> 1;
        v20 = 4 * v19 + 8;
        if ( 4 * v16 + 12 >= (unsigned int)v20 || v18 >= v19 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_4D9940(v38, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v38);
          sub_233E40((__int64)v38);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v21 = (unsigned int *)sub_186B300(v14 - 2, v20);
        v14 = v21 + 2;
        *v21 = v19;
        v22 = v21[1];
        *(_QWORD *)(v9 + 80) = v14;
        v11 = &v14[v22];
      }
      else
      {
        v11 = &v14[v17];
      }
    }
    *(_QWORD *)(v9 + 88) = 0;
    v23 = (_QWORD *)sub_186B270(0x10u);
    *v23 = 2;
    v24 = v23 + 1;
    v25 = a5;
    *(_QWORD *)(v9 + 88) = v24;
    v26 = v24;
    v27 = &a5[v12];
    while ( 1 )
    {
      v28 = *v25++;
      *v24 = v28;
      v29 = *(v26 - 1);
      v30 = (unsigned int)(v29 + 1);
      *(v26 - 1) = v30;
      if ( v25 == v27 )
        break;
      v31 = *(v26 - 2);
      if ( v31 == (_DWORD)v30 )
      {
        v32 = (3 * v31 + 1) >> 1;
        v33 = 4 * v32 + 8;
        if ( 4 * v29 + 12 >= (unsigned int)v33 || v31 >= v32 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_4D9940(v38, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v38);
          sub_233E40((__int64)v38);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v34 = (unsigned int *)sub_186B300(v26 - 2, v33);
        v26 = v34 + 2;
        *v34 = v32;
        v35 = v34[1];
        *(_QWORD *)(v9 + 88) = v26;
        v24 = &v26[v35];
      }
      else
      {
        v24 = &v26[v30];
      }
    }
  }
  else
  {
    *(_QWORD *)(v9 + 88) = 0;
  }
  return v9;
}

