__int64 __fastcall sub_B160F0(__int64 a1, int a2, unsigned int *a3)
{
  unsigned int v3; // ebp
  unsigned int *v5; // rbp
  unsigned int *v6; // r13
  _QWORD *v7; // rax
  unsigned int *v8; // rax
  unsigned int *v9; // rbx
  unsigned int v10; // edx
  int v11; // ecx
  __int64 v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // r14d
  size_t v15; // rsi
  unsigned int *v16; // rax
  unsigned int *v17; // r8
  int v18; // r9d
  int v19; // eax
  unsigned int *v20; // rdx
  unsigned int v21; // esi
  __int64 v22; // rdi
  unsigned int v23; // ecx
  char **exception; // rbx
  __int64 v26[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = dword_1C7ED20;
  if ( a2 )
  {
    v5 = a3;
    v6 = &a3[a2];
    v7 = (_QWORD *)sub_186B270(0x10u);
    *v7 = 2;
    v8 = (unsigned int *)(v7 + 1);
    v9 = v8;
    while ( 1 )
    {
      v10 = *v5++;
      *v8 = v10;
      v11 = *(v9 - 1);
      v12 = (unsigned int)(v11 + 1);
      *(v9 - 1) = v12;
      if ( v6 == v5 )
        break;
      v13 = *(v9 - 2);
      if ( v13 == (_DWORD)v12 )
      {
        v14 = (3 * v13 + 1) >> 1;
        v15 = 4 * v14 + 8;
        if ( 4 * v11 + 12 >= (unsigned int)v15 || v13 >= v14 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_B035D0(v26, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v26);
          sub_233E40((__int64)v26);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v16 = (unsigned int *)sub_186B300(v9 - 2, v15);
        v9 = v16 + 2;
        *v16 = v14;
        v8 = &v16[v16[1] + 2];
      }
      else
      {
        v8 = &v9[v12];
      }
    }
    v17 = &v9[v12];
    v18 = dword_1C7ED20;
    if ( v9 == v17 )
    {
      *(v9 - 1) = 0;
      v3 = v18;
    }
    else
    {
      v19 = dword_1C7ED24;
      v20 = v9;
      v21 = 0;
      do
      {
        v23 = *v20;
        if ( v19 == *v20 )
          goto LABEL_15;
        if ( v23 != v18 )
        {
          v22 = v21++;
          v9[v22] = v23;
        }
        ++v20;
      }
      while ( v17 != v20 );
      *(v9 - 1) = v21;
      if ( v21 )
      {
        if ( v21 != 1 )
        {
          v19 = sub_B156E0(*(__int64 **)(a1 + 8), v21, v9);
LABEL_15:
          v3 = v19;
          goto LABEL_16;
        }
        v3 = *v9;
      }
      else
      {
        v3 = v18;
      }
    }
LABEL_16:
    sub_186B220(v9 - 2);
  }
  return v3;
}

