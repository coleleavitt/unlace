void __fastcall sub_702460(__int64 a1)
{
  void (__fastcall ***v2)(void *); // rbx
  bool v3; // zf
  __int64 *v4; // rbx
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  void *v9; // rdi
  void *v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  void *v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  void (__fastcall ***v18)(void *, unsigned __int64); // rbx

  v2 = *(void (__fastcall ****)(void *))(a1 + 648);
  *(_QWORD *)a1 = &off_1C53580;
  if ( v2 )
  {
    v3 = (*((_DWORD *)v2 + 2))-- == 1;
    if ( v3 )
    {
      (**v2)(v2);
      sub_186B220(v2);
    }
  }
  v4 = *(__int64 **)(a1 + 640);
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 >= v5 )
      goto LABEL_12;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = *(_QWORD *)(a1 + 632);
          v3 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v4 >= v5 )
          goto LABEL_11;
      }
      sub_15D7BC0(v7, v6);
      ++v4;
    }
    while ( v4 < v5 );
LABEL_11:
    v4 = *(__int64 **)(a1 + 640);
    if ( v4 )
LABEL_12:
      sub_186B220(v4 - 1);
  }
  v8 = *(_QWORD **)(a1 + 592);
  while ( v8 )
  {
    v9 = v8;
    v8 = (_QWORD *)*v8;
    operator delete(v9, 0x18u);
  }
  memset(*(void **)(a1 + 576), 0, 8LL * *(_QWORD *)(a1 + 584));
  v10 = *(void **)(a1 + 576);
  *(_QWORD *)(a1 + 600) = 0;
  *(_QWORD *)(a1 + 592) = 0;
  v11 = *(_QWORD *)(a1 + 584);
  if ( v10 != (void *)(a1 + 624) )
  {
    v11 *= 8LL;
    operator delete(v10, v11);
  }
  sub_2334C0((__int64 *)(a1 + 560));
  v12 = *(_QWORD *)(a1 + 552);
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = *(_QWORD *)(a1 + 544);
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = *(_QWORD *)(a1 + 536);
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  sub_2334C0((__int64 *)(a1 + 520));
  sub_2334C0((__int64 *)(a1 + 504));
  sub_2334C0((__int64 *)(a1 + 480));
  v15 = *(void **)(a1 + 456);
  if ( v15 )
    sub_186B220(v15);
  v16 = *(_QWORD *)(a1 + 448);
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = *(_QWORD *)(a1 + 440);
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = *(void (__fastcall ****)(void *, unsigned __int64))(a1 + 424);
  if ( v18 )
  {
    v3 = (*((_DWORD *)v18 + 2))-- == 1;
    if ( v3 )
    {
      (**v18)(v18, v11);
      sub_186B220(v18);
    }
  }
  sub_18572D0((void *)(a1 + 416));
  sub_701700((_QWORD *)(a1 + 24));
}

