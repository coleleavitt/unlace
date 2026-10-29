__int64 __fastcall sub_2055240(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // eax
  void *v4; // rsi
  __int64 result; // rax
  __int64 v6; // [rsp+8h] [rbp-30h]
  void *v7; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+18h] [rbp-20h]

  v3 = *(_DWORD *)(a1 + 8) >> 8;
  v8 = v3;
  if ( v3 > 0x40 )
  {
    sub_2205470(&v7, a2, a3);
  }
  else
  {
    v4 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v3) & a2);
    if ( !v3 )
      v4 = nullptr;
    v7 = v4;
  }
  result = sub_2054E70(*(__int64 **)a1, (__int64)&v7);
  if ( v8 > 0x40 )
  {
    if ( v7 )
    {
      v6 = result;
      operator delete[](v7);
      return v6;
    }
  }
  return result;
}
