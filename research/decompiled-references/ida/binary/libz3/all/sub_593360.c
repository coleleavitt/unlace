__int64 __fastcall sub_593360(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  char **exception; // r12
  char **v7; // r12
  int v8; // eax
  int *v11; // r13
  __int64 v13; // rbx
  _DWORD *v14; // rax
  int *v15; // rbp
  _DWORD *v16; // rdx
  int v17; // esi
  int v18; // r9d
  __int64 v19; // rax
  unsigned int v20; // edi
  unsigned int v22; // r10d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rax
  _DWORD *v26; // rax
  int *v27; // r13
  _DWORD *v28; // rdx
  int v29; // esi
  int v30; // r8d
  __int64 v31; // rax
  unsigned int v32; // edi
  unsigned int v33; // r15d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rax
  __int64 v38; // [rsp+8h] [rbp-80h]
  __int64 v39; // [rsp+10h] [rbp-78h]
  __int64 v40[11]; // [rsp+30h] [rbp-58h] BYREF

  v8 = *(_DWORD *)(a1 + 8);
  if ( *(_DWORD *)(a2 + 32) != v8 || *(_DWORD *)(a3 + 32) != v8 )
    return 0;
  v11 = (int *)a5;
  v13 = sub_186B270(0x30u);
  v38 = a3 + 16;
  v39 = a2 + 16;
  *(_QWORD *)v13 = qword_1C65DA0;
  *(_QWORD *)(v13 + 8) = 0;
  *(_DWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 24) = 0;
  if ( a4 )
  {
    v14 = (_DWORD *)(sub_186B270(0x10u) + 8);
    *((_QWORD *)v14 - 1) = 2;
    v15 = &v11[a4];
    v16 = v14;
    *(_QWORD *)(v13 + 24) = v14;
    while ( 1 )
    {
      v17 = *v11++;
      *v14 = v17;
      v18 = *(v16 - 1);
      v19 = (unsigned int)(v18 + 1);
      *(v16 - 1) = v19;
      if ( v11 == v15 )
        break;
      v20 = *(v16 - 2);
      if ( v20 == (_DWORD)v19 )
      {
        v22 = (3 * v20 + 1) >> 1;
        v23 = 4 * v22 + 8;
        if ( 4 * v18 + 12 >= (unsigned int)v23 || v20 >= v22 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v40, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v40);
          sub_233E40((__int64)v40);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v24 = (unsigned int *)sub_186B300(v16 - 2, v23);
        v16 = v24 + 2;
        *v24 = (3 * v20 + 1) >> 1;
        v25 = v24[1];
        *(_QWORD *)(v13 + 24) = v16;
        v14 = &v16[v25];
      }
      else
      {
        v14 = &v16[v19];
      }
    }
    *(_QWORD *)(v13 + 32) = 0;
    v26 = (_DWORD *)(sub_186B270(0x10u) + 8);
    v27 = (int *)a6;
    *((_QWORD *)v26 - 1) = 2;
    v28 = v26;
    *(_QWORD *)(v13 + 32) = v26;
    while ( 1 )
    {
      v29 = *v27++;
      *v26 = v29;
      v30 = *(v28 - 1);
      v31 = (unsigned int)(v30 + 1);
      *(v28 - 1) = v31;
      if ( v27 == (int *)(a6 + 4LL * a4) )
        break;
      v32 = *(v28 - 2);
      if ( v32 == (_DWORD)v31 )
      {
        v33 = (3 * v32 + 1) >> 1;
        v34 = 4 * v33 + 8;
        if ( 4 * v30 + 12 >= (unsigned int)v34 || v32 >= v33 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v40, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, v40);
          sub_233E40((__int64)v40);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v35 = (unsigned int *)sub_186B300(v28 - 2, v34);
        v28 = v35 + 2;
        *v35 = v33;
        v36 = v35[1];
        *(_QWORD *)(v13 + 32) = v28;
        v26 = &v28[v36];
      }
      else
      {
        v26 = &v28[v31];
      }
    }
  }
  else
  {
    *(_QWORD *)(v13 + 32) = 0;
  }
  sub_4D84B0(v39, v38, a4, a5, a6, v13 + 8);
  *(_DWORD *)(v13 + 40) = a4;
  *(_QWORD *)v13 = &off_1C51B70;
  return v13;
}

