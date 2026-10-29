__int64 __fastcall sub_15AEC10(unsigned int *a1, char a2, unsigned int a3)
{
  unsigned int v3; // r10d
  __int64 result; // rax
  char v5; // cl

  v3 = *a1;
  result = 0;
  if ( (*a1 & 0x7F000) != 0x45000 )
  {
    if ( (v3 & 0x2FF000) == (_DWORD)&stru_80000 )
    {
      v5 = *((_BYTE *)a1 + 2);
      a1[48] = a3;
      a1[52] = a3;
      *((_BYTE *)a1 + 2) = v5 & 0xDF | (32 * (a2 & 1));
    }
    else
    {
      return ((__int64 (*)(void))((char *)dword_261C500 + dword_261C500[(v3 >> 12) & 0x7F]))();
    }
  }
  return result;
}
