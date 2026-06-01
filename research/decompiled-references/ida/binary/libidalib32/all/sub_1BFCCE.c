__int64 __fastcall sub_1BFCCE(google_breakpad *a1, __int64 a2)
{
  unsigned __int64 *v2; // r9
  unsigned int v3; // ebx
  __int64 v5; // [rsp+10h] [rbp-C0h] BYREF
  __int64 v6; // [rsp+18h] [rbp-B8h] BYREF
  void *v7; // [rsp+20h] [rbp-B0h] BYREF
  unsigned int v8[2]; // [rsp+28h] [rbp-A8h] BYREF
  _BYTE v9[80]; // [rsp+30h] [rbp-A0h] BYREF
  _BYTE v10[48]; // [rsp+80h] [rbp-50h] BYREF
  __int64 v11; // [rsp+B0h] [rbp-20h]
  _BYTE *v12; // [rsp+B8h] [rbp-18h]

  google_breakpad::PageAllocator::PageAllocator((google_breakpad::PageAllocator *)v10);
  google_breakpad::auto_wasteful_vector<google_breakpad::ElfSegment,2u>::auto_wasteful_vector(v9, v10);
  if ( (unsigned __int8)google_breakpad::FindElfSegments(a1, 4, v9) )
  {
    v12 = v9;
    v6 = std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::begin(v9);
    v5 = std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::end(v12);
    while ( (unsigned __int8)__gnu_cxx::operator!=<google_breakpad::ElfSegment *,std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>>(
                               &v6,
                               &v5) )
    {
      v11 = __gnu_cxx::__normal_iterator<google_breakpad::ElfSegment *,std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>>::operator*(&v6);
      if ( (unsigned __int8)sub_1BFBC7(*(_DWORD **)v11, *(_QWORD *)(v11 + 8), a2) )
      {
        v3 = 1;
        goto LABEL_10;
      }
      __gnu_cxx::__normal_iterator<google_breakpad::ElfSegment *,std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>>::operator++(&v6);
    }
  }
  if ( (unsigned __int8)google_breakpad::FindElfSection(
                          a1,
                          ".note.gnu.build-id",
                          &byte_7,
                          (unsigned int)v8,
                          (const void **)&v7,
                          v2) )
    v3 = sub_1BFBC7(*(_DWORD **)v8, (__int64)v7, a2);
  else
    v3 = 0;
LABEL_10:
  google_breakpad::auto_wasteful_vector<google_breakpad::ElfSegment,2u>::~auto_wasteful_vector(v9);
  google_breakpad::PageAllocator::~PageAllocator((google_breakpad::PageAllocator *)v10);
  return v3;
}

