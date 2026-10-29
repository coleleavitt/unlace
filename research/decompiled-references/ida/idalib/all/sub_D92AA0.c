void __fastcall sub_D92AA0(_QWORD *a1, unsigned int a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  void *v5; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+8h] [rbp-10h]
  char v7; // [rsp+Ch] [rbp-Ch]

  v6 = 32;
  v5 = (void *)a2;
  v7 = 0;
  sub_D8FFE0(a1, (__int64)&v5, a3, a4, a5);
  if ( v6 > 0x40 )
  {
    if ( v5 )
      operator delete[](v5);
  }
}
