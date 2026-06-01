_QWORD *__fastcall sub_B45B40(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  unsigned int v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // ecx
  __int64 v6; // rbx
  __int64 v7; // rbp
  _QWORD *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rbp
  _QWORD *v14; // rax
  unsigned int v15; // edx
  _QWORD *v16; // rax
  _DWORD *v17; // rcx
  __int64 v18; // rax
  unsigned int v20; // r14d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rax
  int v24; // edx
  __int64 v25[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = sub_B39350(a2, *(_DWORD *)(a1 + 8));
  do
  {
    v4 = v3;
    v5 = v3;
    v3 = *(_DWORD *)(*(_QWORD *)(a1 + 256) + 4LL * v3);
  }
  while ( v5 != v3 );
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 232) + 8 * v4);
  v7 = *(_QWORD *)(**(_QWORD **)(v6 + 8) + 16LL);
  v8 = (_QWORD *)sub_186B270(0x18u);
  *v8 = &off_1C57358;
  v9 = *(_QWORD *)(v6 + 8);
  v8[1] = v7;
  v8[2] = 0;
  if ( (*(_BYTE *)(v9 + 44) & 8) == 0 )
  {
    v10 = v9 + 112;
    v11 = 8LL * *(unsigned int *)(*(_QWORD *)v9 + 24LL);
    v12 = v9 + 112 + v11;
    if ( v11 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(v9 + 112) + 8LL);
      v14 = (_QWORD *)sub_186B270(0x28u);
      v15 = 1;
      *v14 = 2;
      v16 = v14 + 1;
      v8[2] = v16;
      v17 = v16;
      while ( 1 )
      {
        v10 += 8;
        *(_BYTE *)v16 = 0;
        v16[1] = v13;
        *(v17 - 1) = v15;
        if ( v12 == v10 )
          break;
        v13 = *(_QWORD *)(*(_QWORD *)v10 + 8LL);
        if ( *(v17 - 2) == v15 )
        {
          v20 = (3 * v15 + 1) >> 1;
          v21 = 16 * v20 + 8;
          if ( 16 * v15 + 8 >= (unsigned int)v21 || v15 >= v20 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v25, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v25);
            sub_233E40((__int64)v25);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v22 = (unsigned int *)sub_186B300(v17 - 2, v21);
          v17 = v22 + 2;
          *v22 = v20;
          v23 = v22[1];
          v8[2] = v17;
          v24 = v23;
          v16 = &v17[4 * v23];
          v15 = v24 + 1;
        }
        else
        {
          v18 = v15++;
          v16 = &v17[4 * v18];
        }
      }
    }
  }
  return v8;
}

