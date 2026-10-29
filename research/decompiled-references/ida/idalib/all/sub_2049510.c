__int64 __fastcall sub_2049510(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    if ( *(_DWORD *)(result + 8) )
      return *(_QWORD *)(result + 48);
    else
      return 0;
  }
  return result;
}
