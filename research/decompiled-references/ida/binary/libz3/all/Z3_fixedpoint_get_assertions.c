_QWORD *__fastcall Z3_fixedpoint_get_assertions(__int64 a1, __int64 a2)
{
  char **exception; // r15
  char v4; // r12
  __int64 v5; // r14
  _QWORD *v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  _QWORD *v10; // rdx
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // rsi
  int v14; // eax
  _QWORD *v15; // rsi
  unsigned int v16; // eax
  unsigned int v17; // r9d
  size_t v18; // rsi
  unsigned int v19; // r12d
  unsigned int *v20; // rax
  __int64 v21; // rsi
  _QWORD *v23; // rax
  char v24; // [rsp+Fh] [rbp-69h]
  __int64 v25[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v24 = v4;
  if ( v4 )
    sub_2A01D0(a1);
  v5 = *(_QWORD *)(a1 + 232);
  v6 = (_QWORD *)sub_186B270(0x28u);
  sub_2518F0((__int64)v6, a1);
  v6[3] = v5;
  *v6 = &off_1C4CA20;
  v6[4] = 0;
  sub_24FBE0(a1, (__int64)v6);
  v7 = *(__int64 **)(*(_QWORD *)(a2 + 24) + 2992LL);
  if ( v7 )
  {
    v8 = *((unsigned int *)v7 - 1);
    if ( (_DWORD)v8 )
    {
      v9 = *v7;
      v10 = (_QWORD *)v6[4];
      v11 = 8 * v8;
      v12 = 0;
      if ( !*v7 )
        goto LABEL_11;
LABEL_10:
      ++*(_DWORD *)(v9 + 8);
LABEL_11:
      if ( v10 )
      {
        while ( 1 )
        {
          v16 = *((_DWORD *)v10 - 1);
          if ( v16 != *((_DWORD *)v10 - 2) )
            break;
          v17 = (3 * v16 + 1) >> 1;
          v18 = 8 * v17 + 8;
          v19 = v17;
          if ( 8 * v16 + 8 >= (unsigned int)v18 || v16 >= v17 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v25, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v25);
            sub_233E40((__int64)v25);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v20 = (unsigned int *)sub_186B300(v10 - 1, v18);
          v21 = v20[1];
          v10 = v20 + 2;
          *v20 = v19;
          v12 += 8;
          v6[4] = v20 + 2;
          *(_QWORD *)&v20[2 * v21 + 2] = v9;
          v20[1] = v21 + 1;
          if ( v12 == v11 )
            goto LABEL_16;
LABEL_9:
          v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 2992LL) + v12);
          if ( v9 )
            goto LABEL_10;
        }
        v13 = v16;
        v14 = v16 + 1;
        v15 = &v10[v13];
      }
      else
      {
        v23 = (_QWORD *)sub_186B270(0x18u);
        v10 = v23 + 1;
        *v23 = 2;
        v14 = 1;
        v6[4] = v10;
        v15 = v10;
      }
      v12 += 8;
      *v15 = v9;
      *((_DWORD *)v10 - 1) = v14;
      if ( v12 == v11 )
        goto LABEL_16;
      goto LABEL_9;
    }
  }
LABEL_16:
  if ( v24 )
  {
    sub_2BB620(v6);
    byte_1C7EBA0 = 1;
  }
  return v6;
}

