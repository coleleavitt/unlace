__int64 __fastcall sub_D66AB0(__int64 a1, unsigned int a2, __int64 a3)
{
  void *v4; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v5; // [rsp+8h] [rbp-10h]

  v5 = 32;
  v4 = (void *)a2;
  sub_21E30A0(a1, &v4, a3);
  if ( v5 > 0x40 && v4 )
    operator delete[](v4);
  return a1;
}

