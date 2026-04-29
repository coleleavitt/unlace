unsigned __int8 *__fastcall sub_832A0(__int64 a1, __int16 a2)
{
  unsigned __int8 *result; // rax
  int v3; // edx
  __int64 v4; // rsi
  __int64 v5; // rdx

  result = *(unsigned __int8 **)(a1 + 8);
  v3 = *((_DWORD *)result + 2);
  if ( (v3 & 0x100) == 0 )
  {
    v4 = (unsigned __int16)(a2 << 8);
    if ( (v3 & 1) != 0 || (~(_BYTE)v3 & 0x52) == 0 )
    {
      v5 = *result;
      *((_DWORD *)result + 2) = 1;
      *(_QWORD *)result = v4 + v5;
    }
    else
    {
      *((_DWORD *)result + 2) = 1094;
      *(_QWORD *)result = v4;
    }
  }
  return result;
}
