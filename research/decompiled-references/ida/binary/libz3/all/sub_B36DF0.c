__int64 __fastcall sub_B36DF0(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char **exception; // rbp
  __int64 v7; // rdx
  unsigned int **v10; // rbx
  __int64 v11; // rax
  unsigned int **v12; // r12
  unsigned int *v13; // rsi
  int *v14; // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // [rsp+8h] [rbp-60h] BYREF
  __int64 v22; // [rsp+10h] [rbp-58h] BYREF
  unsigned int *v23; // [rsp+18h] [rbp-50h] BYREF
  __int64 v24[9]; // [rsp+20h] [rbp-48h] BYREF

  v10 = (unsigned int **)(a2 + 8);
  v11 = 2LL * a2[6];
  v12 = (unsigned int **)&a2[v11 + 8];
  if ( v11 * 4 )
  {
    do
    {
      v13 = *v10++;
      sub_966570(a1, v13);
    }
    while ( v12 != v10 );
  }
  v14 = *(int **)(*((_QWORD *)a2 + 2) + 24LL);
  if ( v14 )
    v15 = *v14;
  else
    v15 = -1;
  if ( v15 == *(_DWORD *)(a1 + 8) )
  {
    v18 = *(_QWORD *)(a1 + 16);
    v19 = *(_QWORD *)(v18 + 8656);
    if ( !v19 || (v20 = *a2, (unsigned int)v20 >= *(_DWORD *)(v19 - 4)) || !*(_QWORD *)(v19 + 8 * v20) )
      sub_B68280(v18, a2, 1, 0, 1, a6);
  }
  sub_B35EF0(a1, a2, 0);
  if ( !*(_QWORD *)(a1 + 312) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_147B96(v24, "You have to register a created event handler for new terms if you track them", v7);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v24);
    sub_233E40((__int64)v24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v16 = *(_QWORD *)(a1 + 64);
  v23 = a2;
  v21 = v16;
  v22 = a1 + 56;
  (*(void (__fastcall **)(__int64, __int64 *, __int64 *, unsigned int **))(a1 + 320))(a1 + 296, &v21, &v22, &v23);
  return 1;
}

