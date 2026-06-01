void __fastcall sub_1F6F5E0(_QWORD *a1, __int64 a2)
{
  int v2; // esi
  void *ptr[2]; // [rsp+0h] [rbp-228h] BYREF
  _BYTE v4[536]; // [rsp+10h] [rbp-218h] BYREF

  v2 = *(_DWORD *)(a2 + 2328);
  ptr[1] = (void *)0x4000000000LL;
  ptr[0] = v4;
  sub_1F6F570(a1, v2, (__int64)ptr);
  sub_1F6EB90(a1[2], 0x33u, (__int64)ptr);
  if ( ptr[0] != v4 )
    free(ptr[0]);
}
