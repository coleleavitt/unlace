char ***__fastcall sub_141B8E0(__int64 a1, __int64 a2)
{
  char ***result; // rax

  *(_BYTE *)(a1 + 72) = 0;
  if ( *(_BYTE *)(a2 + 72) )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)(a1 + 8) = a1 + 24;
    *(_QWORD *)(a1 + 16) = 0x200000000LL;
    result = (char ***)*(unsigned int *)(a2 + 16);
    if ( (_DWORD)result )
      result = sub_14178A0((char ***)(a1 + 8), (char ***)(a2 + 8));
    *(_BYTE *)(a1 + 72) = 1;
  }
  return result;
}
