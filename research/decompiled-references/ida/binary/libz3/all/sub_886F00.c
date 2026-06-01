__int64 __fastcall sub_886F00(__int64 a1, unsigned __int8 a2, int a3, char a4)
{
  __int64 result; // rax
  unsigned int v5; // esi

  if ( a3 )
  {
    if ( a3 != 1 )
    {
      sub_1872CE0("");
      sub_1873130(114, 542);
    }
    if ( a4 )
      return 4294967294LL;
    else
      return (unsigned int)a2 + 1;
  }
  else
  {
    result = 2;
    v5 = ~a2;
    if ( !a4 )
      return v5;
  }
  return result;
}

