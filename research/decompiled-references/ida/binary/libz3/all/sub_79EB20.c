__int64 __fastcall sub_79EB20(__int64 a1, __int64 a2, char a3, char a4)
{
  char **exception; // rbx
  _QWORD *v6; // rdx
  char v7; // dl
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // rax
  _QWORD *v14; // rax
  int v15; // eax
  _QWORD *v16; // rsi
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // r9d
  size_t v20; // rsi
  unsigned int v21; // r13d
  unsigned int *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  unsigned int v27; // [rsp+Ch] [rbp-6Ch]
  __int64 v28[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = *(_QWORD **)(a1 + 40);
  if ( *(_WORD *)(a2 + 4) )
  {
    if ( v6 )
      *((_DWORD *)v6 - 1) = 0;
LABEL_4:
    v27 = 0;
    goto LABEL_5;
  }
  v27 = *(_DWORD *)(a2 + 24);
  if ( v6 )
    *((_DWORD *)v6 - 1) = 0;
  if ( !v27 )
    goto LABEL_4;
  v10 = a2 + 8LL * v27;
  v11 = *(_QWORD *)(a1 + 1720);
  v12 = a2;
  v13 = **(unsigned int **)(a2 + 32);
  if ( v11 )
  {
    if ( (unsigned int)v13 >= *(_DWORD *)(v11 - 4) )
      v11 = 0;
    else
      v11 = *(_QWORD *)(v11 + 8 * v13);
  }
  if ( v6 )
    goto LABEL_23;
  v14 = (_QWORD *)sub_186B270(0x18u);
  v6 = v14 + 1;
  *v14 = 2;
  v15 = 1;
  *(_QWORD *)(a1 + 40) = v6;
  v16 = v6;
  while ( 1 )
  {
    v12 += 8;
    *v16 = v11;
    *((_DWORD *)v6 - 1) = v15;
    if ( v10 == v12 )
      break;
    while ( 1 )
    {
      v11 = *(_QWORD *)(a1 + 1720);
      if ( v11 )
      {
        v17 = **(unsigned int **)(v12 + 32);
        if ( (unsigned int)v17 >= *(_DWORD *)(v11 - 4) )
          v11 = 0;
        else
          v11 = *(_QWORD *)(v11 + 8 * v17);
      }
LABEL_23:
      v18 = *((_DWORD *)v6 - 1);
      if ( v18 == *((_DWORD *)v6 - 2) )
        break;
      v12 += 8;
      v6[v18] = v11;
      *((_DWORD *)v6 - 1) = v18 + 1;
      if ( v10 == v12 )
        goto LABEL_5;
    }
    v19 = (3 * v18 + 1) >> 1;
    v20 = 8 * v19 + 8;
    v21 = v19;
    if ( 8 * v18 + 8 >= (unsigned int)v20 || v18 >= v19 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v28, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v28);
      sub_233E40((__int64)v28);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v22 = (unsigned int *)sub_186B300(v6 - 1, v20);
    v23 = v22[1];
    v6 = v22 + 2;
    *v22 = v21;
    *(_QWORD *)(a1 + 40) = v22 + 2;
    LODWORD(v22) = v23;
    v16 = &v6[v23];
    v15 = (_DWORD)v22 + 1;
  }
LABEL_5:
  if ( !a4 || (v7 = sub_79EA10(a1, a2, a3, (_QWORD *)(a1 + 40)), result = 0, !v7) )
  {
    v9 = sub_7CF0A0(a1, a2);
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v9 + 48) + 48LL))(v9 + 48, a2);
    }
    else
    {
      v24 = sub_79AF20(a1, a2, v27, *(_QWORD ***)(a1 + 40));
      sub_79D5A0(a1, v24);
    }
    return 1;
  }
  return result;
}

