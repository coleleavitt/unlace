__int64 __fastcall sub_CFE9D0(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned int v2; // ecx
  char v3; // bl
  unsigned __int64 v4; // rdi
  __int64 v6; // rax
  void *v7; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_BYTE *)(a1 + 19) & 0x20;
  v8 = v2;
  if ( v2 <= 0x40 )
  {
    v4 = *(_QWORD *)a1;
    v1 = 0;
    if ( !v3 )
      return v1;
    v6 = 1LL << ((unsigned __int8)v2 - 1);
    goto LABEL_5;
  }
  sub_2205510(&v7);
  v4 = (unsigned __int64)v7;
  if ( v3 )
  {
    v6 = 1LL << ((unsigned __int8)v8 - 1);
    if ( v8 <= 0x40 )
    {
LABEL_5:
      LOBYTE(v1) = (v6 & v4) != 0;
      return v1;
    }
    LOBYTE(v1) = (v6 & *((_QWORD *)v7 + ((v8 - 1) >> 6))) != 0;
  }
  else
  {
    v1 = 0;
    if ( v8 <= 0x40 )
      return v1;
  }
  if ( !v7 )
    return v1;
  operator delete[](v7);
  return v1;
}
