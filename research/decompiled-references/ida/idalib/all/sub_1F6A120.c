char __fastcall sub_1F6A120(__int64 a1, __int64 a2, char a3, char a4)
{
  int v4; // eax
  bool v5; // r8
  char result; // al

  v4 = *(_DWORD *)a1 >> 9;
  if ( (unsigned int)(unsigned __int16)v4 - 28 > 6 )
  {
    v5 = (unsigned __int16)v4 != 65534 && (unsigned __int16)(v4 - 37) <= 0xFFDAu;
    if ( v5 )
      goto LABEL_4;
    goto LABEL_3;
  }
  v5 = 1;
  if ( (unsigned __int16)v4 == 28 )
LABEL_3:
    v5 = (unsigned __int16)(v4 - 1) <= 0x19u;
LABEL_4:
  result = 1;
  if ( !a2 && ((*(_BYTE *)(a1 + 3) & 2) == 0 || (*(_BYTE *)(a1 + 4) & 4) == 0) )
  {
    result = 1;
    if ( (*(_BYTE *)(a1 + 3) & 0x20) == 0 )
    {
      result = v5 & (a3 ^ 1);
      if ( !result )
      {
        if ( (*(_BYTE *)(a1 + 4) & 8) != 0 )
        {
          return 1;
        }
        else if ( !a3 || !a4 )
        {
          return *(_QWORD *)(a1 + 8) != 0;
        }
      }
    }
  }
  return result;
}
