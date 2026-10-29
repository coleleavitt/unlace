__int64 __fastcall sub_15AD4E0(unsigned int *a1, char a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r10d
  __int64 result; // rax
  int v8; // r11d
  unsigned int v9; // r10d

  v6 = *a1;
  result = 0;
  v8 = *a1 & 0x7F000;
  if ( v8 != 282624 )
  {
    if ( v8 )
    {
      return ((__int64 (*)(void))((char *)dword_261BE70 + dword_261BE70[(v6 >> 12) & 0x7F]))();
    }
    else
    {
      *((_QWORD *)a1 + 1) = a6;
      a1[48] = a3;
      v9 = ((a2 & 0x7F) << 12) | v6 & 0xFFF80FFF;
      a1[52] = a3;
      *a1 = v9;
      *((_BYTE *)a1 + 2) = BYTE2(v9) & 0xBF;
    }
  }
  return result;
}
