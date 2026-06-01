__int64 __fastcall sub_689BF0(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 result; // rax

  if ( (unsigned __int8)sub_614FB0(*a1, 59, a3, a4, a5, a6) == a2 )
    return 7;
  switch ( a2 )
  {
    case 1:
      result = 50;
      break;
    case 2:
    case 3:
      result = 3;
      break;
    case 4:
      result = 4;
      break;
    case 8:
      result = 5;
      break;
    case 16:
      result = 6;
      break;
    default:
      v6 = a1[2];
      if ( (unsigned __int8)getinf(66) )
        v7 = (unsigned __int8)getinf(66);
      else
        v7 = *(_QWORD *)(v6 + 120);
      if ( a2 == v7 )
      {
        result = 41;
      }
      else
      {
        v8 = a1[2];
        result = 0;
        if ( a2 == *(_QWORD *)(v8 + 120) )
          result = (*(_DWORD *)(v8 + 8) & 0x8000000) != 0 ? 0x39 : 0;
      }
      break;
  }
  return result;
}

