__int64 __fastcall sub_8696C0(__int64 a1, __int64 a2, __int64 *a3)
{
  char **exception; // r14
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64); // rax
  __int64 v8; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // r13
  unsigned int v11; // r14d
  size_t v12; // rsi
  unsigned int *v13; // rax
  unsigned int v14; // eax
  _QWORD *v16; // rax
  __int64 v17[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = *a3;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)a1 = a2;
  v7 = *(__int64 (__fastcall **)(__int64))(v6 + 424);
  if ( v7 == sub_79EFD0 )
    v8 = a3[18];
  else
    v8 = v7((__int64)a3);
  *(_QWORD *)(a1 + 16) = v8;
  *(_QWORD *)(a1 + 24) = a3 + 117;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = v8;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = v8;
  sub_15A8870(a1 + 72);
  sub_15B88A0(a1 + 184, *(_QWORD *)(a1 + 16));
  sub_15150B0(a1 + 224, *(_QWORD *)(a1 + 16));
  *(_QWORD *)(a1 + 880) = 0;
  *(_QWORD *)(a1 + 888) = 0;
  *(_OWORD *)(a1 + 896) = 0;
  sub_868CD0(a1);
  v9 = *(_QWORD **)(a1 + 880);
  if ( v9 )
  {
    v10 = *((unsigned int *)v9 - 1);
    if ( (unsigned int)v10 > 0xE )
    {
      *((_DWORD *)v9 - 1) = 15;
      return sub_868BC0(a1);
    }
  }
  else
  {
    v16 = (_QWORD *)sub_186B270(0x10u);
    v9 = v16 + 1;
    *v16 = 2;
    v10 = 0;
    *(_QWORD *)(a1 + 880) = v16 + 1;
  }
  while ( 1 )
  {
    v14 = *((_DWORD *)v9 - 2);
    if ( v14 > 0xE )
      break;
    v11 = (3 * v14 + 1) >> 1;
    v12 = 4 * v11 + 8;
    if ( 4 * v14 + 8 >= (unsigned int)v12 || v14 >= v11 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v17, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v17);
      sub_233E40((__int64)v17);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v13 = (unsigned int *)sub_186B300(v9 - 1, v12);
    v9 = v13 + 2;
    *v13 = v11;
    *(_QWORD *)(a1 + 880) = v13 + 2;
  }
  *((_DWORD *)v9 - 1) = 15;
  memset((char *)v9 + 4 * v10, 0, 60 - 4 * v10);
  return sub_868BC0(a1);
}

