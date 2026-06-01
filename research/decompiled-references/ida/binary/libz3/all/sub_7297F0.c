__int64 __fastcall sub_7297F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  _OWORD *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v16; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v17[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = sub_186B270(0x368u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C53A50;
  *(_QWORD *)(v2 + 16) = a2;
  sub_1858590(v2 + 24, a1 + 24);
  v17[0] = 0;
  sub_2527E0(v2 + 32, (__int64)v17);
  sub_18572D0(v17);
  v17[0] = 0;
  sub_8E4C30(v2 + 792, a2, v2 + 32, v17);
  sub_18572D0(v17);
  sub_16669D0(v2 + 800, a2);
  sub_1447E40(v2 + 816, a2, (unsigned int)v17, v3, v4, v5, v16, 0, v17[1]);
  sub_18572D0(v17);
  *(_QWORD *)(v2 + 832) = a2;
  *(_QWORD *)(v2 + 824) = 0;
  v6 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v2 + 840) = v6;
  v7 = *(_QWORD *)(v2 + 800);
  *v6 = 0;
  *(_QWORD *)(v2 + 848) = 8;
  *(_DWORD *)(v2 + 856) = 0;
  *(_DWORD *)(v2 + 864) = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v8 = sub_15D2CD0(v7, 5, 1, 0, 0);
  v9 = *(_QWORD *)(a2 + 840);
  v16 = v8;
  v17[0] = 1601669129;
  v10 = sub_15E3510(a2, v17, 1, &v16, v9, 0);
  v11 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v12 = *(_QWORD *)(v2 + 824);
  if ( v12 )
  {
    v13 = *(_QWORD *)(v2 + 832);
    if ( (*(_DWORD *)(v12 + 8))-- == 1 )
      sub_15D7BC0(v13, v12);
  }
  *(_QWORD *)(v2 + 824) = v11;
  return v2;
}

