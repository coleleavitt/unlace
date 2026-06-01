__int64 __fastcall sub_158190(TSystemInit *this)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(TSystemInit *))(*(_QWORD *)this + 232LL))(this);
  if ( result )
  {
    result = *(int *)(result + 1192);
    if ( qword_2531E0[result] )
    {
      qword_2531E0[result] = 0;
      return sub_144050(this);
    }
  }
  return result;
}

