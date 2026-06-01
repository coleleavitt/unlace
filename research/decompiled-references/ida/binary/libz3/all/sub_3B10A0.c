void __fastcall sub_3B10A0(__int64 *a1)
{
  char **exception; // rbx
  __int64 v2; // rdx
  __int64 v3; // r12
  _OWORD *v4; // rbx
  unsigned int v5; // r14d
  unsigned int v6; // r13d
  unsigned int v7; // edx
  unsigned int v8; // ebp
  size_t v9; // rsi
  unsigned int *v10; // rax
  char *v11; // rdi
  char *v12; // rdx
  _OWORD *v13; // rax
  __int64 v14; // rdx
  _OWORD *v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = *a1;
  v4 = *(_OWORD **)(*a1 + 640);
  v5 = *(_DWORD *)(*a1 + 628);
  if ( !v4 )
  {
    if ( !v5 )
      return;
    v6 = 0;
    v24 = sub_186B270(0xAu);
    *(_QWORD *)v24 = 2;
    v7 = *(_DWORD *)v24;
    v4 = (_OWORD *)(v24 + 8);
    *(_QWORD *)(v3 + 640) = v24 + 8;
    if ( v7 < v5 )
      goto LABEL_4;
    *(_DWORD *)(v24 + 4) = v5;
    v11 = (char *)(v24 + 8);
    v12 = (char *)v4 + v5;
LABEL_8:
    memset(v11, 0, v12 - v11);
    goto LABEL_9;
  }
  v6 = *((_DWORD *)v4 - 1);
  if ( v6 >= v5 )
  {
    *((_DWORD *)v4 - 1) = v5;
    if ( !v5 )
      return;
    goto LABEL_9;
  }
  v7 = *((_DWORD *)v4 - 2);
  if ( v7 >= v5 )
  {
    *((_DWORD *)v4 - 1) = v5;
    v11 = (char *)v4 + v6;
    v12 = (char *)v4 + v5;
    goto LABEL_8;
  }
  do
  {
LABEL_4:
    v8 = (3 * v7 + 1) >> 1;
    v9 = v8 + 8;
    if ( v7 + 8 >= (unsigned int)v9 || v7 >= v8 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_C7E7E(v25, "Overflow encountered when expanding vector", v2);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v25);
      sub_233E40((__int64)v25);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v10 = (unsigned int *)sub_186B300((char *)v4 - 8, v9);
    v7 = v8;
    v4 = v10 + 2;
    *(_QWORD *)(v3 + 640) = v10 + 2;
    *v10 = v8;
  }
  while ( v8 < v5 );
  v10[1] = v5;
  v11 = (char *)v4 + v6;
  v12 = (char *)v4 + v5;
  if ( v5 != v6 )
    goto LABEL_8;
LABEL_9:
  if ( v5 - 1 <= 0xE )
  {
    v16 = 0;
LABEL_14:
    v17 = v5 - v16;
    if ( v5 - v16 - 1 <= 6 || (*(_QWORD *)((char *)v4 + v16) = 0, v16 += v17 & 0xFFFFFFF8, (v17 & 7) != 0) )
    {
      *((_BYTE *)v4 + v16) = 0;
      v18 = v16 + 1;
      if ( (unsigned int)v18 < v5 )
      {
        *((_BYTE *)v4 + v18) = 0;
        v19 = v16 + 2;
        if ( (unsigned int)v19 < v5 )
        {
          *((_BYTE *)v4 + v19) = 0;
          v20 = v16 + 3;
          if ( (unsigned int)v20 < v5 )
          {
            *((_BYTE *)v4 + v20) = 0;
            v21 = v16 + 4;
            if ( (unsigned int)v21 < v5 )
            {
              *((_BYTE *)v4 + v21) = 0;
              v22 = v16 + 5;
              if ( (unsigned int)v22 < v5 )
              {
                v23 = v16 + 6;
                *((_BYTE *)v4 + v22) = 0;
                if ( (unsigned int)v23 < v5 )
                  *((_BYTE *)v4 + v23) = 0;
              }
            }
          }
        }
      }
    }
    return;
  }
  v13 = v4;
  v14 = v5 >> 4;
  v15 = &v4[v14];
  if ( ((v14 * 16) & 0x10) == 0 || (v13 = v4 + 1, *v4 = 0, v4 + 1 != v15) )
  {
    do
    {
      *v13 = 0;
      v13 += 2;
      *(v13 - 1) = 0;
    }
    while ( v13 != v15 );
  }
  v16 = v5 & 0xFFFFFFF0;
  if ( (v5 & 0xF) != 0 )
    goto LABEL_14;
}

