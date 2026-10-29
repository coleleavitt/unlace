__int64 __fastcall sub_18957D0(__int64 a1)
{
  __int64 result; // rax
  char v2; // dl

  result = *(_QWORD *)(*(_QWORD *)a1 + 544LL);
  if ( result )
  {
    v2 = *(_BYTE *)(result + 8);
    result -= 48;
    if ( (v2 & 0x7Fu) - 19 >= 5 )
      return 0;
  }
  return result;
}
