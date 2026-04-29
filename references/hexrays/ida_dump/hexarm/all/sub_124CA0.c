_QWORD *__fastcall sub_124CA0(__int64 a1, unsigned __int8 *a2)
{
  _QWORD *v2; // rbx

  v2 = sub_124BF0(a1, a2);
  if ( (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 72LL), 2) & 0xF) == 9 )
    *((_DWORD *)v2 + 1) |= 0x10u;
  return v2;
}
