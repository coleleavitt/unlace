void __fastcall sub_3DC0A0(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v6; // rcx
  _DWORD *v7; // rdx
  _QWORD *v8; // r12
  __int64 v9; // rsi
  int v10; // eax
  _QWORD *v11; // rdi
  __int64 v12; // rax
  _DWORD *v13; // rax
  _QWORD *v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // r14d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned int v21; // r14d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  char **exception; // rbp
  __int64 v27[9]; // [rsp+0h] [rbp-48h] BYREF

  v6 = *(_QWORD **)(a1 + 160);
  if ( v6 )
    *((_DWORD *)v6 - 1) = 0;
  v7 = *(_DWORD **)(a1 + 528);
  if ( v7 )
    *(v7 - 1) = 0;
  if ( a2 )
  {
    v8 = &a3[a2 - 1];
    while ( v6 )
    {
      v15 = *((_DWORD *)v6 - 1);
      if ( v15 != *((_DWORD *)v6 - 2) )
      {
        v9 = v15;
        v10 = v15 + 1;
        v11 = &v6[v9];
        goto LABEL_8;
      }
      v16 = (3 * v15 + 1) >> 1;
      v17 = 8 * v16 + 8;
      if ( 8 * v15 + 8 >= (unsigned int)v17 || v15 >= v16 )
      {
LABEL_24:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_3D2D40(v27, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v27);
        sub_233E40((__int64)v27);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v18 = (unsigned int *)sub_186B300(v6 - 1, v17);
      v7 = *(_DWORD **)(a1 + 528);
      v19 = v18[1];
      *v18 = v16;
      *(_QWORD *)(a1 + 160) = v18 + 2;
      *(_QWORD *)&v18[2 * v19 + 2] = *v8;
      v18[1] = v19 + 1;
      if ( !v7 )
      {
LABEL_18:
        v20 = sub_186B270(0x10u);
        v7 = (_DWORD *)(v20 + 8);
        *(_QWORD *)v20 = 2;
        *(_QWORD *)(a1 + 528) = v20 + 8;
        *(_DWORD *)(v20 + 8) = a2;
        v14 = v8 - 1;
        ++*(v7 - 1);
        if ( a3 == v8 )
          return;
        goto LABEL_12;
      }
LABEL_9:
      v12 = (unsigned int)*(v7 - 1);
      if ( (_DWORD)v12 == *(v7 - 2) )
      {
        v21 = (unsigned int)(3 * v12 + 1) >> 1;
        v22 = 4 * v21 + 8;
        if ( 4 * (int)v12 + 8 >= (unsigned int)v22 || (unsigned int)v12 >= v21 )
          goto LABEL_24;
        v23 = (unsigned int *)sub_186B300(v7 - 2, v22);
        v7 = v23 + 2;
        *v23 = v21;
        v24 = v23[1];
        *(_QWORD *)(a1 + 528) = v7;
        v13 = &v7[v24];
      }
      else
      {
        v13 = &v7[v12];
      }
      *v13 = a2;
      v14 = v8 - 1;
      ++*(v7 - 1);
      if ( a3 == v8 )
        return;
LABEL_12:
      v6 = *(_QWORD **)(a1 + 160);
      v8 = v14;
    }
    v25 = (_QWORD *)sub_186B270(0x18u);
    v7 = *(_DWORD **)(a1 + 528);
    v6 = v25 + 1;
    *v25 = 2;
    v10 = 1;
    *(_QWORD *)(a1 + 160) = v6;
    v11 = v6;
LABEL_8:
    *v11 = *v8;
    *((_DWORD *)v6 - 1) = v10;
    if ( !v7 )
      goto LABEL_18;
    goto LABEL_9;
  }
}

