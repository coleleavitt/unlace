__int64 __fastcall sub_12510C0(unsigned __int8 *a1)
{
  __int64 result; // rax

  result = *((_QWORD *)a1 + 23);
  if ( *((_QWORD *)a1 + 22) == result )
  {
    *((_DWORD *)a1 + 36) = 27;
  }
  else
  {
    result = *((unsigned int *)a1 + 34);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result == 2 )
      {
        return (__int64)sub_1250F00((__int64)a1);
      }
      else if ( (_DWORD)result == 1 )
      {
        return (__int64)sub_1250210((__int64)a1);
      }
    }
    else
    {
      return sub_124FE40(a1);
    }
  }
  return result;
}
