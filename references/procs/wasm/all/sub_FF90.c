__int64 __fastcall sub_FF90(__int64 a1, const char *a2, unsigned int a3, __int64 a4, char a5)
{
  int v9; // eax
  int v10; // edx
  __int64 result; // rax
  __int64 v12; // rdi
  char v13; // al
  __int16 v14; // dx
  __int16 v15; // ax
  __int16 v16; // cx
  __int16 v17; // ax
  __int16 v18; // cx
  __int16 v19; // cx
  __int16 v20; // ax
  __int16 v21; // cx
  __int16 v22; // cx
  __int16 v23; // ax
  __int16 v24; // cx
  __int16 v25; // cx
  __int16 v26; // ax
  __int16 v27; // cx
  __int16 v28; // cx
  __int16 v29; // ax
  __int16 v30; // cx
  _QWORD v31[7]; // [rsp+0h] [rbp-38h] BYREF

  v31[1] = __readfsqword(0x28u);
  if ( !a2 )
  {
    LOWORD(v31[0]) = 0;
    v13 = getinf_flag(11, 4);
    v14 = *(_WORD *)(a1 + 120);
    v15 = v13 || (v14 & 1) != 0;
    v16 = v15;
    v17 = v15 & 0xFFFD;
    v18 = v16 | 2;
    if ( (v14 & 2) != 0 )
      v17 = v18;
    v19 = v17;
    v20 = v17 & 0xFFFB;
    v21 = v19 | 4;
    if ( (v14 & 4) != 0 )
      v20 = v21;
    LOWORD(v31[0]) = v20;
    if ( (unsigned int)sub_FE10(
                         (__int64)"HELP\n"
                                  "WebAssembly specific options\n"
                                  "\n"
                                  " Enable macro instructions\n"
                                  "\n"
                                  "       If this option is on, IDA will simplify instructions and replace\n"
                                  "       them by clearer pseudo-instructions\n"
                                  "       For example,\n"
                                  "\n"
                                  "               local.get    $param0\n"
                                  "               local.set    $local1\n"
                                  "\n"
                                  "       will be replaced by\n"
                                  "\n"
                                  "               mov          $local1, $param0\n"
                                  "\n"
                                  " Show branching depth\n"
                                  "\n"
                                  "       If this option is on, IDA will show branching depths\n"
                                  "       For example,\n"
                                  "\n"
                                  "               br L1\n"
                                  "\n"
                                  "       will be replaced by\n"
                                  "\n"
                                  "               br 0 L1\n"
                                  "\n"
                                  " Add indentation\n"
                                  "\n"
                                  "       If this option is on, IDA will indent instructions depending on their block dep"
                                  "th\n"
                                  "       For example,\n"
                                  "\n"
                                  "               if\n"
                                  "               local.get $param0\n"
                                  "               end\n"
                                  "\n"
                                  "       will be replaced by\n"
                                  "\n"
                                  "               if\n"
                                  "                local.get $param0\n"
                                  "               end\n"
                                  "\n"
                                  "ENDHELP\n"
                                  "WebAssembly specific options\n"
                                  "%/\n"
                                  " <~S~implify instructions:C1>\n"
                                  " <Show ~b~ranching depths:C2>\n"
                                  " <~I~ndent instructions:C3>>\n"
                                  "\n",
                         sub_FD40,
                         v31) )
    {
      v22 = *(_WORD *)(a1 + 120);
      v23 = v22 & 0xFFFE;
      v24 = v22 | 1;
      if ( (v31[0] & 1) != 0 )
        v23 = v24;
      v25 = v23;
      v26 = v23 & 0xFFFD;
      v27 = v25 | 2;
      if ( (v31[0] & 2) != 0 )
        v26 = v27;
      v28 = v26;
      v29 = v26 | 4;
      v30 = v28 & 0xFFFB;
      if ( (v31[0] & 4) == 0 )
        v29 = v30;
      *(_WORD *)(a1 + 120) = v29;
    }
LABEL_8:
    if ( (unsigned __int8)getinf_flag(11, 4) )
      *(_WORD *)(a1 + 120) |= 1u;
    if ( a5 )
    {
      v12 = *(_QWORD *)(a1 + 128);
      v31[0] = *(unsigned __int16 *)(a1 + 120);
      netnode_supset(v12, -1, v31, 8, 65);
    }
    return 0;
  }
  v9 = strcmp("WASM_SIMPLIFY", a2);
  if ( v9 )
  {
    if ( !strcmp("WASM_SHOW_DEPTH", a2) )
    {
      v9 = 1;
    }
    else
    {
      v10 = strcmp("WASM_INDENT", a2);
      result = 1;
      if ( v10 )
        return result;
      v9 = 2;
    }
  }
  result = cfgopt_t__apply3(&(&off_21620)[5 * v9], 0, a3, a4, a1);
  if ( !result )
    goto LABEL_8;
  return result;
}
