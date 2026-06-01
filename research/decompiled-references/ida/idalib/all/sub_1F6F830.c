void __fastcall sub_1F6F830(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rsi
  void *ptr[2]; // [rsp+0h] [rbp-238h] BYREF
  _BYTE v5[552]; // [rsp+10h] [rbp-228h] BYREF

  v3 = *(unsigned int *)(a2 + 840);
  ptr[1] = (void *)0x4000000000LL;
  ptr[0] = v5;
  sub_9B9C90((__int64)ptr, v3);
  sub_1F6F570(a1, *(_DWORD *)(a2 + 848), (__int64)ptr);
  sub_1F6EB90(a1[2], 0x38u, (__int64)ptr);
  if ( ptr[0] != v5 )
    free(ptr[0]);
}
