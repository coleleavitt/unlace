void __fastcall sub_B09720(__int64 a1, int a2)
{
  char **exception; // rbx
  __int64 v3; // rbx
  _QWORD *v4; // rdx
  __int64 v5; // r12
  unsigned int v6; // r13d
  unsigned int v7; // esi
  unsigned int v8; // r13d
  size_t v9; // rsi
  unsigned int *v10; // rax
  unsigned int v11; // ecx
  char *v12; // rax
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = (unsigned int)(a2 + 100);
  v4 = *(_QWORD **)(a1 + 64);
  if ( v4 )
  {
    v5 = *((unsigned int *)v4 - 1);
    if ( (unsigned int)v5 >= (unsigned int)v3 )
    {
      *((_DWORD *)v4 - 1) = v3;
      return;
    }
  }
  else
  {
    if ( a2 == -100 )
      return;
    v5 = 0;
    v17 = (_QWORD *)sub_186B270(0x68u);
    v4 = v17 + 1;
    *v17 = 2;
    *(_QWORD *)(a1 + 64) = v17 + 1;
  }
  while ( 1 )
  {
    v11 = *((_DWORD *)v4 - 2);
    if ( v11 >= (unsigned int)v3 )
      break;
    v6 = 3 * v11 + 1;
    v7 = v6 & 0xFFFFFFFE;
    v8 = v6 >> 1;
    v9 = 16 * (v8 + v7) + 8;
    if ( 48 * v11 + 8 >= (unsigned int)v9 || v11 >= v8 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_B035D0(v18, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v18);
      sub_233E40((__int64)v18);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v10 = (unsigned int *)sub_186B300(v4 - 1, v9);
    v4 = v10 + 2;
    *v10 = v8;
    *(_QWORD *)(a1 + 64) = v10 + 2;
  }
  *((_DWORD *)v4 - 1) = v3;
  v12 = (char *)&v4[6 * v5];
  v13 = &v4[6 * v3];
  if ( 48 * v5 != 48 * v3 )
  {
    v14 = (0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)(v13 - 6) - v12) >> 4)) & 0xFFFFFFFFFFFFFFFLL;
    v15 = 0;
    v16 = v14 + 1;
    do
    {
      ++v15;
      *(_OWORD *)v12 = 0;
      v12 += 48;
      *((_OWORD *)v12 - 2) = 0;
      *((_OWORD *)v12 - 1) = 0;
    }
    while ( v15 < v16 );
  }
}

