__int64 __fastcall sub_83DE90(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rbp
  void *v4; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+8h] [rbp-20h]
  char v6; // [rsp+Ch] [rbp-1Ch]

  v1 = 48;
  if ( *(char *)(a1 + 1) < 0 )
    return *(_QWORD *)(a1 + v1);
  sub_805650((__int64)&v4, *(_QWORD *)(a1 + 32));
  if ( v6 )
  {
    if ( v5 <= 0x40 )
    {
      v1 = 8LL * (unsigned int)v4 + 48;
      return *(_QWORD *)(a1 + v1);
    }
  }
  else if ( v5 <= 0x40 )
  {
    v1 = 48;
    if ( v5 )
      v1 = 8LL * (unsigned int)((__int64)((_QWORD)v4 << (64 - (unsigned __int8)v5)) >> (64 - (unsigned __int8)v5)) + 48;
    return *(_QWORD *)(a1 + v1);
  }
  v3 = 8LL * *(unsigned int *)v4 + 48;
  operator delete[](v4);
  return *(_QWORD *)(a1 + v3);
}

