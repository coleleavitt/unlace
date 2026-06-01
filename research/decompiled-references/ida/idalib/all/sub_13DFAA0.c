__int64 __fastcall sub_13DFAA0(__int16 a1, __int64 a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 9:
    case 11:
    case 14:
    case 17:
      result = 8;
      break;
    case 10:
    case 15:
      result = sub_102DB30((unsigned __int8 *)a2, *(_DWORD *)(a2 + 152));
      break;
    case 12:
    case 18:
      result = sub_102DB30((unsigned __int8 *)a2, *(_DWORD *)(a2 + 160));
      break;
    case 13:
    case 16:
    case 19:
      result = sub_102DB30((unsigned __int8 *)a2, *(_DWORD *)(a2 + 164));
      break;
  }
  return result;
}
