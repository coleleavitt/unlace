__int64 __fastcall sub_15B9A20(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // r12
  unsigned int v4; // eax
  void *v5; // rsi
  __int64 result; // rax
  __int64 v7; // [rsp+8h] [rbp-40h]
  void *v8; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v9; // [rsp+18h] [rbp-30h]

  v2 = *(_QWORD **)(*(_QWORD *)a1 + 248LL);
  v3 = v2[2340];
  v4 = sub_A97D20((__int64)v2, *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL));
  v9 = v4;
  if ( v4 > 0x40 )
  {
    sub_2205470(&v8, a2, 1);
  }
  else
  {
    v5 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v4) & a2);
    if ( !v4 )
      v5 = nullptr;
    v8 = v5;
  }
  result = sub_C0C5D0(v2, (__int64)&v8, v3, 0);
  if ( v9 > 0x40 )
  {
    if ( v8 )
    {
      v7 = result;
      operator delete[](v8);
      return v7;
    }
  }
  return result;
}
