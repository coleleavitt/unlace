__int64 __fastcall sub_855310(__int64 a1)
{
  char **exception; // rbx
  __int64 v3; // r12
  char v4; // r13
  __int64 v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // rbp
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 *v11; // rcx
  unsigned int v12; // r13d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17[9]; // [rsp+10h] [rbp-48h] BYREF

  sub_854F10(a1, 1u, (unsigned int *)(a1 + 192), 1u);
  sub_854F10(a1, 1u, (unsigned int *)(a1 + 200), 0);
  sub_854F10(a1, 0, (unsigned int *)(a1 + 196), 1u);
  sub_854F10(a1, 0, (unsigned int *)(a1 + 204), 0);
  v3 = *(_QWORD *)(a1 + 80);
  v4 = *(_BYTE *)(a1 + 848);
  v5 = sub_180C100(v3 + 2144, 24);
  v6 = *(_QWORD **)(v3 + 2128);
  v7 = v5;
  *(_QWORD *)v5 = off_1C54EE8;
  *(_QWORD *)(v5 + 8) = a1 + 848;
  *(_BYTE *)(v5 + 16) = v4;
  if ( v6 )
  {
    v8 = *((_DWORD *)v6 - 1);
    if ( v8 == *((_DWORD *)v6 - 2) )
    {
      v12 = (3 * v8 + 1) >> 1;
      v13 = 8 * v12 + 8;
      if ( 8 * v8 + 8 >= (unsigned int)v13 || v8 >= v12 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v17, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v17);
        sub_233E40((__int64)v17);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = (unsigned int *)sub_186B300(v6 - 1, v13);
      v15 = v14[1];
      v6 = v14 + 2;
      *(_QWORD *)(v3 + 2128) = v14 + 2;
      *v14 = v12;
      LODWORD(v14) = v15;
      v11 = &v6[v15];
      result = (unsigned int)((_DWORD)v14 + 1);
    }
    else
    {
      v9 = v8;
      result = v8 + 1;
      v11 = &v6[v9];
    }
  }
  else
  {
    v16 = (_QWORD *)sub_186B270(0x18u);
    v6 = v16 + 1;
    *v16 = 2;
    result = 1;
    *(_QWORD *)(v3 + 2128) = v6;
    v11 = v6;
  }
  *v11 = v7;
  *((_DWORD *)v6 - 1) = result;
  *(_BYTE *)(a1 + 848) = 1;
  return result;
}

