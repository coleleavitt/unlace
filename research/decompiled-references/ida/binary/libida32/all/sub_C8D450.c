__int64 __fastcall sub_C8D450(__int64 a1)
{
  _QWORD *i; // rbx

  if ( !*(_BYTE *)(a1 + 732) )
    return 0;
  for ( i = *(_QWORD **)(a1 + 552); i && i[2] != *(_QWORD *)(a1 + 720); i = (_QWORD *)i[2] )
    (*(void (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  return sub_C890A0(a1, (int *)(a1 + 728));
}

