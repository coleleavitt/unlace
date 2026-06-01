__int64 __fastcall sub_8FB280(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned int v5; // r12d
  void *v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned int v9; // r13d
  void *v10; // r15
  __int64 v11; // rbp
  int v12; // eax
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // ebx
  void *v20; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-60h]
  void *v22; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-50h]
  void *v24; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 16);
  v5 = *(_DWORD *)(v4 + 8);
  v6 = *(void **)v4;
  *(_DWORD *)(v4 + 8) = 0;
  v21 = v5;
  v20 = v6;
  sub_A1A5E0(v3, 16);
  v7 = *(_QWORD *)(a1 + 184);
  v8 = sub_A1A5A0(v7, 16);
  v9 = *(_DWORD *)(v8 + 8);
  v10 = *(void **)v8;
  *(_DWORD *)(v8 + 8) = 0;
  v23 = v9;
  v22 = v10;
  sub_A1A5E0(v7, 16);
  v11 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v12 = sub_2586820(&v22, &v20);
  if ( v12 < 0 )
  {
    v13 = 2;
    v14 = 2;
  }
  else if ( v12 )
  {
    v13 = 3;
    v14 = 3;
  }
  else
  {
    v13 = 1;
    v14 = 0;
  }
  if ( *(_BYTE *)(a3 + 112) == 2 )
    v13 = v14;
  v15 = sub_B9AC80(a3, v13);
  sub_B99210(&v24, v15);
  v16 = sub_987D60(a1, a2, v11, &v24);
  if ( v25 > 0x40 && v24 )
    operator delete[](v24);
  if ( v9 > 0x40 && v10 )
    operator delete[](v10);
  if ( v5 > 0x40 && v6 )
    operator delete[](v6);
  return v16;
}

