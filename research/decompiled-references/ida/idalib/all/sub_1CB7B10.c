void __fastcall sub_1CB7B10(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // [rsp+0h] [rbp-78h] BYREF
  int v4; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h]
  __int64 v6; // [rsp+18h] [rbp-60h]
  _DWORD v7[22]; // [rsp+20h] [rbp-58h] BYREF

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 21LL) & 2) != 0 )
  {
    v3 = a1;
    v4 = a2;
    ptr = v7;
    v6 = 0x800000000LL;
    v7[16] = 0;
    sub_1CB7400((__int64)&v3, a3);
    if ( ptr != v7 )
      free(ptr);
  }
}
