__int64 __fastcall sub_B4EC0(double a1, __m128i a2)
{
  size_t v2; // rbx
  size_t v3; // rbx
  __int64 bpt_kernel_interface; // rdi
  const char *v5; // rdx
  size_t v6; // r8
  void *v7; // rdi
  void *src; // [rsp+38h] [rbp-1088h]
  __int16 v10; // [rsp+44h] [rbp-107Ch] BYREF
  __int16 v11; // [rsp+46h] [rbp-107Ah] BYREF
  __int16 v12; // [rsp+48h] [rbp-1078h] BYREF
  __int16 v13; // [rsp+4Ah] [rbp-1076h] BYREF
  __int16 v14; // [rsp+4Ch] [rbp-1074h] BYREF
  __int16 v15; // [rsp+4Eh] [rbp-1072h] BYREF
  int v16; // [rsp+50h] [rbp-1070h]
  int v17; // [rsp+54h] [rbp-106Ch]
  __int64 v18; // [rsp+58h] [rbp-1068h]
  void *v19; // [rsp+60h] [rbp-1060h] BYREF
  __int128 v20; // [rsp+68h] [rbp-1058h]
  _BYTE v21[4104]; // [rsp+80h] [rbp-1040h] BYREF
  unsigned __int64 v22; // [rsp+1088h] [rbp-38h]

  v2 = n;
  v22 = __readfsqword(0x28u);
  v20 = 0;
  v19 = nullptr;
  if ( n )
  {
    *((_QWORD *)&v20 + 1) = n;
    v19 = (void *)qalloc_or_throw();
    memcpy(v19, qword_250AC8, v2);
    *(_QWORD *)&v20 = v2;
  }
  qstrncpy();
  v10 = dword_250AA4 & 1;
  v11 = dword_2440D8 & 0x1F;
  v12 = dword_250AA0 & 1;
  v13 = dword_250A9C & 1;
  v14 = dword_2440D4 & 1;
  v15 = (unsigned __int8)byte_2440DC;
  while ( (unsigned int)sub_8F730(
                          (__int64)"@0:1451[]\n"
                                   "Tracing options\n"
                                   "<Trace ~b~uffer size:D::18::>\n"
                                   "<#Dump a textual representation of the trace in the specified file.#Trace text ~f~ile"
                                   "  :f:1:30::>\n"
                                   "<#If an IDC condition is specified, IDA will stop the execution if this condition bec"
                                   "omes true.#S~t~op condition   :q::30::>\n"
                                   "<#Print a '=' sign in the 'Tracing' window for consecutive traced events with same th"
                                   "read and IP#Tracing window#Mark consecutive traced events with same ~I~P:C>>\n"
                                   "<#Suspend tracing the execution of instructions when IP is moved from a database segm"
                                   "ent to a debugger segments#Tracing##Trace over deb~u~gger segments:C>\n"
                                   "<#Suspend tracing the execution of instructions when IP is moved to a library functio"
                                   "n#Trace over ~l~ibrary functions:C>\n"
                                   "<#Do not add an entry in the 'Tracing' window for an already traced (and visible in t"
                                   "he window) IP#Do ~n~ot log already logged IP:C>\n"
                                   "<#Do not log every step in loops#Ski~p~ loops:C>\n"
                                   "<#Only new instructions (not previously recorded at any time during the life of the d"
                                   "ebugged process) are added to the trace#Only ~a~dd new instructions:C>>\n"
                                   "<#Recorded instructions will be highlighted in IDA views#Highlight##~H~ighlight instr"
                                   "uctions in IDA views:C>>\n"
                                   "<#Log instructions even if same IP (useful to step into instructions with a prefix li"
                                   "ke 'rep', ...)#Instruction tracing##Log if ~s~ame IP:C>>\n"
                                   "<#Amount of memory in bytes to save#Amount of ~m~emory to save:D::5::>\n"
                                   "<#Log all instructions in the current basic block or function#Basic block and Functio"
                                   "n tracing##Lo~g~ internal instructions:C>>\n"
                                   "<#Log instructions returning from a function#Function tracing##Log ~r~eturn instructions:C>>\n\n",
                          &dword_250A54,
                          v21,
                          &v19,
                          &v10,
                          &v11,
                          &v15,
                          &v12,
                          &dword_250A50,
                          &v13,
                          &v14) )
  {
    if ( (unsigned int)dword_250A50 > 0x400 )
    {
      sub_92120((__int64)"Sorry, no more than %d bytes of memory can be saved.", 1024);
    }
    else
    {
      v16 = dword_250A50;
      v18 = 1;
      if ( dbg && (unsigned int)sub_9E0A0() )
        sub_9E0A0();
      v3 = n;
      src = nullptr;
      if ( n )
      {
        src = (void *)qalloc_or_throw();
        memcpy(src, qword_250AC8, v3);
      }
      bpt_kernel_interface = get_bpt_kernel_interface();
      v5 = s1;
      if ( (_QWORD)v20 )
        v5 = (const char *)v19;
      (*(void (__fastcall **)(__int64, __int64 *, const char *))(*(_QWORD *)bpt_kernel_interface + 96LL))(
        bpt_kernel_interface,
        &qword_250AC0,
        v5);
      if ( (unsigned __int8)sub_98930((__int64)&qword_250AC0, qword_251700, (__int64)"trace") )
      {
        if ( src )
          qfree();
        v18 = 1;
        byte_2440DC = v15 != 0;
        dword_250AA4 = v10 & 1;
        v17 = v10 & 1;
        if ( dbg && (unsigned int)sub_9E0A0() )
          sub_9E0A0();
        sub_A3BD0(v11 & 0x1F);
        sub_A3D70(v12 & 1);
        sub_A3CB0(v13 & 1);
        sub_A3E40(v14 & 1);
        if ( dword_250A54 >= 0 )
          sub_B4DE0(dword_250A54, 0.0, a2);
        sub_9C320((__int64)&qword_251008, v21);
        if ( qword_250FE0 )
          qfclose();
        qword_250FE0 = 0;
        sub_A39F0();
        mark_builtin_widgets();
        break;
      }
      if ( v3 && (v6 = v3 - 1, v3 != 1) )
      {
        v7 = qword_250AC8;
        if ( *(&n + 1) < v3 )
        {
          qword_250AC8 = (void *)qvector_reserve();
          v6 = v3 - 1;
          v7 = qword_250AC8;
        }
        n = v3;
        memmove(v7, src, v6);
        *((char *)qword_250AC8 + v3 - 1) = 0;
      }
      else
      {
        n = 0;
      }
      if ( src )
        qfree();
    }
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  return 1;
}

