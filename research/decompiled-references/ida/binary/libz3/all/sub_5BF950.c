__int64 __fastcall sub_5BF950(_QWORD *a1, __int64 a2)
{
  char **exception; // r12
  __int64 result; // rax
  _QWORD *v4; // rbx
  unsigned __int64 v5; // r13
  unsigned int v6; // edx
  unsigned int i; // r12d
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rbp
  unsigned int v13; // ebp
  _QWORD *v14; // rax
  unsigned int v15; // ecx
  size_t v16; // rsi
  unsigned int v17; // r15d
  unsigned int *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r15
  unsigned int v22; // [rsp+10h] [rbp-78h]
  unsigned int v23; // [rsp+14h] [rbp-74h]
  __int64 v25[11]; // [rsp+30h] [rbp-58h] BYREF

  result = *(unsigned int *)(a2 + 68);
  v23 = 0;
  if ( (_DWORD)result )
  {
    v4 = nullptr;
    while ( 1 )
    {
      v5 = *(_QWORD *)(a2 + 8LL * v23 + 80) & 0xFFFFFFFFFFFFFFF8LL;
      v6 = *(_DWORD *)(v5 + 24);
      if ( !v6 )
        goto LABEL_15;
      for ( i = 0; i < v6; ++i )
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(v5 + 8LL * i + 32);
          if ( *(_WORD *)(v8 + 4) == 1 )
            break;
LABEL_5:
          if ( ++i >= v6 )
            goto LABEL_14;
        }
        v9 = *(unsigned int *)(v8 + 16);
        v10 = a1[6];
        if ( !v10 || (unsigned int)v9 >= *(_DWORD *)(v10 - 4) )
          sub_5BF460(a1, v9);
        v11 = (unsigned int)v9 >> 5;
        if ( !v4 )
        {
          v13 = v11 + 1;
          v14 = (_QWORD *)sub_186B270(0x10u);
          v22 = 0;
          v4 = v14 + 1;
          *v14 = 2;
LABEL_23:
          while ( 1 )
          {
            v19 = *((_DWORD *)v4 - 2);
            if ( v19 >= v13 )
              break;
            v15 = (3 * v19 + 1) >> 1;
            v16 = 4 * v15 + 8;
            v17 = v15;
            if ( 4 * v19 + 8 >= (unsigned int)v16 || v19 >= v15 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v25, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v25);
              sub_233E40((__int64)v25);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v18 = (unsigned int *)sub_186B300(v4 - 1, v16);
            *v18 = v17;
            v4 = v18 + 2;
          }
          *((_DWORD *)v4 - 1) = v13;
          v20 = 4LL * v13;
          v12 = (unsigned int)v9 >> 5;
          v21 = 4LL * v22;
          if ( v21 != v20 )
            memset((char *)v4 + v21, 0, v20 - v21);
LABEL_26:
          *((_DWORD *)v4 + v12) |= 1 << v9;
          v6 = *(_DWORD *)(v5 + 24);
          goto LABEL_5;
        }
        v22 = *((_DWORD *)v4 - 1);
        if ( v11 >= v22 )
        {
          v13 = v11 + 1;
          goto LABEL_23;
        }
        v12 = v11;
        if ( (*((_DWORD *)v4 + v11) & (1 << v9)) == 0 )
          goto LABEL_26;
        v6 = *(_DWORD *)(v5 + 24);
        *(_BYTE *)(a1[10] + v9) = 0;
      }
LABEL_14:
      result = *(unsigned int *)(a2 + 68);
LABEL_15:
      if ( ++v23 >= (unsigned int)result )
      {
        if ( v4 )
          return sub_186B220(v4 - 1);
        return result;
      }
    }
  }
  return result;
}

