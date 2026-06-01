__int64 __fastcall sub_62B050(__int64 a1)
{
  char **exception; // rbx
  __int64 v2; // rax
  unsigned int v3; // r14d
  __int64 v4; // r15
  _QWORD *v5; // r8
  __int64 v6; // r12
  __int64 v7; // r13
  unsigned int v8; // ebp
  unsigned int i; // eax
  unsigned int v10; // edx
  size_t v11; // rsi
  unsigned int v12; // r14d
  unsigned int *v13; // rax
  __int64 v14; // r13
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v18; // [rsp+8h] [rbp-80h]
  _QWORD *v19; // [rsp+18h] [rbp-70h]
  __int64 v20[11]; // [rsp+30h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 320);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 - 4);
    if ( v3 )
    {
      v4 = 0;
      v18 = v3;
      while ( !*(_QWORD *)(v2 + 8 * v4) )
      {
LABEL_5:
        if ( v18 == ++v4 )
          return a1 + 288;
        v2 = *(_QWORD *)(a1 + 320);
      }
      v5 = *(_QWORD **)(a1 + 288);
      v6 = (unsigned int)v4 >> 5;
      if ( v5 )
      {
        v7 = *((unsigned int *)v5 - 1);
        v8 = v6 + 1;
        if ( (unsigned int)v6 >= (unsigned int)v7 )
        {
          for ( i = *((_DWORD *)v5 - 2); i < v8; i = *((_DWORD *)v5 - 2) )
          {
            v10 = (3 * i + 1) >> 1;
            v11 = 4 * v10 + 8;
            v12 = v10;
            if ( 4 * i + 8 >= (unsigned int)v11 || i >= v10 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v20, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v20);
              sub_233E40((__int64)v20);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v13 = (unsigned int *)sub_186B300(v5 - 1, v11);
            v5 = v13 + 2;
            *v13 = v12;
            *(_QWORD *)(a1 + 288) = v13 + 2;
LABEL_14:
            ;
          }
          v14 = 4 * v7;
          *((_DWORD *)v5 - 1) = v8;
          v15 = 4LL * v8;
          if ( v14 != v15 )
          {
            v19 = v5;
            memset((char *)v5 + v14, 0, v15 - v14);
            v5 = v19;
          }
        }
        *((_DWORD *)v5 + v6) |= 1 << v4;
        goto LABEL_5;
      }
      v8 = v6 + 1;
      v7 = 0;
      v16 = (_QWORD *)sub_186B270(0x10u);
      v5 = v16 + 1;
      *v16 = 2;
      *(_QWORD *)(a1 + 288) = v16 + 1;
      goto LABEL_14;
    }
  }
  return a1 + 288;
}

