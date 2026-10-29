__int64 __fastcall sub_1B4D1E(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r12
  __int64 v4; // rbx
  __int64 i; // [rsp+10h] [rbp-20h] BYREF
  __int64 v8[3]; // [rsp+18h] [rbp-18h] BYREF

  for ( i = std::list<google_breakpad::MappingEntry>::begin(*(_QWORD *)(a1 + 128));
        ;
        std::_List_const_iterator<google_breakpad::MappingEntry>::operator++(&i) )
  {
    v8[0] = std::list<google_breakpad::MappingEntry>::end(*(_QWORD *)(a1 + 128));
    if ( !(unsigned __int8)std::_List_const_iterator<google_breakpad::MappingEntry>::operator!=(&i, v8) )
      break;
    v2 = *a2;
    if ( v2 >= *(_QWORD *)std::_List_const_iterator<google_breakpad::MappingEntry>::operator->(&i) )
    {
      v3 = *a2 + a2[1];
      v4 = *(_QWORD *)std::_List_const_iterator<google_breakpad::MappingEntry>::operator->(&i);
      if ( v3 <= v4 + *(_QWORD *)(std::_List_const_iterator<google_breakpad::MappingEntry>::operator->(&i) + 8) )
        return 1;
    }
  }
  return 0;
}

