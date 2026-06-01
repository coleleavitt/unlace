__int64 __fastcall sub_DC2F20(_QWORD *a1, char a2)
{
  void *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // ecx
  unsigned int v21; // ebp
  __int64 v22; // rbx
  __int64 v23; // rdi
  int v24; // eax
  _QWORD *exception; // rbx
  void *v26; // [rsp+8h] [rbp-20h] BYREF

  v4 = (void *)a1[6];
  v5 = *a1;
  v26 = v4;
  v6 = sub_DF89E0(v5, &v26);
  v7 = v6;
  if ( v6 )
  {
    if ( (unsigned int)(*(_DWORD *)(v6 + 12) - 1) <= 0xFFFFFFFD )
    {
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "sort constructor expects parameters");
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    if ( *((_DWORD *)a1 + 356) == 9 )
    {
      v8 = *a1;
      v9 = *(_QWORD *)(*a1 + 312LL);
      if ( v9 )
        return sub_DE16F0(v9, v7);
    }
    else
    {
      sub_DC0980(a1);
      v8 = *a1;
      v9 = *(_QWORD *)(*a1 + 312LL);
      if ( v9 )
        return sub_DE16F0(v9, v7);
    }
    sub_DFBCB0(v8);
    v9 = *(_QWORD *)(v8 + 312);
    return sub_DE16F0(v9, v7);
  }
  v11 = a1[190];
  v12 = *((unsigned int *)a1 + 382);
  if ( v26 )
  {
    if ( ((unsigned __int8)v26 & 7) == 1 )
      v13 = (unsigned __int64)v26 >> 3;
    else
      LODWORD(v13) = *((_DWORD *)v26 - 2);
  }
  else
  {
    LODWORD(v13) = -1640531495;
  }
  v14 = v12 - 1;
  v15 = 24 * v12;
  v16 = v11 + v15;
  v17 = 24LL * ((unsigned int)v13 & v14);
  v18 = v11 + v17;
  if ( v17 == v15 )
  {
LABEL_25:
    while ( v18 != v11 )
    {
      v24 = *(_DWORD *)(v11 + 4);
      if ( v24 == 2 )
      {
        if ( (_DWORD)v13 == *(_DWORD *)v11 && v26 == *(void **)(v11 + 8) )
        {
          v19 = v11;
          goto LABEL_19;
        }
      }
      else if ( !v24 )
      {
        break;
      }
      v11 += 24;
    }
LABEL_33:
    if ( !a2 )
      sub_DBFCB0(v26);
    return v7;
  }
  v19 = v11 + v17;
  while ( 1 )
  {
    v20 = *(_DWORD *)(v19 + 4);
    if ( v20 != 2 )
    {
      if ( !v20 )
        goto LABEL_33;
      goto LABEL_15;
    }
    if ( (_DWORD)v13 == *(_DWORD *)v19 && *(void **)(v19 + 8) == v26 )
      break;
LABEL_15:
    v19 += 24;
    if ( v16 == v19 )
      goto LABEL_25;
  }
LABEL_19:
  v21 = *(_DWORD *)(v19 + 16);
  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
  v22 = *a1;
  v23 = *(_QWORD *)(*a1 + 312LL);
  if ( !v23 )
  {
    sub_DFBCB0(*a1);
    v23 = *(_QWORD *)(v22 + 312);
  }
  return sub_DE3130(v23, *((unsigned int *)a1 + 383), v21);
}

