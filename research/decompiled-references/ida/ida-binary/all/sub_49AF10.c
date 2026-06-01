char __fastcall sub_49AF10(__int64 a1)
{
  char result; // al

  result = sub_4DFF10(a1 + 104);
  if ( !result )
  {
    result = 1;
    if ( *(_DWORD *)(a1 + 2376) != 1 )
      return *(_QWORD *)(a1 + 1976) != 0;
  }
  return result;
}
