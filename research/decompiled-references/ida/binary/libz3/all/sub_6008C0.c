__int64 __fastcall sub_6008C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **exception; // rbx
  __int64 v6; // rbp
  unsigned int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 result; // rax
  _QWORD *v12; // rdx
  __int64 v13; // rbp
  unsigned int v14; // r14d
  size_t v15; // rsi
  unsigned int *v16; // rax
  unsigned int v17; // edi
  __int64 v18; // rsi
  _QWORD *v19; // rcx
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rax
  unsigned int v25; // [rsp+Ch] [rbp-6Ch]
  __int64 v26[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a1 + 8) + 16LL;
  v7 = sub_648530(v6, a4);
  v8 = sub_648530(v6, a2);
  if ( v7 < v8 )
    v7 = v8;
  sub_FA3BF0(a1 + 448);
  v9 = v7 + 1;
  if ( *(_DWORD *)(a1 + 464) <= 1u || *(_DWORD *)(a1 + 468) < v9 )
  {
    v12 = *(_QWORD **)(a1 + 456);
    v13 = 2 * v9;
    if ( v12 )
    {
      v25 = *((_DWORD *)v12 - 1);
      if ( v25 >= (unsigned int)v13 )
      {
        *((_DWORD *)v12 - 1) = v13;
LABEL_12:
        *(_DWORD *)(a1 + 468) = v9;
        *(_DWORD *)(a1 + 464) = 2;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !(_DWORD)v13 )
        goto LABEL_12;
      v24 = (_QWORD *)sub_186B270(0x38u);
      v25 = 0;
      v12 = v24 + 1;
      *v24 = 2;
      *(_QWORD *)(a1 + 456) = v24 + 1;
    }
    while ( 1 )
    {
      v17 = *((_DWORD *)v12 - 2);
      if ( v17 >= (unsigned int)v13 )
        break;
      v14 = (3 * v17 + 1) >> 1;
      v15 = 8 * (v14 + ((3 * v17 + 1) & 0xFFFFFFFE)) + 8;
      if ( 24 * v17 + 8 >= (unsigned int)v15 || v17 >= v14 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v26, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v26);
        sub_233E40((__int64)v26);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = (unsigned int *)sub_186B300(v12 - 1, v15);
      v12 = v16 + 2;
      *v16 = v14;
      *(_QWORD *)(a1 + 456) = v16 + 2;
    }
    *((_DWORD *)v12 - 1) = v13;
    v18 = 3LL * v25;
    v19 = &v12[v18];
    v20 = &v12[3 * v13];
    if ( v18 != 3 * v13 )
    {
      v21 = v19;
      do
      {
        *v21 = 0;
        v21 += 3;
        *((_DWORD *)v21 - 2) = 0;
      }
      while ( v20 != v21 );
      if ( (((_BYTE)v20 - (_BYTE)v19) & 8) == 0 || (*((_DWORD *)v19 + 2) = 0, v19 += 3, v20 != v19) )
      {
        do
        {
          *((_DWORD *)v19 + 2) = 0;
          v19 += 6;
          *((_DWORD *)v19 - 4) = 0;
        }
        while ( v20 != v19 );
      }
    }
    goto LABEL_12;
  }
LABEL_5:
  v10 = *(_DWORD *)(a1 + 472) + 1;
  *(_DWORD *)(a1 + 472) = v10;
  if ( v10 == -1 )
  {
    v22 = *(_QWORD *)(a1 + 456);
    if ( v22 )
    {
      v23 = v22 + 24LL * *(unsigned int *)(v22 - 4);
      if ( v22 != v23 )
      {
        if ( ((24 * (unsigned __int8)*(_DWORD *)(v22 - 4)) & 8) == 0
          || (*(_DWORD *)(v22 + 16) = 0, v22 += 24, v23 != v22) )
        {
          do
          {
            *(_DWORD *)(v22 + 16) = 0;
            v22 += 48;
            *(_DWORD *)(v22 - 8) = 0;
          }
          while ( v23 != v22 );
        }
      }
    }
    *(_DWORD *)(a1 + 472) = 1;
  }
  result = sub_FB5F20((int)a1 + 576);
  *(_BYTE *)(a1 + 640) = result;
  if ( (_BYTE)result )
  {
    *(_DWORD *)(a1 + 644) = 0;
    *(_DWORD *)(a1 + 648) = v9;
  }
  return result;
}

