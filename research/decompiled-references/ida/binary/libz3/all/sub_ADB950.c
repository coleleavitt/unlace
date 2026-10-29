void *__fastcall sub_ADB950(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **exception; // r13
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  void *result; // rax
  _QWORD *v11; // rdi
  __int64 v12; // r12
  unsigned int v13; // r13d
  size_t v14; // rsi
  unsigned int *v15; // rax
  unsigned int v16; // eax
  _QWORD *v17; // rax
  __int64 v18[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = a1 + 40;
  *(_QWORD *)(v6 - 40) = a2;
  v7 = *(_QWORD *)(a3 + 104);
  *(_QWORD *)(v6 - 32) = a3;
  *(_QWORD *)(v6 - 24) = v7;
  *(_QWORD *)(v6 - 16) = a4;
  *(_QWORD *)(v6 - 8) = 0;
  sub_BDC6E0(v6, a3);
  v8 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 152) = v8;
  *(_QWORD *)(a1 + 168) = v8;
  sub_15A8870(a1 + 176);
  sub_15B88A0(a1 + 288, *(_QWORD *)(a1 + 16));
  sub_15150B0(a1 + 328, *(_QWORD *)(a1 + 16));
  v9 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 984) = 0;
  *(_QWORD *)(a1 + 992) = 0;
  *(_QWORD *)(a1 + 1016) = 0;
  *(_QWORD *)(a1 + 1024) = 0;
  *(_QWORD *)(a1 + 1048) = v9;
  *(_QWORD *)(a1 + 1056) = 0;
  *(_QWORD *)(a1 + 1064) = 0;
  *(_QWORD *)(a1 + 1072) = 0;
  *(_OWORD *)(a1 + 1000) = 0;
  *(_OWORD *)(a1 + 1032) = 0;
  result = (void *)sub_ADADD0(a1);
  v11 = *(_QWORD **)(a1 + 984);
  if ( v11 )
  {
    v12 = *((unsigned int *)v11 - 1);
    if ( (unsigned int)v12 > 0xE )
    {
      *((_DWORD *)v11 - 1) = 15;
      return result;
    }
  }
  else
  {
    v17 = (_QWORD *)sub_186B270(0x10u);
    v11 = v17 + 1;
    *v17 = 2;
    v12 = 0;
    *(_QWORD *)(a1 + 984) = v17 + 1;
  }
  while ( 1 )
  {
    v16 = *((_DWORD *)v11 - 2);
    if ( v16 > 0xE )
      break;
    v13 = (3 * v16 + 1) >> 1;
    v14 = 4 * v13 + 8;
    if ( 4 * v16 + 8 >= (unsigned int)v14 || v16 >= v13 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v18, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v18);
      sub_233E40((__int64)v18);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v15 = (unsigned int *)sub_186B300(v11 - 1, v14);
    v11 = v15 + 2;
    *v15 = v13;
    *(_QWORD *)(a1 + 984) = v15 + 2;
  }
  *((_DWORD *)v11 - 1) = 15;
  return memset((char *)v11 + 4 * v12, 0, 60 - 4 * v12);
}

