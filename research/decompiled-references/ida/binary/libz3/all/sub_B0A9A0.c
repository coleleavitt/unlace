__int64 __fastcall sub_B0A9A0(__int64 *a1)
{
  char **exception; // r12
  unsigned int v2; // r14d
  __int64 v3; // rax
  _QWORD *v4; // rbx
  unsigned int v5; // ecx
  __int64 v6; // rbp
  __int64 v7; // r13
  unsigned int v8; // r12d
  unsigned int v10; // edx
  size_t v11; // rsi
  unsigned int v12; // r15d
  unsigned int *v13; // rax
  unsigned int v14; // eax
  __int64 v15; // r13
  __int64 v16; // rdx
  _QWORD *v17; // rax
  unsigned int v18; // [rsp+4h] [rbp-94h]
  _QWORD v19[4]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v20[11]; // [rsp+40h] [rbp-58h] BYREF

  v2 = 0;
  v19[0] = 0;
  v19[1] = 0;
  v19[2] = 1;
  v19[3] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v19, &qword_1C7F2A0);
  v3 = *a1;
  v4 = nullptr;
  if ( !*a1 )
  {
    sub_25A130((char *)v19);
    return 1;
  }
  while ( v2 < *(_DWORD *)(v3 - 4) )
  {
    v5 = *(_DWORD *)(v3 + 40LL * v2);
    v6 = v5 >> 6;
    v18 = v5 >> 1;
    if ( !v4 )
    {
      v8 = v6 + 1;
      v17 = (_QWORD *)sub_186B270(0x10u);
      v7 = 0;
      *v17 = 2;
      v4 = v17 + 1;
LABEL_12:
      while ( 1 )
      {
        v14 = *((_DWORD *)v4 - 2);
        if ( v14 >= v8 )
          break;
        v10 = (3 * v14 + 1) >> 1;
        v11 = 4 * v10 + 8;
        v12 = v10;
        if ( 4 * v14 + 8 >= (unsigned int)v11 || v14 >= v10 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_B035D0(v20, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v20);
          sub_233E40((__int64)v20);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v13 = (unsigned int *)sub_186B300(v4 - 1, v11);
        *v13 = v12;
        v4 = v13 + 2;
      }
      v15 = 4 * v7;
      *((_DWORD *)v4 - 1) = v8;
      v16 = 4LL * v8;
      if ( v15 != v16 )
        memset((char *)v4 + v15, 0, v16 - v15);
      v3 = *a1;
      goto LABEL_5;
    }
    v7 = *((unsigned int *)v4 - 1);
    v8 = v6 + 1;
    if ( (unsigned int)v6 >= (unsigned int)v7 )
      goto LABEL_12;
LABEL_5:
    *((_DWORD *)v4 + v6) |= 1 << v18;
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v19, v3 + 40LL * v2++ + 8, (__int64)v19);
    v3 = *a1;
    if ( !*a1 )
    {
      sub_25A130((char *)v19);
LABEL_7:
      sub_186B220(v4 - 1);
      return 1;
    }
  }
  sub_25A130((char *)v19);
  if ( v4 )
    goto LABEL_7;
  return 1;
}

