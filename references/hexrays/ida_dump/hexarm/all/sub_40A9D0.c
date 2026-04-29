__int64 __fastcall sub_40A9D0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // r13
  __int64 v26; // r12
  __int64 *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rbp
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rbp
  __int64 v41; // rcx
  __int64 idati; // [rsp+10h] [rbp-78h] BYREF
  __int128 v44; // [rsp+18h] [rbp-70h]
  __int64 v45; // [rsp+28h] [rbp-60h]
  __int128 v46; // [rsp+30h] [rbp-58h]
  int v47; // [rsp+40h] [rbp-48h]
  char v48; // [rsp+44h] [rbp-44h]
  unsigned __int64 v49; // [rsp+48h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  if ( a3 < 0 && (_BYTE)a2 )
  {
    v4 = a1 + 8;
    if ( !*(_BYTE *)(a1 + 8) )
    {
      parse_decls(0, "struct mach_port_options_t;", sub_6CAE0, 0);
      parse_decls(
        0,
        "enum svc_codes_t { MACHDEP_SYSCALL_TRAP = 0x80000000, IOKIT_USER_CLIENT_TRAP = 0xffffff9c, MK_TIMER_CANCEL_TRAP "
        "= 0xffffffa2, MK_TIMER_ARM_TRAP = 0xffffffa3, MK_TIMER_DESTROY_TRAP = 0xffffffa4, MK_TIMER_CREATE_TRAP = 0xfffff"
        "fa5, MACH_WAIT_UNTIL_TRAP = 0xffffffa6, MACH_TIMEBASE_INFO_TRAP = 0xffffffa7, CLOCK_SLEEP_TRAP = 0xffffffc2, THR"
        "EAD_SWITCH_TRAP = 0xffffffc3, SWTCH_TRAP = 0xffffffc4, SWTCH_PRI_TRAP = 0xffffffc5, MACX_BACKING_STORE_RECOVERY_"
        "TRAP = 0xffffffcb, MACX_BACKING_STORE_SUSPEND_TRAP = 0xffffffcc, MACX_TRIGGERS_TRAP = 0xffffffcd, MACX_SWAPOFF_T"
        "RAP = 0xffffffcf, MACX_SWAPON_TRAP = 0xffffffd0, PID_FOR_TASK_TRAP = 0xffffffd2, TASK_FOR_PID_TRAP = 0xffffffd3,"
        " TASK_NAME_FOR_PID_TRAP = 0xffffffd4, MAP_FD_TRAP = 0xffffffd5, KERNELRPC_MACH_PORT_UNGUARD_TRAP = 0xffffffd6, K"
        "ERNELRPC_MACH_PORT_GUARD_TRAP = 0xffffffd7, SEMAPHORE_TIMEDWAIT_SIGNAL_TRAP = 0xffffffd9, SEMAPHORE_TIMEDWAIT_TR"
        "AP = 0xffffffda, SEMAPHORE_WAIT_SIGNAL_TRAP = 0xffffffdb, SEMAPHORE_WAIT_TRAP = 0xffffffdc, SEMAPHORE_SIGNAL_THR"
        "EAD_TRAP = 0xffffffdd, SEMAPHORE_SIGNAL_ALL_TRAP = 0xffffffde, SEMAPHORE_SIGNAL_TRAP = 0xffffffdf, MACH_MSG_OVER"
        "WRITE_TRAP = 0xffffffe0, MACH_MSG_TRAP = 0xffffffe1, HOST_SELF_TRAP = 0xffffffe3, TASK_SELF_TRAP = 0xffffffe4, T"
        "HREAD_SELF_TRAP = 0xffffffe5, MACH_REPLY_PORT_TRAP = 0xffffffe6, KERNELRPC_MACH_PORT_DESTRUCT_TRAP = 0xffffffe7,"
        " KERNELRPC_MACH_PORT_CONSTRUCT_TRAP = 0xffffffe8, KERNELRPC_MACH_PORT_EXTRACT_MEMBER_TRAP = 0xffffffe9, KERNELRP"
        "C_MACH_PORT_INSERT_MEMBER_TRAP = 0xffffffea, KERNELRPC_MACH_PORT_INSERT_RIGHT_TRAP = 0xffffffeb, KERNELRPC_MACH_"
        "PORT_MOVE_MEMBER_TRAP = 0xffffffec, KERNELRPC_MACH_PORT_MOD_REFS_TRAP = 0xffffffed, KERNELRPC_MACH_PORT_DEALLOCA"
        "TE_TRAP = 0xffffffee, KERNELRPC_MACH_PORT_DESTROY_TRAP = 0xffffffef, KERNELRPC_MACH_PORT_ALLOCATE_TRAP = 0xfffff"
        "ff0, KERNELRPC_MACH_VM_MAP_TRAP = 0xfffffff1, KERNELRPC_MACH_VM_PROTECT_TRAP = 0xfffffff2, KERNELRPC_MACH_VM_DEA"
        "LLOCATE_TRAP = 0xfffffff4, KERNELRPC_MACH_VM_ALLOCATE_TRAP = 0xfffffff6, MACH_ABSOLUTE_TIME_TRAP = 0xfffffffd, };",
        sub_6CAE0,
        0);
      WORD4(v44) = 256;
      *(_QWORD *)&v44 = "svc_codes_t";
      idati = get_idati(
                0,
                "enum svc_codes_t { MACHDEP_SYSCALL_TRAP = 0x80000000, IOKIT_USER_CLIENT_TRAP = 0xffffff9c, MK_TIMER_CANC"
                "EL_TRAP = 0xffffffa2, MK_TIMER_ARM_TRAP = 0xffffffa3, MK_TIMER_DESTROY_TRAP = 0xffffffa4, MK_TIMER_CREAT"
                "E_TRAP = 0xffffffa5, MACH_WAIT_UNTIL_TRAP = 0xffffffa6, MACH_TIMEBASE_INFO_TRAP = 0xffffffa7, CLOCK_SLEE"
                "P_TRAP = 0xffffffc2, THREAD_SWITCH_TRAP = 0xffffffc3, SWTCH_TRAP = 0xffffffc4, SWTCH_PRI_TRAP = 0xffffff"
                "c5, MACX_BACKING_STORE_RECOVERY_TRAP = 0xffffffcb, MACX_BACKING_STORE_SUSPEND_TRAP = 0xffffffcc, MACX_TR"
                "IGGERS_TRAP = 0xffffffcd, MACX_SWAPOFF_TRAP = 0xffffffcf, MACX_SWAPON_TRAP = 0xffffffd0, PID_FOR_TASK_TR"
                "AP = 0xffffffd2, TASK_FOR_PID_TRAP = 0xffffffd3, TASK_NAME_FOR_PID_TRAP = 0xffffffd4, MAP_FD_TRAP = 0xff"
                "ffffd5, KERNELRPC_MACH_PORT_UNGUARD_TRAP = 0xffffffd6, KERNELRPC_MACH_PORT_GUARD_TRAP = 0xffffffd7, SEMA"
                "PHORE_TIMEDWAIT_SIGNAL_TRAP = 0xffffffd9, SEMAPHORE_TIMEDWAIT_TRAP = 0xffffffda, SEMAPHORE_WAIT_SIGNAL_T"
                "RAP = 0xffffffdb, SEMAPHORE_WAIT_TRAP = 0xffffffdc, SEMAPHORE_SIGNAL_THREAD_TRAP = 0xffffffdd, SEMAPHORE"
                "_SIGNAL_ALL_TRAP = 0xffffffde, SEMAPHORE_SIGNAL_TRAP = 0xffffffdf, MACH_MSG_OVERWRITE_TRAP = 0xffffffe0,"
                " MACH_MSG_TRAP = 0xffffffe1, HOST_SELF_TRAP = 0xffffffe3, TASK_SELF_TRAP = 0xffffffe4, THREAD_SELF_TRAP "
                "= 0xffffffe5, MACH_REPLY_PORT_TRAP = 0xffffffe6, KERNELRPC_MACH_PORT_DESTRUCT_TRAP = 0xffffffe7, KERNELR"
                "PC_MACH_PORT_CONSTRUCT_TRAP = 0xffffffe8, KERNELRPC_MACH_PORT_EXTRACT_MEMBER_TRAP = 0xffffffe9, KERNELRP"
                "C_MACH_PORT_INSERT_MEMBER_TRAP = 0xffffffea, KERNELRPC_MACH_PORT_INSERT_RIGHT_TRAP = 0xffffffeb, KERNELR"
                "PC_MACH_PORT_MOVE_MEMBER_TRAP = 0xffffffec, KERNELRPC_MACH_PORT_MOD_REFS_TRAP = 0xffffffed, KERNELRPC_MA"
                "CH_PORT_DEALLOCATE_TRAP = 0xffffffee, KERNELRPC_MACH_PORT_DESTROY_TRAP = 0xffffffef, KERNELRPC_MACH_PORT"
                "_ALLOCATE_TRAP = 0xfffffff0, KERNELRPC_MACH_VM_MAP_TRAP = 0xfffffff1, KERNELRPC_MACH_VM_PROTECT_TRAP = 0"
                "xfffffff2, KERNELRPC_MACH_VM_DEALLOCATE_TRAP = 0xfffffff4, KERNELRPC_MACH_VM_ALLOCATE_TRAP = 0xfffffff6,"
                " MACH_ABSOLUTE_TIME_TRAP = 0xfffffffd, };",
                v5,
                256);
      create_tinfo(v4, 45, 61, &idati);
    }
    return v4;
  }
  if ( *(_BYTE *)(a1 + 16) )
  {
LABEL_8:
    v9 = *(int *)(a1 + 56);
    if ( (_DWORD)v9 != -1 )
      goto LABEL_9;
    goto LABEL_10;
  }
  v6 = *(int *)(a1 + 48);
  *(_DWORD *)(a1 + 56) = -1;
  v7 = (unsigned int)(v6 + 1);
  v8 = a1 + 8 * v6 + 16;
  if ( (_BYTE)a2 )
  {
    *(_DWORD *)(a1 + 48) = v7;
    WORD4(v44) = 256;
    *(_QWORD *)&v44 = "MACRO_SYS";
    idati = get_idati(a1, a2, 256, a1);
    create_tinfo(v8, 45, 61, &idati);
    goto LABEL_8;
  }
  *(_QWORD *)&v44 = "MACRO___NR";
  *(_DWORD *)(a1 + 48) = v7;
  WORD4(v44) = 256;
  v30 = get_idati(a1, a2, v7, a1);
  v31 = v8;
  idati = v30;
  create_tinfo(v8, 45, 61, &idati);
  v32 = *(int *)(a1 + 48);
  WORD4(v44) = 256;
  v33 = (unsigned int)(v32 + 1);
  v34 = a1 + 8 * v32 + 16;
  *(_DWORD *)(a1 + 48) = v33;
  *(_QWORD *)&v44 = "MACRO___NR_madvise1";
  v36 = get_idati(v31, 45, v33, v35);
  v37 = v34;
  idati = v36;
  create_tinfo(v34, 45, 61, &idati);
  v38 = *(int *)(a1 + 48);
  WORD4(v44) = 256;
  v39 = (unsigned int)(v38 + 1);
  v40 = a1 + 8 * v38 + 16;
  *(_DWORD *)(a1 + 48) = v39;
  *(_QWORD *)&v44 = "MACRO_SYS";
  idati = get_idati(v37, 45, v39, v41);
  create_tinfo(v40, 45, 61, &idati);
  v9 = *(int *)(a1 + 56);
  if ( (_DWORD)v9 != -1 )
  {
LABEL_9:
    v4 = a1 + 8 * v9 + 16;
    if ( *(_DWORD *)(a1 + 52) == a3 )
      return v4;
  }
