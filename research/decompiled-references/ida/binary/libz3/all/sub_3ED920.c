__int64 (__fastcall **__fastcall sub_3ED920(__int64 a1))()
{
  __int64 *v1; // rbp
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  _QWORD *v7; // rbp
  void *v8; // rdi
  void *v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  _QWORD *v13; // rbp
  void *v14; // rdi
  void *v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  void *v21; // rdi
  __int64 (__fastcall **result)(); // rax
  void *v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  void (__fastcall ***v26)(void *); // rbx

  v1 = *(__int64 **)(a1 + 432);
  if ( v1 )
  {
    v3 = &v1[*((unsigned int *)v1 - 1)];
    if ( v1 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v1;
        if ( *v1 )
        {
          v5 = *(_QWORD *)(a1 + 424);
          v6 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v1 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v1;
    }
    while ( v1 < v3 );
LABEL_8:
    v1 = *(__int64 **)(a1 + 432);
    if ( v1 )
LABEL_9:
      sub_186B220(v1 - 1);
  }
  sub_2334C0((__int64 *)(a1 + 408));
  sub_2334C0((__int64 *)(a1 + 392));
  v7 = *(_QWORD **)(a1 + 352);
  while ( v7 )
  {
    v8 = v7;
    v7 = (_QWORD *)*v7;
    operator delete(v8, 0x18u);
  }
  memset(*(void **)(a1 + 336), 0, 8LL * *(_QWORD *)(a1 + 344));
  v9 = *(void **)(a1 + 336);
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  if ( v9 != (void *)(a1 + 384) )
    operator delete(v9, 8LL * *(_QWORD *)(a1 + 344));
  sub_2334C0((__int64 *)(a1 + 320));
  v10 = *(_QWORD *)(a1 + 312);
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = *(_QWORD *)(a1 + 304);
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = *(_QWORD *)(a1 + 296);
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  sub_2334C0((__int64 *)(a1 + 280));
  sub_2334C0((__int64 *)(a1 + 264));
  v13 = *(_QWORD **)(a1 + 216);
  while ( v13 )
  {
    v14 = v13;
    v13 = (_QWORD *)*v13;
    operator delete(v14, 0x18u);
  }
  memset(*(void **)(a1 + 200), 0, 8LL * *(_QWORD *)(a1 + 208));
  v15 = *(void **)(a1 + 200);
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  if ( v15 != (void *)(a1 + 248) )
    operator delete(v15, 8LL * *(_QWORD *)(a1 + 208));
  sub_2334C0((__int64 *)(a1 + 184));
  v16 = *(_QWORD *)(a1 + 176);
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = *(_QWORD *)(a1 + 168);
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = *(_QWORD *)(a1 + 160);
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  sub_2334C0((__int64 *)(a1 + 144));
  sub_2334C0((__int64 *)(a1 + 128));
  v19 = *(_QWORD *)(a1 + 104);
  if ( v19 )
  {
    v20 = *(_QWORD *)(a1 + 112);
    v6 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v20, v19);
  }
  v21 = *(void **)(a1 + 96);
  result = &off_1C62200;
  *(_QWORD *)(a1 + 48) = &off_1C62200;
  if ( v21 )
    result = (__int64 (__fastcall **)())sub_186B220(v21);
  v23 = *(void **)(a1 + 72);
  if ( v23 )
    result = (__int64 (__fastcall **)())sub_186B220(v23);
  v24 = *(_QWORD *)(a1 + 32);
  if ( v24 )
  {
    v25 = *(_QWORD *)(a1 + 40);
    v6 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v6 )
      result = (__int64 (__fastcall **)())sub_15D7BC0(v25, v24);
  }
  v26 = *(void (__fastcall ****)(void *))(a1 + 24);
  if ( v26 )
  {
    v6 = (*((_DWORD *)v26 + 4))-- == 1;
    if ( v6 )
    {
      (**v26)(v26);
      return (__int64 (__fastcall **)())sub_186B220(v26);
    }
  }
  return result;
}

