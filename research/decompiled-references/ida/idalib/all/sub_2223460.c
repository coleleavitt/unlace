_QWORD *__fastcall sub_2223460(__int64 a1, __int64 *a2, void (__fastcall **a3)(__int64, __int64 *, void **))
{
  _QWORD *v4; // rbp
  __int64 *v6; // [rsp+8h] [rbp-C0h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-B8h] BYREF
  _BYTE v8[168]; // [rsp+20h] [rbp-A8h] BYREF

  ptr[0] = v8;
  ptr[1] = (void *)0x2000000000LL;
  (*a3)(a1, a2, ptr);
  v4 = sub_2223360(a1, (__int64)ptr, &v6, (__int64)a3);
  if ( !v4 )
  {
    v4 = a2;
    sub_2223210(a1, a2, v6, (__int64)a3);
  }
  if ( ptr[0] != v8 )
    free(ptr[0]);
  return v4;
}
