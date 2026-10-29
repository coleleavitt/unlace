__int64 __fastcall sub_241C80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  char v14; // bp
  __int64 v15; // r13
  unsigned int v16; // r12d
  int v18; // r14d
  __int64 v20; // rax
  char *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rax
  char *v27; // rcx
  __int64 v28; // rdx
  _QWORD *v29; // rdi
  _QWORD *v30; // rax
  __int64 v31; // rsi
  int v32; // eax
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r9
  __m128 v36; // xmm4
  __m128 v37; // xmm5
  __int64 v38; // r8
  unsigned int v39; // r8d
  _DWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  _DWORD *v45; // rdi
  int v46; // eax
  unsigned __int64 v47; // rax
  unsigned int v48; // eax
  __int64 v49; // rsi
  int v50; // edi
  char *v51; // rcx
  _DWORD *v52; // rax
  _QWORD *v53; // rax
  int v54; // eax
  int v55; // eax
  char v56; // [rsp+0h] [rbp-1B8h]
  unsigned __int64 v57; // [rsp+0h] [rbp-1B8h]
  unsigned int v58; // [rsp+0h] [rbp-1B8h]
  unsigned int v59; // [rsp+8h] [rbp-1B0h]
  char v60; // [rsp+8h] [rbp-1B0h]
  unsigned int v61; // [rsp+8h] [rbp-1B0h]
  __int128 v62; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v63; // [rsp+20h] [rbp-198h]
  __int64 v64; // [rsp+28h] [rbp-190h]
  __int64 v65; // [rsp+30h] [rbp-188h]
  _BYTE v66[320]; // [rsp+38h] [rbp-180h] BYREF
  _QWORD v67[8]; // [rsp+178h] [rbp-40h] BYREF

  v14 = a2;
  v15 = *(_QWORD *)(a1 + 240);
  v67[0] = __readfsqword(0x28u);
  if ( !v15 )
  {
    v18 = ((int)a2 >> 12) & 0xF;
    if ( (unsigned int)(v18 - 1) > 8 )
    {
      if ( under_debugger )
        goto LABEL_77;
      interr(40396, a2, a3, a4, *(double *)a7.m128_u64);
LABEL_74:
      if ( !under_debugger )
      {
        interr(40047, a2, v41, v42, *(double *)a7.m128_u64);
        return v39;
      }
LABEL_77:
      BUG();
    }
    if ( v18 != 1 )
    {
      a3 = *(unsigned __int16 *)(dbg + 82);
      if ( !_bittest((const int *)&a3, v18 - 1) )
        return 0;
    }
    v16 = sub_23E870(v18 == 9, *(double *)a7.m128_u64, a2, a3, a4);
    if ( v16 != 1 )
      return v16;
    v20 = operator new(0x20u);
    *(_DWORD *)v20 = a2;
    v24 = v20;
    *(_DWORD *)(v20 + 4) = 0;
    *(_QWORD *)(v20 + 8) = 0;
    *(_QWORD *)(v20 + 16) = -1;
    *(_BYTE *)(v20 + 24) = 0;
    v25 = *(_QWORD *)(dbg + 32);
    if ( (v25 & 0x8000000000LL) == 0 )
    {
      if ( v18 != 1 )
      {
        if ( !v20 )
          return 0;
        v16 = 0;
LABEL_36:
        operator delete((void *)v24, 0x20u);
        return v16;
      }
      goto LABEL_12;
    }
    v60 = 0;
    v57 = -1;
    if ( v18 != 1 )
      goto LABEL_38;
    v49 = *(_QWORD *)(a1 + 40);
    if ( !v49 )
      goto LABEL_68;
    v50 = dword_8BA594;
    v51 = *(char **)(v49 + 32LL * dword_8BA594 + 8);
    v57 = (unsigned __int64)v51;
    if ( !dbg )
      goto LABEL_56;
    if ( (v25 & 0x400000000000LL) == 0 )
      goto LABEL_56;
    v52 = qword_8CC600;
    if ( !qword_8CC600 )
      goto LABEL_56;
    *((_QWORD *)qword_8CC600 + 1) = v49;
    v52[4] = v50;
    *(_QWORD *)v52 = v51;
    if ( (unsigned int)sub_23D480((__int64)v52, 11, v25, v51, *(double *)a7.m128_u64) == 1 )
      v57 = *(_QWORD *)qword_8CC600;
    else
LABEL_68:
      v57 = -1;
LABEL_56:
    v63 = -1;
    v53 = v66;
    v64 = 0;
    v65 = 0;
    v62 = -1;
    a7.m128_u64[0] = 0;
    do
    {
      *(_WORD *)v53 = 0;
      v53 += 5;
      *((_WORD *)v53 - 19) = 0;
      *((_WORD *)v53 - 18) = 0;
      *((_DWORD *)v53 - 2) = 0;
      *((_WORD *)v53 - 17) = 0;
      *((_OWORD *)v53 - 2) = 0;
      *(v53 - 2) = 0;
    }
    while ( v67 != v53 );
    if ( (int)decode_insn(&v62, v57, v67, 0, v22, 0, 0.0) > 0 )
    {
      v54 = sub_1E73C0(0x3EDu, &v62, sub_23F5C0, *(_QWORD *)(a1 + 40));
      if ( v54 == 1 )
      {
        *(_BYTE *)(v24 + 24) = 1;
      }
      else if ( v54 == 2 )
      {
        if ( (v14 & 8) != 0 )
          goto LABEL_47;
        v55 = sub_22EDE0(
                (int)"~R~un",
                (int)"~S~ingle step",
                (int)"Suspend",
                -1,
                (int)"AUTOHIDE REGISTRY\n"
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
                v57);
        v39 = v55;
        if ( v55 )
        {
          if ( v55 > 0 )
          {
            v16 = v55;
            goto LABEL_47;
          }
          goto LABEL_24;
        }
      }
    }
    v60 = 1;
LABEL_38:
    v45 = qword_8CC600;
    *(_DWORD *)qword_8CC600 = *(_DWORD *)a1;
    v45[1] = v18;
    v46 = sub_23D480((__int64)v45, 15, v25, v21, *(double *)a7.m128_u64);
    if ( v46 == 1 )
    {
LABEL_47:
      *(_QWORD *)(a1 + 240) = v24;
      return v16;
    }
    v39 = -1;
    if ( v46 == -1 )
    {
      v39 = 0;
      if ( v18 == 1 )
      {
        if ( v60 )
          goto LABEL_18;
LABEL_12:
        v26 = *(_QWORD *)(a1 + 40);
        if ( v26 )
        {
          v27 = (char *)dword_8BA594;
          v28 = dbg;
          v57 = *(_QWORD *)(v26 + 32LL * dword_8BA594 + 8);
          if ( !dbg || (*(_BYTE *)(dbg + 37) & 0x40) == 0 || (v29 = qword_8CC600) == nullptr )
          {
LABEL_18:
            v63 = -1;
            v30 = v66;
            v64 = 0;
            v65 = 0;
            v62 = -1;
            a7.m128_u64[0] = 0;
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
            while ( v30 != v67 );
            v31 = v57;
            v32 = decode_insn(&v62, v57, v67, 0, 0, v23, 0.0);
            v38 = (unsigned int)v32;
            if ( v32 <= 0 )
              goto LABEL_21;
            v31 = 1;
            v47 = sub_240FC0(*(_QWORD *)(a1 + 40), 1, 0.0, v33, v34, (unsigned int)v32, v35);
            if ( v47 == -1 )
            {
              v57 += WORD1(v64);
            }
            else
            {
              v34 = v57;
              if ( v47 < v57 )
              {
                v57 = v47;
              }
              else
              {
                v57 = v47;
                v38 = 0;
                v33 = v34 + WORD1(v64);
                if ( v47 < v33 )
                  goto LABEL_21;
              }
            }
            v31 = v57;
            *(_DWORD *)(v24 + 4) = *(_DWORD *)a1;
            v48 = sub_23D8E0(
                    a1,
                    v57,
                    8,
                    (__int64 *)(v24 + 8),
                    0,
                    0,
                    0.0,
                    a8,
                    a9,
                    a10,
                    *(double *)v36.m128_u64,
                    *(double *)v37.m128_u64,
                    a13,
                    a14);
            v38 = v48;
            if ( v48 )
              goto LABEL_47;
LABEL_21:
            if ( (v14 & 8) == 0 )
            {
              v61 = v38;
              sub_169630(
                (int)"AUTOHIDE REGISTRY\n"
                     "IDA could not create a temporary breakpoint for the\n"
                     "next instruction. A temporary breakpoint is required in\n"
                     "order to suspend the execution after a step. Please use\n"
                     "F9 to continue the execution. If you have a breakpoint at\n"
                     "the current address, please remove it before continuing.",
                v31,
                v33,
                v34,
                v38,
                v35,
                (__m128)0LL,
                a8,
                a9,
                a10,
                v36,
                v37,
                a13,
                a14,
                v57);
              v38 = v61;
            }
            v59 = v38;
            sub_169700(
              (int)"%a: could not set temporary breakpoint: did not continue execution\n",
              v57,
              v33,
              v34,
              v38,
              v35,
              (__m128)0LL,
              a8,
              a9,
              a10,
              v36,
              v37,
              a13,
              a14,
              v57);
            v39 = v59;
            goto LABEL_24;
          }
          *(_QWORD *)qword_8CC600 = *(_QWORD *)(v26 + 32LL * dword_8BA594 + 8);
          v29[1] = v26;
          *((_DWORD *)v29 + 4) = (_DWORD)v27;
          if ( (unsigned int)sub_23D480((__int64)v29, 11, v28, v27, *(double *)a7.m128_u64) == 1 )
          {
            v57 = *(_QWORD *)qword_8CC600;
            goto LABEL_18;
          }
        }
        v57 = -1;
        goto LABEL_18;
      }
    }
LABEL_24:
    if ( !v24 )
      return v39;
    a2 = *(_QWORD *)(v24 + 8);
    if ( !a2 )
    {
LABEL_35:
      v16 = v39;
      goto LABEL_36;
    }
    v40 = sub_234FE0(*(_DWORD *)(v24 + 4));
    if ( v40 )
    {
      v43 = *((_QWORD *)v40 + 31);
      if ( v43 )
      {
        while ( 1 )
        {
          v44 = *(_QWORD *)(v43 + 8);
          if ( v43 == a2 )
            break;
          v15 = v43;
          if ( !v44 )
            goto LABEL_35;
          v43 = *(_QWORD *)(v43 + 8);
        }
        if ( v15 )
          *(_QWORD *)(v15 + 8) = v44;
        else
          *((_QWORD *)v40 + 31) = v44;
        v58 = v39;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
        v39 = v58;
      }
      goto LABEL_35;
    }
    goto LABEL_74;
  }
  v16 = 1;
  if ( (_DWORD)a2 != *(_DWORD *)v15 )
  {
    sub_169700(
      (int)"Thread %d is already single stepping. Please run it to complete the single step operation\n",
      (unsigned int)dword_8CC428,
      a3,
      (__int64)a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      v56);
    return 0;
  }
  return v16;
}
