void __fastcall sub_8CCD90(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  void *v4; // rdx
  unsigned int v5; // ebx
  void *v6; // r12
  __int64 v7; // rdi
  void *v8; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v9; // [rsp+18h] [rbp-50h]
  void *v10; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v11; // [rsp+28h] [rbp-40h]
  void *v12; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-30h]

  v11 = *(_DWORD *)(a3 + 8);
  if ( v11 > 0x40 )
    sub_2585B30(&v10);
  else
    v10 = *(void **)a3;
  v3 = *(_DWORD *)(a2 + 8);
  v9 = v3;
  if ( v3 > 0x40 )
  {
    sub_2585B30(&v8);
    v13 = v9;
    if ( v9 > 0x40 )
    {
      sub_2585B30(&v12);
      goto LABEL_6;
    }
    v4 = v8;
  }
  else
  {
    v4 = *(void **)a2;
    v13 = v3;
    v8 = v4;
  }
  v12 = v4;
LABEL_6:
  sub_25863C0(&v12, &v10);
  v5 = v13;
  v6 = v12;
  if ( v9 > 0x40 && v8 )
    operator delete[](v8);
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 16);
  *(_DWORD *)(v7 + 8) = v5;
  if ( v5 > 0x40 )
    sub_2585B30(v7);
  else
    *(_QWORD *)v7 = v6;
  if ( v5 > 0x40 )
  {
    if ( v6 )
      operator delete[](v6);
  }
}

