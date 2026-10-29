__int64 __fastcall sub_373AE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp

  v2 = *(_QWORD *)(qword_2CA1698 + 1416);
  if ( !(unsigned __int8)qthread_same(*(_QWORD *)(v2 + 16)) )
    callui();
  return (*(__int64 (__fastcall **)(__int64, __int64))(v2 + 8))(a1, a2);
}

