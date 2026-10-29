__int64 __fastcall sub_C90CB0(__int64 a1)
{
  _QWORD *i; // rbx

  if ( !*(_BYTE *)(a1 + 1508) )
    return 0;
  for ( i = *(_QWORD **)(a1 + 1328); i && i[2] != *(_QWORD *)(a1 + 1496); i = (_QWORD *)i[2] )
    (*(void (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  return sub_CDB970(a1, a1 + 1504);
}

