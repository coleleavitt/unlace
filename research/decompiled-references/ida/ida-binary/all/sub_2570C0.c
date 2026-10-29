bool sub_2570C0()
{
  bool result; // al
  const char *v1; // r8
  __int64 v2; // rsi
  __m128i si128; // xmm0
  bool v4; // zf
  const char *v5; // rcx
  const char *v6; // rdx
  const char *v7; // rcx
  const char *v8; // r8
  bool v9; // [rsp+Fh] [rbp-469h]
  bool v10; // [rsp+Fh] [rbp-469h]
  const char *v11; // [rsp+10h] [rbp-468h] BYREF
  __int128 v12; // [rsp+18h] [rbp-460h]
  __int64 v13; // [rsp+30h] [rbp-448h] BYREF
  __int128 v14; // [rsp+38h] [rbp-440h]
  _BYTE v15[1032]; // [rsp+50h] [rbp-428h] BYREF
  unsigned __int64 v16; // [rsp+458h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  if ( !dbg || dword_8CC5F0 || *(char *)(dbg + 32) < 0 || (unsigned __int8)is_trusted_idb() )
    return 0;
  v11 = nullptr;
  v15[0] = 0;
  v13 = 0;
  byte_8CBC80 = 0;
  v12 = 0;
  v14 = 0;
  sub_256BC0((__int64)v15, (const char *)&elf_gnu_hash_bucket[42]);
  sub_256790((__int64 *)&v11, "Parameters");
  if ( (*(_BYTE *)(dbg + 32) & 1) != 0
    && ((unsigned __int8)sub_256790(&v13, "Host") || (unsigned __int8)reg_str_get(&v13, "DefaultRemoteHost64", 0))
    && (unsigned __int64)v14 > 1 )
  {
    v1 = (const char *)v13;
  }
  else
  {
    v2 = v13;
    if ( *((_QWORD *)&v14 + 1) <= 0x12u )
    {
      v13 = qvector_reserve(&v13, v13, 19, 1);
      v2 = v13;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DCA80);
    *(_QWORD *)&v14 = 19;
    *(_WORD *)(v2 + 16) = 29285;
    *(__m128i *)v2 = si128;
    v1 = (const char *)v13;
    v4 = (_QWORD)v14 == 0;
    *(_BYTE *)(v13 + 18) = 0;
    if ( v4 )
      v1 = &s1;
  }
  v5 = &s1;
  if ( (_QWORD)v12 )
    v5 = v11;
  result = (unsigned int)sub_1698A0(
                           0,
                           (int)"TITLE Debugger warning\n"
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
                           v15,
                           v5,
                           v1) != 1;
  if ( v13 )
  {
    v9 = result;
    *(_QWORD *)&v14 = 0;
    qfree(
      v13,
      "TITLE Debugger warning\n"
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
      v6,
      v7,
      v8);
    result = v9;
  }
  if ( v11 )
  {
    v10 = result;
    *(_QWORD *)&v12 = 0;
    qfree(
      v11,
      "TITLE Debugger warning\n"
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
      "NOTE: see also the MAX_TRUSTED_IDB_COUNT parameter in ida.cfg for more info.\n");
    return v10;
  }
  return result;
}
