__int64 __fastcall sub_7B56F0(__int64 a1, __int64 a2, _QWORD *a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  _QWORD *v6; // rdx
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r13
  int v10; // r15d
  int v11; // r14d
  _QWORD *v12; // rax
  _DWORD *v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // ecx
  size_t v16; // rsi
  unsigned int v17; // r12d
  unsigned int *v18; // rax
  __int64 v19; // rax
  int v20; // eax
  __int64 *v23; // [rsp+18h] [rbp-60h]
  __int64 v24[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = (_QWORD *)*a3;
  if ( v6 )
    *((_DWORD *)v6 - 1) = 0;
  v7 = (__int64 *)(a2 + 76);
  v8 = 8LL * *(unsigned int *)(a2 + 32);
  v23 = (__int64 *)(a2 + 76 + v8);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a2 + 76);
    v10 = *(_DWORD *)(a2 + 76);
    if ( v6 )
      goto LABEL_14;
    while ( 1 )
    {
      if ( v10 )
      {
        v11 = 0;
        v12 = (_QWORD *)sub_186B270(0x10u);
        v6 = v12 + 1;
        *v12 = 2;
        *a3 = v12 + 1;
        v13 = v12 + 1;
        while ( 1 )
        {
          ++v11;
          *v13 = HIDWORD(v9);
          ++*((_DWORD *)v6 - 1);
          if ( v11 == v10 )
          {
            if ( v23 == ++v7 )
              return 1;
            v9 = *v7;
            v10 = *(_DWORD *)v7;
LABEL_14:
            v20 = 2 * *(_DWORD *)(a2 + 32);
            if ( (unsigned int)(v20 + v10) < *((_DWORD *)v6 - 1) )
              return 0;
            while ( !v10 )
            {
              if ( v23 == ++v7 )
                return 1;
              v10 = *(_DWORD *)v7;
              v9 = *v7;
              if ( (unsigned int)(v20 + *(_DWORD *)v7) < *((_DWORD *)v6 - 1) )
                return 0;
            }
            v11 = 0;
          }
          v14 = *((unsigned int *)v6 - 1);
          v13 = (_DWORD *)v6 + v14;
          if ( (_DWORD)v14 == *((_DWORD *)v6 - 2) )
          {
            v15 = (unsigned int)(3 * v14 + 1) >> 1;
            v16 = 4 * v15 + 8;
            v17 = v15;
            if ( 4 * (int)v14 + 8 >= (unsigned int)v16 || (unsigned int)v14 >= v15 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_113C8C(v24, "Overflow encountered when expanding vector", v4);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v24);
              sub_233E40((__int64)v24);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v18 = (unsigned int *)sub_186B300(v6 - 1, v16);
            v6 = v18 + 2;
            *v18 = v17;
            v19 = v18[1];
            *a3 = v6;
            v13 = (_DWORD *)v6 + v19;
          }
        }
      }
      if ( v23 == ++v7 )
        break;
      v9 = *v7;
      v10 = *(_DWORD *)v7;
    }
  }
  return 1;
}

