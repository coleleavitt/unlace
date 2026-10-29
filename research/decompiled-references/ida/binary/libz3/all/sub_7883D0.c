__int64 __fastcall sub_7883D0(_QWORD *a1, __int64 a2)
{
  char **exception; // r12
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(); // rax
  int v6; // r13d
  char v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r12d
  _DWORD *v13; // rax
  unsigned int *v14; // rax
  __int64 v16; // rax
  unsigned int v17; // ecx
  _QWORD *v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // r15d
  size_t v21; // rsi
  unsigned int *v22; // rax
  _QWORD *v23; // rax
  unsigned int v24; // [rsp+Ch] [rbp-6Ch]
  unsigned int v25; // [rsp+Ch] [rbp-6Ch]
  __int64 v26[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = a2;
  v4 = *a1;
  v5 = *(__int64 (__fastcall **)())(*(_QWORD *)*a1 + 24LL);
  if ( v5 != sub_790450 )
    return ((__int64 (__fastcall *)(_QWORD))v5)(*a1);
  v6 = 0;
  if ( !*(_WORD *)(a2 + 4) )
  {
    v13 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v13 )
    {
      if ( !*v13 && v13[1] == 8 )
      {
        v6 = *(_DWORD *)(a2 + 24);
        if ( v6 == 1 )
          v3 = *(_QWORD *)(a2 + 32);
        else
          v6 = 0;
      }
    }
  }
  v7 = *(_BYTE *)(v4 + 274);
  v8 = *a1;
  *(_BYTE *)(v4 + 274) = 0;
  sub_78F200(v8, v3, 0);
  v9 = *(_QWORD *)(v4 + 88);
  v10 = (unsigned int)(*(_DWORD *)(v9 - 4) - 1);
  v11 = *(_DWORD *)(v9 + 4 * v10);
  *(_DWORD *)(v9 - 4) = v10;
  if ( (v11 & 1) == 0 && (unsigned int)sub_7E6C80(*(_QWORD *)(v4 + 200)) == 0x7FFFFFFF )
  {
    if ( *(_DWORD *)(v4 + 296) )
    {
      do
      {
        sub_1623DD0(*(_QWORD *)(v4 + 200));
        v16 = *(_QWORD *)(v4 + 160);
        if ( v16 )
          v17 = *(_DWORD *)(v16 - 4);
        else
          v17 = 0;
        v18 = *(_QWORD **)(v4 + 144);
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
              sub_24ABB0(v26, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v26);
              sub_233E40((__int64)v26);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v24 = v17;
            v22 = (unsigned int *)sub_186B300(v18 - 1, v21);
            v18 = v22 + 2;
            v17 = v24;
            *(_QWORD *)(v4 + 144) = v22 + 2;
            *v22 = v20;
            v14 = &v22[v22[1] + 2];
          }
          else
          {
            v14 = (unsigned int *)v18 + v19;
          }
        }
        else
        {
          v25 = v17;
          v23 = (_QWORD *)sub_186B270(0x10u);
          v18 = v23 + 1;
          *v23 = 2;
          v17 = v25;
          *(_QWORD *)(v4 + 144) = v23 + 1;
          v14 = (unsigned int *)(v23 + 1);
        }
        *v14 = v17;
        ++*((_DWORD *)v18 - 1);
      }
      while ( (*(_DWORD *)(v4 + 296))-- != 1 );
    }
    sub_16238E0(*(_QWORD *)(v4 + 200), v3, v11 >> 1);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v4 + 192) + 32LL))(*(_QWORD *)(v4 + 192), v11 >> 1);
  }
  *(_BYTE *)(v4 + 274) = v7;
  return v6 ^ v11;
}

