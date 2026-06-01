__int64 __fastcall sub_8F62E0(__int64 a1, unsigned int a2)
{
  unsigned int v3; // eax
  unsigned int v4; // eax
  void *v5; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v6; // [rsp+8h] [rbp-30h]
  void *v7; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+18h] [rbp-20h]

  v6 = a2;
  if ( a2 <= 0x40 )
  {
    *(_DWORD *)(a1 + 8) = a2;
    *(_QWORD *)a1 = 0;
    return a1;
  }
  sub_2585A50(&v5, 0, 0);
  v8 = v6;
  if ( v6 <= 0x40 )
  {
    *(_DWORD *)(a1 + 8) = v6;
    *(_QWORD *)a1 = v5;
    return a1;
  }
  sub_2585B30(&v7);
  v3 = v8;
  *(_DWORD *)(a1 + 8) = v8;
  if ( v3 <= 0x40 )
  {
    v4 = v6;
    *(_QWORD *)a1 = v7;
  }
  else
  {
    sub_2585B30(a1);
    if ( v8 > 0x40 && v7 )
      operator delete[](v7);
    v4 = v6;
  }
  if ( v4 <= 0x40 || !v5 )
    return a1;
  operator delete[](v5);
  return a1;
}

