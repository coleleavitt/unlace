__int64 __fastcall sub_3C73F0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 1576) )
  {
    result = sub_506F90(*(_QWORD *)(a1 + 1368), a1 + 1320);
    *(_BYTE *)(a1 + 1576) = 0;
  }
  return result;
}
