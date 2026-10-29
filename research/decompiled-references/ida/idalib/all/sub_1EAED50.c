__int64 __fastcall sub_1EAED50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  void *v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+8h] [rbp-20h]

  sub_1EAEC10((__int64)&v6, a2);
  if ( a3 == sub_21F90D0(&v6, a2, v4) )
    sub_21FFDA0(a1, a3, &v6);
  else
    sub_21FF7D0(a1, a3, &v6);
  if ( v7 > 0x40 && v6 )
    operator delete[](v6);
  return a1;
}
