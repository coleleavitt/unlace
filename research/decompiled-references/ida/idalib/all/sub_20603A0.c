__int64 __fastcall sub_20603A0(_QWORD **a1)
{
  unsigned __int8 v1; // cl
  unsigned int v2; // eax
  void *v3; // rdx
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // [rsp+8h] [rbp-40h]
  __int64 v9; // [rsp+8h] [rbp-40h]
  void *v10; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+18h] [rbp-30h]

  v1 = *((_BYTE *)a1 + 8);
  if ( v1 == 12 )
  {
    v2 = *((_DWORD *)a1 + 2) >> 8;
    v11 = v2;
    if ( v2 > 0x40 )
    {
      sub_2205470(&v10, -1, 1);
    }
    else
    {
      v3 = (void *)(0xFFFFFFFFFFFFFFFFLL >> -(char)v2);
      if ( !v2 )
        v3 = nullptr;
      v10 = v3;
    }
    result = sub_2054E70(*a1, (__int64)&v10);
    if ( v11 > 0x40 )
    {
      if ( v10 )
      {
        v8 = result;
        operator delete[](v10);
        return v8;
      }
    }
  }
  else if ( v1 <= 5u && ((1LL << v1) & 0x2F) != 0 || (v1 & 0xFD) == 4 )
  {
    v5 = sub_20C2F60(a1);
    sub_2202AA0(&v10, v5);
    v9 = sub_2055C80(*a1, (__int64 *)&v10);
    sub_9955A0(&v10);
    return v9;
  }
  else
  {
    v6 = sub_20603A0(a1[3]);
    v7 = *((_DWORD *)a1 + 8);
    BYTE4(v10) = *((_BYTE *)a1 + 8) == 18;
    LODWORD(v10) = v7;
    return sub_205EF10((__int64)v10, v6);
  }
  return result;
}
