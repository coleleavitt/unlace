__int64 __fastcall sub_18C1B30(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v5; // rdi
  __int64 v6; // r12
  unsigned int v7; // eax
  void *v8; // rsi
  __int64 result; // rax
  __int64 v10; // [rsp+8h] [rbp-40h]
  void *v11; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+18h] [rbp-30h]

  v5 = *(_QWORD **)(a1 + 248);
  v6 = v5[2340];
  v7 = *(unsigned __int8 *)(v5[2181] + 14LL);
  v12 = v7;
  if ( v7 > 0x40 )
  {
    sub_2205470(&v11, a3, 1);
    v5 = *(_QWORD **)(a1 + 248);
  }
  else
  {
    v8 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v7) & a3);
    if ( !v7 )
      v8 = nullptr;
    v11 = v8;
  }
  result = sub_C0C5D0(v5, (__int64)&v11, v6, a2);
  if ( v12 > 0x40 )
  {
    if ( v11 )
    {
      v10 = result;
      operator delete[](v11);
      return v10;
    }
  }
  return result;
}
