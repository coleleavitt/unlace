__int64 __fastcall sub_45CC50(__int64 *a1, int *a2, int *a3)
{
  char **exception; // r12
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  int *v10; // rbp
  unsigned int v11; // r14d
  _DWORD *v12; // rdi
  unsigned int v13; // r14d
  unsigned int v14; // ebp
  __int64 v16; // r13
  __int64 v17; // rsi
  int *v18; // r15
  __int64 v19; // rsi
  _QWORD *v20; // rsi
  __int64 v21; // r13
  unsigned int v22; // eax
  unsigned int v23; // r14d
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rsi
  __int64 v28; // [rsp+38h] [rbp-70h] BYREF
  void *v29; // [rsp+40h] [rbp-68h]
  __int64 v30[11]; // [rsp+50h] [rbp-58h] BYREF

  if ( a2 == a3 )
    return 1;
  v6 = (_QWORD *)sub_186B270(0x18u);
  v28 = 0;
  v29 = nullptr;
  v7 = v6 + 1;
  v6[1] = a3;
  *v6 = 0x100000002LL;
  v8 = 1;
  while ( 1 )
  {
    v9 = (unsigned int)(v8 - 1);
    v10 = (int *)v7[v9];
    --v8;
    *((_DWORD *)v7 - 1) = v9;
    v11 = *v10;
    if ( *v10 >= (unsigned int)v28 )
      break;
    v12 = v29;
    if ( (*((_DWORD *)v29 + (v11 >> 5)) & (1 << v11)) != 0 )
      goto LABEL_8;
    if ( a2 == v10 )
    {
      v14 = 1;
      goto LABEL_10;
    }
LABEL_6:
    v12[v11 >> 5] |= 1 << v11;
    v13 = v10[6];
    if ( v13 )
    {
      v16 = v13 - 1;
      v17 = *a1;
      if ( *(_QWORD *)(v17 + 848) == sub_15D1F10(*(_QWORD *)&v10[2 * v16 + 8]) )
      {
        v16 = v13;
LABEL_20:
        v18 = &v10[2 * v16];
        do
        {
          v21 = *((_QWORD *)v10 + 4);
          v22 = *((_DWORD *)v7 - 1);
          if ( v22 == *((_DWORD *)v7 - 2) )
          {
            v23 = (3 * v22 + 1) >> 1;
            v24 = 8 * v23 + 8;
            if ( 8 * v22 + 8 >= (unsigned int)v24 || v22 >= v23 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v30, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v30);
              sub_233E40((__int64)v30);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v25 = (unsigned int *)sub_186B300(v7 - 1, v24);
            v26 = v25[1];
            v7 = v25 + 2;
            *v25 = v23;
            LODWORD(v25) = v26;
            v20 = &v7[v26];
            v8 = (_DWORD)v25 + 1;
          }
          else
          {
            v19 = v22;
            v8 = v22 + 1;
            v20 = &v7[v19];
          }
          v10 += 2;
          *v20 = v21;
          *((_DWORD *)v7 - 1) = v8;
        }
        while ( v18 != v10 );
        goto LABEL_8;
      }
      if ( v13 != 1 )
        goto LABEL_20;
    }
    v8 = *((_DWORD *)v7 - 1);
LABEL_8:
    if ( !v8 )
    {
      v12 = v29;
      v14 = 0;
      goto LABEL_10;
    }
  }
  if ( a2 != v10 )
  {
    sub_186B510(&v28, v11 + 1, 0);
    v12 = v29;
    goto LABEL_6;
  }
  v12 = v29;
  v14 = 1;
LABEL_10:
  if ( v12 )
    sub_186B220(v12);
  sub_186B220(v7 - 1);
  return v14;
}

