__int64 __fastcall sub_DC2BD0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  void *v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rax
  void *v6; // rdx
  void *v8; // [rsp+0h] [rbp-B8h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-B0h]
  void *v10; // [rsp+20h] [rbp-98h]
  unsigned int v11; // [rsp+28h] [rbp-90h]
  char v12; // [rsp+2Ch] [rbp-8Ch]
  int v13; // [rsp+30h] [rbp-88h]
  void *v14; // [rsp+40h] [rbp-78h]
  unsigned int v15; // [rsp+48h] [rbp-70h]
  char v16; // [rsp+4Ch] [rbp-6Ch]
  int v17; // [rsp+50h] [rbp-68h]
  void *v18; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v19; // [rsp+68h] [rbp-50h]
  char v20; // [rsp+6Ch] [rbp-4Ch]
  int v21; // [rsp+70h] [rbp-48h]
  void *v22; // [rsp+80h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+88h] [rbp-30h]
  char v24; // [rsp+8Ch] [rbp-2Ch]
  int v25; // [rsp+90h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 176);
  v2 = sub_E21760(v1, 24);
  v15 = *(_DWORD *)(v2 + 8);
  v3 = *(void **)v2;
  *(_DWORD *)(v2 + 8) = 0;
  v14 = v3;
  LOBYTE(v3) = *(_BYTE *)(v2 + 12);
  LODWORD(v2) = *(_DWORD *)(v2 + 16);
  v16 = (char)v3;
  v17 = v2;
  sub_E21790(v1, 24);
  v4 = *(_QWORD *)(a1 + 176);
  v5 = sub_E21760(v4, 24);
  v11 = *(_DWORD *)(v5 + 8);
  v6 = *(void **)v5;
  *(_DWORD *)(v5 + 8) = 0;
  v10 = v6;
  LOBYTE(v6) = *(_BYTE *)(v5 + 12);
  LODWORD(v5) = *(_DWORD *)(v5 + 16);
  v12 = (char)v6;
  v13 = v5;
  sub_E21790(v4, 24);
  sub_CFE920((__int64)&v8);
  v23 = v15;
  if ( v15 > 0x40 )
    sub_2205510(&v22);
  else
    v22 = v14;
  v24 = v16;
  v25 = v17;
  v19 = v11;
  if ( v11 > 0x40 )
  {
    sub_2205510(&v18);
    v20 = v12;
    v21 = v13;
    if ( v19 > 0x40 )
    {
      if ( v18 )
        operator delete[](v18);
    }
  }
  if ( v23 > 0x40 && v22 )
    operator delete[](v22);
  if ( v9 > 0x40 && v8 )
    operator delete[](v8);
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  return 0;
}
