__int64 __fastcall sub_CCCCD0(__int64 a1, void *a2, __int64 a3)
{
  void *v4; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v5; // [rsp+8h] [rbp-10h]

  v4 = a2;
  v5 = 64;
  sub_21E30A0(a1, &v4, a3);
  if ( v5 > 0x40 && v4 )
    operator delete[](v4);
  return a1;
}

