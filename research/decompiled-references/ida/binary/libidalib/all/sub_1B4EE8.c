__int64 __fastcall sub_1B4EE8(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned int v4; // r12d
  int v5; // eax
  __int64 v6; // rax
  const ucontext *v7; // rsi
  int uc_flags; // r12d
  unsigned __int64 InstructionPointer; // rax
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // r12
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  int v20; // r12d
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // r12d
  google_breakpad::LinuxDumper *v25; // r12
  unsigned __int64 v26; // rsi
  ucontext v28; // [rsp+10h] [rbp-950h] BYREF
  unsigned __int8 *v29; // [rsp+868h] [rbp-F8h] BYREF
  _BYTE v30[32]; // [rsp+870h] [rbp-F0h] BYREF
  __int64 v31; // [rsp+890h] [rbp-D0h] BYREF
  unsigned __int64 v32; // [rsp+898h] [rbp-C8h]
  unsigned __int8 *v33; // [rsp+8A8h] [rbp-B8h] BYREF
  _BYTE v34[32]; // [rsp+8B0h] [rbp-B0h] BYREF
  unsigned __int64 v35; // [rsp+8D0h] [rbp-90h] BYREF
  unsigned __int64 v36; // [rsp+8D8h] [rbp-88h] BYREF
  unsigned __int64 v37; // [rsp+8E0h] [rbp-80h] BYREF
  void *v38; // [rsp+8E8h] [rbp-78h]
  __int64 v39; // [rsp+8F0h] [rbp-70h]
  unsigned __int64 *v40; // [rsp+8F8h] [rbp-68h]
  unsigned __int64 v41; // [rsp+900h] [rbp-60h]
  __int64 v42; // [rsp+908h] [rbp-58h]
  unsigned __int64 StackPointer; // [rsp+910h] [rbp-50h]
  __int64 v44; // [rsp+918h] [rbp-48h]
  unsigned int v45; // [rsp+924h] [rbp-3Ch]
  unsigned int v46; // [rsp+928h] [rbp-38h]
  int v47; // [rsp+92Ch] [rbp-34h]
  unsigned int j; // [rsp+930h] [rbp-30h]
  char v49; // [rsp+937h] [rbp-29h]
  unsigned int i; // [rsp+938h] [rbp-28h]
  int v51; // [rsp+93Ch] [rbp-24h]

  v3 = google_breakpad::LinuxDumper::threads(*(google_breakpad::LinuxDumper **)(a1 + 32));
  v46 = std::vector<int,google_breakpad::PageStdAllocator<int>>::size(v3);
  google_breakpad::TypedMDRVA<unsigned int>::TypedMDRVA(v34, a1 + 40);
  if ( (unsigned __int8)google_breakpad::TypedMDRVA<unsigned int>::AllocateObjectAndArray(v34, v46, 48) != 1 )
  {
    v2 = 0;
  }
  else
  {
    *(_DWORD *)a2 = 3;
    *(_QWORD *)(a2 + 4) = google_breakpad::UntypedMDRVA::location((google_breakpad::UntypedMDRVA *)v34);
    v4 = v46;
    *(_DWORD *)google_breakpad::TypedMDRVA<unsigned int>::get(v34) = v4;
    v51 = -1;
    if ( *(__int64 *)(a1 + 64) >= 0 )
    {
      v45 = v46 << 13;
      v5 = google_breakpad::MinidumpFileWriter::position((google_breakpad::MinidumpFileWriter *)(a1 + 40));
      v44 = v5 + v45 + 0x10000;
      if ( v44 > *(_QWORD *)(a1 + 64) )
        v51 = 2048;
    }
    for ( i = 0; i < v46; ++i )
    {
      my_memset(&v28, 0, 48);
      v6 = google_breakpad::LinuxDumper::threads(*(google_breakpad::LinuxDumper **)(a1 + 32));
      v7 = (const ucontext *)i;
      LODWORD(v28.uc_flags) = *(_DWORD *)std::vector<int,google_breakpad::PageStdAllocator<int>>::operator[](v6, i);
      uc_flags = v28.uc_flags;
      if ( uc_flags == (unsigned int)sub_1B6FC0(a1)
        && *(_QWORD *)(a1 + 16)
        && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 32)) != 1 )
      {
        StackPointer = google_breakpad::UContextReader::GetStackPointer(
                         *(google_breakpad::UContextReader **)(a1 + 16),
                         v7);
        InstructionPointer = google_breakpad::UContextReader::GetInstructionPointer(
                               *(google_breakpad::UContextReader **)(a1 + 16),
                               v7);
        if ( (unsigned __int8)sub_1B4BF6(a1, (unsigned int *)&v28, StackPointer, InstructionPointer, -1, &v33) != 1 )
        {
          v2 = 0;
          goto LABEL_47;
        }
        v42 = 256;
        v41 = google_breakpad::UContextReader::GetInstructionPointer(
                *(google_breakpad::UContextReader **)(a1 + 16),
                &v28);
        v49 = 0;
        for ( j = 0; ; ++j )
        {
          v11 = j;
          v12 = google_breakpad::LinuxDumper::mappings(*(google_breakpad::LinuxDumper **)(a1 + 32));
          if ( v11 >= std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::size(v12) )
            break;
          v13 = google_breakpad::LinuxDumper::mappings(*(google_breakpad::LinuxDumper **)(a1 + 32));
          v40 = *(unsigned __int64 **)std::vector<google_breakpad::MappingInfo *,google_breakpad::PageStdAllocator<google_breakpad::MappingInfo *>>::operator[](
                                        v13,
                                        j);
          if ( v41 >= *v40 && v41 < *v40 + v40[1] )
          {
            v49 = 1;
            v35 = v41 - 128;
            v31 = *(_QWORD *)std::max<unsigned long>(v40, &v35);
            v36 = *v40 + v40[1];
            v37 = v41 + 128;
            v39 = *(_QWORD *)std::min<unsigned long>(&v37, &v36);
            LODWORD(v32) = v39 - v31;
            break;
          }
        }
        if ( v49 )
        {
          google_breakpad::UntypedMDRVA::UntypedMDRVA(
            (google_breakpad::UntypedMDRVA *)v30,
            (google_breakpad::MinidumpFileWriter *)(a1 + 40));
          if ( (unsigned __int8)google_breakpad::UntypedMDRVA::Allocate(
                                  (google_breakpad::UntypedMDRVA *)v30,
                                  (unsigned int)v32) != 1 )
          {
            v2 = 0;
            goto LABEL_47;
          }
          v38 = (void *)sub_1B6F8E(a1, (unsigned int)v32);
          (*(void (__fastcall **)(_QWORD, void *, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 32) + 64LL))(
            *(_QWORD *)(a1 + 32),
            v38,
            LODWORD(v28.uc_flags),
            v31,
            (unsigned int)v32);
          google_breakpad::UntypedMDRVA::Copy((google_breakpad::UntypedMDRVA *)v30, v38, (unsigned int)v32);
          v32 = google_breakpad::UntypedMDRVA::location((google_breakpad::UntypedMDRVA *)v30);
          std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::push_back(
            a1 + 80,
            &v31);
        }
        google_breakpad::TypedMDRVA<MDRawContextAMD64>::TypedMDRVA(&v28.__fpregs_mem.padding[6], a1 + 40);
        if ( (unsigned __int8)google_breakpad::TypedMDRVA<MDRawContextAMD64>::Allocate(&v28.__fpregs_mem.padding[6]) != 1 )
        {
          v2 = 0;
          v14 = 0;
        }
        else
        {
          v15 = google_breakpad::TypedMDRVA<MDRawContextAMD64>::get(&v28.__fpregs_mem.padding[6]);
          my_memset(v15, 0, 1232);
          v16 = *(_QWORD *)(a1 + 24);
          v17 = *(_QWORD *)(a1 + 16);
          v18 = google_breakpad::TypedMDRVA<MDRawContextAMD64>::get(&v28.__fpregs_mem.padding[6]);
          google_breakpad::UContextReader::FillCPUContext(v18, v17, v16);
          v28.uc_mcontext.gregs[0] = google_breakpad::UntypedMDRVA::location((google_breakpad::UntypedMDRVA *)&v28.__fpregs_mem.padding[6]);
          *(_QWORD *)(a1 + 72) = google_breakpad::UntypedMDRVA::location((google_breakpad::UntypedMDRVA *)&v28.__fpregs_mem.padding[6]);
          v14 = 1;
        }
        google_breakpad::TypedMDRVA<MDRawContextAMD64>::~TypedMDRVA(&v28.__fpregs_mem.padding[6]);
        if ( v14 != 1 )
          goto LABEL_47;
      }
      else
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, greg_t *))(**(_QWORD **)(a1 + 32) + 56LL))(
               *(_QWORD *)(a1 + 32),
               i,
               &v28.uc_mcontext.gregs[1]) != 1 )
        {
          v2 = 0;
          goto LABEL_47;
        }
        v47 = -1;
        if ( *(__int64 *)(a1 + 64) >= 0 && i > 0x13 )
          v47 = v51;
        v19 = google_breakpad::ThreadInfo::GetInstructionPointer((google_breakpad::ThreadInfo *)&v28.uc_mcontext.gregs[1]);
        if ( (unsigned __int8)sub_1B4BF6(a1, (unsigned int *)&v28, v28.uc_mcontext.gregs[2], v19, v47, &v29) != 1 )
        {
          v2 = 0;
          goto LABEL_47;
        }
        google_breakpad::TypedMDRVA<MDRawContextAMD64>::TypedMDRVA(&v28.__fpregs_mem.padding[6], a1 + 40);
        if ( (unsigned __int8)google_breakpad::TypedMDRVA<MDRawContextAMD64>::Allocate(&v28.__fpregs_mem.padding[6]) != 1 )
        {
          v2 = 0;
          v20 = 0;
        }
        else
        {
          v21 = google_breakpad::TypedMDRVA<MDRawContextAMD64>::get(&v28.__fpregs_mem.padding[6]);
          my_memset(v21, 0, 1232);
          v22 = google_breakpad::TypedMDRVA<MDRawContextAMD64>::get(&v28.__fpregs_mem.padding[6]);
          google_breakpad::ThreadInfo::FillCPUContext(&v28.uc_mcontext.gregs[1], v22);
          v28.uc_mcontext.gregs[0] = google_breakpad::UntypedMDRVA::location((google_breakpad::UntypedMDRVA *)&v28.__fpregs_mem.padding[6]);
          v23 = google_breakpad::LinuxDumper::threads(*(google_breakpad::LinuxDumper **)(a1 + 32));
          v24 = *(_DWORD *)std::vector<int,google_breakpad::PageStdAllocator<int>>::operator[](v23, i);
          if ( v24 == (unsigned int)sub_1B6FC0(a1) )
          {
            *(_QWORD *)(a1 + 72) = google_breakpad::UntypedMDRVA::location((google_breakpad::UntypedMDRVA *)&v28.__fpregs_mem.padding[6]);
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 32)) != 1 )
            {
              v25 = *(google_breakpad::LinuxDumper **)(a1 + 32);
              v26 = google_breakpad::ThreadInfo::GetInstructionPointer((google_breakpad::ThreadInfo *)&v28.uc_mcontext.gregs[1]);
              google_breakpad::LinuxDumper::set_crash_address(v25, v26);
            }
          }
          v20 = 1;
        }
        google_breakpad::TypedMDRVA<MDRawContextAMD64>::~TypedMDRVA(&v28.__fpregs_mem.padding[6]);
        if ( v20 != 1 )
          goto LABEL_47;
      }
      google_breakpad::TypedMDRVA<unsigned int>::CopyIndexAfterObject(v34, i, &v28, 48);
    }
    v2 = 1;
  }
LABEL_47:
  google_breakpad::TypedMDRVA<unsigned int>::~TypedMDRVA(v34);
  return v2;
}

