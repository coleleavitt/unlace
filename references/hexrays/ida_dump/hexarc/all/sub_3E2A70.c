__int64 __fastcall sub_3E2A70(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  int v4; // edi
  int v5; // ecx

  result = a2 & 0xFFFFFFF7;
  LOBYTE(result) = a2 > 297 || (_DWORD)result == 272;
  if ( !(_BYTE)result )
  {
    v4 = a2 - 8;
    if ( a2 - 8 >= 0 && (a2 & 3) == 0 )
    {
      v5 = v4 >> 2;
      if ( v4 <= 103 )
      {
        if ( a3 <= 4 )
        {
          return 1;
        }
        else if ( a3 <= 8 && v5 < 11 )
        {
          return (v5 & 1) == 0;
        }
      }
    }
  }
  return result;
}
