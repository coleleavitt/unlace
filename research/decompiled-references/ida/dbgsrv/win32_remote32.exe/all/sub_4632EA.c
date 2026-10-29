/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4632EA
// Address: 0x004632EA

//----- (004632EA) --------------------------------------------------------
BOOL __usercall sub_4632EA@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>, unsigned int a4)
{
  int v4; // edx
  int v5; // ecx
  unsigned int v6; // kr00_4
  int vars0; // [esp+31Ch] [ebp+0h]
  int retaddr; // [esp+320h] [ebp+4h]

  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(a4);
  dword_4B7620 = 0;
  dword_4B761C = v5;
  dword_4B7618 = v4;
  dword_4B7614 = a1;
  dword_4B7610 = a3;
  dword_4B760C = a2;
  word_4B7638 = __SS__;
  word_4B762C = __CS__;
  word_4B7608 = __DS__;
  word_4B7604 = __ES__;
  word_4B7600 = __FS__;
  word_4B75FC = __GS__;
  v6 = __readeflags();
  dword_4B7630 = v6;
  dword_4B7624 = vars0;
  dword_4B7628 = retaddr;
  dword_4B7634 = (int)&a4;
  dword_4B752C = retaddr;
  dword_4B7520 = -1073740791;
  dword_4B7524 = 1;
  dword_4B7530 = 1;
  dword_4B7534 = a4;
  return sub_4631BA((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
// 463309: variable 'v5' is possibly undefined
// 46330F: variable 'v4' is possibly undefined
// 46335B: variable 'vars0' is possibly undefined
// 4B7520: using guessed type int dword_4B7520;
// 4B7524: using guessed type int dword_4B7524;
// 4B752C: using guessed type int dword_4B752C;
// 4B7530: using guessed type int dword_4B7530;
// 4B7534: using guessed type int dword_4B7534;
// 4B75FC: using guessed type __int16 word_4B75FC;
// 4B7600: using guessed type __int16 word_4B7600;
// 4B7604: using guessed type __int16 word_4B7604;
// 4B7608: using guessed type __int16 word_4B7608;
// 4B760C: using guessed type int dword_4B760C;
// 4B7610: using guessed type int dword_4B7610;
// 4B7614: using guessed type int dword_4B7614;
// 4B7618: using guessed type int dword_4B7618;
// 4B761C: using guessed type int dword_4B761C;
// 4B7620: using guessed type int dword_4B7620;
// 4B7624: using guessed type int dword_4B7624;
// 4B7628: using guessed type int dword_4B7628;
// 4B762C: using guessed type __int16 word_4B762C;
// 4B7630: using guessed type int dword_4B7630;
// 4B7634: using guessed type int dword_4B7634;
// 4B7638: using guessed type __int16 word_4B7638;
