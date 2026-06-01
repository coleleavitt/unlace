void __fastcall sub_DFFA00(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r15d
  void (__fastcall *v4)(__int64, int, int, int, int, __int64); // rax
  unsigned int v5; // eax
  __int64 v6; // [rsp+8h] [rbp-C8h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-C0h] BYREF
  _BYTE v8[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = a3;
  ptr[0] = v8;
  ptr[1] = (void *)0x1000000000LL;
  v4 = *(void (__fastcall **)(__int64, int, int, int, int, __int64))(*(_QWORD *)(a1 - 104) + 72LL);
  if ( v4 == sub_DFF760 )
  {
    v6 = 0;
    v5 = (unsigned int)sub_DFF530(a1 - 104);
    sub_160BF10(a2, v5, (unsigned int)&v6, 0, 0, v3, (__int64)ptr);
    sub_18572D0(&v6);
  }
  else
  {
    v4(a1 - 104, a2, 0, 0, a3, (__int64)ptr);
  }
  if ( ptr[0] != v8 )
  {
    if ( ptr[0] )
      sub_186B220(ptr[0]);
  }
}

