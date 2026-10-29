void __fastcall sub_9B39C0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rdi
  void *v8; // [rsp+0h] [rbp-78h]
  unsigned int v9; // [rsp+8h] [rbp-70h]
  void *v10; // [rsp+10h] [rbp-68h]
  unsigned int v11; // [rsp+18h] [rbp-60h]
  void *v12; // [rsp+20h] [rbp-58h]
  unsigned int v13; // [rsp+28h] [rbp-50h]
  void *v14; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-40h]
  void *v16; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-30h]
  void *v18; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v19; // [rsp+58h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 16);
  v3 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v2 + 8) = 0;
  v11 = v3;
  v10 = *(void **)v2;
  sub_A1A5E0(v1, 16);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 16);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v9 = v6;
  v8 = *(void **)v5;
  sub_A1A5E0(v4, 16);
  v15 = v11;
  if ( v11 > 0x40 )
    sub_2585B30(&v14);
  else
    v14 = v10;
  v17 = v9;
  if ( v9 > 0x40 )
    sub_2585B30(&v16);
  else
    v16 = v8;
  sub_258C0C0(&v18, &v16, &v14);
  v12 = v18;
  v13 = v19;
  if ( v17 > 0x40 && v16 )
    operator delete[](v16);
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 16);
  *(_DWORD *)(v7 + 8) = v13;
  if ( v13 > 0x40 )
    sub_2585B30(v7);
  else
    *(_QWORD *)v7 = v12;
  if ( v13 > 0x40 && v12 )
    operator delete[](v12);
  if ( v9 > 0x40 && v8 )
    operator delete[](v8);
  if ( v11 > 0x40 )
  {
    if ( v10 )
      operator delete[](v10);
  }
}

