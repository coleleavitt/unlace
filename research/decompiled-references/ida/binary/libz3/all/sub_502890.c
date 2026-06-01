__int64 __fastcall sub_502890(__int64 a1, unsigned int a2, unsigned int a3)
{
  char **exception; // rbx
  _QWORD *v6; // r12
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // ebp
  unsigned int v10; // ecx
  __int64 v11; // rax
  _QWORD *v12; // rax
  unsigned int v14; // r15d
  size_t v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdi
  _DWORD *v18; // r14
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23[11]; // [rsp+10h] [rbp-58h] BYREF

  v6 = *(_QWORD **)(a1 + 128);
  if ( v6 )
    *((_DWORD *)v6 - 1) = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL);
  do
  {
    v8 = a2;
    a2 = *(_DWORD *)(v7 + 4LL * a2);
    v9 = v8;
  }
  while ( v8 != a2 );
  do
  {
    v10 = a3;
    a3 = *(_DWORD *)(v7 + 4LL * a3);
  }
  while ( v10 != a3 );
  if ( v6 )
  {
    v11 = *((unsigned int *)v6 - 1);
    if ( (_DWORD)v11 == *((_DWORD *)v6 - 2) )
    {
      v14 = (unsigned int)(3 * v11 + 1) >> 1;
      v15 = 8 * v14 + 8;
      if ( 8 * (int)v11 + 8 >= (unsigned int)v15 || (unsigned int)v11 >= v14 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v23, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v23);
        sub_233E40((__int64)v23);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = sub_186B270(v15);
      v17 = *(_QWORD *)(a1 + 128);
      v18 = (_DWORD *)v16;
      v6 = (_QWORD *)(v16 + 8);
      if ( v17 )
      {
        v19 = *(unsigned int *)(v17 - 4);
        *(_DWORD *)(v16 + 4) = v19;
        v20 = 0;
        v21 = 8 * v19;
        if ( v21 )
        {
          do
          {
            *(_QWORD *)&v18[v20 / 4 + 2] = *(_QWORD *)(v17 + v20);
            v20 += 8LL;
          }
          while ( v21 != v20 );
        }
        sub_186B220((void *)(v17 - 8));
        v12 = &v6[v18[1]];
      }
      else
      {
        *(_DWORD *)(v16 + 4) = 0;
        v12 = (_QWORD *)(v16 + 8);
      }
      *(_QWORD *)(a1 + 128) = v6;
      *v18 = v14;
    }
    else
    {
      v12 = &v6[v11];
    }
  }
  else
  {
    v22 = (_QWORD *)sub_186B270(0x18u);
    v6 = v22 + 1;
    *v22 = 2;
    *(_QWORD *)(a1 + 128) = v22 + 1;
    v12 = v22 + 1;
  }
  *(_DWORD *)v12 = a3;
  *((_BYTE *)v12 + 4) = 1;
  ++*((_DWORD *)v6 - 1);
  return sub_502020(a1, v9);
}

