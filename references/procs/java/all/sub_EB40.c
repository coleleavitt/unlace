__int64 __fastcall sub_EB40(__int64 a1, const char *a2, int a3, _DWORD *a4, char a5)
{
  __int64 result; // rax
  const char **v9; // r14
  int i; // ebx
  int v11; // edx
  int v12; // edx
  int v13; // eax
  __int64 v14; // rdi
  __int16 v15; // eax^2
  int v16; // edx
  int v17; // eax
  unsigned __int16 v18; // [rsp+Eh] [rbp-4Ah] BYREF
  _QWORD v19[9]; // [rsp+10h] [rbp-48h] BYREF

  v19[1] = __readfsqword(0x28u);
  if ( a2 )
  {
    result = 2;
    if ( a3 == 3 )
    {
      v9 = (const char **)&off_2C740;
      for ( i = 0; i != 8; ++i )
      {
        if ( !strcmp(*v9, a2) )
        {
          v12 = *(_DWORD *)(a1 + 148);
          v13 = (int)(&off_2C740)[2 * i + 1];
          if ( *a4 )
            *(_DWORD *)(a1 + 148) = v13 | v12;
          else
            *(_DWORD *)(a1 + 148) = v12 & ~v13;
          goto LABEL_12;
        }
        v9 += 2;
      }
      v11 = strcmp(a2, "JAVA_STARTASM_LIST");
      result = 1;
      if ( v11 )
        return result;
      *(_DWORD *)(a1 + 144) = *a4;
      return 0;
    }
  }
  else
  {
    v15 = HIWORD(*(_DWORD *)(a1 + 148));
    LOWORD(v19[0]) = *(_DWORD *)(a1 + 148);
    v18 = v15 & 0x1FFF;
    if ( (unsigned int)sub_E5D0(
                         (__int64)"HELP\n"
                                  "JAVA specific options\n"
                                  "\n"
                                  " Multiline .debug\n"
                                  "\n"
                                  "       If this option is on, IDA forces new .debug directive at every\n"
                                  "       LR ('\\n') in the input string\n"
                                  "\n"
                                  " Hide StackMap(s)\n"
                                  "\n"
                                  "       If this option is on, IDA hides .stack verification declarations\n"
                                  "\n"
                                  " Auto strings\n"
                                  "\n"
                                  "       If this option is on, IDA makes 'prompt-string' after every CR in\n"
                                  "       the quoted-string operand\n"
                                  "\n"
                                  " Save to jasmin\n"
                                  "\n"
                                  "      If this option is on, IDA creates asm-file in the jasmin-\n"
                                  "      compatibe form: concatenates 'prompted' string, reserved names\n"
                                  "      will be enclosed in quotes.\n"
                                  "      Also when this option is on IDA changes unicode-to-oem encoding to\n"
                                  "      unicode-to-ansi encoding because jasmin expects ansi encoding.\n"
                                  "\n"
                                  " Enable encoding\n"
                                  "\n"
                                  "       If this option is on, IDA converts unicode characters which\n"
                                  "       can't be represented in current locale to ascii characters.\n"
                                  "\n"
                                  " Nopath .attribute\n"
                                  "      If this option is on, IDA prints filename in '.attribute'\n"
                                  "      directives without the path part.\n"
                                  "\n"
                                  "\n"
                                  " Bad index as string\n"
                                  "      If this option is on, IDA will show invalid name/type references\n"
                                  "      as a quoted string.\n"
                                  "ENDHELP\n"
                                  "JAVA specific options\n"
                                  "\n"
                                  " <~M~ultilne .debug   :C>\n"
                                  " <~H~ide StackMap(s)  :C>\n"
                                  " <~A~uto strings      :C>\n"
                                  " <~S~ave to jasmin    :C>\n"
                                  " <~E~nable encoding   :C>\n"
                                  " <~N~opath .attribute :C>>\n"
                                  "\n"
                                  " <~B~ad index as string :C>>\n"
                                  "\n"
                                  "\n",
                         v19,
                         &v18) )
    {
      v16 = *(_DWORD *)(a1 + 148);
      v17 = LOWORD(v19[0]) | (v18 << 16);
      *(_DWORD *)(a1 + 148) = v17;
      if ( (((unsigned __int8)v16 ^ (unsigned __int8)v17) & 0x10) != 0 )
        sub_1D890(a1, 0xFFFFFFFFLL);
    }
LABEL_12:
    if ( !a5 )
      return 0;
    v14 = *(_QWORD *)(a1 + 33336);
    v19[0] = *(unsigned __int16 *)(a1 + 148);
    netnode_supset(v14, -3, v19, 8, 65);
    return 0;
  }
  return result;
}
