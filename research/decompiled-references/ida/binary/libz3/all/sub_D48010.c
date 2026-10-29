__int64 __fastcall sub_D48010(__int64 a1)
{
  __int64 *v2; // rbx
  void (__fastcall ***v3)(void *); // r13
  __int64 v4; // rbp
  bool v5; // zf
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rbx
  int v15; // ecx
  unsigned int v16; // eax
  unsigned __int64 v17; // rdx
  __int64 result; // rax

  v2 = *(__int64 **)(a1 + 16);
  v3 = (void (__fastcall ***)(void *))v2[71];
  v4 = *v2;
  v2[1] = (__int64)&off_1C5A688;
  if ( v3 )
  {
    v5 = (*((_DWORD *)v3 + 2))-- == 1;
    if ( v5 )
    {
      (**v3)(v3);
      sub_186B220(v3);
    }
  }
  sub_13A2BD0(v2 + 69);
  v6 = v2[67];
  v2[1] = (__int64)&off_1C5A668;
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = v2[65];
  if ( v7 )
  {
    v8 = v2[66];
    v5 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v5 )
      sub_15D7BC0(v8, v7);
  }
  v9 = v2[63];
  if ( v9 )
  {
    v10 = v2[64];
    v5 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v5 )
      sub_15D7BC0(v10, v9);
  }
  v11 = v2[61];
  if ( v11 )
  {
    v12 = v2[62];
    v5 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v5 )
      sub_15D7BC0(v12, v11);
  }
  v2[42] = (__int64)&qword_1C637E8;
  sub_15841B0(v2 + 42);
  v2[22] = (__int64)&qword_1C637E8;
  sub_15841B0(v2 + 22);
  v13 = v2[21];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  sub_15841B0(v2 + 1);
  v14 = *(_QWORD *)(a1 + 16);
  v15 = *(_DWORD *)(v4 + 712);
  *(_QWORD *)v14 = v4;
  sub_1584DD0(v14 + 8, v4, v15 != 0);
  *(_QWORD *)(v14 + 8) = &off_1C5A668;
  *(_DWORD *)(v14 + 160) = 0;
  *(_QWORD *)(v14 + 152) = v14 + 544;
  *(_QWORD *)(v14 + 168) = 0;
  sub_1584DD0(v14 + 176, v4, 0);
  *(_QWORD *)(v14 + 320) = 0;
  *(_DWORD *)(v14 + 328) = 0;
  *(_QWORD *)(v14 + 176) = &off_1C61DB8;
  sub_1584DD0(v14 + 336, v4, 0);
  *(_QWORD *)(v14 + 8) = &off_1C5A688;
  *(_QWORD *)(v14 + 496) = v4;
  *(_DWORD *)(v14 + 480) = 0;
  *(_QWORD *)(v14 + 336) = &off_1C61DE0;
  *(_QWORD *)(v14 + 488) = 0;
  *(_QWORD *)(v14 + 504) = 0;
  *(_QWORD *)(v14 + 512) = v4;
  *(_QWORD *)(v14 + 520) = 0;
  *(_QWORD *)(v14 + 528) = v4;
  *(_QWORD *)(v14 + 536) = 0;
  *(_QWORD *)(v14 + 544) = v4;
  sub_13A2DE0(v14 + 552, v4, 0);
  *(_QWORD *)(v14 + 568) = 0;
  v16 = sub_1859960(a1 + 24, "max_memory", 0xFFFFFFFFLL);
  *(_QWORD *)(v14 + 576) = 0;
  *(_DWORD *)(v14 + 596) = 0;
  v17 = (unsigned __int64)v16 << 20;
  v5 = v16 == -1;
  result = -1;
  if ( !v5 )
    result = v17;
  *(_QWORD *)(v14 + 584) = result;
  *(_QWORD *)(a1 + 16) = v14;
  return result;
}

