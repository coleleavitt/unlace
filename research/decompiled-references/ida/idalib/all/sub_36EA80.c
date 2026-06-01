__int64 __fastcall sub_36EA80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( (_DWORD)v2 == 2 )
    callui();
  if ( (int)v2 > 2 )
  {
    if ( (_DWORD)v2 == 4 )
      callui();
  }
  else
  {
    if ( !(_DWORD)v2 )
      callui();
    if ( (_DWORD)v2 == 1 )
      callui();
  }
  *(_QWORD *)(a2 + 8) = 0;
  return 0;
}
