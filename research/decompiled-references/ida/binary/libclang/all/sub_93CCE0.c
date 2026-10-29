__int64 __fastcall sub_93CCE0(__int64 a1, __int64 *a2)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  unsigned int v5; // eax
  unsigned int v6; // eax
  void *v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-30h]
  void *v9; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+18h] [rbp-20h]

  v2 = *((_DWORD *)a2 + 2);
  v8 = v2;
  if ( v2 <= 0x40 )
  {
    v3 = *a2;
    *(_DWORD *)(a1 + 8) = v2;
    *(_QWORD *)a1 = v3;
    return a1;
  }
  sub_2585B30(&v7);
  v10 = v8;
  if ( v8 <= 0x40 )
  {
    *(_DWORD *)(a1 + 8) = v8;
    *(_QWORD *)a1 = v7;
    return a1;
  }
  sub_2585B30(&v9);
  v5 = v10;
  *(_DWORD *)(a1 + 8) = v10;
  if ( v5 <= 0x40 )
  {
    v6 = v8;
    *(_QWORD *)a1 = v9;
  }
  else
  {
    sub_2585B30(a1);
    if ( v10 > 0x40 && v9 )
      operator delete[](v9);
    v6 = v8;
  }
  if ( v6 <= 0x40 || !v7 )
    return a1;
  operator delete[](v7);
  return a1;
}

