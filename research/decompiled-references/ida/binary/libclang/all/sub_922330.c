__int64 __fastcall sub_922330(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  void *v6; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v7; // [rsp+8h] [rbp-30h]
  void *v8; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+18h] [rbp-20h]

  v7 = a3;
  if ( a3 <= 0x40 )
  {
    *(_DWORD *)(a1 + 8) = a3;
    *(_QWORD *)a1 = a2;
    return a1;
  }
  sub_2585A50(&v6, a2, 0);
  v9 = v7;
  if ( v7 <= 0x40 )
  {
    *(_DWORD *)(a1 + 8) = v7;
    *(_QWORD *)a1 = v6;
    return a1;
  }
  sub_2585B30(&v8);
  v4 = v9;
  *(_DWORD *)(a1 + 8) = v9;
  if ( v4 <= 0x40 )
  {
    v5 = v7;
    *(_QWORD *)a1 = v8;
  }
  else
  {
    sub_2585B30(a1);
    if ( v9 > 0x40 && v8 )
      operator delete[](v8);
    v5 = v7;
  }
  if ( v5 <= 0x40 || !v6 )
    return a1;
  operator delete[](v6);
  return a1;
}

