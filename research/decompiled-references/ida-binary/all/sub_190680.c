__int64 __fastcall sub_190680(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 72) != a2 )
  {
    v2 = *(_QWORD *)(a1 + 104) == 0;
    *(_BYTE *)(a1 + 112) = 0;
    if ( !v2 )
      sub_190380((__int64 *)a1, 0);
    *(_QWORD *)(a1 + 72) = a2;
    *(_WORD *)(a1 + 80) = 469;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 424LL))(a1);
    *(_BYTE *)(a1 + 112) = 1;
  }
  return result;
}
