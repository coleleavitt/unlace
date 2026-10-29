__int64 __fastcall sub_1080C80(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx

  if ( *(_BYTE *)(a1 + 556) )
    a3[13] |= 2u;
  sub_100B2E0(a1, a2, (__int64)a3, a4);
  result = sub_21D5370(a1, a2);
  if ( *(_QWORD *)(a1 + 112) != result )
  {
    if ( (a3[44] & 1) != 0 )
      result = sub_21D5380();
    else
      result = sub_21D5390(a1, a2, v6);
    *(_QWORD *)(a1 + 112) = result;
  }
  a3[3] |= 0x40u;
  if ( *(_DWORD *)(a1 + 260) == 20 && (a3[44] & 4) != 0 )
  {
    if ( *(_BYTE *)(a1 + 569) )
      *(_BYTE *)(a1 + 287) = 0x80;
  }
  return result;
}

