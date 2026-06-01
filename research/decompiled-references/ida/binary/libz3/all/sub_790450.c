__int64 __fastcall sub_790450(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r14d
  __int64 v7; // rbp
  _DWORD *v8; // rax
  char v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r12d
  _DWORD *v14; // rax
  __int64 v16; // rax
  int v17; // ecx
  _QWORD *v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // r15d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  char **exception; // r12
  int v26; // [rsp+Ch] [rbp-6Ch]
  int v27; // [rsp+Ch] [rbp-6Ch]
  __int64 v28[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = 0;
  v7 = a2;
  if ( !*(_WORD *)(a2 + 4) )
  {
    v8 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v8 )
    {
      if ( !*v8 && v8[1] == 8 )
      {
        v6 = *(_DWORD *)(a2 + 24);
        if ( v6 == 1 )
          v7 = *(_QWORD *)(a2 + 32);
        else
          v6 = 0;
      }
    }
  }
  v9 = *(_BYTE *)(a1 + 274);
  *(_BYTE *)(a1 + 274) = 0;
  sub_78F200(a1, v7, 0, a4, a5, a6);
  v10 = *(_QWORD *)(a1 + 88);
  v11 = (unsigned int)(*(_DWORD *)(v10 - 4) - 1);
  v12 = *(_DWORD *)(v10 + 4 * v11);
  *(_DWORD *)(v10 - 4) = v11;
  if ( (v12 & 1) == 0 && (unsigned int)sub_7E6C80(*(_QWORD *)(a1 + 200)) == 0x7FFFFFFF )
  {
    if ( *(_DWORD *)(a1 + 296) )
    {
      do
      {
        sub_1623DD0(*(_QWORD *)(a1 + 200));
        v16 = *(_QWORD *)(a1 + 160);
        if ( v16 )
          v17 = *(_DWORD *)(v16 - 4);
        else
          v17 = 0;
        v18 = *(_QWORD **)(a1 + 144);
        if ( v18 )
        {
          v19 = *((unsigned int *)v18 - 1);
          if ( (_DWORD)v19 == *((_DWORD *)v18 - 2) )
          {
            v20 = (unsigned int)(3 * v19 + 1) >> 1;
            v21 = 4 * v20 + 8;
            if ( 4 * (int)v19 + 8 >= (unsigned int)v21 || (unsigned int)v19 >= v20 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v28, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v28);
              sub_233E40((__int64)v28);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v26 = v17;
            v22 = (unsigned int *)sub_186B300(v18 - 1, v21);
            v18 = v22 + 2;
            *v22 = v20;
            v23 = v22[1];
            *(_QWORD *)(a1 + 144) = v18;
            v17 = v26;
            v14 = (_DWORD *)v18 + v23;
          }
          else
          {
            v14 = (_DWORD *)v18 + v19;
          }
        }
        else
        {
          v27 = v17;
          v24 = (_QWORD *)sub_186B270(0x10u);
          v18 = v24 + 1;
          *v24 = 2;
          v17 = v27;
          *(_QWORD *)(a1 + 144) = v24 + 1;
          v14 = v24 + 1;
        }
        *v14 = v17;
        ++*((_DWORD *)v18 - 1);
      }
      while ( (*(_DWORD *)(a1 + 296))-- != 1 );
    }
    sub_16238E0(*(_QWORD *)(a1 + 200), v7, v12 >> 1);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 192) + 32LL))(*(_QWORD *)(a1 + 192), v12 >> 1);
  }
  *(_BYTE *)(a1 + 274) = v9;
  return v6 ^ v12;
}

