__int64 __fastcall sub_675410(void (***a1)(void))
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 4))-- == 1 )
    {
      (**a1)();
      return sub_186B220(a1);
    }
  }
  return result;
}

