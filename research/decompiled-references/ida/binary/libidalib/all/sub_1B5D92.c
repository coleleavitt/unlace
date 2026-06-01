__int64 __fastcall sub_1B5D92(__int64 a1, _QWORD *a2, unsigned __int8 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // r12d
  unsigned __int64 v10; // r13
  const void *v11; // r12
  int v12; // eax
  int v13; // r12d
  unsigned int v14; // eax
  _BYTE v20[76]; // [rsp+30h] [rbp-2E0h] BYREF
  int v21; // [rsp+7Ch] [rbp-294h] BYREF
  _BYTE v22[24]; // [rsp+80h] [rbp-290h] BYREF
  _BYTE v23[4]; // [rsp+98h] [rbp-278h] BYREF
  int v24; // [rsp+9Ch] [rbp-274h]
  _BYTE v25[4]; // [rsp+A0h] [rbp-270h] BYREF
  unsigned int v26; // [rsp+A4h] [rbp-26Ch]
  unsigned __int16 v27; // [rsp+A8h] [rbp-268h]
  unsigned __int16 v28; // [rsp+AAh] [rbp-266h]
  char v29; // [rsp+ACh] [rbp-264h]
  char v30; // [rsp+ADh] [rbp-263h]
  char v31; // [rsp+AEh] [rbp-262h]
  char v32; // [rsp+AFh] [rbp-261h]
  char v33; // [rsp+B0h] [rbp-260h]
  char v34; // [rsp+B1h] [rbp-25Fh]
  char v35; // [rsp+B2h] [rbp-25Eh]
  char v36; // [rsp+B3h] [rbp-25Dh]
  unsigned int v37; // [rsp+B4h] [rbp-25Ch]
  char v38[256]; // [rsp+C0h] [rbp-250h] BYREF
  char s[264]; // [rsp+1C0h] [rbp-150h] BYREF
  __int64 v40; // [rsp+2C8h] [rbp-48h] BYREF
  __int64 v41; // [rsp+2D0h] [rbp-40h] BYREF
  __int64 v42; // [rsp+2D8h] [rbp-38h]
  size_t v43; // [rsp+2E0h] [rbp-30h]
  int DebugInfo; // [rsp+2ECh] [rbp-24h]

  my_memset(a5, 0, 108);
  *(_QWORD *)a5 = *a2;
  *(_DWORD *)(a5 + 8) = a2[1];
  google_breakpad::LinuxDumper::GetMappingEffectiveNameAndPath(*(_QWORD *)(a1 + 32), a2, v38, 255, s, 255);
  DebugInfo = google_breakpad::PEFile::TryGetDebugInfo(v38, v25);
  if ( !DebugInfo )
  {
    v7 = google_breakpad::LinuxDumper::allocator(*(google_breakpad::LinuxDumper **)(a1 + 32));
    google_breakpad::auto_wasteful_vector<unsigned char,20u>::auto_wasteful_vector(v20, v7);
    if ( a6 )
    {
      v41 = std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::end(v20);
      __gnu_cxx::__normal_iterator<unsigned char const*,std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>>::__normal_iterator<unsigned char *>(
        &v40,
        &v41);
      std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::insert<unsigned char const*,void>(
        v20,
        v40,
        a6,
        a6 + 16);
    }
    else
    {
      google_breakpad::LinuxDumper::ElfFileIdentifierForMapping(*(_QWORD *)(a1 + 32), a2, a3, a4, v20);
      google_breakpad::LinuxDumper::GetMappingEffectiveNameAndPath(*(_QWORD *)(a1 + 32), a2, v38, 255, s, 255);
    }
    if ( (unsigned __int8)std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::empty(v20) != 1 )
    {
      google_breakpad::UntypedMDRVA::UntypedMDRVA(
        (google_breakpad::UntypedMDRVA *)v22,
        (google_breakpad::MinidumpFileWriter *)(a1 + 40));
      v8 = std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::size(v20);
      if ( (unsigned __int8)google_breakpad::UntypedMDRVA::Allocate((google_breakpad::UntypedMDRVA *)v22, v8 + 4) != 1 )
      {
        v6 = 0;
        v9 = 0;
        goto LABEL_10;
      }
      v21 = 1114654028;
      google_breakpad::UntypedMDRVA::Copy((google_breakpad::UntypedMDRVA *)v22, &v21, 4u);
      v10 = std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::size(v20);
      v11 = (const void *)std::vector<unsigned char,google_breakpad::PageStdAllocator<unsigned char>>::operator[](
                            v20,
                            0);
      v12 = google_breakpad::UntypedMDRVA::position((google_breakpad::UntypedMDRVA *)v22);
      google_breakpad::UntypedMDRVA::Copy((google_breakpad::UntypedMDRVA *)v22, v12 + 4, v11, v10);
      *(_QWORD *)(a5 + 76) = google_breakpad::UntypedMDRVA::location((google_breakpad::UntypedMDRVA *)v22);
    }
    v9 = 1;
LABEL_10:
    google_breakpad::auto_wasteful_vector<unsigned char,20u>::~auto_wasteful_vector(v20);
    if ( v9 != 1 )
      return v6;
    goto LABEL_21;
  }
  v43 = strlen(s);
  google_breakpad::TypedMDRVA<MDCVInfoPDB70>::TypedMDRVA(v20, a1 + 40);
  if ( (unsigned __int8)google_breakpad::TypedMDRVA<MDCVInfoPDB70>::AllocateObjectAndArray(v20, v43 + 1, 1) != 1 )
  {
    v6 = 0;
    v13 = 0;
  }
  else if ( (unsigned __int8)google_breakpad::TypedMDRVA<MDCVInfoPDB70>::CopyIndexAfterObject(v20, 0, s, v43) != 1 )
  {
    v6 = 0;
    v13 = 0;
  }
  else
  {
    v42 = google_breakpad::TypedMDRVA<MDCVInfoPDB70>::get(v20);
    *(_DWORD *)v42 = 1396986706;
    if ( DebugInfo == 2 )
    {
      *(_DWORD *)(v42 + 4) = _byteswap_ulong(v26);
      *(_WORD *)(v42 + 8) = _byteswap_ushort(v27);
      *(_WORD *)(v42 + 10) = _byteswap_ushort(v28);
      *(_BYTE *)(v42 + 12) = v29;
      *(_BYTE *)(v42 + 13) = v30;
      *(_BYTE *)(v42 + 14) = v31;
      *(_BYTE *)(v42 + 15) = v32;
      *(_BYTE *)(v42 + 16) = v33;
      *(_BYTE *)(v42 + 17) = v34;
      *(_BYTE *)(v42 + 18) = v35;
      *(_BYTE *)(v42 + 19) = v36;
      *(_DWORD *)(v42 + 20) = _byteswap_ulong(v37);
    }
    else
    {
      *(_DWORD *)(v42 + 20) = 0;
    }
    *(_QWORD *)(a5 + 76) = google_breakpad::UntypedMDRVA::location((google_breakpad::UntypedMDRVA *)v20);
    v13 = 1;
  }
  google_breakpad::TypedMDRVA<MDCVInfoPDB70>::~TypedMDRVA(v20);
  if ( v13 == 1 )
  {
LABEL_21:
    v14 = my_strlen(v38);
    if ( (unsigned __int8)google_breakpad::MinidumpFileWriter::WriteString(a1 + 40, v38, v14, v23) != 1 )
    {
      return 0;
    }
    else
    {
      *(_DWORD *)(a5 + 20) = v24;
      return 1;
    }
  }
  return v6;
}

