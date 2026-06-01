__int64 __fastcall sub_3C82F0(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_2CCB598 + 1672);
  switch ( a1 )
  {
    case 1LL:
      result = v1 + 2872;
      break;
    case 2LL:
      result = v1 + 2520;
      break;
    case 3LL:
      result = v1 + 1320;
      break;
    case 4LL:
      result = v1 + 1400;
      break;
    case 5LL:
      result = v1 + 1704;
      break;
    case 6LL:
      result = v1 + 1624;
      break;
    default:
      if ( !under_debugger )
        interr(1816);
      BUG();
  }
  return result;
}
