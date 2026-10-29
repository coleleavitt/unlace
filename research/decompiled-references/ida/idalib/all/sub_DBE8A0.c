__int64 __fastcall sub_DBE8A0(__int64 a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 v5; // r12
  __int64 v6; // rax
  void *v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rax
  void *v10; // rdx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rsi
  char v14; // bp
  _BYTE *v15; // rax
  bool v16; // cc
  void *v18; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v19; // [rsp+8h] [rbp-60h]
  char v20; // [rsp+Ch] [rbp-5Ch]
  int v21; // [rsp+10h] [rbp-58h]
  void *v22; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-40h]
  char v24; // [rsp+2Ch] [rbp-3Ch]
  int v25; // [rsp+30h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 176);
  v6 = sub_E21760(v5, 24);
  v23 = *(_DWORD *)(v6 + 8);
  v7 = *(void **)v6;
  *(_DWORD *)(v6 + 8) = 0;
  v22 = v7;
  LOBYTE(v7) = *(_BYTE *)(v6 + 12);
  LODWORD(v6) = *(_DWORD *)(v6 + 16);
  v24 = (char)v7;
  v25 = v6;
  sub_E21790(v5, 24);
  v8 = *(_QWORD *)(a1 + 176);
  v9 = sub_E21760(v8, 24);
  v19 = *(_DWORD *)(v9 + 8);
  v10 = *(void **)v9;
  *(_DWORD *)(v9 + 8) = 0;
  v18 = v10;
  LOBYTE(v10) = *(_BYTE *)(v9 + 12);
  LODWORD(v9) = *(_DWORD *)(v9 + 16);
  v20 = (char)v10;
  v21 = v9;
  sub_E21790(v8, 24);
  v11 = *(_QWORD *)(a1 + 176);
  v12 = sub_21EE7D0(&v18, &v22);
  v13 = 0;
  if ( v12 )
    v13 = (unsigned int)(v12 >= 0) + 2;
  v14 = a2(a3, v13);
  v15 = (_BYTE *)sub_E216C0(v11, 8);
  v16 = v19 <= 0x40;
  *v15 = v14;
  if ( !v16 && v18 )
    operator delete[](v18);
  if ( v23 > 0x40 && v22 )
    operator delete[](v22);
  return 1;
}
