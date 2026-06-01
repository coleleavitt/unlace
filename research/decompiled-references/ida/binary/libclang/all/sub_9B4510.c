__int64 __fastcall sub_9B4510(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned __int64 v5; // rax
  void *v6; // rax
  unsigned int v7; // eax
  __int64 v8; // rdi
  unsigned int v10; // edx
  void *v11; // [rsp+0h] [rbp-78h]
  unsigned int v12; // [rsp+8h] [rbp-70h]
  void *v13; // [rsp+10h] [rbp-68h]
  unsigned int v14; // [rsp+18h] [rbp-60h]
  void *v15; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-50h]
  void *v17; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-40h]
  void *v19; // [rsp+40h] [rbp-38h]
  unsigned int v20; // [rsp+48h] [rbp-30h]
  void *v21; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v22; // [rsp+58h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 16);
  v3 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v2 + 8) = 0;
  v14 = v3;
  v13 = *(void **)v2;
  sub_A1A5E0(v1, 16);
  v4 = v14;
  v16 = v14;
  if ( v14 <= 0x40 )
  {
    v5 = (unsigned __int64)v13;
    v15 = v13;
LABEL_3:
    v20 = v4;
    v22 = 0;
    v18 = v4;
    v6 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v4) & ~v5);
    if ( !v4 )
      v6 = nullptr;
    v21 = v6;
    v19 = v6;
    goto LABEL_6;
  }
  sub_2585B30(&v15);
  v4 = v16;
  v22 = v16;
  if ( v16 <= 0x40 )
  {
    v5 = (unsigned __int64)v15;
    goto LABEL_3;
  }
  sub_2585B30(&v21);
  v4 = v22;
  if ( v22 <= 0x40 )
  {
    v5 = (unsigned __int64)v21;
    goto LABEL_3;
  }
  sub_25869C0(&v21, &v15);
  v10 = v22;
  v6 = v21;
  v22 = 0;
  v20 = v10;
  v19 = v21;
  v18 = v10;
  if ( v10 > 0x40 )
  {
    sub_2585B30(&v17);
    goto LABEL_7;
  }
LABEL_6:
  v17 = v6;
LABEL_7:
  v11 = v17;
  v7 = v18;
  v18 = 0;
  v12 = v7;
  if ( v20 > 0x40 && v19 )
    operator delete[](v19);
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
  if ( v16 > 0x40 && v15 )
    operator delete[](v15);
  v8 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 16);
  *(_DWORD *)(v8 + 8) = v12;
  if ( v12 > 0x40 )
    sub_2585B30(v8);
  else
    *(_QWORD *)v8 = v11;
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  return 1;
}

