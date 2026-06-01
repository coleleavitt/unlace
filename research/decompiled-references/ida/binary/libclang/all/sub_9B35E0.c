void __fastcall sub_9B35E0(__int64 a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rbp
  int v12; // eax
  __int64 v13; // rsi
  char v14; // bl
  void *v15; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v16; // [rsp+8h] [rbp-60h]
  char v17; // [rsp+Ch] [rbp-5Ch]
  int v18; // [rsp+10h] [rbp-58h]
  void *v19; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+28h] [rbp-40h]
  char v21; // [rsp+2Ch] [rbp-3Ch]
  int v22; // [rsp+30h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 24);
  v7 = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = 0;
  v20 = v7;
  v19 = *(void **)v6;
  LOBYTE(v7) = *(_BYTE *)(v6 + 12);
  LODWORD(v6) = *(_DWORD *)(v6 + 16);
  v21 = v7;
  v22 = v6;
  sub_A1A5E0(v5, 24);
  v8 = *(_QWORD *)(a1 + 184);
  v9 = sub_A1A5A0(v8, 24);
  v10 = *(_DWORD *)(v9 + 8);
  *(_DWORD *)(v9 + 8) = 0;
  v16 = v10;
  v15 = *(void **)v9;
  LOBYTE(v10) = *(_BYTE *)(v9 + 12);
  LODWORD(v9) = *(_DWORD *)(v9 + 16);
  v17 = v10;
  v18 = v9;
  sub_A1A5E0(v8, 24);
  v11 = *(_QWORD *)(a1 + 184);
  v12 = sub_256EFC0(&v15, &v19);
  v13 = 0;
  if ( v12 )
    v13 = (unsigned int)(v12 >= 0) + 2;
  v14 = a2(a3, v13);
  *(_BYTE *)sub_A1A4E0(v11, 8) = v14;
  if ( v16 > 0x40 && v15 )
    operator delete[](v15);
  if ( v20 > 0x40 )
  {
    if ( v19 )
      operator delete[](v19);
  }
}

