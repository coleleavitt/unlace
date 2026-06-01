__int64 __fastcall sub_36CA90(__int64 a1, __int64 a2)
{
  *(_BYTE *)a2 = 9;
  *(_QWORD *)(a2 + 8) = get_flags_ex(*(_QWORD *)(a1 + 8), 0);
  return 0;
}
