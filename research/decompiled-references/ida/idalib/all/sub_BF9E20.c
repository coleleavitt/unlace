__int64 __fastcall sub_BF9E20(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 v8; // al
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 24) = a2;
  v3 = sub_F57E80(*(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v3 && (*(_QWORD *)(v3 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 && (*(_BYTE *)(v3 + 17) & 4) == 0 )
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 48);
  v8 = sub_B644F0((__int64 *)a1, a2, v4, v5, v6, v7);
  *(_BYTE *)(a1 + 1) = (v8 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v8 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}
