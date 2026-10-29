__int64 __fastcall sub_1B5A02(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // eax
  _BYTE v15[120]; // [rsp+10h] [rbp-E0h] BYREF
  __int64 k; // [rsp+88h] [rbp-68h] BYREF
  _BYTE v17[32]; // [rsp+90h] [rbp-60h] BYREF
  __int64 v18; // [rsp+B0h] [rbp-40h] BYREF
  unsigned __int64 *v19; // [rsp+B8h] [rbp-38h]
  unsigned __int64 *v20; // [rsp+C0h] [rbp-30h]
  unsigned int v21; // [rsp+CCh] [rbp-24h]
  unsigned int j; // [rsp+D0h] [rbp-20h]
  unsigned int v23; // [rsp+D4h] [rbp-1Ch]
  unsigned int i; // [rsp+D8h] [rbp-18h]
  unsigned int v25; // [rsp+DCh] [rbp-14h]

  v2 = google_breakpad::LinuxDumper::mappings(*(google_breakpad::LinuxDumper **)(a1 + 32));
  v21 = std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::size(v2);
  v25 = std::list<google_breakpad::MappingEntry>::size(*(_QWORD *)(a1 + 128));
  for ( i = 0; ; ++i )
  {
    v3 = google_breakpad::LinuxDumper::mappings(*(google_breakpad::LinuxDumper **)(a1 + 32));
    if ( i >= (unsigned __int64)std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::size(v3) )
      break;
    v4 = google_breakpad::LinuxDumper::mappings(*(google_breakpad::LinuxDumper **)(a1 + 32));
    v19 = *(unsigned __int64 **)std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::operator[](
                                  v4,
                                  i);
    if ( sub_1B58CF((__int64)v19) && (unsigned __int8)sub_1B591E(a1, v19) != 1 )
      ++v25;
  }
  google_breakpad::TypedMDRVA<unsigned int>::TypedMDRVA(v17, a1 + 40);
  if ( v25 )
  {
    if ( (unsigned __int8)google_breakpad::TypedMDRVA<unsigned int>::AllocateObjectAndArray(v17, v25, 108) != 1 )
    {
      v6 = 0;
      goto LABEL_32;
    }
  }
  else if ( (unsigned __int8)google_breakpad::TypedMDRVA<unsigned int>::Allocate(v17) != 1 )
  {
    v6 = 0;
    goto LABEL_32;
  }
  *(_DWORD *)a2 = 4;
  *(_QWORD *)(a2 + 4) = google_breakpad::UntypedMDRVA::location((google_breakpad::UntypedMDRVA *)v17);
  v7 = v25;
  *(_DWORD *)google_breakpad::TypedMDRVA<unsigned int>::get(v17) = v7;
  v23 = 0;
  for ( j = 0; j < v21; ++j )
  {
    v8 = google_breakpad::LinuxDumper::mappings(*(google_breakpad::LinuxDumper **)(a1 + 32));
    v20 = *(unsigned __int64 **)std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::operator[](
                                  v8,
                                  j);
    if ( sub_1B58CF((__int64)v20) && !(unsigned __int8)sub_1B591E(a1, v20) )
    {
      if ( (unsigned __int8)sub_1B5D92(a1, v20, 1, j, v15, 0) != 1 )
      {
        v6 = 0;
        goto LABEL_32;
      }
      v10 = v23++;
      google_breakpad::TypedMDRVA<unsigned int>::CopyIndexAfterObject(v17, v10, v15, 108);
    }
  }
  for ( k = std::list<google_breakpad::MappingEntry>::begin(*(_QWORD *)(a1 + 128));
        ;
        std::_List_const_iterator<google_breakpad::MappingEntry>::operator++(&k) )
  {
    v18 = std::list<google_breakpad::MappingEntry>::end(*(_QWORD *)(a1 + 128));
    if ( !(unsigned __int8)std::_List_const_iterator<google_breakpad::MappingEntry>::operator!=(&k, &v18) )
      break;
    v11 = std::_List_const_iterator<google_breakpad::MappingEntry>::operator->(&k) + 296;
    v12 = std::_List_const_iterator<google_breakpad::MappingEntry>::operator->(&k);
    if ( (unsigned __int8)sub_1B5D92(a1, v12, 0, 0, v15, v11) != 1 )
    {
      v6 = 0;
      goto LABEL_32;
    }
    v13 = v23++;
    google_breakpad::TypedMDRVA<unsigned int>::CopyIndexAfterObject(v17, v13, v15, 108);
  }
  v6 = 1;
LABEL_32:
  google_breakpad::TypedMDRVA<unsigned int>::~TypedMDRVA(v17);
  return v6;
}

