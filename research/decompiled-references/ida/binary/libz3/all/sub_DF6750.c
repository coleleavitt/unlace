__int64 __fastcall sub_DF6750(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // [rsp-8h] [rbp-B0h]
  void *ptr[2]; // [rsp+8h] [rbp-A0h] BYREF
  _BYTE v7[144]; // [rsp+18h] [rbp-90h] BYREF

  ptr[0] = v7;
  ptr[1] = (void *)0x1000000000LL;
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _QWORD, void **))(*(_QWORD *)(a1 - 104) + 96LL))(
    a1 - 104,
    a2,
    a3,
    a4,
    0,
    0,
    ptr);
  result = v5;
  if ( ptr[0] )
  {
    if ( ptr[0] != v7 )
      return sub_186B220(ptr[0]);
  }
  return result;
}

