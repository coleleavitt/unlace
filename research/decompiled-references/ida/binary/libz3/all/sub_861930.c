__int64 __fastcall sub_861930(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  int v4; // eax
  unsigned int v5; // r14d
  __int64 *v6; // r13
  _QWORD *v7; // rax
  unsigned int v8; // r9d
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // r15d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rax
  int v17; // r9d
  __int64 v18; // r15
  __int64 v19; // rax
  unsigned int *v20; // rax
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // r8
  int v24; // r9d
  unsigned int v25; // ebx
  __int64 v27; // [rsp+8h] [rbp-78h]
  unsigned int v28; // [rsp+14h] [rbp-6Ch]
  __int64 v29; // [rsp+18h] [rbp-68h]
  unsigned int *v30; // [rsp+18h] [rbp-68h]
  __int64 v31[10]; // [rsp+30h] [rbp-50h] BYREF

  v4 = *(_DWORD *)(a2 + 24);
  ++*(_DWORD *)(a1 + 128);
  v5 = v4 - 1;
  if ( v4 == 1 )
  {
    v18 = -8;
    v10 = nullptr;
  }
  else
  {
    v6 = (__int64 *)(a2 + 32);
    v29 = a2 + 8LL * (unsigned int)(v4 - 2) + 40;
    v7 = (_QWORD *)sub_186B270(0x18u);
    v8 = 1;
    *v7 = 2;
    v9 = v7 + 1;
    v10 = v9;
    while ( 1 )
    {
      v11 = *v6++;
      *v9 = v11;
      *((_DWORD *)v10 - 1) = v8;
      if ( (__int64 *)v29 == v6 )
        break;
      if ( *((_DWORD *)v10 - 2) == v8 )
      {
        v13 = (3 * v8 + 1) >> 1;
        v14 = 8 * v13 + 8;
        if ( 8 * v8 + 8 >= (unsigned int)v14 || v8 >= v13 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v31, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v31);
          sub_233E40((__int64)v31);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v15 = (unsigned int *)sub_186B300(v10 - 1, v14);
        v10 = v15 + 2;
        *v15 = v13;
        v16 = v15[1];
        v17 = v16;
        v9 = &v10[v16];
        v8 = v17 + 1;
      }
      else
      {
        v12 = v8++;
        v9 = &v10[v12];
      }
    }
    v18 = (__int64)(v10 - 1);
  }
  v19 = *(_QWORD *)(a1 + 72);
  *v10 = a2;
  v27 = v19;
  v20 = (unsigned int *)sub_15DCAD0(*(_QWORD *)(a1 + 120), (int)v10, 0);
  v30 = v20;
  if ( v20 )
    ++v20[2];
  v21 = sub_7E5940(a1, v20);
  v22 = sub_7E4F00(a1, *(unsigned int **)(a2 + 8LL * v5 + 32));
  v25 = sub_7CA650(*(_QWORD *)(a1 + 80), v21, v22, *(_QWORD *)(a1 + 464), v23, v24);
  if ( v30 )
  {
    v28 = v30[2];
    v30[2] = v28 - 1;
    if ( v28 == 1 )
      sub_15D7BC0(v27, v30);
  }
  sub_186B220((void *)v18);
  return v25;
}

