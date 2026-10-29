void __fastcall sub_2216A70(__int64 a1)
{
  __int64 v2; // rdi
  void *v3[2]; // [rsp+0h] [rbp-28h] BYREF
  _BYTE v4[24]; // [rsp+10h] [rbp-18h] BYREF

  v2 = a1 + 120;
  if ( *(_BYTE *)(a1 + 192) )
  {
    sub_9EE8A0(v2, a1 + 160);
  }
  else
  {
    v4[0] = 0;
    v3[1] = nullptr;
    v3[0] = v4;
    sub_9EE8A0(v2, (__int64)v3);
    if ( v3[0] != v4 )
      operator delete(v3[0]);
  }
}
