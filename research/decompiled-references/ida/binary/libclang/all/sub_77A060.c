__int64 __fastcall sub_77A060(_BYTE *a1)
{
  char v1; // dl
  __int64 result; // rax

  if ( (a1[82] & 0x40) != 0 )
    return 1;
  v1 = a1[83];
  if ( (v1 & 2) != 0 )
    return 1;
  if ( (v1 & 8) != 0 || (result = a1[128] & 1, (a1[128] & 1) == 0) && (result = 1, !*((_QWORD *)a1 + 16)) )
  {
    result = 1;
    if ( (a1[83] & 0x40) == 0 && (a1[84] & 0x60) == 0 )
      return sub_799100(a1);
  }
  return result;
}

