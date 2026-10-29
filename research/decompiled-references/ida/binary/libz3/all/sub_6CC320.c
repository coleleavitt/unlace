__int64 __fastcall sub_6CC320(__int64 a1)
{
  void *v2; // rdi
  __int64 *v3; // rbp
  __int64 v4; // rdi
  char *v5; // rdi
  char *v6; // rcx
  char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
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
  bool v21; // zf
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdi
  void *v30; // rdi
  __int64 *v31; // rbp
  __int64 v32; // rdi

  v2 = *(void **)(a1 + 712);
  if ( v2 )
    sub_186B220(v2);
  v3 = *(__int64 **)(a1 + 688);
  if ( v3 )
  {
    sub_2334C0(v3 + 11);
    v4 = v3[10];
    if ( v4 )
      sub_186B220((void *)(v4 - 8));
    sub_186B220(v3);
  }
  v5 = *(char **)(a1 + 520);
  v6 = &v5[8 * *(unsigned int *)(a1 + 528)];
  if ( v5 != v6 )
  {
    v7 = *(char **)(a1 + 520);
    do
    {
      v8 = *(_QWORD *)v7;
      v7 += 8;
      *(_BYTE *)(v8 + 6) &= ~1u;
    }
    while ( v7 != v6 );
  }
  *(_DWORD *)(a1 + 528) = 0;
  if ( v5 && v5 != (char *)(a1 + 536) )
    sub_186B220(v5);
  v9 = *(_QWORD *)(a1 + 512);
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = *(_QWORD *)(a1 + 504);
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = *(_QWORD *)(a1 + 496);
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = *(_QWORD *)(a1 + 488);
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = *(_QWORD **)(a1 + 408);
  while ( v13 )
  {
    v14 = v13;
    v13 = (_QWORD *)*v13;
    operator delete(v14, 0x18u);
  }
  memset(*(void **)(a1 + 392), 0, 8LL * *(_QWORD *)(a1 + 400));
  v15 = *(void **)(a1 + 392);
  *(_QWORD *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 408) = 0;
  if ( v15 != (void *)(a1 + 440) )
    operator delete(v15, 8LL * *(_QWORD *)(a1 + 400));
  sub_2334C0((__int64 *)(a1 + 376));
  v16 = *(_QWORD *)(a1 + 368);
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = *(_QWORD *)(a1 + 360);
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = *(_QWORD *)(a1 + 352);
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  sub_2334C0((__int64 *)(a1 + 336));
  sub_2334C0((__int64 *)(a1 + 320));
  v19 = *(_QWORD *)(a1 + 296);
  if ( v19 )
  {
    v20 = *(_QWORD *)(a1 + 304);
    v21 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v20, v19);
  }
  v22 = *(_QWORD *)(a1 + 280);
  if ( v22 )
  {
    v23 = *(_QWORD *)(a1 + 288);
    v21 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v23, v22);
  }
  v24 = *(_QWORD *)(a1 + 264);
  if ( v24 )
  {
    v25 = *(_QWORD *)(a1 + 272);
    v21 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v25, v24);
  }
  v26 = *(_QWORD *)(a1 + 248);
  if ( v26 )
  {
    v27 = *(_QWORD *)(a1 + 256);
    v21 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v27, v26);
  }
  v28 = *(_QWORD *)(a1 + 232);
  if ( v28 )
  {
    v29 = *(_QWORD *)(a1 + 240);
    v21 = (*(_DWORD *)(v28 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v29, v28);
  }
  sub_6BFE30(*(_QWORD *)(a1 + 216), *(_QWORD *)(a1 + 224));
  v30 = *(void **)(a1 + 144);
  if ( v30 )
    sub_186B220(v30);
  v31 = *(__int64 **)(a1 + 120);
  if ( v31 )
  {
    sub_2334C0(v31 + 11);
    v32 = v31[10];
    if ( v32 )
      sub_186B220((void *)(v32 - 8));
    sub_186B220(v31);
  }
  sub_18572D0((void *)(a1 + 72));
  sub_2B4F40((__int64 *)(a1 + 48));
  return sub_14B63F0(a1 + 32);
}

