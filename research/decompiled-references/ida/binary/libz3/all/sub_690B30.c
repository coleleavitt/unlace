_QWORD *__fastcall sub_690B30(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbp
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rbx
  _DWORD *v8; // rdx
  int v9; // r14d
  __int64 v10; // rax
  bool i; // cf
  int *v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r13d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rax
  char **exception; // rbx
  __int64 v20[9]; // [rsp+0h] [rbp-48h] BYREF

  v1 = (_QWORD *)sub_186B270(0x10u);
  v1[1] = 0;
  v2 = v1;
  *v1 = &off_1C52DA0;
  v3 = *(_QWORD *)(a1 + 3392);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 - 4);
    v5 = v4 - 1;
    if ( v4 )
    {
      v6 = *(_QWORD *)(a1 + 3544);
      v7 = v5;
      if ( v6 )
      {
        v8 = nullptr;
        if ( v5 < *(_DWORD *)(v6 - 4) )
          goto LABEL_12;
      }
      v9 = 2 * v5 + 1;
LABEL_6:
      v10 = sub_186B270(0x10u);
      v8 = (_DWORD *)(v10 + 8);
      *(_QWORD *)v10 = 2;
      v2[1] = v10 + 8;
      *(_DWORD *)(v10 + 8) = v9;
      ++*(_DWORD *)(v10 + 4);
      for ( i = v7-- == 0; !i; --v7 )
      {
        v6 = *(_QWORD *)(a1 + 3544);
        if ( v6 && (unsigned int)v7 < *(_DWORD *)(v6 - 4) )
        {
LABEL_12:
          v9 = (*(_BYTE *)(v6 + v7) ^ 1) + 2 * v7;
          if ( !v8 )
            goto LABEL_6;
        }
        else
        {
          v9 = 2 * v7 + 1;
        }
        v14 = (unsigned int)*(v8 - 1);
        if ( (_DWORD)v14 == *(v8 - 2) )
        {
          v15 = (unsigned int)(3 * v14 + 1) >> 1;
          v16 = 4 * v15 + 8;
          if ( 4 * (int)v14 + 8 >= (unsigned int)v16 || (unsigned int)v14 >= v15 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_68CF80(v20, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v20);
            sub_233E40((__int64)v20);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v17 = (unsigned int *)sub_186B300(v8 - 2, v16);
          v8 = v17 + 2;
          *v17 = v15;
          v18 = v17[1];
          v2[1] = v8;
          v13 = &v8[v18];
        }
        else
        {
          v13 = &v8[v14];
        }
        *v13 = v9;
        ++*(v8 - 1);
        i = v7 == 0;
      }
    }
  }
  return v2;
}