LABEL_10:
  v10 = 0;
  if ( *(int *)(a1 + 48) <= 0 )
    return a1 + 40;
  while ( 1 )
  {
    idati = 0;
    v11 = *(_QWORD *)(a1 + 8 * v10 + 16);
    v47 = 0;
    v45 = 0;
    v48 = 0x80;
    v44 = 0;
    v46 = 0;
    if ( (unsigned __int8)get_tinfo_details(v11, 45, &idati) )
    {
      v20 = idati;
      v21 = idati + 56 * v44;
      if ( idati != v21 )
      {
        v22 = idati;
        while ( a3 != *(_DWORD *)(v22 + 48) )
        {
          v22 += 56;
          if ( v22 == v21 )
            goto LABEL_12;
        }
        if ( v21 != v22 )
          break;
      }
    }
LABEL_12:
    if ( v45 )
    {
      *(_QWORD *)&v46 = 0;
      qfree(v45);
    }
    v12 = idati;
    if ( idati )
    {
      v13 = v44;
      if ( (_QWORD)v44 )
      {
        v14 = 0;
        v15 = 0;
        do
        {
          v16 = (__int64 *)(v12 + v14);
          v17 = *(_QWORD *)(v12 + v14 + 24);
          if ( v17 )
          {
            v16[4] = 0;
            qfree(v17);
          }
          v18 = *v16;
          if ( *v16 )
          {
            v16[1] = 0;
            qfree(v18);
          }
          ++v15;
          v12 = idati;
          v14 += 56;
        }
        while ( v13 != v15 );
      }
      *(_QWORD *)&v44 = 0;
      qfree(v12);
    }
    if ( *(_DWORD *)(a1 + 48) <= (int)++v10 )
      return a1 + 40;
  }
  v4 = a1 + 8LL * ((int)v10 + 2);
  v23 = v45;
  *(_DWORD *)(a1 + 52) = a3;
  *(_DWORD *)(a1 + 56) = v10;
  if ( v23 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v23);
    v20 = idati;
  }
  if ( v20 )
  {
    v24 = v44;
    if ( (_QWORD)v44 )
    {
      v25 = 0;
      v26 = 0;
      do
      {
        v27 = (__int64 *)(v20 + v25);
        v28 = *(_QWORD *)(v20 + v25 + 24);
        if ( v28 )
        {
          v27[4] = 0;
          qfree(v28);
        }
        v29 = *v27;
        if ( *v27 )
        {
          v27[1] = 0;
          qfree(v29);
        }
        ++v26;
        v20 = idati;
        v25 += 56;
      }
      while ( v24 != v26 );
    }
    *(_QWORD *)&v44 = 0;
    qfree(v20);
  }
  return v4;
}
