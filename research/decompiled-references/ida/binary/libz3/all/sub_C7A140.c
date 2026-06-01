__int64 __fastcall sub_C7A140(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 result; // rax
  void *v3; // r12

  v1 = (__int64 *)sub_186B270(0x350u);
  result = sub_C79B40(v1, **(_QWORD **)(a1 + 16), a1 + 24);
  v3 = *(void **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v1;
  if ( v3 )
  {
    sub_C76B20((__int64)v3);
    return sub_186B220(v3);
  }
  return result;
}

