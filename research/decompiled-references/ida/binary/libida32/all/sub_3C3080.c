__int64 __fastcall sub_3C3080(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_2CA1698 + 1480);
  switch ( a1 )
  {
    case 1LL:
      result = v1 + 2672;
      break;
    case 2LL:
      result = v1 + 2408;
      break;
    case 3LL:
      result = v1 + 1288;
      break;
    case 4LL:
      result = v1 + 1360;
      break;
    case 5LL:
      result = v1 + 1624;
      break;
    case 6LL:
      result = v1 + 1552;
      break;
    default:
      if ( !under_debugger )
        interr(1816);
      BUG();
  }
  return result;
}

