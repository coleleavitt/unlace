bool __fastcall sub_EB4DA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  bool result; // al

  sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), a3, a4, a5, a6);
  v9 = *(_QWORD *)(a1 + 128);
  result = 1;
  if ( (*(_BYTE *)(v9 + 1) & 4) == 0 )
  {
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v9, v6, v7, v8);
    return *(_DWORD *)(*(_QWORD *)(a1 + 128) + 20LL) != 0;
  }
  return result;
}

