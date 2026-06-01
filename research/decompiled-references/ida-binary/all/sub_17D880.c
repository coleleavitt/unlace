__int64 __fastcall sub_17D880(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 232);
  if ( result )
  {
    if ( !*(_BYTE *)(result + 741) )
      return 0;
  }
  return result;
}
