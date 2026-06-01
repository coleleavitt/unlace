unsigned __int64 __fastcall sub_550000(__int64 a1, int a2, int a3, __int64 a4)
{
  unsigned __int64 result; // rax

  if ( !a2 )
  {
    switch ( a3 )
    {
      case 1:
        return sub_529D70(a1, **(_BYTE **)(a4 + 8));
      case 2:
        return sub_529D80(a1);
      case 0:
        return sub_529FD0(a1);
    }
  }
  return result;
}
