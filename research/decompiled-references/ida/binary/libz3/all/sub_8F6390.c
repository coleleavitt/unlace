__int64 __fastcall sub_8F6390(__int64 a1)
{
  char **exception; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  char v5; // r14
  __int64 v6; // rdi
  unsigned int v7; // r12d
  __int64 v8; // rdi
  unsigned int v9; // ebp
  unsigned int v10; // eax
  char v11; // al
  int v13; // eax
  char v14; // r12
  __int64 v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // rbp
  unsigned int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  __int64 *v21; // rdx
  unsigned int v22; // r12d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rax
  char v27; // [rsp+7h] [rbp-51h] BYREF
  unsigned int v28; // [rsp+8h] [rbp-50h] BYREF
  int v29; // [rsp+Ch] [rbp-4Ch] BYREF
  __int64 v30[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 9472) == *(_DWORD *)(a1 + 9464) )
  {
    v3 = *(_QWORD *)(a1 + 8928);
    if ( v3 )
    {
      if ( *(_DWORD *)(v3 - 4) )
      {
        v13 = sub_8F3020(a1);
        if ( v13 == -1 )
          return 0;
        if ( !v13 )
          return 1;
      }
    }
  }
  v4 = *(_QWORD *)(a1 + 7496);
  if ( v4 )
  {
    if ( (unsigned __int8)sub_B34A60(v4, &v28, &v27) )
    {
      v5 = 0;
      if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8848) + 2 * v28) )
        goto LABEL_9;
    }
  }
  v6 = *(_QWORD *)(a1 + 8952);
  v29 = 0;
  (*(void (__fastcall **)(__int64, unsigned int *, int *))(*(_QWORD *)v6 + 104LL))(v6, &v28, &v29);
  if ( v28 != 0x7FFFFFFF )
  {
    v5 = 1;
    v27 = sub_8E87A0(a1, v28, v29);
LABEL_9:
    ++*(_DWORD *)(a1 + 24);
    sub_8EC360(a1);
    v7 = v28;
    v8 = *(_QWORD *)(a1 + 7496);
    v9 = 2 * v28;
    if ( v8 )
    {
      sub_B35010(v8, &v28, &v27);
      v10 = v28;
      if ( v7 != v28 )
      {
        if ( v5 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8952) + 40LL))(*(_QWORD *)(a1 + 8952), v7);
          v10 = v28;
        }
        v9 = 2 * v10;
      }
    }
    if ( !v27 )
      v9 ^= 1u;
    v11 = *(_BYTE *)(*(_QWORD *)(a1 + 8848) + v9);
    if ( v11 == -1 )
    {
      if ( *(_QWORD *)(a1 + 8984) == qword_1C7EC50 && !*(_BYTE *)(a1 + 2416) )
      {
        *(_QWORD *)(a1 + 8984) = 2;
        *(_DWORD *)(a1 + 8992) = v9 ^ 1;
      }
    }
    else if ( !v11 )
    {
      sub_8F28B0(a1, v9, 2, 1u);
    }
    return 1;
  }
  v14 = *(_BYTE *)(a1 + 10372);
  *(_BYTE *)(a1 + 10372) = 0;
  v15 = sub_180C100(a1 + 8400, 24);
  v16 = *(_QWORD **)(a1 + 9456);
  v17 = v15;
  *(_QWORD *)v15 = off_1C54EE8;
  *(_QWORD *)(v15 + 8) = a1 + 10372;
  *(_BYTE *)(v15 + 16) = v14;
  if ( v16 )
  {
    v18 = *((_DWORD *)v16 - 1);
    if ( v18 == *((_DWORD *)v16 - 2) )
    {
      v22 = (3 * v18 + 1) >> 1;
      v23 = 8 * v22 + 8;
      if ( 8 * v18 + 8 >= (unsigned int)v23 || v18 >= v22 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_8E4EB0(v30, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v30);
        sub_233E40((__int64)v30);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v24 = (unsigned int *)sub_186B300(v16 - 1, v23);
      v25 = v24[1];
      v16 = v24 + 2;
      *v24 = v22;
      *(_QWORD *)(a1 + 9456) = v24 + 2;
      LODWORD(v24) = v25;
      v21 = &v16[v25];
      v20 = (_DWORD)v24 + 1;
    }
    else
    {
      v19 = v18;
      v20 = v18 + 1;
      v21 = &v16[v19];
    }
  }
  else
  {
    v26 = (_QWORD *)sub_186B270(0x18u);
    v16 = v26 + 1;
    *v26 = 2;
    v20 = 1;
    *(_QWORD *)(a1 + 9456) = v16;
    v21 = v16;
  }
  *v21 = v17;
  *((_DWORD *)v16 - 1) = v20;
  return 0;
}

