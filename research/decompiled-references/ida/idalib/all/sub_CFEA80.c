__int64 __fastcall sub_CFEA80(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // [rsp+Ch] [rbp-3Ch] BYREF
  void *v4; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+18h] [rbp-30h]

  v1 = a1;
  v3 = *(_DWORD *)(a1 + 16);
  sub_21EEEF0(&v4, &v3);
  LOBYTE(v1) = (unsigned int)sub_21EE7D0(a1, &v4) == 0;
  if ( v5 > 0x40 && v4 )
    operator delete[](v4);
  return v1;
}
