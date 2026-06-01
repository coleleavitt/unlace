__int64 __fastcall sub_1B67BA(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  unsigned __int8 (__fastcall *v6)(__int64, _QWORD *, _QWORD, __int64, __int64); // r12
  unsigned int v7; // eax
  __int64 v8; // r13
  unsigned __int8 (__fastcall *v9)(__int64, _QWORD *, _QWORD, __int64, __int64); // r12
  __int64 v10; // r14
  unsigned int v11; // eax
  __int64 v12; // r13
  unsigned __int8 (__fastcall *v13)(__int64, int *, _QWORD, __int64, __int64); // r12
  unsigned int v14; // eax
  __int64 v15; // r13
  unsigned __int8 (__fastcall *v16)(__int64, _QWORD *, _QWORD, __int64, __int64); // r12
  unsigned int v17; // eax
  int v18; // r12d
  __int64 v19; // r13
  unsigned __int8 (__fastcall *v20)(__int64, __int64 *, _QWORD, __int64, __int64); // r12
  unsigned int v21; // eax
  __int64 v22; // r13
  void (__fastcall *v23)(__int64, _QWORD *, _QWORD, __int64, __int64); // r12
  __int64 v24; // r14
  unsigned int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rax
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  __int64 v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // r12
  void (__fastcall *v36)(__int64, __int64, _QWORD, __int64, __int64); // rbx
  __int64 v37; // r13
  unsigned int v38; // r14d
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v43; // [rsp+10h] [rbp-2E0h] BYREF
  __int64 v44; // [rsp+18h] [rbp-2D8h]
  __int64 v45; // [rsp+20h] [rbp-2D0h]
  __int64 v46; // [rsp+28h] [rbp-2C8h]
  _BYTE v47[64]; // [rsp+40h] [rbp-2B0h] BYREF
  _QWORD v48[32]; // [rsp+80h] [rbp-270h] BYREF
  char v49; // [rsp+180h] [rbp-170h]
  __int64 v50; // [rsp+190h] [rbp-160h] BYREF
  int v51; // [rsp+198h] [rbp-158h]
  __int64 v52; // [rsp+1A0h] [rbp-150h]
  _BYTE v53[4]; // [rsp+1A8h] [rbp-148h] BYREF
  int v54; // [rsp+1ACh] [rbp-144h]
  _QWORD v55[2]; // [rsp+1B0h] [rbp-140h] BYREF
  _BYTE v56[48]; // [rsp+1C0h] [rbp-130h] BYREF
  _BYTE v57[80]; // [rsp+1F0h] [rbp-100h] BYREF
  int v58; // [rsp+240h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+248h] [rbp-A8h]
  __int64 v60; // [rsp+250h] [rbp-A0h]
  __int64 v61; // [rsp+260h] [rbp-90h]
  int v62; // [rsp+274h] [rbp-7Ch]
  __int64 v63; // [rsp+278h] [rbp-78h]
  __int64 v64; // [rsp+280h] [rbp-70h]
  unsigned int v65; // [rsp+288h] [rbp-68h]
  int v66; // [rsp+28Ch] [rbp-64h]
  __int64 v67; // [rsp+290h] [rbp-60h]
  int v68; // [rsp+29Ch] [rbp-54h]
  int i; // [rsp+2A0h] [rbp-50h]
  unsigned int v70; // [rsp+2A4h] [rbp-4Ch]
  __int64 v71; // [rsp+2A8h] [rbp-48h]
  __int64 v72; // [rsp+2B0h] [rbp-40h]
  int v73; // [rsp+2BCh] [rbp-34h]
  unsigned __int64 v74; // [rsp+2C0h] [rbp-30h]
  __int64 v75; // [rsp+2C8h] [rbp-28h]

  v3 = google_breakpad::LinuxDumper::auxv(*(google_breakpad::LinuxDumper **)(a1 + 32));
  v75 = *(_QWORD *)std::vector<unsigned long,google_breakpad::PageStdAllocator<unsigned long>>::operator[](v3, 3);
  v4 = google_breakpad::LinuxDumper::auxv(*(google_breakpad::LinuxDumper **)(a1 + 32));
  v73 = *(_QWORD *)std::vector<unsigned long,google_breakpad::PageStdAllocator<unsigned long>>::operator[](v4, 5);
  if ( !v73 || !v75 )
    return 0;
  v74 = v75 & 0xFFFFFFFFFFFFF000LL;
  v72 = 0;
  while ( v73 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 32);
    v6 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD *, _QWORD, __int64, __int64))(*(_QWORD *)v5 + 64LL);
    v7 = sub_1B6FC0(a1);
    if ( v6(v5, v48, v7, v75, 56) != 1 )
      return 0;
    if ( LODWORD(v48[0]) == 1 && !v48[1] )
      v74 -= v48[2];
    if ( LODWORD(v48[0]) == 2 )
      v72 = v48[2];
    --v73;
    v75 += 56;
  }
  if ( !v72 )
    return 0;
  v63 = v74 + v72;
  v71 = 0;
  v70 = 0;
  for ( i = 0; ; ++i )
  {
    v70 += 16;
    v8 = *(_QWORD *)(a1 + 32);
    v9 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD *, _QWORD, __int64, __int64))(*(_QWORD *)v8 + 64LL);
    v10 = 16LL * i + v63;
    v11 = sub_1B6FC0(a1);
    if ( v9(v8, v55, v11, v10, 16) != 1 )
      return 0;
    v62 = 21;
    if ( v55[0] == 21 )
    {
      v71 = v55[1];
      continue;
    }
    if ( !v55[0] )
      break;
  }
  v68 = 0;
  v12 = *(_QWORD *)(a1 + 32);
  v13 = *(unsigned __int8 (__fastcall **)(__int64, int *, _QWORD, __int64, __int64))(*(_QWORD *)v12 + 64LL);
  v14 = sub_1B6FC0(a1);
  if ( v13(v12, &v58, v14, v71, 40) != 1 )
  {
    return 0;
  }
  else
  {
    v67 = v59;
    while ( v67 )
    {
      v15 = *(_QWORD *)(a1 + 32);
      v16 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD *, _QWORD, __int64, __int64))(*(_QWORD *)v15 + 64LL);
      v17 = sub_1B6FC0(a1);
      if ( v16(v15, v48, v17, v67, 40) != 1 )
        return 0;
      v67 = v48[3];
      ++v68;
    }
    v66 = google_breakpad::MinidumpFileWriter::kInvalidMDRVA;
    if ( v68 <= 0 )
      goto LABEL_45;
    google_breakpad::TypedMDRVA<MDRawLinkMap64>::TypedMDRVA(v47, a1 + 40);
    if ( (unsigned __int8)google_breakpad::TypedMDRVA<MDRawLinkMap64>::AllocateArray(v47, v68) != 1 )
    {
      v2 = 0;
      v18 = 0;
    }
    else
    {
      v66 = (unsigned __int64)google_breakpad::UntypedMDRVA::location((google_breakpad::UntypedMDRVA *)v47) >> 32;
      v65 = 0;
      v64 = v59;
      while ( v64 )
      {
        v19 = *(_QWORD *)(a1 + 32);
        v20 = *(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD, __int64, __int64))(*(_QWORD *)v19 + 64LL);
        v21 = sub_1B6FC0(a1);
        if ( v20(v19, &v43, v21, v64, 40) != 1 )
        {
          v2 = 0;
LABEL_42:
          v18 = 0;
          goto LABEL_44;
        }
        v64 = v46;
        memset(v48, 0, sizeof(v48));
        v49 = 0;
        if ( v44 )
        {
          v22 = *(_QWORD *)(a1 + 32);
          v23 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64, __int64))(*(_QWORD *)v22 + 64LL);
          v24 = v44;
          v25 = sub_1B6FC0(a1);
          v23(v22, v48, v25, v24, 256);
        }
        if ( (unsigned __int8)google_breakpad::MinidumpFileWriter::WriteString(a1 + 40, v48, 0, v53) != 1 )
        {
          v2 = 0;
          goto LABEL_42;
        }
        v51 = v54;
        v50 = v43;
        v52 = v45;
        v26 = v65++;
        google_breakpad::TypedMDRVA<MDRawLinkMap64>::CopyIndex(v47, v26, &v50);
      }
      v18 = 1;
    }
