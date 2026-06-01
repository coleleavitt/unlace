char __fastcall sub_B9C260(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char result; // al

  v1 = sub_B97300(a1);
  if ( v1 )
    return (*(_BYTE *)(v1 + 84) & 3) != 0;
  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v2, v3, v4, v5);
  result = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) & 0x10) != 0 )
    return *(_BYTE *)(sub_B8C5D0(a1) + 1) >> 7;
  return result;
}
