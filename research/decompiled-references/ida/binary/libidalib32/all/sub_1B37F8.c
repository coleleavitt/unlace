__int64 __fastcall sub_1B37F8(__int64 a1, const ucontext *a2)
{
  __int64 v3; // r12
  void (__fastcall *v4)(__int64, __int64, _QWORD, void *, unsigned __int64); // rbx
  unsigned __int64 v5; // r14
  void *v6; // r13
  unsigned int v7; // eax
  unsigned __int64 v8; // [rsp+10h] [rbp-60h] BYREF
  void *v9[2]; // [rsp+18h] [rbp-58h] BYREF
  __int64 v10; // [rsp+28h] [rbp-48h]
  unsigned __int64 InstructionPointer; // [rsp+30h] [rbp-40h]
  unsigned __int64 StackPointer; // [rsp+38h] [rbp-38h]
  unsigned __int64 v13; // [rsp+40h] [rbp-30h]
  unsigned __int64 v14; // [rsp+48h] [rbp-28h]

  if ( !*(_QWORD *)(a1 + 16) || !*(_QWORD *)(a1 + 160) )
    return 0;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 16LL);
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 24LL);
  StackPointer = google_breakpad::UContextReader::GetStackPointer(*(google_breakpad::UContextReader **)(a1 + 16), a2);
  InstructionPointer = google_breakpad::UContextReader::GetInstructionPointer(
                         *(google_breakpad::UContextReader **)(a1 + 16),
                         a2);
  if ( InstructionPointer >= v14 && InstructionPointer < v13 )
    return 1;
  if ( (unsigned __int8)google_breakpad::LinuxDumper::GetStackInfo(
                          *(google_breakpad::LinuxDumper **)(a1 + 32),
                          (const void **)v9,
                          &v8,
                          StackPointer) != 1 )
    return 0;
  v10 = sub_1B638E(a1, (unsigned int)v8);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(void (__fastcall **)(__int64, __int64, _QWORD, void *, unsigned __int64))(*(_QWORD *)v3 + 64LL);
  v5 = v8;
  v6 = v9[0];
  v7 = sub_1B63C0(a1);
  v4(v3, v10, v7, v6, v5);
  v9[1] = (void *)(StackPointer - (unsigned __int64)v9[0]);
  return google_breakpad::LinuxDumper::StackHasPointerToMapping(
           *(_QWORD *)(a1 + 32),
           v10,
           v8,
           StackPointer - (unsigned __int64)v9[0],
           *(_QWORD *)(a1 + 160));
}

