bool sub_E5310()
{
  bool result; // al
  const char *v1; // r8
  __int64 v2; // rsi
  __m128i si128; // xmm0
  bool v4; // zf
  const char *v5; // rcx
  bool v6; // [rsp+Fh] [rbp-469h]
  bool v7; // [rsp+Fh] [rbp-469h]
  const char *v8; // [rsp+10h] [rbp-468h] BYREF
  __int128 v9; // [rsp+18h] [rbp-460h]
  __int64 v10; // [rsp+30h] [rbp-448h] BYREF
  __int128 v11; // [rsp+38h] [rbp-440h]
  char v12[1032]; // [rsp+50h] [rbp-428h] BYREF
  unsigned __int64 v13; // [rsp+458h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( !dbg || dword_2515A4 || *(char *)(dbg + 32LL) < 0 || (unsigned __int8)is_trusted_idb() )
    return 0;
  v8 = nullptr;
  v12[0] = 0;
  v10 = 0;
  byte_251020 = 0;
  v9 = 0;
  v11 = 0;
  sub_E4E10();
  sub_E49E0((__int64 *)&v8, "Parameters");
  if ( (*(_BYTE *)(dbg + 32LL) & 1) != 0
    && ((unsigned __int8)sub_E49E0(&v10, "Host") || (unsigned __int8)reg_str_get())
    && (unsigned __int64)v11 > 1 )
  {
    v1 = (const char *)v10;
  }
  else
  {
    v2 = v10;
    if ( *((_QWORD *)&v11 + 1) <= 0x12u )
    {
      v10 = qvector_reserve();
      v2 = v10;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_1D2320);
    *(_QWORD *)&v11 = 19;
    *(_WORD *)(v2 + 16) = 29285;
    *(__m128i *)v2 = si128;
    v1 = (const char *)v10;
    v4 = (_QWORD)v11 == 0;
    *(_BYTE *)(v10 + 18) = 0;
    if ( v4 )
      v1 = s1;
  }
  v5 = s1;
  if ( (_QWORD)v9 )
    v5 = v8;
  result = (unsigned int)sub_924A0(
                           0,
                           (__int64)"TITLE Debugger warning\n"
                                    "ICON WARNING\n"
                                    "AUTOHIDE NONE\n"
                                    "HIDECANCEL\n"
                                    "PLEASE READ CAREFULLY - RISK OF UNAUTHORIZED CODE EXECUTION!\n"
                                    "\n"
                                    "You are about to launch the following application under debugger:\n"
                                    "\n"
                                    "%s %s\n"
                                    "on %s\n"
                                    "\n"
                                    "Debugging a program means that its code will be executed on your system.\n"
                                    "Also, idc/python code in the breakpoint/event/trace conditions will run.\n"
                                    "Watch expressions and other locations may contain idc/python code too.\n"
                                    "Be especially careful if you received the input file and/or the idb file\n"
                                    "from a third party!\n"
                                    "\n"
                                    "Are you sure you want to continue?\n"
                                    "\n"
                                    "NOTE: see also the MAX_TRUSTED_IDB_COUNT parameter in ida.cfg for more info.\n",
                           v12,
                           v5,
                           v1) != 1;
  if ( v10 )
  {
    v6 = result;
    *(_QWORD *)&v11 = 0;
    qfree();
    result = v6;
  }
  if ( v8 )
  {
    v7 = result;
    *(_QWORD *)&v9 = 0;
    qfree();
    return v7;
  }
  return result;
}

