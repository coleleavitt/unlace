__int64 __fastcall sub_18954B0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  _BYTE v5[168]; // [rsp+0h] [rbp-A8h] BYREF

  if ( (*(_BYTE *)(sub_B8EAA0(*(_QWORD *)(*a1 + 544)) + 8) & 0x7Fu) - 19 <= 4 )
    return 0;
  v3 = *(_QWORD *)(*a1 + 3032);
  if ( !v3 )
    v3 = *(_QWORD *)(*a1 + 544);
  if ( (*(_BYTE *)(sub_B8EAA0(v3) + 8) & 0x7F) == 0 )
    return 0;
  sub_168B9F0((__int64)v5, a1, *(_DWORD *)(a2 + 24), 0x10FDu, 0);
  sub_15F7200(v5);
  sub_B88650(a2, 1);
  return 1;
}
