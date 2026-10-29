__int64 __fastcall sub_15627F0(__int64 a1, char a2)
{
  __int16 v2; // bp
  __int64 result; // rax
  __int16 v4; // dx

  v2 = *(_WORD *)(a1 + 32);
  result = sub_155CFC0(a1);
  if ( (_DWORD)result != 3 )
  {
    if ( *(_WORD *)(a1 + 32) == 22 )
      goto LABEL_6;
    result = sub_155DB90(a1, 0, 1u, nullptr);
    if ( (_DWORD)result == 2 )
      return 0;
    if ( (_DWORD)result && (_DWORD)result != 3 )
    {
LABEL_6:
      result = sub_1562710(a1, v2 == 76);
      if ( (_DWORD)result == 2 )
      {
        v4 = *(_WORD *)(a1 + 32);
        if ( v4 != 63 && (v4 != 62 || a2 != 1) )
          return 1;
      }
    }
  }
  return result;
}
