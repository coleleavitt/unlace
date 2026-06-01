void __fastcall sub_1CB7B70(__int64 a1, int a2, __int64 a3)
{
  char v3; // al
  __int64 v4; // [rsp+0h] [rbp-78h] BYREF
  int v5; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h]
  __int64 v7; // [rsp+18h] [rbp-60h]
  _BYTE v8[64]; // [rsp+20h] [rbp-58h] BYREF
  int v9; // [rsp+60h] [rbp-18h]

  v3 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 21LL);
  if ( (v3 & 4) != 0 )
  {
    v4 = a1;
    v5 = a2;
    ptr = v8;
    v7 = 0x800000000LL;
    v9 = 1;
  }
  else
  {
    if ( (v3 & 2) == 0 )
      return;
    v4 = a1;
    v5 = a2;
    ptr = v8;
    v7 = 0x800000000LL;
    v9 = 0;
  }
  sub_1CB7400((__int64)&v4, a3);
  if ( ptr != v8 )
    free(ptr);
}
