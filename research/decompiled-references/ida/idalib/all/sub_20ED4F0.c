char *__fastcall sub_20ED4F0(int a1)
{
  char *result; // rax

  result = (char *)&unk_26F1000 + 32 * dword_26F0E20[a1];
  if ( (unsigned __int64)a1 <= 0x72 )
  {
    if ( *((_DWORD *)result + 1) )
      result += 8;
  }
  return result;
}
