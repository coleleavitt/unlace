char __fastcall sub_226D450(__int64 a1)
{
  if ( qword_2D0AC10 )
  {
    if ( !*(_DWORD *)(qword_2D0AC10 + 120) )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  }
  else
  {
    sub_2230020(&qword_2D0AC10, sub_226D500, (__int64)sub_226D430);
    if ( !*(_DWORD *)(qword_2D0AC10 + 120) )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  }
  if ( !qword_2D0AC10 )
    sub_2230020(&qword_2D0AC10, sub_226D500, (__int64)sub_226D430);
  return *(_DWORD *)(qword_2D0AC10 + 120) == 1;
}
