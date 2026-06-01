__int64 __fastcall sub_BFA0C0(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int *v4; // rdi
  __int64 v5; // rbp
  void *v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+8h] [rbp-20h]
  char v8; // [rsp+Ch] [rbp-1Ch]

  v1 = 0x800000020LL;
  if ( (*(_DWORD *)a1 & 0x8000) != 0 )
    return *(_QWORD *)(a1 + v1);
  sub_BD3D10((__int64)&v6, *(_QWORD *)(a1 + 32));
  if ( v8 )
  {
    v4 = (unsigned int *)v6;
    if ( v7 <= 0x40 )
    {
      v1 = 8LL * (unsigned int)v6 + 40;
      return *(_QWORD *)(a1 + v1);
    }
  }
  else
  {
    v4 = (unsigned int *)v6;
    if ( v7 <= 0x40 )
    {
      v1 = 40;
      if ( v7 )
        v1 = 8LL * (unsigned int)((__int64)((_QWORD)v6 << (64 - (unsigned __int8)v7)) >> (64 - (unsigned __int8)v7))
           + 40;
      return *(_QWORD *)(a1 + v1);
    }
  }
  v5 = 8LL * *v4 + 40;
  operator delete[](v4);
  return *(_QWORD *)(a1 + v5);
}

