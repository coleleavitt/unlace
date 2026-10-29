__int64 __fastcall sub_738790(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rdi

  *(_QWORD *)a1 = &off_1C53F10;
  v2 = *(__int64 **)(a1 + 624);
  v3 = &v2[*(unsigned int *)(a1 + 632)];
  if ( v2 != v3 )
  {
    v4 = v2;
    do
    {
      v5 = *v4++;
      *(_BYTE *)(v5 + 6) &= ~1u;
    }
    while ( v4 != v3 );
  }
  *(_DWORD *)(a1 + 632) = 0;
  if ( v2 != (__int64 *)(a1 + 640) && v2 )
    sub_186B220(v2);
  v6 = *(_QWORD *)(a1 + 616);
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = *(_QWORD *)(a1 + 608);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = *(_QWORD *)(a1 + 600);
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = *(_QWORD *)(a1 + 592);
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = *(_QWORD *)(a1 + 528);
  *(_QWORD *)a1 = &off_1C53EF0;
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = *(_QWORD *)(a1 + 512);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 520);
    v13 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v12, v11);
  }
  v14 = *(_QWORD *)(a1 + 496);
  if ( v14 )
  {
    v15 = *(_QWORD *)(a1 + 504);
    v13 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v15, v14);
  }
  v16 = *(_QWORD *)(a1 + 480);
  if ( v16 )
  {
    v17 = *(_QWORD *)(a1 + 488);
    v13 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v17, v16);
  }
  *(_QWORD *)(a1 + 328) = &qword_1C637E8;
  sub_15841B0(a1 + 328);
  *(_QWORD *)(a1 + 168) = &qword_1C637E8;
  sub_15841B0(a1 + 168);
  v18 = *(_QWORD *)(a1 + 160);
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  return sub_15841B0(a1);
}

