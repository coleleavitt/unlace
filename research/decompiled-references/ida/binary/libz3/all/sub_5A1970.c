void __fastcall sub_5A1970(__int64 a1, _QWORD **a2, _QWORD *a3)
{
  char **exception; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rbp
  __int64 v8; // rbp
  unsigned __int64 v9; // r15
  char i; // al
  __int64 v11; // rsi
  int v12; // eax
  _BYTE *v13; // rsi
  _BYTE *v14; // rdx
  char v15; // r14
  unsigned int v16; // eax
  unsigned int v17; // r8d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rsi
  _QWORD *v21; // rax
  unsigned int v22; // [rsp+Ch] [rbp-6Ch]
  _BYTE v23[8]; // [rsp+18h] [rbp-60h] BYREF
  __int64 v24[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *a2;
  if ( v5 )
  {
    v6 = *((unsigned int *)v5 - 1);
    if ( (_DWORD)v6 )
    {
      v8 = 8 * v6;
      v9 = 0;
      for ( i = sub_4C4270(a1, v5, (__int64)v23); ; i = sub_4C4270(a1, &(*a2)[v9 / 8], (__int64)v23) )
      {
        v14 = (_BYTE *)*a3;
        v15 = i;
        if ( !*a3 )
          break;
        v16 = *((_DWORD *)v14 - 1);
        if ( v16 != *((_DWORD *)v14 - 2) )
        {
          v11 = v16;
          v12 = v16 + 1;
          v13 = &v14[v11];
          goto LABEL_5;
        }
        v17 = (3 * v16 + 1) >> 1;
        v18 = v17 + 8;
        if ( v16 + 8 >= (unsigned int)v18 || v16 >= v17 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v24, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v24);
          sub_233E40((__int64)v24);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v22 = (3 * v16 + 1) >> 1;
        v9 += 8LL;
        v19 = (unsigned int *)sub_186B300(v14 - 8, v18);
        v20 = v19[1];
        *v19 = v22;
        *a3 = v19 + 2;
        *((_BYTE *)v19 + v20 + 8) = v15;
        v19[1] = v20 + 1;
        if ( v8 == v9 )
          return;
LABEL_6:
        ;
      }
      v21 = (_QWORD *)sub_186B270(0xAu);
      v14 = v21 + 1;
      *v21 = 2;
      v12 = 1;
      *a3 = v14;
      v13 = v14;
LABEL_5:
      v9 += 8LL;
      *v13 = v15;
      *((_DWORD *)v14 - 1) = v12;
      if ( v8 == v9 )
        return;
      goto LABEL_6;
    }
  }
}

