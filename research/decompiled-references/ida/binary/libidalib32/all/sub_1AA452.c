__int64 __fastcall sub_1AA452(__int64 a1, const ucontext *a2)
{
  google_breakpad::LinuxDumper *v3; // r12
  void (__fastcall *v4)(google_breakpad::LinuxDumper *, _QWORD, _QWORD, __int64, __int64); // rbx
  __int64 v5; // r13
  __int64 v6; // r14
  unsigned int v7; // eax
  const ucontext *v8; // rsi
  unsigned __int64 InstructionPointer; // [rsp+10h] [rbp-40h]
  unsigned __int64 v10; // [rsp+18h] [rbp-38h]
  unsigned __int64 v11; // [rsp+20h] [rbp-30h]
  __int64 MappingNoBias; // [rsp+28h] [rbp-28h]

  *(_QWORD *)(a1 + 120) = google_breakpad::UContextReader::GetStackPointer(*(google_breakpad::UContextReader **)a1, a2);
  if ( (unsigned __int8)google_breakpad::LinuxDumper::GetStackInfo(
                          *(google_breakpad::LinuxDumper **)(a1 + 16),
                          (const void **)(a1 + 112),
                          (unsigned __int64 *)(a1 + 104),
                          *(_QWORD *)(a1 + 120)) != 1 )
    return 1;
  if ( (int)a2 >= 0 && *(_QWORD *)(a1 + 104) > (unsigned __int64)(int)a2 )
    *(_QWORD *)(a1 + 104) = (int)a2;
  *(_QWORD *)(a1 + 96) = sub_1AB274(a1, (unsigned int)*(_QWORD *)(a1 + 104));
  v3 = *(google_breakpad::LinuxDumper **)(a1 + 16);
  v4 = *(void (__fastcall **)(google_breakpad::LinuxDumper *, _QWORD, _QWORD, __int64, __int64))(*(_QWORD *)v3 + 64LL);
  v5 = *(_QWORD *)(a1 + 104);
  v6 = *(_QWORD *)(a1 + 112);
  v7 = google_breakpad::LinuxDumper::crash_thread(v3);
  v4(v3, *(_QWORD *)(a1 + 96), v7, v6, v5);
  if ( *(_BYTE *)(a1 + 32) != 1 )
    return 0;
  v8 = *(const ucontext **)(a1 + 40);
  MappingNoBias = google_breakpad::LinuxDumper::FindMappingNoBias(
                    *(google_breakpad::LinuxDumper **)(a1 + 16),
                    (unsigned __int64)v8);
  if ( !MappingNoBias )
    return 2;
  v11 = *(_QWORD *)(MappingNoBias + 16);
  v10 = *(_QWORD *)(MappingNoBias + 24);
  InstructionPointer = google_breakpad::UContextReader::GetInstructionPointer(
                         *(google_breakpad::UContextReader **)a1,
                         v8);
  if ( v11 <= InstructionPointer && InstructionPointer <= v10 )
    return 0;
  if ( (unsigned __int8)google_breakpad::LinuxDumper::StackHasPointerToMapping(
                          *(_QWORD *)(a1 + 16),
                          *(_QWORD *)(a1 + 96),
                          *(_QWORD *)(a1 + 104),
                          *(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 112),
                          MappingNoBias) )
    return 0;
  return 2;
}

