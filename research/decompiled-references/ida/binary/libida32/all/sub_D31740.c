__int64 __fastcall sub_D31740(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  void *v4; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v5; // [rsp+8h] [rbp-10h]

  sub_D279E0((__int64)&v4, a1);
  v2 = 1LL << ((unsigned __int8)v5 - 1);
  if ( v5 <= 0x40 )
  {
    LOBYTE(v1) = (v2 & (unsigned __int64)v4) != 0;
    return v1;
  }
  else
  {
    LOBYTE(v1) = (v2 & *((_QWORD *)v4 + ((v5 - 1) >> 6))) != 0;
    if ( v4 )
      operator delete[](v4);
    return v1;
  }
}

