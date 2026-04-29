__int64 __fastcall sub_289160(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi

  v3 = *(_QWORD *)(a2 + 24);
  if ( (unsigned int)(*(_DWORD *)(v3 + 8) - 22) > 9 )
    return 0;
  sub_250FD0((__int64 *)a2, v3);
  *(_DWORD *)(a2 + 8) = sub_2503F0(*(_DWORD *)(a2 + 8));
  if ( (unsigned __int8)sub_27F280(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return 1;
}
