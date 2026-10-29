bool __fastcall sub_B544B0(__int64 a1)
{
  char v1; // dl
  bool result; // al
  int *v3; // rax
  int v4; // edx

  v1 = *(_BYTE *)(a1 + 68);
  result = 0;
  if ( (v1 & 1) != 0 && !*(_QWORD *)(a1 + 40) )
  {
    v3 = *(int **)(a1 + 72);
    if ( (v1 & 0xC) != 0xC && (*(_BYTE *)(a1 + 68) & 0xC) != 0 )
      v3 = *((int **)v3 + 1);
    v4 = *v3;
    result = 0;
    if ( (v4 & 0x20000) == 0 )
      return (unsigned int)sub_B54430(a1) == 0;
  }
  return result;
}

