__int64 __fastcall sub_55AAD0(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rdx
  __int64 result; // rax

  v2 = *(_QWORD **)(a1 + 200);
  if ( a2 > 0x20 )
  {
    if ( a2 == 64 )
      return v2[185];
    goto LABEL_5;
  }
  if ( !a2 )
  {
LABEL_5:
    result = 0;
    if ( v2[131] == a2 )
      return v2[151];
    return result;
  }
  switch ( a2 )
  {
    case 1uLL:
      result = v2[144];
      break;
    case 2uLL:
    case 0x20uLL:
      result = v2[145];
      break;
    case 4uLL:
      result = v2[146];
      break;
    case 8uLL:
      result = v2[147];
      break;
    case 0x10uLL:
      result = v2[148];
      break;
    default:
      goto LABEL_5;
  }
  return result;
}
