__int64 __fastcall sub_D2AB80(__int64 a1)
{
  __int64 v1; // rbp
  void *v3; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v4; // [rsp+8h] [rbp-50h]
  void *v5; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v6; // [rsp+18h] [rbp-40h]
  void *v7; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v8; // [rsp+28h] [rbp-30h]

  sub_D279E0((__int64)&v3, (__int64 *)a1);
  sub_21E2D00(&v5, &v3);
  sub_21E30A0(&v7, &v5, *(unsigned int *)(a1 + 8));
  if ( v8 > 0x40 )
  {
    v1 = (__int64)v7;
    if ( v7 )
      operator delete[](v7);
  }
  else
  {
    v1 = 0;
    if ( v8 )
      v1 = (__int64)((_QWORD)v7 << (64 - (unsigned __int8)v8)) >> (64 - (unsigned __int8)v8);
  }
  if ( v6 > 0x40 && v5 )
    operator delete[](v5);
  if ( v4 > 0x40 && v3 )
    operator delete[](v3);
  return v1;
}

