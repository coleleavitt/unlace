__int64 __fastcall sub_3C79F0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 1577) )
  {
    result = sub_506F90(*(_QWORD *)(a1 + 1448), a1 + 1400);
    *(_BYTE *)(a1 + 1577) = 0;
  }
  return result;
}
