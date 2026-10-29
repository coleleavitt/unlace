unsigned __int64 __fastcall sub_B50A00(__int64 a1)
{
  unsigned __int64 result; // rax

  result = sub_B4F900(a1);
  if ( result )
  {
    if ( ((*(_WORD *)result + 452) & 0x1FFu) <= 1 )
      return *(_QWORD *)(result + 16);
  }
  return result;
}

