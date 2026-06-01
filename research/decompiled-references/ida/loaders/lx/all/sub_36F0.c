__int64 __fastcall sub_36F0(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r9d
  char v7; // cl
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 free_selector; // rax
  __int64 v11; // rsi
  _QWORD v14[2]; // [rsp+18h] [rbp-70h] BYREF
  __int16 v15; // [rsp+2Eh] [rbp-5Ah] BYREF
  __int64 v16; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v18[9]; // [rsp+40h] [rbp-48h] BYREF

  v4 = a1;
  v14[0] = a4;
  v7 = *(_BYTE *)(a2 + 43);
  v18[1] = __readfsqword(0x28u);
  v8 = 0;
  *(_QWORD *)(a2 + 48) = 0;
  if ( v7 != 1 )
    v8 = *(_QWORD *)a2 >> 4;
  v16 = v8;
  if ( (word_B2A0 & 8) == 0 )
    goto LABEL_4;
  v17 = 0;
  v18[0] = v7 == 1;
  v15 = 0;
  sub_3620(
    (__int64)"LX/LE File Manual Loading\n"
             "\n"
             "        Segment : %A\n"
             "        Size    : %N\n"
             "        Use32   : %D\n"
             "\n"
             " <Start ~a~ddress :N::18::>\n"
             " <~S~elector      :N::18::> (0 means that selector\n"
             "                              will be chosen by IDA)\n"
             " <Segment ~b~ase  :N::18::> (in paragraphs)\n"
             "\n"
             " <STOP LOADING ~F~ILE:C>>\n"
             "\n"
             "  IDA doesn't check values specified by you!\n"
             "  (this is a feature, not a bug ;)\n"
             "\n",
    a3,
    v14,
    v18,
    a2,
    &v17,
    &v16,
    &v15);
  while ( 1 )
  {
    if ( v15 )
      return 0;
    v11 = v16;
    if ( *(_QWORD *)a2 >= (unsigned __int64)(16 * v16) )
      break;
    sub_33C0((__int64)"Bad segment base value");
    sub_3620(
      (__int64)"LX/LE File Manual Loading\n"
               "\n"
               "        Segment : %A\n"
               "        Size    : %N\n"
               "        Use32   : %D\n"
               "\n"
               " <Start ~a~ddress :N::18::>\n"
               " <~S~elector      :N::18::> (0 means that selector\n"
               "                              will be chosen by IDA)\n"
               " <Segment ~b~ase  :N::18::> (in paragraphs)\n"
               "\n"
               " <STOP LOADING ~F~ILE:C>>\n"
               "\n"
               "  IDA doesn't check values specified by you!\n"
               "  (this is a feature, not a bug ;)\n"
               "\n",
      a3,
      v14,
      v18,
      a2,
      &v17,
      &v16,
      &v15);
  }
  v9 = v17;
  v4 = a1;
  *(_QWORD *)(a2 + 48) = v17;
  if ( !v9 )
  {
LABEL_4:
    v9 = v4;
    *(_QWORD *)(a2 + 48) = v4;
    if ( !v4 )
    {
      free_selector = find_free_selector();
      *(_QWORD *)(a2 + 48) = free_selector;
      v9 = free_selector;
    }
    v11 = v16;
  }
  set_selector(v9, v11);
  *(_QWORD *)(a2 + 8) = *(_QWORD *)a2 + v14[0];
  return 1;
}

