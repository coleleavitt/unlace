__int64 __fastcall sub_1AF5860(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5)
{
  __int64 *v7; // rbx
  __int64 v8; // r9
  __int64 result; // rax
  int v10; // ebx
  __int64 v11; // [rsp+0h] [rbp-38h] BYREF
  _BYTE *v12; // [rsp+8h] [rbp-30h]

  sub_18C3E40(*a1);
  sub_190D5E0(*a1, a5);
  sub_17A2E10(*a1);
  v7 = &v11;
  result = (__int64)sub_15F7280(&v11, *a1, nullptr, 0, 0, v8);
  if ( v12 )
    result = sub_15F2350(&v11, v12);
  if ( a3 )
  {
    *(_BYTE *)(a2 + 65) &= 0x9Fu;
    *(_QWORD *)(a2 + 96) = a3;
  }
  else if ( sub_B735C0(a4) )
  {
    LOBYTE(v7) = (*(_BYTE *)(a4 + 96) & 0x60) == 0;
    *(_QWORD *)(a2 + 96) = sub_B73640(a4);
    v10 = 32 * ((_DWORD)v7 + 1);
    result = v10 | *(_BYTE *)(a2 + 65) & 0x9Fu;
    *(_BYTE *)(a2 + 65) = v10 | *(_BYTE *)(a2 + 65) & 0x9F;
  }
  else
  {
    return sub_B88650(a2, 1);
  }
  return result;
}
