unsigned __int64 __fastcall sub_1F19000(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int64 v5; // rbx
  void *ptr[2]; // [rsp+0h] [rbp-138h] BYREF
  _QWORD v8[37]; // [rsp+10h] [rbp-128h] BYREF

  ptr[1] = (void *)0x800000000LL;
  v8[32] = 0;
  ptr[0] = v8;
  sub_1F18EE0(a1, (__int64 *)ptr);
  v5 = sub_F1ED40(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), (__int64 *)ptr, v1, v2, v3, v4);
  if ( ptr[0] != v8 )
    free(ptr[0]);
  return v5;
}
