char ***__fastcall sub_1737F30(__int64 a1, __int64 a2)
{
  char ***result; // rax

  *(_BYTE *)(a1 + 24) = 0;
  if ( *(_BYTE *)(a2 + 24) )
  {
    *(_QWORD *)a1 = a1 + 16;
    *(_QWORD *)(a1 + 8) = 0x100000000LL;
    result = (char ***)*(unsigned int *)(a2 + 8);
    if ( (_DWORD)result )
      result = sub_1712470((char ***)a1, (char ***)a2);
    *(_BYTE *)(a1 + 24) = 1;
  }
  return result;
}
