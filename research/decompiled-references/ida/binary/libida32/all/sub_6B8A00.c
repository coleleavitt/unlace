_QWORD *__fastcall sub_6B8A00(_QWORD *a1, __int64 a2, char a3)
{
  _QWORD *result; // rax

  if ( (unsigned __int8)getinf(59) == a2 )
  {
    *a1 = a3 == 0 ? 39LL : 7LL;
    return a1;
  }
  else
  {
    switch ( a2 )
    {
      case 1LL:
        *a1 = a3 == 0 ? 34LL : 2LL;
        result = a1;
        break;
      case 2LL:
        *a1 = a3 == 0 ? 35LL : 3LL;
        result = a1;
        break;
      case 4LL:
        *a1 = a3 == 0 ? 36LL : 4LL;
        result = a1;
        break;
      case 8LL:
        *a1 = a3 == 0 ? 37LL : 5LL;
        result = a1;
        break;
      case 16LL:
        *a1 = a3 == 0 ? 38LL : 6LL;
        result = a1;
        break;
      default:
        *a1 = 0;
        result = a1;
        break;
    }
  }
  return result;
}

