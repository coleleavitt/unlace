__int64 __fastcall sub_11C2C0(__int64 a1)
{
  _QWORD *v2; // rdi

  v2 = *(_QWORD **)(a1 + 184);
  if ( !*v2 )
    return -1;
  sub_11C170(v2);
  return **(_QWORD **)(**(_QWORD **)(a1 + 184) + 16LL);
}

