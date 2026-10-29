_QWORD *__fastcall sub_826580(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *exception; // rbx
  _QWORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // r13
  int v15; // ecx
  _DWORD *v16; // rdi
  unsigned int v17; // ecx
  unsigned int v19; // r14d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rax
  int v23; // ecx
  _QWORD *v24; // [rsp+10h] [rbp-48h] BYREF
  __int64 v25; // [rsp+18h] [rbp-40h]
  _QWORD v26[7]; // [rsp+20h] [rbp-38h] BYREF

  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(unsigned int *)(a3 + 24);
  a1[1] = 0;
  *a1 = v8;
  if ( (_DWORD)v9 )
  {
    v10 = *(_QWORD *)(a3 + 32);
    v11 = a3;
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    v12 = (_QWORD *)sub_186B270(0x18u);
    *v12 = 2;
    v13 = v12 + 1;
    v14 = v11 + 8 * v9;
    v15 = 1;
    a1[1] = v13;
    v16 = v13;
    while ( 1 )
    {
      v11 += 8;
      *v13 = v10;
      *(v16 - 1) = v15;
      if ( v11 == v14 )
        break;
      while ( 1 )
      {
        v10 = *(_QWORD *)(v11 + 32);
        if ( v10 )
          ++*(_DWORD *)(v10 + 8);
        v17 = *(v16 - 1);
        if ( v17 == *(v16 - 2) )
          break;
        v11 += 8;
        *(_QWORD *)&v16[2 * v17] = v10;
        *(v16 - 1) = v17 + 1;
        if ( v11 == v14 )
          return a1;
      }
      v19 = (3 * v17 + 1) >> 1;
      v20 = 8 * v19 + 8;
      if ( 8 * v17 + 8 >= (unsigned int)v20 || v17 >= v19 )
      {
        exception = __cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&v24, "Overflow encountered when expanding vector");
        v4 = v24;
        exception[1] = exception + 3;
        v5 = v25;
        *exception = off_1C63128;
        if ( v4 == v26 )
        {
          qmemcpy(exception + 3, v26, (unsigned int)(v5 + 1));
        }
        else
        {
          v6 = v26[0];
          exception[1] = v4;
          exception[3] = v6;
        }
        exception[2] = v5;
        v24 = v26;
        v25 = 0;
        LOBYTE(v26[0]) = 0;
        sub_233E40((__int64)&v24);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v21 = (unsigned int *)sub_186B300(v16 - 2, v20);
      v16 = v21 + 2;
      *v21 = v19;
      v22 = v21[1];
      a1[1] = v16;
      v23 = v22;
      v13 = &v16[2 * v22];
      v15 = v23 + 1;
    }
  }
  return a1;
}

