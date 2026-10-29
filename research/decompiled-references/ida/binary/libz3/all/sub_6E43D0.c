__int64 __fastcall sub_6E43D0(__int64 *a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rax
  __int64 v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // r13
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  _QWORD *v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rbp
  unsigned int v19; // r15d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rax
  char **exception; // r12
  __int64 v25[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v26[11]; // [rsp+20h] [rbp-58h] BYREF

  v25[0] = *a1;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 )
  {
    v8 = 0;
    v9 = 0;
    while ( v9 < *(_DWORD *)(v6 - 4) )
    {
      v10 = sub_6E15B0((_DWORD)a1, *(_QWORD *)(v6 + 8LL * v9), v9, a4, a5, a6);
      v11 = v10;
      if ( v10 )
        ++*(_DWORD *)(v10 + 8);
      if ( v8 )
      {
        v12 = *(_DWORD *)(v8 - 4);
        if ( v12 == *(_DWORD *)(v8 - 8) )
        {
          v19 = (3 * v12 + 1) >> 1;
          v20 = 8 * v19 + 8;
          if ( 8 * v12 + 8 >= (unsigned int)v20 || v12 >= v19 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v26, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v26);
            sub_233E40((__int64)v26);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v21 = (unsigned int *)sub_186B300((void *)(v8 - 8), v20);
          v22 = v21[1];
          v8 = (__int64)(v21 + 2);
          *v21 = v19;
          LODWORD(v21) = v22;
          v15 = (_QWORD *)(v8 + 8 * v22);
          v14 = (_DWORD)v21 + 1;
        }
        else
        {
          v13 = v12;
          v14 = v12 + 1;
          v15 = (_QWORD *)(v8 + 8 * v13);
        }
      }
      else
      {
        v23 = (_QWORD *)sub_186B270(0x18u);
        v8 = (__int64)(v23 + 1);
        *v23 = 2;
        v14 = 1;
        v15 = (_QWORD *)v8;
      }
      *v15 = v11;
      ++v9;
      *(_DWORD *)(v8 - 4) = v14;
      v6 = *(_QWORD *)(a2 + 8);
      if ( !v6 )
        goto LABEL_10;
    }
    if ( v8 )
    {
LABEL_10:
      v16 = *(unsigned int *)(v8 - 4);
      goto LABEL_11;
    }
  }
  v8 = 0;
  v16 = 0;
LABEL_11:
  v25[1] = v8;
  v17 = sub_6E3580(a1, v16, v8);
  sub_2B4F40(v25);
  return v17;
}

