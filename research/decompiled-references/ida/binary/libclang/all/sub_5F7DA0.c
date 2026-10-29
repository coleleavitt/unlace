__int64 __fastcall sub_5F7DA0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  char v6; // dl

  if ( HIDWORD(a2) == (_DWORD)a3 || (v6 = sub_CB1620(a1, HIDWORD(a2)), result = 1, !v6) )
  {
    v4 = HIDWORD(a3);
    result = 0;
    if ( (_DWORD)v4 != (_DWORD)a2 )
      return 2 * (unsigned int)(unsigned __int8)sub_CB1620(a1, (unsigned int)v4);
  }
  return result;
}

