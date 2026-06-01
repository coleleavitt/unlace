__int64 __fastcall sub_8E6FE0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1863170(a1 + 120, a2);
  result = sub_C0EED0(a1 + 216, a2);
  if ( !*(_BYTE *)(a1 + 176) )
    return sub_15B6B30(*(_QWORD *)(a1 + 112), a2);
  return result;
}

