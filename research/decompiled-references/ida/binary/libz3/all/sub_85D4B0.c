__int64 __fastcall sub_85D4B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char **exception; // rbp
  char **v7; // rbp
  char *v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rbp
  __int64 v14; // r14
  _QWORD *v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 *v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // r12
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 result; // rax
  _QWORD *v26; // rcx
  unsigned int v27; // r13d
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // r15d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // [rsp+0h] [rbp-68h]
  __int64 v38[11]; // [rsp+10h] [rbp-58h] BYREF

  v38[1] = a2;
  v38[0] = 3;
  v38[2] = 0;
  sub_865240(a1, v38, a3, a4, a5, a6, v37);
  if ( *(int *)(a2 + 88) >> 8 == -1 )
  {
LABEL_14:
    v10 = -1;
  }
  else
  {
    v9 = (char *)(a2 + 88);
    while ( *(_DWORD *)(a1 + 12) != *v9 )
    {
      v9 = *((char **)v9 + 1);
      if ( !v9 )
        goto LABEL_14;
    }
    v10 = *(int *)v9 >> 8;
  }
  do
  {
    v11 = v10;
    v12 = v10;
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4LL * v10);
  }
  while ( v12 != v10 );
  v13 = *(_QWORD *)(a1 + 80);
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8 * v11);
  v15 = *(_QWORD **)(v14 + 8);
  if ( v15 )
  {
    v16 = *((_DWORD *)v15 - 1);
    if ( v16 == *((_DWORD *)v15 - 2) )
    {
      v31 = (3 * v16 + 1) >> 1;
      v32 = 8 * v31 + 8;
      if ( 8 * v16 + 8 >= (unsigned int)v32 || v16 >= v31 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v38, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v38);
        sub_233E40((__int64)v38);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v33 = (unsigned int *)sub_186B300(v15 - 1, v32);
      v34 = v33[1];
      v15 = v33 + 2;
      *(_QWORD *)(v14 + 8) = v33 + 2;
      *v33 = v31;
      LODWORD(v33) = v34;
      v19 = &v15[v34];
      v18 = (_DWORD)v33 + 1;
    }
    else
    {
      v17 = v16;
      v18 = v16 + 1;
      v19 = &v15[v17];
    }
  }
  else
  {
    v36 = (_QWORD *)sub_186B270(0x18u);
    v15 = v36 + 1;
    *v36 = 2;
    v18 = 1;
    *(_QWORD *)(v14 + 8) = v15;
    v19 = v15;
  }
  *v19 = a2;
  *((_DWORD *)v15 - 1) = v18;
  v20 = (_QWORD *)sub_180C100(v13 + 2144, 16);
  v21 = *(_QWORD **)(v13 + 2128);
  v22 = v20;
  *v20 = off_1C54F38;
  v20[1] = v14 + 8;
  if ( v21 )
  {
    v23 = *((_DWORD *)v21 - 1);
    if ( v23 == *((_DWORD *)v21 - 2) )
    {
      v27 = (3 * v23 + 1) >> 1;
      v28 = 8 * v27 + 8;
      if ( 8 * v23 + 8 >= (unsigned int)v28 || v23 >= v27 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v38, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v38);
        sub_233E40((__int64)v38);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v29 = (unsigned int *)sub_186B300(v21 - 1, v28);
      v30 = v29[1];
      v21 = v29 + 2;
      *(_QWORD *)(v13 + 2128) = v29 + 2;
      *v29 = v27;
      LODWORD(v29) = v30;
      v26 = &v21[v30];
      result = (unsigned int)((_DWORD)v29 + 1);
    }
    else
    {
      v24 = v23;
      result = v23 + 1;
      v26 = &v21[v24];
    }
  }
  else
  {
    v35 = (_QWORD *)sub_186B270(0x18u);
    v21 = v35 + 1;
    *v35 = 2;
    result = 1;
    *(_QWORD *)(v13 + 2128) = v21;
    v26 = v21;
  }
  *v26 = v22;
  *((_DWORD *)v21 - 1) = result;
  return result;
}

