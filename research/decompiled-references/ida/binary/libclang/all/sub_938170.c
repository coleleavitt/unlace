__int64 __fastcall sub_938170(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned __int64 v3; // rdx
  void *v4; // rdx
  unsigned int v5; // eax
  void *v6; // rdx
  void *v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-30h]
  void *v10; // [rsp+10h] [rbp-28h]
  unsigned int v11; // [rsp+18h] [rbp-20h]

  v2 = *(_DWORD *)(a2 + 8);
  v9 = v2;
  if ( v2 > 0x40 )
  {
    sub_2585B30(&v8);
    v2 = v9;
    if ( v9 > 0x40 )
    {
      sub_25869C0(&v8, a2);
      goto LABEL_6;
    }
    v3 = (unsigned __int64)v8;
  }
  else
  {
    v3 = *(_QWORD *)a2;
  }
  v4 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v2) & ~v3);
  if ( !v2 )
    v4 = nullptr;
  v8 = v4;
LABEL_6:
  sub_25860D0(&v8);
  v5 = v9;
  v6 = v8;
  v9 = 0;
  v11 = v5;
  v10 = v8;
  *(_DWORD *)(a1 + 8) = v5;
  if ( v5 <= 0x40 )
  {
    *(_QWORD *)a1 = v6;
    return a1;
  }
  sub_2585B30(a1);
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  if ( v9 <= 0x40 || !v8 )
    return a1;
  operator delete[](v8);
  return a1;
}

