__int64 __fastcall sub_728960(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  _OWORD *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v17; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v18[8]; // [rsp+8h] [rbp-40h] BYREF

  v3 = sub_186B270(0x368u);
  *(_DWORD *)(v3 + 8) = 0;
  *(_QWORD *)v3 = &off_1C53A50;
  *(_QWORD *)(v3 + 16) = a1;
  sub_1858590(v3 + 24, a2);
  v18[0] = 0;
  sub_2527E0(v3 + 32, (__int64)v18);
  sub_18572D0(v18);
  v18[0] = 0;
  sub_8E4C30(v3 + 792, a1, v3 + 32, v18);
  sub_18572D0(v18);
  sub_16669D0(v3 + 800, a1);
  sub_1447E40(v3 + 816, a1, (unsigned int)v18, v4, v5, v6, v17, 0, v18[1]);
  sub_18572D0(v18);
  *(_QWORD *)(v3 + 832) = a1;
  *(_QWORD *)(v3 + 824) = 0;
  v7 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v3 + 840) = v7;
  v8 = *(_QWORD *)(v3 + 800);
  *v7 = 0;
  *(_QWORD *)(v3 + 848) = 8;
  *(_DWORD *)(v3 + 856) = 0;
  *(_DWORD *)(v3 + 864) = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = 0;
  v9 = sub_15D2CD0(v8, 5, 1, 0, 0);
  v10 = *(_QWORD *)(a1 + 840);
  v17 = v9;
  v18[0] = 1601669129;
  v11 = sub_15E3510(a1, v18, 1, &v17, v10, 0);
  v12 = v11;
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  v13 = *(_QWORD *)(v3 + 824);
  if ( v13 )
  {
    v14 = *(_QWORD *)(v3 + 832);
    if ( (*(_DWORD *)(v13 + 8))-- == 1 )
      sub_15D7BC0(v14, v13);
  }
  *(_QWORD *)(v3 + 824) = v12;
  return sub_EE8D70(v3);
}

