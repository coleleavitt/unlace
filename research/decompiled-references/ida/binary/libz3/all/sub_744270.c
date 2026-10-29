__int64 __fastcall sub_744270(__int64 a1)
{
  __int64 *v2; // rbp
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  void (__fastcall ***v7)(void *); // rbp
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rbp
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  unsigned int v20; // eax
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  void *v24; // [rsp+0h] [rbp-78h]
  int v25[2]; // [rsp+38h] [rbp-40h] BYREF

  v2 = *(__int64 **)(a1 + 664);
  *(_QWORD *)(a1 + 24) = &off_1C54028;
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          v5 = *(_QWORD *)(a1 + 656);
          v6 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v2;
    }
    while ( v2 < v3 );
LABEL_8:
    v2 = *(__int64 **)(a1 + 664);
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = *(void (__fastcall ****)(void *))(a1 + 616);
  if ( v7 )
  {
    v6 = (*((_DWORD *)v7 + 2))-- == 1;
    if ( v6 )
    {
      (**v7)(v7);
      sub_186B220(v7);
    }
  }
  sub_14B63F0(a1 + 600);
  sub_18572D0((void *)(a1 + 568));
  v8 = *(_QWORD *)(a1 + 552);
  *(_QWORD *)(a1 + 24) = &off_1C54008;
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = *(_QWORD *)(a1 + 536);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 544);
    v6 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v10, v9);
  }
  v11 = *(_QWORD *)(a1 + 520);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 528);
    v6 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v12, v11);
  }
  v13 = *(_QWORD *)(a1 + 504);
  if ( v13 )
  {
    v14 = *(_QWORD *)(a1 + 512);
    v6 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v14, v13);
  }
  *(_QWORD *)(a1 + 352) = &qword_1C637E8;
  sub_15841B0(a1 + 352);
  *(_QWORD *)(a1 + 192) = &qword_1C637E8;
  sub_15841B0(a1 + 192);
  v15 = *(_QWORD *)(a1 + 184);
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  sub_15841B0(a1 + 24);
  v16 = *(_QWORD *)(a1 + 16);
  sub_1584DD0(a1 + 24, v16, *(_DWORD *)(v16 + 712) != 0);
  *(_QWORD *)(a1 + 24) = &off_1C54008;
  *(_DWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 168) = a1 + 560;
  *(_QWORD *)(a1 + 184) = 0;
  sub_1584DD0(a1 + 192, v16, 0);
  *(_QWORD *)(a1 + 336) = 0;
  *(_DWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 192) = &off_1C61DB8;
  sub_1584DD0(a1 + 352, v16, 0);
  *(_QWORD *)(a1 + 24) = &off_1C54028;
  *(_DWORD *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 504) = 0;
  *(_QWORD *)(a1 + 352) = &off_1C61DE0;
  *(_QWORD *)(a1 + 512) = v16;
  *(_QWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 528) = v16;
  *(_QWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 544) = v16;
  *(_QWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 560) = v16;
  sub_1858590(a1 + 568, a1 + 680);
  sub_16744A0(a1 + 576, v16);
  *(_QWORD *)v25 = 0;
  sub_14B7810(a1 + 600, v16, (int)v25, v17, v18, v19, v24);
  sub_18572D0(v25);
  *(_QWORD *)(a1 + 656) = v16;
  *(_QWORD *)(a1 + 616) = 0;
  *(_QWORD *)(a1 + 664) = 0;
  *(_QWORD *)(a1 + 672) = 0;
  sub_1863170(a1 + 568, a1 + 680);
  v20 = sub_1859960(a1 + 568, "max_memory", 0xFFFFFFFFLL);
  v21 = (unsigned __int64)v20 << 20;
  v6 = v20 == -1;
  v22 = -1;
  if ( !v6 )
    v22 = v21;
  *(_QWORD *)(a1 + 640) = v22;
  *(_QWORD *)(a1 + 632) = (unsigned int)sub_1859960(a1 + 568, "max_steps", 0xFFFFFFFFLL);
  *(_DWORD *)(a1 + 624) = sub_1859960(a1 + 568, "max_bits", 4);
  *(_QWORD *)(a1 + 632) = 0xFFFFFFFFLL;
  return 0xFFFFFFFFLL;
}

