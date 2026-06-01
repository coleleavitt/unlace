__int64 __fastcall sub_12DB010(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 && !*(_BYTE *)(v1 + 16) )
  {
    result = sub_22198A0(*(_QWORD *)(v1 + 8));
    *a1 = 0;
  }
  else
  {
    *a1 = 0;
  }
  return result;
}
