__int64 __fastcall sub_C62530(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) != 0x18 )
    return sub_C622D0(a1, a2, a3, a4, a5, a6);
  sub_C1BDB0(*a1, *(_QWORD *)(a2 + 16), a3, a4, a5);
  return 1;
}

