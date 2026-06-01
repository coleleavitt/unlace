__int64 __fastcall sub_2BF70(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 named_type_tid; // rsi
  unsigned __int16 v9; // ax
  const char *v10; // rdx
  unsigned __int16 v11; // ax
  const char *v12; // rdx
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  sub_2BE80((__int64)a3, (__int64 (__fastcall *)(_QWORD))sub_3D190);
  v5 = a3[1];
  if ( v5 == 1 )
  {
    named_type_tid = *(_QWORD *)(a1 + 464);
    if ( named_type_tid != -1 )
      return v14 - __readfsqword(0x28u);
    v9 = *(_WORD *)(a2 + 522);
    if ( v9 > 0x3Eu )
    {
      v10 = "struct elf_prstatus {\n"
            "  struct elf_siginfo {\n"
            "    int si_signo;\n"
            "    int si_code;\n"
            "    int si_errno;\n"
            "  } pr_info;\n"
            "  short int pr_cursig;\n"
            "  unsigned __int64 pr_sigpend;\n"
            "  unsigned __int64 pr_sighold;\n"
            "  int pr_pid;\n"
            "  int pr_ppid;\n"
            "  int pr_pgrp;\n"
            "  int pr_sid;\n"
            "  struct timeval {\n"
            "    __int64 tv_sec;\n"
            "    __int64 tv_usec;\n"
            "  } pr_utime, pr_stime, pr_cutime, pr_cstime;\n"
            "  struct user_regs_struct {\n"
            "    unsigned __int64 x0;\n"
            "    unsigned __int64 x1;\n"
            "    unsigned __int64 x2;\n"
            "    unsigned __int64 x3;\n"
            "    unsigned __int64 x4;\n"
            "    unsigned __int64 x5;\n"
            "    unsigned __int64 x6;\n"
            "    unsigned __int64 x7;\n"
            "    unsigned __int64 x8;\n"
            "    unsigned __int64 x9;\n"
            "    unsigned __int64 x10;\n"
            "    unsigned __int64 x11;\n"
            "    unsigned __int64 x12;\n"
            "    unsigned __int64 x13;\n"
            "    unsigned __int64 x14;\n"
            "    unsigned __int64 x15;\n"
            "    unsigned __int64 x16;\n"
            "    unsigned __int64 x17;\n"
            "    unsigned __int64 x18;\n"
            "    unsigned __int64 x19;\n"
            "    unsigned __int64 x20;\n"
            "    unsigned __int64 x21;\n"
            "    unsigned __int64 x22;\n"
            "    unsigned __int64 x23;\n"
            "    unsigned __int64 x24;\n"
            "    unsigned __int64 x25;\n"
            "    unsigned __int64 x26;\n"
            "    unsigned __int64 x27;\n"
            "    unsigned __int64 x28;\n"
            "    unsigned __int64 x29;\n"
            "    unsigned __int64 x30;\n"
            "    unsigned __int64 sp;\n"
            "    unsigned __int64 pc;\n"
            "    unsigned __int64 pstate;\n"
            "  } pr_reg;\n"
            "  int pr_fpvalid;\n"
            "};\n";
      if ( v9 == 183 )
      {
LABEL_12:
        h2ti(0, 0, v10, 1024, 0, 0, sub_EAA0, 0, 0);
        named_type_tid = get_named_type_tid("elf_prstatus");
      }
    }
    else if ( v9 > 2u )
    {
      switch ( *(_WORD *)(a2 + 522) )
      {
        case 3:
        case 6:
          v10 = "struct elf_prstatus {\n"
                "  struct elf_siginfo {\n"
                "    int si_signo;\n"
                "    int si_code;\n"
                "    int si_errno;\n"
                "  } pr_info;\n"
                "  short int pr_cursig;\n"
                "  unsigned __int32 pr_sigpend;\n"
                "  unsigned __int32 pr_sighold;\n"
                "  int pr_pid;\n"
                "  int pr_ppid;\n"
                "  int pr_pgrp;\n"
                "  int pr_sid;\n"
                "  struct timeval {\n"
                "    __int32 tv_sec;\n"
                "    __int32 tv_usec;\n"
                "  } pr_utime, pr_stime, pr_cutime, pr_cstime;\n"
                "  struct user_regs_struct {\n"
                "    unsigned __int32 ebx;\n"
                "    unsigned __int32 ecx;\n"
                "    unsigned __int32 edx;\n"
                "    unsigned __int32 esi;\n"
                "    unsigned __int32 edi;\n"
                "    unsigned __int32 ebp;\n"
                "    unsigned __int32 eax;\n"
                "    unsigned __int32 xds;\n"
                "    unsigned __int32 xes;\n"
                "    unsigned __int32 xfs;\n"
                "    unsigned __int32 xgs;\n"
                "    unsigned __int32 orig_eax;\n"
                "    unsigned __int32 eip;\n"
                "    unsigned __int32 xcs;\n"
                "    unsigned __int32 eflags;\n"
                "    unsigned __int32 esp;\n"
                "    unsigned __int32 xss;\n"
                "  } pr_reg;\n"
                "  int pr_fpvalid;\n"
                "};\n";
          goto LABEL_12;
        case 8:
        case 0x19:
        case 0x1E:
          v10 = "struct elf_prstatus {\n"
                "  struct elf_siginfo {\n"
                "    int si_signo;\n"
                "    int si_code;\n"
                "    int si_errno;\n"
                "  } pr_info;\n"
                "  short int pr_cursig;\n"
                "  unsigned __int32 pr_sigpend;\n"
                "  unsigned __int32 pr_sighold;\n"
                "  int pr_pid;\n"
                "  int pr_ppid;\n"
                "  int pr_pgrp;\n"
                "  int pr_sid;\n"
                "  struct timeval {\n"
                "    __int32 tv_sec;\n"
                "    __int32 tv_usec;\n"
                "  } pr_utime, pr_stime, pr_cutime, pr_cstime;\n"
                "  struct user_regs_struct {\n"
                "    unsigned __int32 r0;\n"
                "    unsigned __int32 r1;\n"
                "    unsigned __int32 r2;\n"
                "    unsigned __int32 r3;\n"
                "    unsigned __int32 r4;\n"
                "    unsigned __int32 r5;\n"
                "    unsigned __int32 r6;\n"
                "    unsigned __int32 r7;\n"
                "    unsigned __int32 r8;\n"
                "    unsigned __int32 r9;\n"
                "    unsigned __int32 r10;\n"
                "    unsigned __int32 r11;\n"
                "    unsigned __int32 r12;\n"
                "    unsigned __int32 r13;\n"
                "    unsigned __int32 r14;\n"
                "    unsigned __int32 r15;\n"
                "    unsigned __int32 r16;\n"
                "    unsigned __int32 r17;\n"
                "    unsigned __int32 r18;\n"
                "    unsigned __int32 r19;\n"
                "    unsigned __int32 r20;\n"
                "    unsigned __int32 r21;\n"
                "    unsigned __int32 r22;\n"
                "    unsigned __int32 r23;\n"
                "    unsigned __int32 r24;\n"
                "    unsigned __int32 r25;\n"
                "    unsigned __int32 r26;\n"
                "    unsigned __int32 r27;\n"
                "    unsigned __int32 r28;\n"
                "    unsigned __int32 r29;\n"
                "    unsigned __int32 r30;\n"
                "    unsigned __int32 r31;\n"
                "    unsigned __int32 lo;\n"
                "    unsigned __int32 hi;\n"
                "    unsigned __int32 cp0_epc;\n"
                "    unsigned __int32 cp0_badvaddr;\n"
                "    unsigned __int32 cp0_status;\n"
                "    unsigned __int32 cp0_cause;\n"
                "    unsigned __int32 padding[7];\n"
                "  } pr_reg;\n"
                "  int pr_fpvalid;\n"
                "};\n";
          if ( *(_BYTE *)(a2 + 617) )
            v10 = "struct elf_prstatus {\n"
                  "  struct elf_siginfo {\n"
                  "    int si_signo;\n"
                  "    int si_code;\n"
                  "    int si_errno;\n"
                  "  } pr_info;\n"
                  "  short int pr_cursig;\n"
                  "  unsigned __int64 pr_sigpend;\n"
                  "  unsigned __int64 pr_sighold;\n"
                  "  int pr_pid;\n"
                  "  int pr_ppid;\n"
                  "  int pr_pgrp;\n"
                  "  int pr_sid;\n"
                  "  struct timeval {\n"
                  "    __int64 tv_sec;\n"
                  "    __int64 tv_usec;\n"
                  "  } pr_utime, pr_stime, pr_cutime, pr_cstime;\n"
                  "  struct user_regs_struct {\n"
                  "    unsigned __int64 r0;\n"
                  "    unsigned __int64 r1;\n"
                  "    unsigned __int64 r2;\n"
                  "    unsigned __int64 r3;\n"
                  "    unsigned __int64 r4;\n"
                  "    unsigned __int64 r5;\n"
                  "    unsigned __int64 r6;\n"
                  "    unsigned __int64 r7;\n"
                  "    unsigned __int64 r8;\n"
                  "    unsigned __int64 r9;\n"
                  "    unsigned __int64 r10;\n"
                  "    unsigned __int64 r11;\n"
                  "    unsigned __int64 r12;\n"
                  "    unsigned __int64 r13;\n"
                  "    unsigned __int64 r14;\n"
                  "    unsigned __int64 r15;\n"
                  "    unsigned __int64 r16;\n"
                  "    unsigned __int64 r17;\n"
                  "    unsigned __int64 r18;\n"
                  "    unsigned __int64 r19;\n"
                  "    unsigned __int64 r20;\n"
                  "    unsigned __int64 r21;\n"
                  "    unsigned __int64 r22;\n"
                  "    unsigned __int64 r23;\n"
                  "    unsigned __int64 r24;\n"
                  "    unsigned __int64 r25;\n"
                  "    unsigned __int64 r26;\n"
                  "    unsigned __int64 r27;\n"
                  "    unsigned __int64 r28;\n"
                  "    unsigned __int64 r29;\n"
                  "    unsigned __int64 r30;\n"
                  "    unsigned __int64 r31;\n"
                  "    unsigned __int64 lo;\n"
                  "    unsigned __int64 hi;\n"
                  "    unsigned __int64 cp0_epc;\n"
                  "    unsigned __int64 cp0_badvaddr;\n"
                  "    unsigned __int64 cp0_status;\n"
                  "    unsigned __int64 cp0_cause;\n"
                  "    unsigned __int64 padding[7];\n"
                  "  } pr_reg;\n"
                  "  int pr_fpvalid;\n"
                  "};\n";
          goto LABEL_12;
        case 0x14:
          v10 = "struct elf_prstatus {\n"
                "  struct elf_siginfo {\n"
                "    int si_signo;\n"
                "    int si_code;\n"
                "    int si_errno;\n"
                "  } pr_info;\n"
                "  short int pr_cursig;\n"
                "  unsigned __int32 pr_sigpend;\n"
                "  unsigned __int32 pr_sighold;\n"
                "  int pr_pid;\n"
                "  int pr_ppid;\n"
                "  int pr_pgrp;\n"
                "  int pr_sid;\n"
                "  struct timeval {\n"
                "    __int32 tv_sec;\n"
                "    __int32 tv_usec;\n"
                "  } pr_utime, pr_stime, pr_cutime, pr_cstime;\n"
                "  struct user_regs_struct {\n"
                "    unsigned __int32 r0;\n"
                "    unsigned __int32 r1;\n"
                "    unsigned __int32 r2;\n"
                "    unsigned __int32 r3;\n"
                "    unsigned __int32 r4;\n"
                "    unsigned __int32 r5;\n"
                "    unsigned __int32 r6;\n"
                "    unsigned __int32 r7;\n"
                "    unsigned __int32 r8;\n"
                "    unsigned __int32 r9;\n"
                "    unsigned __int32 r10;\n"
                "    unsigned __int32 r11;\n"
                "    unsigned __int32 r12;\n"
                "    unsigned __int32 r13;\n"
                "    unsigned __int32 r14;\n"
                "    unsigned __int32 r15;\n"
                "    unsigned __int32 r16;\n"
                "    unsigned __int32 r17;\n"
                "    unsigned __int32 r18;\n"
                "    unsigned __int32 r19;\n"
                "    unsigned __int32 r20;\n"
                "    unsigned __int32 r21;\n"
                "    unsigned __int32 r22;\n"
                "    unsigned __int32 r23;\n"
                "    unsigned __int32 r24;\n"
                "    unsigned __int32 r25;\n"
                "    unsigned __int32 r26;\n"
                "    unsigned __int32 r27;\n"
                "    unsigned __int32 r28;\n"
                "    unsigned __int32 r29;\n"
                "    unsigned __int32 r30;\n"
                "    unsigned __int32 r31;\n"
                "    unsigned __int32 nip;\n"
                "    unsigned __int32 msr;\n"
                "    unsigned __int32 orig_gpr3;\n"
                "    unsigned __int32 ctr;\n"
                "    unsigned __int32 link;\n"
                "    unsigned __int32 xer;\n"
                "    unsigned __int32 ccr;\n"
                "    unsigned __int32 mq;\n"
                "    unsigned __int32 trap;\n"
                "    unsigned __int32 dar;\n"
                "    unsigned __int32 dsisr;\n"
                "    unsigned __int32 result;\n"
                "    unsigned __int32 padding[4];\n"
                "  } pr_reg;\n"
                "  int pr_fpvalid;\n"
                "};\n";
          goto LABEL_12;
        case 0x15:
          v10 = "struct elf_prstatus {\n"
                "  struct elf_siginfo {\n"
                "    int si_signo;\n"
                "    int si_code;\n"
                "    int si_errno;\n"
                "  } pr_info;\n"
                "  short int pr_cursig;\n"
                "  unsigned __int64 pr_sigpend;\n"
                "  unsigned __int64 pr_sighold;\n"
                "  int pr_pid;\n"
                "  int pr_ppid;\n"
                "  int pr_pgrp;\n"
                "  int pr_sid;\n"
                "  struct timeval {\n"
                "    __int64 tv_sec;\n"
                "    __int64 tv_usec;\n"
                "  } pr_utime, pr_stime, pr_cutime, pr_cstime;\n"
                "  struct user_regs_struct {\n"
                "    unsigned __int64 r0;\n"
                "    unsigned __int64 r1;\n"
                "    unsigned __int64 r2;\n"
                "    unsigned __int64 r3;\n"
                "    unsigned __int64 r4;\n"
                "    unsigned __int64 r5;\n"
                "    unsigned __int64 r6;\n"
                "    unsigned __int64 r7;\n"
                "    unsigned __int64 r8;\n"
                "    unsigned __int64 r9;\n"
                "    unsigned __int64 r10;\n"
                "    unsigned __int64 r11;\n"
                "    unsigned __int64 r12;\n"
                "    unsigned __int64 r13;\n"
                "    unsigned __int64 r14;\n"
                "    unsigned __int64 r15;\n"
                "    unsigned __int64 r16;\n"
                "    unsigned __int64 r17;\n"
                "    unsigned __int64 r18;\n"
                "    unsigned __int64 r19;\n"
                "    unsigned __int64 r20;\n"
                "    unsigned __int64 r21;\n"
                "    unsigned __int64 r22;\n"
                "    unsigned __int64 r23;\n"
                "    unsigned __int64 r24;\n"
                "    unsigned __int64 r25;\n"
                "    unsigned __int64 r26;\n"
                "    unsigned __int64 r27;\n"
                "    unsigned __int64 r28;\n"
                "    unsigned __int64 r29;\n"
                "    unsigned __int64 r30;\n"
                "    unsigned __int64 r31;\n"
                "    unsigned __int64 nip;\n"
                "    unsigned __int64 msr;\n"
                "    unsigned __int64 orig_gpr3;\n"
                "    unsigned __int64 ctr;\n"
                "    unsigned __int64 link;\n"
                "    unsigned __int64 xer;\n"
                "    unsigned __int64 ccr;\n"
                "    unsigned __int64 softe;\n"
                "    unsigned __int64 trap;\n"
                "    unsigned __int64 dar;\n"
                "    unsigned __int64 dsisr;\n"
                "    unsigned __int64 result;\n"
                "    unsigned __int64 padding[4];\n"
                "  } pr_reg;\n"
                "  int pr_fpvalid;\n"
                "};\n";
          goto LABEL_12;
        case 0x28:
          v10 = "struct elf_prstatus {\n"
                "  struct elf_siginfo {\n"
                "    int si_signo;\n"
                "    int si_code;\n"
                "    int si_errno;\n"
                "  } pr_info;\n"
                "  short int pr_cursig;\n"
                "  unsigned __int32 pr_sigpend;\n"
                "  unsigned __int32 pr_sighold;\n"
                "  int pr_pid;\n"
                "  int pr_ppid;\n"
                "  int pr_pgrp;\n"
                "  int pr_sid;\n"
                "  struct timeval {\n"
                "    __int32 tv_sec;\n"
                "    __int32 tv_usec;\n"
                "  } pr_utime, pr_stime, pr_cutime, pr_cstime;\n"
                "  struct user_regs_struct {\n"
                "    unsigned __int32 r0;\n"
                "    unsigned __int32 r1;\n"
                "    unsigned __int32 r2;\n"
                "    unsigned __int32 r3;\n"
                "    unsigned __int32 r4;\n"
                "    unsigned __int32 r5;\n"
                "    unsigned __int32 r6;\n"
                "    unsigned __int32 r7;\n"
                "    unsigned __int32 r8;\n"
                "    unsigned __int32 r9;\n"
                "    unsigned __int32 r10;\n"
                "    unsigned __int32 fp;\n"
                "    unsigned __int32 ip;\n"
                "    unsigned __int32 sp;\n"
                "    unsigned __int32 lr;\n"
                "    unsigned __int32 pc;\n"
                "    unsigned __int32 cpsr;\n"
                "    unsigned __int32 orig_r0;\n"
                "  } pr_reg;\n"
                "  int pr_fpvalid;\n"
                "};\n";
          goto LABEL_12;
        case 0x3E:
          v10 = "struct elf_prstatus {\n"
                "  struct elf_siginfo {\n"
                "    int si_signo;\n"
                "    int si_code;\n"
                "    int si_errno;\n"
                "  } pr_info;\n"
                "  short int pr_cursig;\n"
                "  unsigned __int64 pr_sigpend;\n"
                "  unsigned __int64 pr_sighold;\n"
                "  int pr_pid;\n"
                "  int pr_ppid;\n"
                "  int pr_pgrp;\n"
                "  int pr_sid;\n"
                "  struct timeval {\n"
                "    __int64 tv_sec;\n"
                "    __int64 tv_usec;\n"
                "  } pr_utime, pr_stime, pr_cutime, pr_cstime;\n"
                "  struct user_regs_struct {\n"
                "    unsigned __int64 r15;\n"
                "    unsigned __int64 r14;\n"
                "    unsigned __int64 r13;\n"
                "    unsigned __int64 r12;\n"
                "    unsigned __int64 rbp;\n"
                "    unsigned __int64 rbx;\n"
                "    unsigned __int64 r11;\n"
                "    unsigned __int64 r10;\n"
                "    unsigned __int64 r9;\n"
                "    unsigned __int64 r8;\n"
                "    unsigned __int64 rax;\n"
                "    unsigned __int64 rcx;\n"
                "    unsigned __int64 rdx;\n"
                "    unsigned __int64 rsi;\n"
                "    unsigned __int64 rdi;\n"
                "    unsigned __int64 orig_rax;\n"
                "    unsigned __int64 rip;\n"
                "    unsigned __int64 cs;\n"
                "    unsigned __int64 eflags;\n"
                "    unsigned __int64 rsp;\n"
                "    unsigned __int64 ss;\n"
                "    unsigned __int64 fs_base;\n"
                "    unsigned __int64 gs_base;\n"
                "    unsigned __int64 ds;\n"
                "    unsigned __int64 es;\n"
                "    unsigned __int64 fs;\n"
                "    unsigned __int64 gs;\n"
                "  } pr_reg;\n"
                "  int pr_fpvalid;\n"
                "};\n";
          goto LABEL_12;
        default:
          break;
      }
    }
    *(_QWORD *)(a1 + 464) = named_type_tid;
    v13 = 0;
    if ( (unsigned __int8)get_type_by_tid(&v13) && *a3 == get_tinfo_size(0, v13, 0) )
    {
      create_data(a3[3], 1610612736, *a3, *(_QWORD *)(a1 + 464));
      clear_tinfo_t(&v13);
      return v14 - __readfsqword(0x28u);
    }
    goto LABEL_16;
  }
  if ( v5 == 3 )
  {
    v6 = *(_QWORD *)(a1 + 472);
    if ( v6 != -1 )
      return v14 - __readfsqword(0x28u);
    v11 = *(_WORD *)(a2 + 522);
    if ( v11 > 0x3Eu )
    {
      v12 = "struct elf_prpsinfo {\n"
            "  char pr_state;\n"
            "  char pr_sname;\n"
            "  char pr_zomb;\n"
            "  char pr_nice;\n"
            "  unsigned __int64 pr_flag;\n"
            "  unsigned int pr_uid;\n"
            "  unsigned int pr_gid;\n"
            "  int pr_pid;\n"
            "  int pr_ppid;\n"
            "  int pr_pgrp;\n"
            "  int pr_sid;\n"
            "  char pr_fname[16]  __strlit(C,\"windows-1252\");\n"
            "  char pr_psargs[80] __strlit(C,\"windows-1252\");\n"
            "};\n";
      if ( v11 == 183 )
      {
LABEL_22:
        h2ti(0, 0, v12, 1024, 0, 0, sub_EAA0, 0, 0);
        v6 = get_named_type_tid("elf_prpsinfo");
      }
    }
    else if ( v11 > 2u )
    {
      switch ( *(_WORD *)(a2 + 522) )
      {
        case 3:
        case 6:
          v12 = "struct elf_prpsinfo {\n"
                "  char pr_state;\n"
                "  char pr_sname;\n"
                "  char pr_zomb;\n"
                "  char pr_nice;\n"
                "  unsigned __int32 pr_flag;\n"
                "  unsigned short int pr_uid;\n"
                "  unsigned short int pr_gid;\n"
                "  int pr_pid;\n"
                "  int pr_ppid;\n"
                "  int pr_pgrp;\n"
                "  int pr_sid;\n"
                "  char pr_fname[16]  __strlit(C,\"windows-1252\");\n"
                "  char pr_psargs[80] __strlit(C,\"windows-1252\");\n"
                "};\n";
          goto LABEL_22;
        case 8:
        case 0x19:
        case 0x1E:
          v12 = "struct elf_prpsinfo {\n"
                "  char pr_state;\n"
                "  char pr_sname;\n"
                "  char pr_zomb;\n"
                "  char pr_nice;\n"
                "  unsigned __int32 pr_flag;\n"
                "  unsigned int pr_uid;\n"
                "  unsigned int pr_gid;\n"
                "  int pr_pid;\n"
                "  int pr_ppid;\n"
                "  int pr_pgrp;\n"
                "  int pr_sid;\n"
                "  char pr_fname[16]  __strlit(C,\"windows-1252\");\n"
                "  char pr_psargs[80] __strlit(C,\"windows-1252\");\n"
                "};\n";
          if ( *(_BYTE *)(a2 + 617) )
            v12 = "struct elf_prpsinfo {\n"
                  "  char pr_state;\n"
                  "  char pr_sname;\n"
                  "  char pr_zomb;\n"
                  "  char pr_nice;\n"
                  "  unsigned __int64 pr_flag;\n"
                  "  unsigned int pr_uid;\n"
                  "  unsigned int pr_gid;\n"
                  "  int pr_pid;\n"
                  "  int pr_ppid;\n"
                  "  int pr_pgrp;\n"
                  "  int pr_sid;\n"
                  "  char pr_fname[16]  __strlit(C,\"windows-1252\");\n"
                  "  char pr_psargs[80] __strlit(C,\"windows-1252\");\n"
                  "};\n";
          goto LABEL_22;
        case 0x14:
          v12 = "struct elf_prpsinfo {\n"
                "  char pr_state;\n"
                "  char pr_sname;\n"
                "  char pr_zomb;\n"
                "  char pr_nice;\n"
                "  unsigned __int32 pr_flag;\n"
                "  unsigned int pr_uid;\n"
                "  unsigned int pr_gid;\n"
                "  int pr_pid;\n"
                "  int pr_ppid;\n"
                "  int pr_pgrp;\n"
                "  int pr_sid;\n"
                "  char pr_fname[16]  __strlit(C,\"windows-1252\");\n"
                "  char pr_psargs[80] __strlit(C,\"windows-1252\");\n"
                "};\n";
          goto LABEL_22;
        case 0x15:
          v12 = "struct elf_prpsinfo {\n"
                "  char pr_state;\n"
                "  char pr_sname;\n"
                "  char pr_zomb;\n"
                "  char pr_nice;\n"
                "  unsigned __int64 pr_flag;\n"
                "  unsigned int pr_uid;\n"
                "  unsigned int pr_gid;\n"
                "  int pr_pid;\n"
                "  int pr_ppid;\n"
                "  int pr_pgrp;\n"
                "  int pr_sid;\n"
                "  char pr_fname[16]  __strlit(C,\"windows-1252\");\n"
                "  char pr_psargs[80] __strlit(C,\"windows-1252\");\n"
                "};\n";
          goto LABEL_22;
        case 0x28:
          v12 = "struct elf_prpsinfo {\n"
                "  char pr_state;\n"
                "  char pr_sname;\n"
                "  char pr_zomb;\n"
                "  char pr_nice;\n"
                "  unsigned __int32 pr_flag;\n"
                "  unsigned short int pr_uid;\n"
                "  unsigned short int pr_gid;\n"
                "  int pr_pid;\n"
                "  int pr_ppid;\n"
                "  int pr_pgrp;\n"
                "  int pr_sid;\n"
                "  char pr_fname[16]  __strlit(C,\"windows-1252\");\n"
                "  char pr_psargs[80] __strlit(C,\"windows-1252\");\n"
                "};\n";
          goto LABEL_22;
        case 0x3E:
          v12 = "struct elf_prpsinfo {\n"
                "  char pr_state;\n"
                "  char pr_sname;\n"
                "  char pr_zomb;\n"
                "  char pr_nice;\n"
                "  unsigned __int64 pr_flag;\n"
                "  unsigned int pr_uid;\n"
                "  unsigned int pr_gid;\n"
                "  int pr_pid;\n"
                "  int pr_ppid;\n"
                "  int pr_pgrp;\n"
                "  int pr_sid;\n"
                "  char pr_fname[16]  __strlit(C,\"windows-1252\");\n"
                "  char pr_psargs[80] __strlit(C,\"windows-1252\");\n"
                "};\n";
          goto LABEL_22;
        default:
          break;
      }
    }
    *(_QWORD *)(a1 + 472) = v6;
    v13 = 0;
    if ( (unsigned __int8)get_type_by_tid(&v13) && *a3 == get_tinfo_size(0, v13, 0) )
    {
      create_data(a3[3], 1610612736, *a3, *(_QWORD *)(a1 + 472));
      clear_tinfo_t(&v13);
      return v14 - __readfsqword(0x28u);
    }
LABEL_16:
    clear_tinfo_t(&v13);
    return v14 - __readfsqword(0x28u);
  }
  set_cmt(a3[3], "Desc", 0);
  return create_data(a3[3], 0, *a3, -1);
}

