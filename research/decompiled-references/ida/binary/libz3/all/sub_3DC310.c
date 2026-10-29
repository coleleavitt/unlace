void __fastcall sub_3DC310(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v5; // rdi
  _DWORD *v6; // rcx
  _QWORD *v7; // r12
  _QWORD *v8; // rbp
  __int64 v9; // rdx
  int v10; // eax
  _QWORD *v11; // rsi
  __int64 v12; // rax
  _DWORD *v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // r14d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // r14d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  char **exception; // rbp
  __int64 v26[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = *(_QWORD **)(a1 + 160);
  if ( v5 )
    *((_DWORD *)v5 - 1) = 0;
  v6 = *(_DWORD **)(a1 + 528);
  if ( v6 )
    *(v6 - 1) = 0;
  if ( a2 )
  {
    v7 = a3;
    v8 = &a3[a2];
    while ( v5 )
    {
      v14 = *((_DWORD *)v5 - 1);
      if ( v14 != *((_DWORD *)v5 - 2) )
      {
        v9 = v14;
        v10 = v14 + 1;
        v11 = &v5[v9];
        goto LABEL_8;
      }
      v15 = (3 * v14 + 1) >> 1;
      v16 = 8 * v15 + 8;
      if ( 8 * v14 + 8 >= (unsigned int)v16 || v14 >= v15 )
      {
LABEL_24:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_3D2D40(v26, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v26);
        sub_233E40((__int64)v26);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = (unsigned int *)sub_186B300(v5 - 1, v16);
      v6 = *(_DWORD **)(a1 + 528);
      v18 = v17[1];
      *v17 = v15;
      *(_QWORD *)(a1 + 160) = v17 + 2;
      *(_QWORD *)&v17[2 * v18 + 2] = *v7;
      v17[1] = v18 + 1;
      if ( !v6 )
      {
LABEL_18:
        ++v7;
        v19 = sub_186B270(0x10u);
        v6 = (_DWORD *)(v19 + 8);
        *(_QWORD *)v19 = 2;
        *(_QWORD *)(a1 + 528) = v19 + 8;
        *(_DWORD *)(v19 + 8) = a2;
        ++*(_DWORD *)(v19 + 4);
        if ( v8 == v7 )
          return;
        goto LABEL_12;
      }
LABEL_9:
      v12 = (unsigned int)*(v6 - 1);
      if ( (_DWORD)v12 == *(v6 - 2) )
      {
        v20 = (unsigned int)(3 * v12 + 1) >> 1;
        v21 = 4 * v20 + 8;
        if ( 4 * (int)v12 + 8 >= (unsigned int)v21 || (unsigned int)v12 >= v20 )
          goto LABEL_24;
        v22 = (unsigned int *)sub_186B300(v6 - 2, v21);
        v6 = v22 + 2;
        *v22 = v20;
        v23 = v22[1];
        *(_QWORD *)(a1 + 528) = v6;
        v13 = &v6[v23];
      }
      else
      {
        v13 = &v6[v12];
      }
      ++v7;
      *v13 = a2;
      ++*(v6 - 1);
      if ( v8 == v7 )
        return;
LABEL_12:
      v5 = *(_QWORD **)(a1 + 160);
    }
    v24 = (_QWORD *)sub_186B270(0x18u);
    v6 = *(_DWORD **)(a1 + 528);
    v5 = v24 + 1;
    *v24 = 2;
    v10 = 1;
    *(_QWORD *)(a1 + 160) = v5;
    v11 = v5;
LABEL_8:
    *v11 = *v7;
    *((_DWORD *)v5 - 1) = v10;
    if ( !v6 )
      goto LABEL_18;
    goto LABEL_9;
  }
}

