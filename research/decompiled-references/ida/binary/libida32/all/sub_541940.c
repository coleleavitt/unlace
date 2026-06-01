__int64 __fastcall sub_541940(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rdx
  __int64 result; // rax

  v2 = *(_QWORD **)(a1 + 200);
  if ( a2 > 0x20 )
  {
    if ( a2 == 64 )
      return v2[164];
    goto LABEL_5;
  }
  if ( !a2 )
  {
LABEL_5:
    result = 0;
    if ( v2[110] == a2 )
      return v2[130];
    return result;
  }
  switch ( a2 )
  {
    case 1uLL:
      result = v2[123];
      break;
    case 2uLL:
    case 0x20uLL:
      result = v2[124];
      break;
    case 4uLL:
      result = v2[125];
      break;
    case 8uLL:
      result = v2[126];
      break;
    case 0x10uLL:
      result = v2[127];
      break;
    default:
      goto LABEL_5;
  }
  return result;
}

