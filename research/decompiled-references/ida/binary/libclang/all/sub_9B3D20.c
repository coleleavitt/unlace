void __fastcall sub_9B3D20(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned int v6; // edx
  void *v7; // rdx
  unsigned int v8; // ebp
  void *v9; // r12
  __int64 v10; // rdi
  void *v11; // [rsp+0h] [rbp-88h]
  unsigned int v12; // [rsp+8h] [rbp-80h]
  void *v13; // [rsp+10h] [rbp-78h]
  unsigned int v14; // [rsp+18h] [rbp-70h]
  void *v15; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-50h]
  void *v17; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+48h] [rbp-40h]
  void *v19; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+58h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 16);
  v3 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v2 + 8) = 0;
  v14 = v3;
  v13 = *(void **)v2;
  sub_A1A5E0(v1, 16);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 16);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v12 = v6;
  v11 = *(void **)v5;
  sub_A1A5E0(v4, 16);
  v16 = v14;
  if ( v14 > 0x40 )
    sub_2585B30(&v15);
  else
    v15 = v13;
  v18 = v12;
  if ( v12 > 0x40 )
  {
    sub_2585B30(&v17);
    v20 = v18;
    if ( v18 > 0x40 )
    {
      sub_2585B30(&v19);
      goto LABEL_6;
    }
    v7 = v17;
  }
  else
  {
    v7 = v11;
    v20 = v12;
    v17 = v11;
  }
  v19 = v7;
LABEL_6:
  sub_2586200(&v19, &v15);
  v8 = v20;
  v9 = v19;
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
  if ( v16 > 0x40 && v15 )
    operator delete[](v15);
  v10 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 16);
  *(_DWORD *)(v10 + 8) = v8;
  if ( v8 > 0x40 )
    sub_2585B30(v10);
  else
    *(_QWORD *)v10 = v9;
  if ( v8 > 0x40 && v9 )
    operator delete[](v9);
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  if ( v14 > 0x40 )
  {
    if ( v13 )
      operator delete[](v13);
  }
}

