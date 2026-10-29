void __fastcall sub_1F6F7C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  void *ptr[2]; // [rsp+0h] [rbp-228h] BYREF
  _BYTE v4[536]; // [rsp+10h] [rbp-218h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 844);
  ptr[1] = (void *)0x4000000000LL;
  ptr[0] = v4;
  sub_9B9C90((__int64)ptr, v2);
  sub_1F6EB90(*(_QWORD *)(a1 + 16), 0x37u, (__int64)ptr);
  if ( ptr[0] != v4 )
    free(ptr[0]);
}
