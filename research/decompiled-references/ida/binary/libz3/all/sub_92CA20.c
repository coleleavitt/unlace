__int64 __fastcall sub_92CA20(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rbp
  __int64 v6; // rax
  _QWORD *v7; // r13
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  unsigned int v19; // ebx
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  char **exception; // rbx
  __int64 v25[9]; // [rsp+0h] [rbp-48h] BYREF

  sub_922D80((_QWORD *)a1, 0);
  v2 = *(_QWORD *)(a1 + 168);
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  v3 = *(_QWORD *)(a1 + 176);
  if ( v3 )
    *(_DWORD *)(v3 - 4) = 0;
  v4 = *(_QWORD **)(a1 + 184);
  if ( v4 )
    *((_DWORD *)v4 - 1) = 0;
  v5 = *(_QWORD **)(a1 + 192);
  if ( v5 )
  {
    v6 = *((unsigned int *)v5 - 1);
    if ( (_DWORD)v6 )
    {
      v7 = &v5[v6];
      do
      {
        v8 = *v5;
        if ( *v5 )
        {
          v9 = *(unsigned int *)(v8 - 4);
          if ( (_DWORD)v9 )
          {
            v10 = v8 + 16 * v9;
            do
            {
              while ( 1 )
              {
                v11 = *(_QWORD *)(v8 + 8);
                if ( !v11 )
                  break;
                v8 += 16;
                sub_186B220((void *)(v11 - 8));
                if ( v8 == v10 )
                  goto LABEL_15;
              }
              v8 += 16;
            }
            while ( v8 != v10 );
LABEL_15:
            v8 = *v5;
          }
          sub_186B220((void *)(v8 - 8));
        }
        ++v5;
      }
      while ( v5 != v7 );
      v5 = *(_QWORD **)(a1 + 192);
      v4 = *(_QWORD **)(a1 + 184);
    }
    *((_DWORD *)v5 - 1) = 0;
  }
  v12 = *(_QWORD *)(a1 + 200);
  if ( v12 )
    *(_DWORD *)(v12 - 4) = 0;
  v13 = *(_QWORD *)(a1 + 272);
  if ( v13 )
    *(_DWORD *)(v13 - 4) = 0;
  v14 = *(_QWORD *)(a1 + 208);
  if ( v14 )
    *(_DWORD *)(v14 - 4) = 0;
  v15 = *(_QWORD *)(a1 + 216);
  if ( v15 )
    *(_DWORD *)(v15 - 4) = 0;
  *(_BYTE *)(a1 + 224) = 0;
  if ( v4 )
  {
    v16 = *((unsigned int *)v4 - 1);
    if ( (_DWORD)v16 == *((_DWORD *)v4 - 2) )
    {
      v19 = (unsigned int)(3 * v16 + 1) >> 1;
      v20 = 16 * v19 + 8;
      if ( 16 * (int)v16 + 8 >= (unsigned int)v20 || (unsigned int)v16 >= v19 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_91CD50(v25, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v25);
        sub_233E40((__int64)v25);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v21 = (unsigned int *)sub_186B300(v4 - 1, v20);
      v4 = v21 + 2;
      *v21 = v19;
      v22 = v21[1];
      *(_QWORD *)(a1 + 184) = v4;
      v17 = &v4[2 * v22];
    }
    else
    {
      v17 = &v4[2 * v16];
    }
  }
  else
  {
    v23 = (_QWORD *)sub_186B270(0x28u);
    *v23 = 2;
    v4 = v23 + 1;
    *(_QWORD *)(a1 + 184) = v23 + 1;
    v17 = v23 + 1;
  }
  *v17 = -1;
  v17[1] = 0xFFFFFFFE00000000LL;
  ++*((_DWORD *)v4 - 1);
  return sub_965AC0(a1);
}

