__int64 __fastcall sub_224A80(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __m128 v8; // xmm0
  size_t v9; // rbx
  const char *v10; // rsi
  __m128 v11; // xmm4
  __m128 v12; // xmm5
  const char *v13; // rsi
  const char *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  __int64 v21; // rbx
  size_t v22; // rbx
  __int64 bpt_kernel_interface; // rdi
  const char *v24; // rdx
  const char *v25; // rsi
  double v26; // xmm4_8
  double v27; // xmm5_8
  __int64 v28; // rdx
  __int64 v29; // rcx
  size_t v30; // r8
  char *v31; // rax
  void *v32; // rdi
  __int64 v33; // rbx
  char v35; // [rsp+0h] [rbp-10D0h]
  const char *src; // [rsp+38h] [rbp-1098h]
  __int16 v37; // [rsp+4Ch] [rbp-1084h] BYREF
  __int16 v38; // [rsp+4Eh] [rbp-1082h] BYREF
  __int16 v39; // [rsp+50h] [rbp-1080h]
  __int16 v40; // [rsp+52h] [rbp-107Eh]
  __int16 v41; // [rsp+54h] [rbp-107Ch]
  __int16 v42; // [rsp+56h] [rbp-107Ah] BYREF
  __int64 v43; // [rsp+58h] [rbp-1078h] BYREF
  __int64 v44; // [rsp+60h] [rbp-1070h] BYREF
  __int64 v45; // [rsp+68h] [rbp-1068h] BYREF
  void *v46; // [rsp+70h] [rbp-1060h] BYREF
  __int128 v47; // [rsp+78h] [rbp-1058h]
  _BYTE v48[4104]; // [rsp+90h] [rbp-1040h] BYREF
  unsigned __int64 v49; // [rsp+1098h] [rbp-38h]

  v8 = 0;
  v9 = n;
  v49 = __readfsqword(0x28u);
  v47 = 0;
  v46 = nullptr;
  if ( n )
  {
    *((_QWORD *)&v47 + 1) = n;
    v46 = (void *)qalloc_or_throw(n);
    memcpy(v46, qword_8CB6C8, v9);
    *(_QWORD *)&v47 = v9;
  }
  v10 = &s1;
  if ( qword_8CBC70 )
    v10 = (const char *)qword_8CBC68;
  qstrncpy(v48, v10, 4096);
  v37 = dword_8CB6A4 & 1;
  v38 = dword_8BA504 & 0x1F;
  v39 = dword_8CB6A0 & 1;
  v40 = dword_8CB69C & 1;
  v41 = dword_8BA500 & 1;
  v42 = (unsigned __int8)byte_8BA508;
  while ( 1 )
  {
    v13 = (const char *)&qword_8CB658;
    v14 = "@0:1451[]\n"
          "Tracing options\n"
          "<Trace ~b~uffer size:D::18::>\n"
          "<#Dump a textual representation of the trace in the specified file.#Trace text ~f~ile  :f:1:30::>\n"
          "<#If an IDC condition is specified, IDA will stop the execution if this condition becomes true.#S~t~op conditi"
          "on   :q::30::>\n"
          "<#Print a '=' sign in the 'Tracing' window for consecutive traced events with same thread and IP#Tracing windo"
          "w#Mark consecutive traced events with same ~I~P:C>>\n"
          "<#Suspend tracing the execution of instructions when IP is moved from a database segment to a debugger segment"
          "s#Tracing##Trace over deb~u~gger segments:C>\n"
          "<#Suspend tracing the execution of instructions when IP is moved to a library function#Trace over ~l~ibrary fu"
          "nctions:C>\n"
          "<#Do not add an entry in the 'Tracing' window for an already traced (and visible in the window) IP#Do ~n~ot lo"
          "g already logged IP:C>\n"
          "<#Do not log every step in loops#Ski~p~ loops:C>\n"
          "<#Only new instructions (not previously recorded at any time during the life of the debugged process) are adde"
          "d to the trace#Only ~a~dd new instructions:C>>\n"
          "<#Recorded instructions will be highlighted in IDA views#Highlight##~H~ighlight instructions in IDA views:C>>\n"
          "<#Log instructions even if same IP (useful to step into instructions with a prefix like 'rep', ...)#Instructio"
          "n tracing##Log if ~s~ame IP:C>>\n"
          "<#Amount of memory in bytes to save#Amount of ~m~emory to save:D::5::>\n"
          "<#Log all instructions in the current basic block or function#Basic block and Function tracing##Lo~g~ internal"
          " instructions:C>>\n"
          "<#Log instructions returning from a function#Function tracing##Log ~r~eturn instructions:C>>\n"
          "\n";
    if ( !(unsigned int)sub_1697D0(
                          (int)"@0:1451[]\n"
                               "Tracing options\n"
                               "<Trace ~b~uffer size:D::18::>\n"
                               "<#Dump a textual representation of the trace in the specified file.#Trace text ~f~ile  :f"
                               ":1:30::>\n"
                               "<#If an IDC condition is specified, IDA will stop the execution if this condition becomes"
                               " true.#S~t~op condition   :q::30::>\n"
                               "<#Print a '=' sign in the 'Tracing' window for consecutive traced events with same thread"
                               " and IP#Tracing window#Mark consecutive traced events with same ~I~P:C>>\n"
                               "<#Suspend tracing the execution of instructions when IP is moved from a database segment "
                               "to a debugger segments#Tracing##Trace over deb~u~gger segments:C>\n"
                               "<#Suspend tracing the execution of instructions when IP is moved to a library function#Tr"
                               "ace over ~l~ibrary functions:C>\n"
                               "<#Do not add an entry in the 'Tracing' window for an already traced (and visible in the w"
                               "indow) IP#Do ~n~ot log already logged IP:C>\n"
                               "<#Do not log every step in loops#Ski~p~ loops:C>\n"
                               "<#Only new instructions (not previously recorded at any time during the life of the debug"
                               "ged process) are added to the trace#Only ~a~dd new instructions:C>>\n"
                               "<#Recorded instructions will be highlighted in IDA views#Highlight##~H~ighlight instructi"
                               "ons in IDA views:C>>\n"
                               "<#Log instructions even if same IP (useful to step into instructions with a prefix like '"
                               "rep', ...)#Instruction tracing##Log if ~s~ame IP:C>>\n"
                               "<#Amount of memory in bytes to save#Amount of ~m~emory to save:D::5::>\n"
                               "<#Log all instructions in the current basic block or function#Basic block and Function tr"
                               "acing##Lo~g~ internal instructions:C>>\n"
                               "<#Log instructions returning from a function#Function tracing##Log ~r~eturn instructions:C>>\n\n",
                          (__int64)&qword_8CB658,
                          (__int64)v48,
                          (__int64)&v46,
                          (__int64)&v37,
                          (__int64)&v38,
                          v8,
                          a2,
                          a3,
                          a4,
                          v11,
                          v12,
                          a7,
                          a8,
                          (char)&v42) )
      break;
    if ( (unsigned __int64)qword_8CB650 > 0x400 )
    {
      sub_169630(
        (int)"Sorry, no more than %d bytes of memory can be saved.",
        1024,
        v15,
        v16,
        v17,
        v18,
        v8,
        a2,
        a3,
        a4,
        v19,
        v20,
        a7,
        a8,
        v35);
    }
    else
    {
      v43 = qword_8CB650;
      v45 = 1;
      v21 = dbg;
      if ( dbg )
      {
        v13 = (_BYTE *)(&qword_28 + 4);
        v14 = (const char *)dbg;
        if ( (unsigned int)sub_20CEA0(dbg, 44, 0, " ", 0, 0, 0) )
        {
          v14 = (const char *)v21;
          v13 = (_BYTE *)(&qword_28 + 4);
          sub_20CEA0(v21, 44, &v45, "TracingMemorySize", 1, 2, &v43);
        }
      }
      v22 = n;
      src = nullptr;
      if ( n )
      {
        v31 = (char *)qalloc_or_throw(n);
        v13 = (const char *)qword_8CB6C8;
        v14 = v31;
        src = v31;
        memcpy(v31, qword_8CB6C8, v22);
      }
      bpt_kernel_interface = get_bpt_kernel_interface(v14, v13);
      v24 = &s1;
      if ( (_QWORD)v47 )
        v24 = (const char *)v46;
      *(double *)v8.m128_u64 = (*(double (__fastcall **)(__int64, __int64 *, const char *))(*(_QWORD *)bpt_kernel_interface
                                                                                          + 96LL))(
                                 bpt_kernel_interface,
                                 &qword_8CB6C0,
                                 v24);
      v25 = (const char *)xmmword_8CC810;
      if ( (unsigned __int8)sub_19CE20(
                              (__int64)&qword_8CB6C0,
                              (const char *)xmmword_8CC810,
                              (__int64)"trace",
                              *(double *)v8.m128_u64,
                              a2,
                              a3,
                              a4,
                              v26,
                              v27,
                              a7,
                              a8) )
      {
        if ( src )
          *(double *)v8.m128_u64 = qfree(src, v25);
        v45 = 1;
        v33 = dbg;
        byte_8BA508 = v42 != 0;
        v44 = v37 & 1;
        dword_8CB6A4 = v37 & 1;
        if ( dbg && (unsigned int)sub_20CEA0(dbg, 44, 0, " ", 0, 0, *(double *)v8.m128_u64, 0) )
          sub_20CEA0(v33, 44, &v45, "TracingWindowOpt", 1, 2, &v44);
        sub_212950(v38 & 0x1F);
        sub_212AF0(v39 & 1);
        sub_212A30(v40 & 1);
        sub_212BC0(v41 & 1);
        if ( (int)qword_8CB658 >= 0 )
          sub_224990(qword_8CB658, *(double *)v8.m128_u64, (__m128i)a2);
        sub_20B400(&qword_8CBC68, v48);
        if ( qword_8CBC40 )
          qfclose(qword_8CBC40);
        qword_8CBC40 = 0;
        sub_212770(*(double *)v8.m128_u64);
        v13 = nullptr;
        mark_builtin_widgets(&stru_10000, 0, 1);
        break;
      }
      if ( v22 && (v30 = v22 - 1, v22 != 1) )
      {
        v32 = qword_8CB6C8;
        if ( *(&n + 1) < v22 )
        {
          qword_8CB6C8 = (void *)qvector_reserve(&qword_8CB6C8, qword_8CB6C8, v22, 1);
          v30 = v22 - 1;
          v32 = qword_8CB6C8;
        }
        v25 = src;
        n = v22;
        memmove(v32, src, v30);
        *((char *)qword_8CB6C8 + v22 - 1) = 0;
      }
      else
      {
        n = 0;
      }
      if ( src )
        *(double *)v8.m128_u64 = qfree(src, v25, v28, v29, v30);
    }
  }
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46, v13);
  }
  return 1;
}
