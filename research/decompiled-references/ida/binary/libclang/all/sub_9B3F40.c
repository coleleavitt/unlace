__int64 __fastcall sub_9B3F40(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned int v3; // edx
  unsigned int v4; // eax
  unsigned __int64 v5; // rdx
  void *v6; // rdx
  void *v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rdi
  void *v11; // [rsp+0h] [rbp-68h]
  unsigned int v12; // [rsp+8h] [rbp-60h]
  void *v13; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-50h]
  void *v15; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-40h]
  void *v17; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-30h]
  void *v19; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 16);
  v3 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v2 + 8) = 0;
  v14 = v3;
  v13 = *(void **)v2;
  sub_A1A5E0(v1, 16);
  v4 = v14;
  v16 = v14;
  if ( v14 > 0x40 )
  {
    sub_2585B30(&v15);
    v4 = v16;
    if ( v16 > 0x40 )
    {
      sub_25869C0(&v15, &v13);
      goto LABEL_6;
    }
    v5 = (unsigned __int64)v15;
  }
  else
  {
    v5 = (unsigned __int64)v13;
  }
  v6 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v4) & ~v5);
  if ( !v4 )
    v6 = nullptr;
  v15 = v6;
LABEL_6:
  sub_25860D0(&v15);
  v20 = v16;
  if ( v16 > 0x40 )
  {
    sub_2585B30(&v19);
    v18 = v20;
    if ( v20 > 0x40 )
    {
      sub_2585B30(&v17);
      goto LABEL_9;
    }
    v7 = v19;
  }
  else
  {
    v7 = v15;
    v18 = v16;
    v19 = v15;
  }
  v17 = v7;
LABEL_9:
  v11 = v17;
  v8 = v18;
  v18 = 0;
  v12 = v8;
  if ( v20 > 0x40 && v19 )
    operator delete[](v19);
  if ( v16 > 0x40 && v15 )
    operator delete[](v15);
  v9 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 16);
  *(_DWORD *)(v9 + 8) = v12;
  if ( v12 > 0x40 )
    sub_2585B30(v9);
  else
    *(_QWORD *)v9 = v11;
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  return 1;
}

