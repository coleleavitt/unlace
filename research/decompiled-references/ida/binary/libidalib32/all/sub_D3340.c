__int64 __fastcall sub_D3340(__int64 a1, int a2, double a3)
{
  char v3; // bp
  __int64 v4; // r13
  unsigned int v5; // r12d
  int v7; // r14d
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rsi
  _QWORD *v16; // rdi
  _QWORD *v17; // rax
  __int64 v18; // rsi
  int v19; // r8d
  unsigned int v20; // r8d
  __int64 v21; // rsi
  _DWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _DWORD *v25; // rdi
  int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rsi
  int v29; // edi
  __int64 v30; // rcx
  _DWORD *v31; // rax
  _QWORD *v32; // rax
  int v33; // eax
  int v34; // eax
  unsigned int v35; // [rsp+4h] [rbp-124h]
  unsigned int v36; // [rsp+4h] [rbp-124h]
  unsigned int v37; // [rsp+8h] [rbp-120h]
  char v38; // [rsp+8h] [rbp-120h]
  int v39; // [rsp+8h] [rbp-120h]
  _BYTE v40[192]; // [rsp+28h] [rbp-100h] BYREF
  _QWORD v41[8]; // [rsp+E8h] [rbp-40h] BYREF

  v3 = a2;
  v4 = *(_QWORD *)(a1 + 216);
  v41[0] = __readfsqword(0x28u);
  if ( !v4 )
  {
    v7 = (a2 >> 12) & 0xF;
    if ( (unsigned int)(v7 - 1) > 8 )
    {
      if ( under_debugger )
        goto LABEL_75;
      interr();
LABEL_72:
      if ( !under_debugger )
      {
        interr();
        return v20;
      }
LABEL_75:
      BUG();
    }
    if ( v7 != 1 )
    {
      v9 = *(unsigned __int16 *)(dbg + 82LL);
      if ( !_bittest(&v9, v7 - 1) )
        return 0;
    }
    v5 = sub_CDB40(v7 == 9);
    if ( v5 != 1 )
      return v5;
    v10 = operator new(0x18u);
    *(_DWORD *)v10 = a2;
    v11 = v10;
    *(_QWORD *)(v10 + 4) = 0;
    *(_QWORD *)(v10 + 12) = 0xFFFFFFFF00000000LL;
    *(_BYTE *)(v10 + 20) = 0;
    v12 = *(_QWORD *)(dbg + 32LL);
    if ( (v12 & 0x8000000000LL) == 0 )
    {
      if ( v7 != 1 )
      {
        if ( !v10 )
          return 0;
        v5 = 0;
LABEL_36:
        operator delete((void *)v11, 0x18u);
        return v5;
      }
      goto LABEL_12;
    }
    v38 = 0;
    v35 = -1;
    if ( v7 != 1 )
      goto LABEL_38;
    v28 = *(_QWORD *)(a1 + 40);
    if ( !v28 )
      goto LABEL_66;
    v29 = dword_24411C;
    v30 = *(_QWORD *)(v28 + 32LL * dword_24411C + 8);
    v35 = v30;
    if ( !dbg )
      goto LABEL_55;
    if ( (v12 & 0x400000000000LL) == 0 )
      goto LABEL_55;
    v31 = qword_2515B0;
    if ( !qword_2515B0 )
      goto LABEL_55;
    *((_QWORD *)qword_2515B0 + 1) = v28;
    v31[4] = v29;
    *v31 = v30;
    if ( (unsigned int)sub_CC780((__int64)v31, 11) == 1 )
      v35 = *(_DWORD *)qword_2515B0;
    else
LABEL_66:
      v35 = -1;
LABEL_55:
    v32 = v40;
    do
    {
      *(_WORD *)v32 = 0;
      v32 += 3;
      *((_WORD *)v32 - 11) = 0;
      *((_WORD *)v32 - 10) = 0;
      *((_DWORD *)v32 - 1) = 0;
      *((_WORD *)v32 - 9) = 0;
      *(v32 - 2) = 0;
      *((_DWORD *)v32 - 2) = 0;
    }
    while ( v41 != v32 );
    if ( (int)decode_insn() > 0 )
    {
      v33 = sub_9E220();
      if ( v33 == 1 )
      {
        *(_BYTE *)(v11 + 20) = 1;
      }
      else if ( v33 == 2 )
      {
        if ( (v3 & 8) != 0 )
          goto LABEL_46;
        v34 = sub_C0230(
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
                a3);
        v20 = v34;
        if ( v34 )
        {
          if ( v34 <= 0 )
            goto LABEL_24;
          v5 = v34;
          goto LABEL_46;
        }
      }
    }
    v38 = 1;
LABEL_38:
    v25 = qword_2515B0;
    *(_DWORD *)qword_2515B0 = *(_DWORD *)a1;
    v25[1] = v7;
    v26 = sub_CC780((__int64)v25, 15);
    if ( v26 != 1 )
    {
      v20 = -1;
      if ( v26 == -1 )
      {
        v20 = 0;
        if ( v7 == 1 )
        {
          if ( v38 )
            goto LABEL_18;
LABEL_12:
          v13 = *(_QWORD *)(a1 + 40);
          if ( v13 )
          {
            v14 = dword_24411C;
            v15 = *(_QWORD *)(v13 + 32LL * dword_24411C + 8);
            v35 = v15;
            if ( !dbg || (*(_BYTE *)(dbg + 37LL) & 0x40) == 0 || (v16 = qword_2515B0) == nullptr )
            {
LABEL_18:
              v17 = v40;
              do
              {
                *(_WORD *)v17 = 0;
                v17 += 3;
                *((_WORD *)v17 - 11) = 0;
                *((_WORD *)v17 - 10) = 0;
                *((_DWORD *)v17 - 1) = 0;
                *((_WORD *)v17 - 9) = 0;
                *(v17 - 2) = 0;
                *((_DWORD *)v17 - 2) = 0;
              }
              while ( v17 != v41 );
              v18 = v35;
              v19 = decode_insn();
              if ( v19 > 0 )
              {
                v27 = sub_D0B80(*(_QWORD *)(a1 + 40), 1);
                if ( v27 != -1 )
                  v35 = v27;
                v18 = v35;
                *(_DWORD *)(v11 + 4) = *(_DWORD *)a1;
                v19 = sub_CCBE0(a1, v35, 8, (__int64 *)(v11 + 8), 0, 0);
                if ( v19 )
                  goto LABEL_46;
              }
              if ( (v3 & 8) == 0 )
              {
                v39 = v19;
                sub_92120(
                  (__int64)"AUTOHIDE REGISTRY\n"
                           "IDA could not create a temporary breakpoint for the\n"
                           "next instruction. A temporary breakpoint is required in\n"
                           "order to suspend the execution after a step. Please use\n"
                           "F9 to continue the execution. If you have a breakpoint at\n"
                           "the current address, please remove it before continuing.",
                  v18);
                v19 = v39;
              }
              v37 = v19;
              sub_8F660((__int64)"%a: could not set temporary breakpoint: did not continue execution\n", a3);
              v20 = v37;
              goto LABEL_24;
            }
            *(_DWORD *)qword_2515B0 = v15;
            v16[1] = v13;
            *((_DWORD *)v16 + 4) = v14;
            if ( (unsigned int)sub_CC780((__int64)v16, 11) == 1 )
            {
              v35 = *(_DWORD *)qword_2515B0;
              goto LABEL_18;
            }
          }
          v35 = -1;
          goto LABEL_18;
        }
      }
LABEL_24:
      if ( !v11 )
        return v20;
      v21 = *(_QWORD *)(v11 + 8);
      if ( !v21 )
      {
LABEL_35:
        v5 = v20;
        goto LABEL_36;
      }
      v22 = sub_C4D00(*(_DWORD *)(v11 + 4));
      if ( v22 )
      {
        v23 = *((_QWORD *)v22 + 28);
        if ( v23 )
        {
          while ( 1 )
          {
            v24 = *(_QWORD *)(v23 + 8);
            if ( v23 == v21 )
              break;
            v4 = v23;
            if ( !v24 )
              goto LABEL_35;
            v23 = *(_QWORD *)(v23 + 8);
          }
          if ( v4 )
            *(_QWORD *)(v4 + 8) = v24;
          else
            *((_QWORD *)v22 + 28) = v24;
          v36 = v20;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          v20 = v36;
        }
        goto LABEL_35;
      }
      goto LABEL_72;
    }
LABEL_46:
    *(_QWORD *)(a1 + 216) = v11;
    return v5;
  }
  v5 = 1;
  if ( a2 != *(_DWORD *)v4 )
  {
    sub_8F660(
      (__int64)"Thread %d is already single stepping. Please run it to complete the single step operation\n",
      dword_251408);
    return 0;
  }
  return v5;
}

