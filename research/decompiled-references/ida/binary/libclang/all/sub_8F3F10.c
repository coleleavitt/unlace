__int64 __fastcall sub_8F3F10(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // eax
  void *v8; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-40h]
  void *v10; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+18h] [rbp-30h]
  void *v12; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-20h]

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v4 = *a3;
  v5 = *(_QWORD *)(a1 + 568);
  v11 = a2;
  *(_QWORD *)(a1 + 800) = v4;
  if ( a2 > 0x40 )
  {
    sub_2585A50(&v10, 0, 1);
    v13 = v11;
    if ( v11 <= 0x40 )
    {
      v9 = v11;
      v8 = v10;
    }
    else
    {
      sub_2585B30(&v12);
      v9 = v13;
      if ( v13 <= 0x40 )
      {
        v7 = v11;
        v8 = v12;
      }
      else
      {
        sub_2585B30(&v8);
        if ( v13 > 0x40 && v12 )
          operator delete[](v12);
        v7 = v11;
      }
      if ( v7 > 0x40 )
      {
        if ( v10 )
          operator delete[](v10);
      }
    }
  }
  else
  {
    v9 = a2;
    v8 = nullptr;
  }
  v6 = sub_A1A4E0(v5, 16);
  *(_DWORD *)(v6 + 8) = v9;
  *(_QWORD *)v6 = v8;
  return 1;
}

