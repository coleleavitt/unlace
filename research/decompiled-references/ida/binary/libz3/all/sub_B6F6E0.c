void __fastcall sub_B6F6E0(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned int a4,
        double a5,
        __m128 a6,
        __m128 a7)
{
  char **exception; // r12
  __int64 v8; // rdx
  unsigned int v9; // eax
  int v10; // r13d
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // [rsp+0h] [rbp-48h] BYREF
  int v16; // [rsp+8h] [rbp-40h]
  int v17; // [rsp+10h] [rbp-38h]
  __int64 v18; // [rsp+18h] [rbp-30h]
  __int64 v19; // [rsp+20h] [rbp-28h]
  __int64 v20; // [rsp+28h] [rbp-20h]
  __int64 v21; // [rsp+30h] [rbp-18h]

  v9 = *(_DWORD *)(a1 + 84);
  v10 = *(_DWORD *)(a1 + 9496);
  *(_DWORD *)(a1 + 9496) = a4;
  if ( v9 < a4 )
    v9 = a4;
  *(_DWORD *)(a1 + 84) = v9;
  if ( *(_WORD *)(a2 + 4) == 1 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_14E142(&v15, "Formulas should not contain unbound variables", v8);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v15);
    sub_233E40((__int64)&v15);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 104), a2) )
  {
    sub_B6CE00((_QWORD *)a1, (unsigned int *)a2, a3, a5, a6, a7, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21);
  }
  else if ( *(_WORD *)(a2 + 4) == 2 && *(_DWORD *)(a2 + 16) == 2 )
  {
    sub_B6D160(a1, (unsigned int *)a2, a5, a6, a7);
  }
  else
  {
    sub_B6E0D0((_QWORD *)a1, (unsigned int *)a2, a5, a6, a7);
  }
  *(_DWORD *)(a1 + 9496) = v10;
}

