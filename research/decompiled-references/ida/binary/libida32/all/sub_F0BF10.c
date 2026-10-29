__int64 __fastcall sub_F0BF10(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdi

  sub_F07020(a1, a2);
  sub_F068D0(a1, *(_QWORD *)(a2 + 48));
  if ( (*(_BYTE *)(a2 + 88) & 8) != 0 )
  {
    sub_971800(*(_QWORD *)(a1 + 1096), " synthesize");
    result = *(_BYTE *)(a2 + 88) & 7;
    if ( (unsigned __int8)result > 4u )
      return result;
  }
  else
  {
    result = *(_BYTE *)(a2 + 88) & 7;
  }
  v3 = *(_QWORD *)(a1 + 1096);
  switch ( (char)result )
  {
    case 0:
      result = sub_971800(v3, " none");
      break;
    case 1:
      result = sub_971800(v3, " private");
      break;
    case 2:
      result = sub_971800(v3, " protected");
      break;
    case 3:
      result = sub_971800(v3, " public");
      break;
    case 4:
      result = sub_971800(v3, " package");
      break;
    default:
      return result;
  }
  return result;
}

