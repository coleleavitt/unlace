__int64 __fastcall sub_1B4B1A(__int64 a1)
{
  google_breakpad::PageAllocator *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r12
  void (__fastcall *v4)(__int64, void *, _QWORD, __int64, __int64); // rbx
  __int64 v5; // r14
  __int64 v6; // r13
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v10; // rax
  _QWORD v11[2]; // [rsp+10h] [rbp-60h] BYREF
  _BYTE v12[24]; // [rsp+20h] [rbp-50h] BYREF
  __int64 i; // [rsp+38h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  void *v15; // [rsp+48h] [rbp-28h]

  for ( i = std::list<google_breakpad::AppMemory>::begin(*(_QWORD *)(a1 + 136));
        ;
        std::_List_const_iterator<google_breakpad::AppMemory>::operator++(&i) )
  {
    v14 = std::list<google_breakpad::AppMemory>::end(*(_QWORD *)(a1 + 136));
    if ( !(unsigned __int8)std::_List_const_iterator<google_breakpad::AppMemory>::operator!=(&i, &v14) )
      break;
    v1 = (google_breakpad::PageAllocator *)google_breakpad::LinuxDumper::allocator(*(google_breakpad::LinuxDumper **)(a1 + 32));
    v2 = std::_List_const_iterator<google_breakpad::AppMemory>::operator->(&i);
    v15 = (void *)google_breakpad::PageAllocator::Alloc(v1, *(_QWORD *)(v2 + 8));
    v3 = *(_QWORD *)(a1 + 32);
    v4 = *(void (__fastcall **)(__int64, void *, _QWORD, __int64, __int64))(*(_QWORD *)v3 + 64LL);
    v5 = *(_QWORD *)(std::_List_const_iterator<google_breakpad::AppMemory>::operator->(&i) + 8);
    v6 = *(_QWORD *)std::_List_const_iterator<google_breakpad::AppMemory>::operator->(&i);
    v7 = sub_1B63C0(a1);
    v4(v3, v15, v7, v6, v5);
    google_breakpad::UntypedMDRVA::UntypedMDRVA(
      (google_breakpad::UntypedMDRVA *)v12,
      (google_breakpad::MinidumpFileWriter *)(a1 + 40));
    v8 = std::_List_const_iterator<google_breakpad::AppMemory>::operator->(&i);
    if ( (unsigned __int8)google_breakpad::UntypedMDRVA::Allocate(
                            (google_breakpad::UntypedMDRVA *)v12,
                            *(_QWORD *)(v8 + 8)) != 1 )
      return 0;
    v10 = std::_List_const_iterator<google_breakpad::AppMemory>::operator->(&i);
    google_breakpad::UntypedMDRVA::Copy((google_breakpad::UntypedMDRVA *)v12, v15, *(_QWORD *)(v10 + 8));
    v11[0] = *(_QWORD *)std::_List_const_iterator<google_breakpad::AppMemory>::operator->(&i);
    v11[1] = google_breakpad::UntypedMDRVA::location((google_breakpad::UntypedMDRVA *)v12);
    std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::push_back(a1 + 80, v11);
  }
  return 1;
}

