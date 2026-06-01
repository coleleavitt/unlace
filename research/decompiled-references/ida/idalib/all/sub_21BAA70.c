_DWORD *__fastcall sub_21BAA70(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8)
{
  __int64 v8; // rsi
  _DWORD *v9; // r13
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 v12; // rsi
  _DWORD *v13; // rbx
  size_t v14; // r15
  const char *v15; // r8
  size_t v16; // rax
  const char *v18; // rdi
  const char *v19; // [rsp+10h] [rbp-58h]

  v8 = a2 - (_QWORD)a1;
  v9 = a1;
  v10 = 0xCCCCCCCCCCCCCCCDLL * (v8 >> 4);
  if ( v8 > 0 )
  {
    while ( 1 )
    {
      v11 = v10 >> 1;
      v12 = *a7;
      v13 = &v9[20 * (v10 >> 1)];
      if ( !*v13 )
        break;
      v14 = 0;
      v18 = (const char *)(v12 + *(unsigned int *)(a8 + 4LL * (unsigned int)(*v13 + 1)));
      if ( v18 )
        v14 = (unsigned int)strlen(v18);
      v16 = 0;
      v15 = (const char *)(v12 + (unsigned int)v13[1]);
      if ( v15 )
        goto LABEL_4;
LABEL_5:
      if ( v16 >= v14 )
        goto LABEL_6;
LABEL_7:
      if ( (int)sub_2233440((void *)&v15[v16]) >= 0 )
      {
        if ( !v11 )
          return v9;
        v10 >>= 1;
      }
      else
      {
        v9 = v13 + 20;
        v10 = v10 - v11 - 1;
        if ( v10 <= 0 )
          return v9;
      }
    }
    v14 = 0;
    v15 = (const char *)(v12 + (unsigned int)v13[1]);
    if ( !v15 )
    {
      v14 = 0;
LABEL_6:
      v16 = v14;
      goto LABEL_7;
    }
LABEL_4:
    v19 = v15;
    v16 = strlen(v15);
    v15 = v19;
    goto LABEL_5;
  }
  return v9;
}
