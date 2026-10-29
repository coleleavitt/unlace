unsigned __int64 __fastcall sub_17A6A80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  unsigned __int64 result; // rax
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  _BYTE *v7; // [rsp+8h] [rbp-20h]

  sub_B7AAD0(a2, a3);
  sub_15F2410(a1);
  sub_15F7280(&v6, a1, nullptr, 0, 0, v3);
  if ( v7 )
    sub_15F2350(&v6, v7);
  v4 = *(_QWORD *)(sub_B8C1B0(*(_QWORD *)(a1 + 544)) + 16);
  if ( (v4 & 4) != 0 )
    result = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  else
    result = v4 & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 544) = result;
  return result;
}
