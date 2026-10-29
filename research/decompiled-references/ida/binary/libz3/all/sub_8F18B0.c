__int64 __fastcall sub_8F18B0(__int64 a1, unsigned int a2)
{
  char **exception; // rbx
  __int64 v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // r12
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 *v10; // rcx
  __int64 v11; // rbx
  unsigned int v12; // r13d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = a2;
  v4 = sub_180C100(a1 + 8400, 24);
  v5 = *(_QWORD **)(a1 + 9456);
  v6 = v4;
  *(_QWORD *)v4 = off_1C55BC0;
  *(_QWORD *)(v4 + 8) = a1;
  *(_DWORD *)(v4 + 16) = a2;
  if ( v5 )
  {
    v7 = *((_DWORD *)v5 - 1);
    if ( v7 == *((_DWORD *)v5 - 2) )
    {
      v12 = (3 * v7 + 1) >> 1;
      v13 = 8 * v12 + 8;
      if ( 8 * v7 + 8 >= (unsigned int)v13 || v7 >= v12 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_8E4EB0(v17, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v17);
        sub_233E40((__int64)v17);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = (unsigned int *)sub_186B300(v5 - 1, v13);
      v15 = v14[1];
      v5 = v14 + 2;
      *v14 = v12;
      *(_QWORD *)(a1 + 9456) = v14 + 2;
      LODWORD(v14) = v15;
      v10 = &v5[v15];
      result = (unsigned int)((_DWORD)v14 + 1);
    }
    else
    {
      v8 = v7;
      result = v7 + 1;
      v10 = &v5[v8];
    }
  }
  else
  {
    v16 = (_QWORD *)sub_186B270(0x18u);
    v5 = v16 + 1;
    *v16 = 2;
    result = 1;
    *(_QWORD *)(a1 + 9456) = v5;
    v10 = v5;
  }
  v11 = *(_QWORD *)(a1 + 8872) + 16 * v3;
  *v10 = v6;
  *((_DWORD *)v5 - 1) = result;
  *(_BYTE *)(v11 + 11) |= 0x20u;
  return result;
}

