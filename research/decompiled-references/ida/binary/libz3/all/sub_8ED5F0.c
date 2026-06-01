__int64 __fastcall sub_8ED5F0(__int64 a1)
{
  char **exception; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rbp
  unsigned int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 *v14; // rdx
  __int64 result; // rax
  unsigned int v16; // r12d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // [rsp+8h] [rbp-60h]
  _BYTE v22[16]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v23; // [rsp+20h] [rbp-48h]
  __int64 v24[7]; // [rsp+30h] [rbp-38h] BYREF

  v3 = sub_C0F6C0(a1 + 216);
  v4 = *(_QWORD *)(a1 + 9016);
  v5 = *(_QWORD *)(a1 + 9008);
  if ( v3 )
  {
    ++*(_DWORD *)(v3 + 8);
    v6 = v3;
    if ( v5 )
    {
      v7 = (*(_DWORD *)(v5 + 8))-- == 1;
      if ( v7 )
      {
        v21 = v3;
        sub_15D7BC0(v4, v5);
        v6 = v21;
      }
    }
    *(_QWORD *)(a1 + 9008) = v6;
    sub_B725E0(v22, a1, v6, 1);
    v8 = sub_180C100(a1 + 8400, 24);
    v9 = *(_QWORD **)(a1 + 8600);
    v10 = v8;
    *(_BYTE *)(v8 + 8) = v22[8] & 3 | *(_BYTE *)(v8 + 8) & 0xFC;
    *(_QWORD *)v8 = off_1C57620;
    *(_QWORD *)(v8 + 16) = v23;
    if ( v9 )
    {
      v11 = *((_DWORD *)v9 - 1);
      if ( v11 == *((_DWORD *)v9 - 2) )
      {
        v16 = (3 * v11 + 1) >> 1;
        v17 = 8 * v16 + 8;
        if ( 8 * v11 + 8 >= (unsigned int)v17 || v11 >= v16 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_8E4EB0(v24, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v24);
          sub_233E40((__int64)v24);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v18 = (unsigned int *)sub_186B300(v9 - 1, v17);
        v19 = v18[1];
        v9 = v18 + 2;
        *v18 = v16;
        *(_QWORD *)(a1 + 8600) = v18 + 2;
        LODWORD(v18) = v19;
        v14 = &v9[v19];
        v13 = (_DWORD)v18 + 1;
      }
      else
      {
        v12 = v11;
        v13 = v11 + 1;
        v14 = &v9[v12];
      }
    }
    else
    {
      v20 = (_QWORD *)sub_186B270(0x18u);
      v9 = v20 + 1;
      *v20 = 2;
      v13 = 1;
      *(_QWORD *)(a1 + 8600) = v9;
      v14 = v9;
    }
    *v14 = v10;
    *((_DWORD *)v9 - 1) = v13;
    result = qword_1C7EC50;
    if ( *(_QWORD *)(a1 + 8984) == qword_1C7EC50 && !*(_BYTE *)(a1 + 2416) )
    {
      *(_DWORD *)(a1 + 8992) = -2;
      *(_QWORD *)(a1 + 8984) = v10 | 3;
    }
  }
  else
  {
    if ( v5 )
    {
      v7 = (*(_DWORD *)(v5 + 8))-- == 1;
      if ( v7 )
        sub_15D7BC0(v4, v5);
    }
    *(_QWORD *)(a1 + 9008) = 0;
    result = qword_1C7EC50;
    if ( *(_QWORD *)(a1 + 8984) == qword_1C7EC50 && !*(_BYTE *)(a1 + 2416) )
    {
      *(_QWORD *)(a1 + 8984) = 2;
      *(_DWORD *)(a1 + 8992) = -2;
    }
  }
  return result;
}

