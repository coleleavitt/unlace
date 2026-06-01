__int64 __fastcall sub_D4880(__int64 a1, int a2)
{
  char v2; // bp
  __int64 v3; // r13
  unsigned int v4; // r12d
  int v6; // r14d
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // ecx
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // rsi
  int v17; // r8d
  unsigned int v18; // r8d
  __int64 v19; // rsi
  _DWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _DWORD *v23; // rdi
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rsi
  int v27; // edi
  __int64 v28; // rcx
  _DWORD *v29; // rax
  _QWORD *v30; // rax
  int v31; // eax
  int v32; // eax
  __int64 v33; // [rsp+0h] [rbp-1B8h]
  unsigned int v34; // [rsp+0h] [rbp-1B8h]
  unsigned int v35; // [rsp+8h] [rbp-1B0h]
  char v36; // [rsp+8h] [rbp-1B0h]
  int v37; // [rsp+8h] [rbp-1B0h]
  _BYTE v38[320]; // [rsp+38h] [rbp-180h] BYREF
  _QWORD v39[8]; // [rsp+178h] [rbp-40h] BYREF

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 240);
  v39[0] = __readfsqword(0x28u);
  if ( !v3 )
  {
    v6 = (a2 >> 12) & 0xF;
    if ( (unsigned int)(v6 - 1) > 8 )
    {
      if ( under_debugger )
        goto LABEL_75;
      interr();
LABEL_72:
      if ( !under_debugger )
      {
        interr();
        return v18;
      }
LABEL_75:
      BUG();
    }
    if ( v6 != 1 )
    {
      v8 = *(unsigned __int16 *)(dbg + 82LL);
      if ( !_bittest(&v8, v6 - 1) )
        return 0;
    }
    v4 = sub_CF0F0(v6 == 9);
    if ( v4 != 1 )
      return v4;
    v9 = operator new(0x20u);
    *(_DWORD *)v9 = a2;
    v10 = v9;
    *(_DWORD *)(v9 + 4) = 0;
    *(_QWORD *)(v9 + 8) = 0;
    *(_QWORD *)(v9 + 16) = -1;
    *(_BYTE *)(v9 + 24) = 0;
    v11 = *(_QWORD *)(dbg + 32LL);
    if ( (v11 & 0x8000000000LL) == 0 )
    {
      if ( v6 != 1 )
      {
        if ( !v9 )
          return 0;
        v4 = 0;
LABEL_36:
        operator delete((void *)v10, 0x20u);
        return v4;
      }
      goto LABEL_12;
    }
    v36 = 0;
    v33 = -1;
    if ( v6 != 1 )
      goto LABEL_38;
    v26 = *(_QWORD *)(a1 + 40);
    if ( !v26 )
      goto LABEL_66;
    v27 = dword_245174;
    v28 = *(_QWORD *)(v26 + 32LL * dword_245174 + 8);
    v33 = v28;
    if ( !dbg )
      goto LABEL_55;
    if ( (v11 & 0x400000000000LL) == 0 )
      goto LABEL_55;
    v29 = qword_252758;
    if ( !qword_252758 )
      goto LABEL_55;
    *((_QWORD *)qword_252758 + 1) = v26;
    v29[4] = v27;
    *(_QWORD *)v29 = v28;
    if ( (unsigned int)sub_CDCF0((__int64)v29, 11) == 1 )
      v33 = *(_QWORD *)qword_252758;
    else
LABEL_66:
      v33 = -1;
LABEL_55:
    v30 = v38;
    do
    {
      *(_WORD *)v30 = 0;
      v30 += 5;
      *((_WORD *)v30 - 19) = 0;
      *((_WORD *)v30 - 18) = 0;
      *((_DWORD *)v30 - 2) = 0;
      *((_WORD *)v30 - 17) = 0;
      *((_OWORD *)v30 - 2) = 0;
      *(v30 - 2) = 0;
    }
    while ( v39 != v30 );
    if ( (int)decode_insn() > 0 )
    {
      v31 = sub_9E360();
      if ( v31 == 1 )
      {
        *(_BYTE *)(v10 + 24) = 1;
      }
      else if ( v31 == 2 )
      {
        if ( (v2 & 8) != 0 )
          goto LABEL_46;
        v32 = sub_C0990(
                (__int64)"~R~un",
                (__int64)"~S~ingle step",
                (__int64)"Suspend",
                0xFFFFFFFF,
                (__int64)"AUTOHIDE REGISTRY\n"
                         "The instruction at %a will generate an exception.\n"
                         "If you choose \"Run\", IDA will resume the application without setting the trace bit,\n"
                         "and a regular exception will be generated. This corresponds\n"
                         "to the application behaviour without a debugger (if the exception\n"
                         "is not masked by the debugger).\n"
                         "\n"
                         "If you choose \"Single step\", IDA will single step but the exception will not be generated.\n"
                         "\n"
                         "Depending on the exception handling settings, selecting \"Run\" may\n"
                         "lead to automatic execution of the application's exception handler.\n"
                         "The control of the application might be lost.\n",
                0.0);
        v18 = v32;
        if ( v32 )
        {
          if ( v32 <= 0 )
            goto LABEL_24;
          v4 = v32;
          goto LABEL_46;
        }
      }
    }
    v36 = 1;
LABEL_38:
    v23 = qword_252758;
    *(_DWORD *)qword_252758 = *(_DWORD *)a1;
    v23[1] = v6;
    v24 = sub_CDCF0((__int64)v23, 15);
    if ( v24 != 1 )
    {
      v18 = -1;
      if ( v24 == -1 )
      {
        v18 = 0;
        if ( v6 == 1 )
        {
          if ( v36 )
            goto LABEL_18;
LABEL_12:
          v12 = *(_QWORD *)(a1 + 40);
          if ( v12 )
          {
            v13 = dword_245174;
            v33 = *(_QWORD *)(v12 + 32LL * dword_245174 + 8);
            if ( !dbg || (*(_BYTE *)(dbg + 37LL) & 0x40) == 0 || (v14 = qword_252758) == nullptr )
            {
LABEL_18:
              v15 = v38;
              do
              {
                *(_WORD *)v15 = 0;
                v15 += 5;
                *((_WORD *)v15 - 19) = 0;
                *((_WORD *)v15 - 18) = 0;
                *((_DWORD *)v15 - 2) = 0;
                *((_WORD *)v15 - 17) = 0;
                *((_OWORD *)v15 - 2) = 0;
                *(v15 - 2) = 0;
              }
              while ( v15 != v39 );
              v16 = v33;
              v17 = decode_insn();
              if ( v17 > 0 )
              {
                v25 = sub_D1F80(*(_QWORD *)(a1 + 40), 1);
                if ( v25 != -1 )
                  v33 = v25;
                v16 = v33;
                *(_DWORD *)(v10 + 4) = *(_DWORD *)a1;
                v17 = sub_CE160(a1, v33, 8, (__int64 *)(v10 + 8), 0, 0);
                if ( v17 )
                  goto LABEL_46;
              }
              if ( (v2 & 8) == 0 )
              {
                v37 = v17;
                sub_92200(
                  (__int64)"AUTOHIDE REGISTRY\n"
                           "IDA could not create a temporary breakpoint for the\n"
                           "next instruction. A temporary breakpoint is required in\n"
                           "order to suspend the execution after a step. Please use\n"
                           "F9 to continue the execution. If you have a breakpoint at\n"
                           "the current address, please remove it before continuing.",
                  v16,
                  0.0);
                v17 = v37;
              }
              v35 = v17;
              sub_8F740((__int64)"%a: could not set temporary breakpoint: did not continue execution\n", 0.0);
              v18 = v35;
              goto LABEL_24;
            }
            *(_QWORD *)qword_252758 = *(_QWORD *)(v12 + 32LL * dword_245174 + 8);
            v14[1] = v12;
            *((_DWORD *)v14 + 4) = v13;
            if ( (unsigned int)sub_CDCF0((__int64)v14, 11) == 1 )
            {
              v33 = *(_QWORD *)qword_252758;
              goto LABEL_18;
            }
          }
          v33 = -1;
          goto LABEL_18;
        }
      }
LABEL_24:
      if ( !v10 )
        return v18;
      v19 = *(_QWORD *)(v10 + 8);
      if ( !v19 )
      {
LABEL_35:
        v4 = v18;
        goto LABEL_36;
      }
      v20 = sub_C6150(*(_DWORD *)(v10 + 4));
      if ( v20 )
      {
        v21 = *((_QWORD *)v20 + 31);
        if ( v21 )
        {
          while ( 1 )
          {
            v22 = *(_QWORD *)(v21 + 8);
            if ( v21 == v19 )
              break;
            v3 = v21;
            if ( !v22 )
              goto LABEL_35;
            v21 = *(_QWORD *)(v21 + 8);
          }
          if ( v3 )
            *(_QWORD *)(v3 + 8) = v22;
          else
            *((_QWORD *)v20 + 31) = v22;
          v34 = v18;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          v18 = v34;
        }
        goto LABEL_35;
      }
      goto LABEL_72;
    }
LABEL_46:
    *(_QWORD *)(a1 + 240) = v10;
    return v4;
  }
  v4 = 1;
  if ( a2 != *(_DWORD *)v3 )
  {
    sub_8F740(
      (__int64)"Thread %d is already single stepping. Please run it to complete the single step operation\n",
      dword_252588);
    return 0;
  }
  return v4;
}

