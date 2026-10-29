__int64 __fastcall std::_List_base<google_breakpad::MappingEntry>::_S_distance(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // [rsp+18h] [rbp-8h]

  v4 = 0;
  while ( a1 != a2 )
  {
    a1 = (_QWORD *)*a1;
    ++v4;
  }
  return v4;
}

