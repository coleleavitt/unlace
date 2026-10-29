unsigned __int64 __fastcall sub_77D590(__int64 a1)
{
  unsigned __int64 result; // rax

  result = sub_77BC00(a1);
  if ( result )
  {
    if ( ((*(_WORD *)result + 451) & 0x1FFu) <= 1 )
      return *(_QWORD *)(result + 16);
  }
  return result;
}

