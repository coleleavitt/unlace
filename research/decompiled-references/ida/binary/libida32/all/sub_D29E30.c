__int64 __fastcall sub_D29E30(__int64 *a1)
{
  unsigned int v1; // ebx
  void *vars0; // [rsp+0h] [rbp+0h] BYREF
  unsigned int vars8; // [rsp+8h] [rbp+8h]

  sub_D279E0((__int64)&vars0, a1);
  v1 = vars8;
  if ( vars8 <= 0x40 )
  {
    LOBYTE(v1) = vars0 == nullptr;
    return v1;
  }
  else
  {
    LOBYTE(v1) = v1 == (unsigned int)sub_21E2A40(&vars0);
    if ( vars0 )
      operator delete[](vars0);
    return v1;
  }
}

