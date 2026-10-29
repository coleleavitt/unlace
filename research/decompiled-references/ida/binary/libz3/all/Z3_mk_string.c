__int64 __fastcall Z3_mk_string(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // rbp
  void *ptr[2]; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v6[104]; // [rsp+10h] [rbp-68h] BYREF

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_297B00();
  *(_DWORD *)(a1 + 1520) = 0;
  sub_18007F0(ptr, a2);
  v3 = sub_1648610(a1 + 464, ptr);
  sub_251FD0(a1, v3);
  if ( v2 )
  {
    sub_2BB620(v3);
    if ( ptr[0] != v6 && ptr[0] )
      sub_186B220(ptr[0]);
    byte_1C7EBA0 = 1;
    return v3;
  }
  else
  {
    if ( ptr[0] != v6 )
    {
      if ( ptr[0] )
        sub_186B220(ptr[0]);
    }
    return v3;
  }
}

