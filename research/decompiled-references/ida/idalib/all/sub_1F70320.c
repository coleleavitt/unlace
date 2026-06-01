void __fastcall sub_1F70320(__int64 a1, _QWORD *a2, __int64 a3)
{
  void *v3; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v4; // [rsp+8h] [rbp-20h]

  if ( *a2 == sub_21F90D0(a1, a2, a3) )
    sub_22010F0(&v3, a2);
  else
    sub_21FEE00(&v3, a2);
  sub_1F70270(a1, (__int64)&v3);
  if ( v4 > 0x40 )
  {
    if ( v3 )
      operator delete[](v3);
  }
}
