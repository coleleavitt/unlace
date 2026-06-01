__int64 __fastcall sub_1B636C(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  int v4; // ebx
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  _BYTE v9[40]; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 i; // [rsp+38h] [rbp-18h]

  google_breakpad::TypedMDRVA<unsigned int>::TypedMDRVA(v9, a1 + 40);
  if ( std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::size(a1 + 80) )
  {
    v2 = std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::size(a1 + 80);
    if ( (unsigned __int8)google_breakpad::TypedMDRVA<unsigned int>::AllocateObjectAndArray(v9, v2, 16) != 1 )
    {
      v3 = 0;
      goto LABEL_10;
    }
  }
  else if ( (unsigned __int8)google_breakpad::TypedMDRVA<unsigned int>::Allocate(v9) != 1 )
  {
    v3 = 0;
    goto LABEL_10;
  }
  *(_DWORD *)a2 = 5;
  *(_QWORD *)(a2 + 4) = google_breakpad::UntypedMDRVA::location((google_breakpad::UntypedMDRVA *)v9);
  v4 = std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::size(a1 + 80);
  *(_DWORD *)google_breakpad::TypedMDRVA<unsigned int>::get(v9) = v4;
  for ( i = 0; ; ++i )
  {
    v5 = std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::size(a1 + 80);
    if ( i >= v5 )
      break;
    v6 = std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::operator[](a1 + 80, i);
    google_breakpad::TypedMDRVA<unsigned int>::CopyIndexAfterObject(v9, (unsigned int)i, v6, 16);
  }
  v3 = 1;
LABEL_10:
  google_breakpad::TypedMDRVA<unsigned int>::~TypedMDRVA(v9);
  return v3;
}

