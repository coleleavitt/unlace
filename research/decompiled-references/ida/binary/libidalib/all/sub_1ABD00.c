__int64 __fastcall sub_1ABD00(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 j; // [rsp+10h] [rbp-30h] BYREF
  __int64 v8; // [rsp+18h] [rbp-28h] BYREF
  _QWORD *v9; // [rsp+20h] [rbp-20h]
  unsigned int i; // [rsp+2Ch] [rbp-14h]

  for ( i = 0; ; ++i )
  {
    v1 = google_breakpad::LinuxDumper::mappings(*(google_breakpad::LinuxDumper **)(a1 + 16));
    if ( i >= (unsigned __int64)std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::size(v1) )
      break;
    v2 = google_breakpad::LinuxDumper::mappings(*(google_breakpad::LinuxDumper **)(a1 + 16));
    v9 = *(_QWORD **)std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::operator[](
                       v2,
                       i);
    if ( *((_BYTE *)v9 + 41) && *((_BYTE *)v9 + 40) == 1 && v9[1] > 0xFFFu && !(unsigned __int8)sub_1AB866(a1, v9) )
      sub_1AB944(a1, v9, 1u, i, 0);
  }
  for ( j = std::list<google_breakpad::MappingEntry>::begin(*(_QWORD *)(a1 + 24));
        ;
        std::_List_const_iterator<google_breakpad::MappingEntry>::operator++(&j) )
  {
    v8 = std::list<google_breakpad::MappingEntry>::end(*(_QWORD *)(a1 + 24));
    result = std::_List_const_iterator<google_breakpad::MappingEntry>::operator!=(&j, &v8);
    if ( !(_BYTE)result )
      break;
    v5 = std::_List_const_iterator<google_breakpad::MappingEntry>::operator->(&j) + 296;
    v6 = (_QWORD *)std::_List_const_iterator<google_breakpad::MappingEntry>::operator->(&j);
    sub_1AB944(a1, v6, 0, 0, v5);
  }
  return result;
}

