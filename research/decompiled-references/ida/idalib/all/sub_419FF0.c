__int64 __fastcall sub_419FF0(__int64 a1, __int64 a2)
{
  char v2; // dl
  __int64 result; // rax
  unsigned __int16 v4; // ax
  __int64 v5; // rdi
  __int64 word; // rbp
  unsigned __int16 v7; // ax

  v2 = *(_BYTE *)(a1 + 20);
  if ( v2 == 4 )
  {
    v5 = a2 + 2;
    word = (unsigned __int16)get_word(a2);
    goto LABEL_7;
  }
  if ( v2 == 6 )
  {
    v5 = a2 + 4;
    word = (unsigned int)get_dword(a2);
LABEL_7:
    v7 = get_word(v5);
    return word + 16 * sel2para(v7);
  }
  result = 0;
  if ( v2 == 2 )
  {
    v4 = get_word(a2);
    return 16 * sel2para(v4);
  }
  return result;
}
