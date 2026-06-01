__int64 __fastcall sub_ECA430(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( (*(_WORD *)a1 & 0x200) != 0 )
  {
    result = *(_QWORD *)(a1 + 16);
    if ( result )
      return *(_QWORD *)(result + 8);
  }
  return result;
}

