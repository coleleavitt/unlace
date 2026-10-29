__int64 __fastcall sub_D76790(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  _QWORD *v5; // r14
  __int64 v6; // r13
  int v7; // eax
  unsigned int v8; // ebx
  void *vars0; // [rsp+0h] [rbp+0h] BYREF
  unsigned int vars8; // [rsp+8h] [rbp+8h]

  sub_D4B720((__int64)&vars0, a1);
  v2 = vars8;
  if ( vars8 > 0x40 )
  {
    v5 = vars0;
    v6 = *((_QWORD *)vars0 + ((vars8 - 1) >> 6)) & (1LL << ((unsigned __int8)vars8 - 1));
    if ( v6 )
      v7 = sub_2206800(&vars0);
    else
      v7 = sub_2206780(&vars0);
    v8 = v2 + 1 - v7;
    if ( v8 <= 0x40 )
    {
      LOBYTE(v8) = (__int64)a2 <= *v5;
    }
    else
    {
      LOBYTE(v8) = v6 == 0;
      if ( !v5 )
        return v8;
    }
    operator delete[](v5);
    return v8;
  }
  else
  {
    v3 = 0;
    if ( vars8 )
      v3 = (__int64)((_QWORD)vars0 << (64 - (unsigned __int8)vars8)) >> (64 - (unsigned __int8)vars8);
    LOBYTE(v2) = a2 <= v3;
    return v2;
  }
}
