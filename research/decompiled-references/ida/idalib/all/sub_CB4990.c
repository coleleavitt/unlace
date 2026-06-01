__int64 __fastcall sub_CB4990(__int64 a1)
{
  _QWORD *i; // rbx

  if ( !*(_BYTE *)(a1 + 1492) )
    return 0;
  for ( i = *(_QWORD **)(a1 + 1328); *(_QWORD **)(a1 + 1480) != i; i = (_QWORD *)i[2] )
    (*(void (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  return sub_CFF6B0(a1, a1 + 1488);
}
