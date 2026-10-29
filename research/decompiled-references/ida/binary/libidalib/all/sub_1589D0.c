__int64 __fastcall sub_1589D0(TSystemInit *this)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(TSystemInit *))(*(_QWORD *)this + 232LL))(this);
  if ( result )
  {
    result = *(int *)(result + 1200);
    if ( qword_2543A0[result] )
    {
      qword_2543A0[result] = 0;
      return sub_1447B0(this);
    }
  }
  return result;
}