LABEL_44:
    google_breakpad::TypedMDRVA<MDRawLinkMap64>::~TypedMDRVA(v47);
    if ( v18 == 1 )
    {
LABEL_45:
      google_breakpad::TypedMDRVA<MDRawDebug64>::TypedMDRVA(v57, a1 + 40);
      if ( (unsigned __int8)google_breakpad::TypedMDRVA<MDRawDebug64>::AllocateObjectAndArray(v57, 1, v70) != 1 )
      {
        v2 = 0;
      }
      else
      {
        v27 = google_breakpad::TypedMDRVA<MDRawDebug64>::get(v57);
        my_memset(v27, 0, 40);
        *(_DWORD *)a2 = 1197932554;
        *(_QWORD *)(a2 + 4) = google_breakpad::UntypedMDRVA::location((google_breakpad::UntypedMDRVA *)v57);
        v28 = v58;
        *(_DWORD *)google_breakpad::TypedMDRVA<MDRawDebug64>::get(v57) = v28;
        v29 = v66;
        *(_DWORD *)(google_breakpad::TypedMDRVA<MDRawDebug64>::get(v57) + 4) = v29;
        v30 = v68;
        *(_DWORD *)(google_breakpad::TypedMDRVA<MDRawDebug64>::get(v57) + 8) = v30;
        v31 = v60;
        *(_QWORD *)(google_breakpad::TypedMDRVA<MDRawDebug64>::get(v57) + 16) = v31;
        v32 = v61;
        *(_QWORD *)(google_breakpad::TypedMDRVA<MDRawDebug64>::get(v57) + 24) = v32;
        v33 = v63;
        *(_QWORD *)(google_breakpad::TypedMDRVA<MDRawDebug64>::get(v57) + 32) = v33;
        v34 = google_breakpad::LinuxDumper::allocator(*(google_breakpad::LinuxDumper **)(a1 + 32));
        google_breakpad::wasteful_vector<char>::wasteful_vector(v56, v34, v70);
        std::vector<char,google_breakpad::PageStdAllocator<char>>::resize(v56, v70);
        v35 = *(_QWORD *)(a1 + 32);
        v36 = *(void (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v35 + 64LL);
        v37 = v70;
        v38 = sub_1B6FC0(a1);
        v39 = std::vector<char,google_breakpad::PageStdAllocator<char>>::operator[](v56, 0);
        v36(v35, v39, v38, v63, v37);
        v40 = v70;
        v41 = std::vector<char,google_breakpad::PageStdAllocator<char>>::operator[](v56, 0);
        google_breakpad::TypedMDRVA<MDRawDebug64>::CopyIndexAfterObject(v57, 0, v41, v40);
        v2 = 1;
        google_breakpad::wasteful_vector<char>::~wasteful_vector(v56);
      }
      google_breakpad::TypedMDRVA<MDRawDebug64>::~TypedMDRVA(v57);
    }
  }
  return v2;
}

