__int64 __fastcall sub_C64910(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r13
  int v3; // ecx
  __int64 v4; // rsi
  __int64 result; // rax
  _QWORD *v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdi

  v1 = sub_186B270(0x540u);
  v2 = **(_QWORD **)(a1 + 16);
  v3 = *(_DWORD *)(v2 + 712);
  *(_QWORD *)v1 = v2;
  sub_1584DD0(v1 + 8, v2, v3 != 0);
  *(_QWORD *)(v1 + 8) = &off_1C58920;
  *(_DWORD *)(v1 + 160) = 0;
  *(_QWORD *)(v1 + 152) = v1 + 544;
  *(_QWORD *)(v1 + 168) = 0;
  sub_1584DD0(v1 + 176, v2, 0);
  *(_QWORD *)(v1 + 320) = 0;
  *(_DWORD *)(v1 + 328) = 0;
  *(_QWORD *)(v1 + 176) = &off_1C61DB8;
  sub_1584DD0(v1 + 336, v2, 0);
  *(_DWORD *)(v1 + 480) = 0;
  *(_QWORD *)(v1 + 496) = v2;
  *(_QWORD *)(v1 + 512) = v2;
  *(_QWORD *)(v1 + 336) = &off_1C61DE0;
  *(_QWORD *)(v1 + 488) = 0;
  *(_QWORD *)(v1 + 504) = 0;
  *(_QWORD *)(v1 + 520) = 0;
  *(_QWORD *)(v1 + 528) = v2;
  *(_QWORD *)(v1 + 536) = 0;
  *(_QWORD *)(v1 + 8) = &off_1C58940;
  *(_QWORD *)(v1 + 544) = v2;
  sub_16669D0(v1 + 552, v2);
  sub_1839FF0(v1 + 568);
  *(_QWORD *)(v1 + 1168) = 0;
  *(_QWORD *)(v1 + 1176) = 0;
  v4 = *(_QWORD *)(v1 + 544);
  *(_QWORD *)(v1 + 1184) = 0;
  *(_QWORD *)(v1 + 1192) = 0;
  *(_QWORD *)(v1 + 1200) = 0;
  *(_QWORD *)(v1 + 1208) = 0;
  *(_QWORD *)(v1 + 1216) = 0;
  *(_QWORD *)(v1 + 1224) = 0;
  *(_QWORD *)(v1 + 1232) = 0;
  *(_QWORD *)(v1 + 1240) = 0;
  *(_QWORD *)(v1 + 1248) = 1;
  *(_QWORD *)(v1 + 1256) = 0;
  *(_QWORD *)(v1 + 1264) = 0;
  *(_QWORD *)(v1 + 1272) = 0;
  *(_QWORD *)(v1 + 1280) = 1;
  *(_QWORD *)(v1 + 1288) = 0;
  sub_1787100(v1 + 1296, v4, v1 + 568, 0);
  sub_1632EE0(v1 + 1304, *(_QWORD *)(v1 + 544), v1 + 1296);
  sub_177BA80(v1 + 1328);
  *(_BYTE *)(v1 + 1340) = sub_1859610(a1 + 24, "split_factors", 1);
  result = sub_177BAB0(v1 + 1328, a1 + 24);
  v6 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v1;
  if ( !v6 )
    return result;
  v7 = v6[165];
  v6[1] = &off_1C58940;
  v6[163] = &off_1C62610;
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  sub_16329F0(v6 + 163);
  sub_177F420(v6 + 162);
  sub_184C8D0(v6 + 71);
  v8 = v6[67];
  v6[1] = &off_1C58920;
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = v6[65];
  if ( v9 && (v10 = v6[66], v11 = *(_DWORD *)(v9 + 8) == 1, --*(_DWORD *)(v9 + 8), v11) )
  {
    sub_15D7BC0(v10, v9);
    v12 = v6[63];
    if ( !v12 )
    {
LABEL_10:
      v14 = v6[61];
      if ( v14 )
        goto LABEL_11;
      goto LABEL_13;
    }
  }
  else
  {
    v12 = v6[63];
    if ( !v12 )
      goto LABEL_10;
  }
  v13 = v6[64];
  v11 = (*(_DWORD *)(v12 + 8))-- == 1;
  if ( !v11 )
    goto LABEL_10;
  sub_15D7BC0(v13, v12);
  v14 = v6[61];
  if ( v14 )
  {
LABEL_11:
    v15 = v6[62];
    v11 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v15, v14);
  }
LABEL_13:
  v6[42] = &qword_1C637E8;
  sub_15841B0(v6 + 42);
  v6[22] = &qword_1C637E8;
  sub_15841B0(v6 + 22);
  v16 = v6[21];
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  sub_15841B0(v6 + 1);
  return sub_186B220(v6);
}

