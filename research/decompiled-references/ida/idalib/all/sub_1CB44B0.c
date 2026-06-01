__int64 __fastcall sub_1CB44B0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  result = *a2;
  if ( *a2 )
  {
    if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 68 > 6 )
      return 0;
    else
      *a2 = *(_QWORD *)(result + 48);
  }
  return result;
}
