__int64 __fastcall sub_4DD3A0(int a1, int a2, unsigned int a3, int *a4, int *a5, int a6)
{
  char **v6; // r12
  char **exception; // r12
  __int64 v9; // r12
  __int64 v10; // rbp
  _QWORD *v11; // rax
  _DWORD *v12; // rax
  __int64 v13; // r12
  int *v14; // r13
  _DWORD *v15; // rdx
  int v16; // ecx
  int v17; // edi
  __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned int v20; // ebx
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  _DWORD *v25; // rax
  int *v26; // rbx
  _DWORD *v27; // rdx
  int *v28; // r12
  int v29; // ecx
  int v30; // edi
  __int64 v31; // rax
  unsigned int v32; // ecx
  unsigned int v33; // r14d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rax
  __int64 v40[11]; // [rsp+10h] [rbp-58h] BYREF

  v9 = a3;
  v10 = sub_186B270(0x68u);
  *(_OWORD *)(v10 + 8) = 0;
  sub_6299B0(v10 + 24);
  sub_6299B0(v10 + 32);
  *(_BYTE *)(v10 + 40) = 0;
  *(_QWORD *)v10 = off_1C66400;
  v11 = (_QWORD *)sub_186B270(0xC0u);
  *v11 = 0;
  v11[3] = 0;
  v11[6] = 0;
  v11[9] = 0;
  v11[12] = 0;
  v11[15] = 0;
  v11[18] = 0;
  v11[21] = 0;
  *(_QWORD *)(v10 + 48) = v11;
  *(_QWORD *)(v10 + 56) = 8;
  *(_DWORD *)(v10 + 64) = 0;
  *(_QWORD *)v10 = off_1C4F650;
  *(_DWORD *)(v10 + 72) = a1;
  *(_DWORD *)(v10 + 76) = a2;
  *(_QWORD *)(v10 + 80) = 0;
  if ( (_DWORD)v9 )
  {
    v12 = (_DWORD *)(sub_186B270(0x10u) + 8);
    v13 = v9;
    v14 = &a4[v13];
    *((_QWORD *)v12 - 1) = 2;
    v15 = v12;
    *(_QWORD *)(v10 + 80) = v12;
    while ( 1 )
    {
      v16 = *a4++;
      *v12 = v16;
      v17 = *(v15 - 1);
      v18 = (unsigned int)(v17 + 1);
      *(v15 - 1) = v18;
      if ( v14 == a4 )
        break;
      v19 = *(v15 - 2);
      if ( v19 == (_DWORD)v18 )
      {
        v20 = (3 * v19 + 1) >> 1;
        v21 = 4 * v20 + 8;
        if ( 4 * v17 + 12 >= (unsigned int)v21 || v19 >= v20 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_4D9940(v40, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v40);
          sub_233E40((__int64)v40);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v22 = (unsigned int *)sub_186B300(v15 - 2, v21);
        v15 = v22 + 2;
        *v22 = v20;
        v23 = v22[1];
        *(_QWORD *)(v10 + 80) = v15;
        v12 = &v15[v23];
      }
      else
      {
        v12 = &v15[v18];
      }
    }
    *(_QWORD *)(v10 + 88) = 0;
    v24 = (_QWORD *)sub_186B270(0x10u);
    *v24 = 2;
    v25 = v24 + 1;
    v26 = a5;
    *(_QWORD *)(v10 + 88) = v25;
    v27 = v25;
    v28 = &a5[v13];
    while ( 1 )
    {
      v29 = *v26++;
      *v25 = v29;
      v30 = *(v27 - 1);
      v31 = (unsigned int)(v30 + 1);
      *(v27 - 1) = v31;
      if ( v26 == v28 )
        break;
      v32 = *(v27 - 2);
      if ( v32 == (_DWORD)v31 )
      {
        v33 = (3 * v32 + 1) >> 1;
        v34 = 4 * v33 + 8;
        if ( 4 * v30 + 12 >= (unsigned int)v34 || v32 >= v33 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_4D9940(v40, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v40);
          sub_233E40((__int64)v40);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v35 = (unsigned int *)sub_186B300(v27 - 2, v34);
        v27 = v35 + 2;
        *v35 = v33;
        v36 = v35[1];
        *(_QWORD *)(v10 + 88) = v27;
        v25 = &v27[v36];
      }
      else
      {
        v25 = &v27[v31];
      }
    }
  }
  else
  {
    *(_QWORD *)(v10 + 88) = 0;
  }
  *(_DWORD *)(v10 + 96) = a6;
  return v10;
}

