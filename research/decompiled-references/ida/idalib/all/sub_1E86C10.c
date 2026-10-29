_BOOL8 __fastcall sub_1E86C10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  _BOOL8 result; // rax

  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), a3, a4, a5, a6);
  v9 = *(_QWORD *)(a1 + 128);
  result = 1;
  if ( (*(_BYTE *)(v9 + 6) & 0x40) == 0 )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v9, v6, v7, v8);
    return (*(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) & 0x400) == 0;
  }
  return result;
}
