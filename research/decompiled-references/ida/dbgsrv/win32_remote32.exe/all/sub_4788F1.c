/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4788F1
// Address: 0x004788F1

//----- (004788F1) --------------------------------------------------------
int __cdecl sub_4788F1(WCHAR a1, unsigned __int16 a2)
{
  WCHAR SrcStr; // [esp+4h] [ebp-8h] BYREF
  WORD CharType; // [esp+8h] [ebp-4h] BYREF

  if ( a1 == 0xFFFF )
    return 0;
  if ( a1 < 0x100u )
    return a2 & *(_WORD *)&off_4B60EC[2 * a1];
  SrcStr = a1;
  CharType = 0;
  if ( !sub_47EF9A(1u, &SrcStr, 1, &CharType) )
    return 0;
  else
    return a2 & CharType;
}
// 4B60EC: using guessed type char *off_4B60EC;
