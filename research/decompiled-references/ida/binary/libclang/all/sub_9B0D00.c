void __fastcall sub_9B0D00(__int64 a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned int v6; // r12d
  void *v7; // r14
  __int64 v8; // rax
  unsigned int v9; // r13d
  void *v10; // r15
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rsi
  char v14; // bp
  __int64 v16; // [rsp+8h] [rbp-60h]
  void *v17; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v18; // [rsp+18h] [rbp-50h]
  void *v19; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+28h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 16);
  v6 = *(_DWORD *)(v5 + 8);
  v7 = *(void **)v5;
  *(_DWORD *)(v5 + 8) = 0;
  v20 = v6;
  v19 = v7;
  sub_A1A5E0(v4, 16);
  v16 = *(_QWORD *)(a1 + 184);
  v8 = sub_A1A5A0(v16, 16);
  v9 = *(_DWORD *)(v8 + 8);
  v10 = *(void **)v8;
  *(_DWORD *)(v8 + 8) = 0;
  v18 = v9;
  v17 = v10;
  sub_A1A5E0(v16, 16);
  v11 = *(_QWORD *)(a1 + 184);
  v12 = sub_2586820(&v17, &v19);
  if ( v12 < 0 )
    v13 = 2;
  else
    v13 = v12 != 0 ? 3 : 0;
  v14 = a2(a3, v13);
  *(_BYTE *)sub_A1A4E0(v11, 8) = v14;
  if ( v9 > 0x40 && v10 )
    operator delete[](v10);
  if ( v6 > 0x40 )
  {
    if ( v7 )
      operator delete[](v7);
  }
}

