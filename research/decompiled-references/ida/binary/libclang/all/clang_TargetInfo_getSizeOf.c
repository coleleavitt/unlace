__int64 __fastcall clang_TargetInfo_getSizeOf(__int64 a1, int a2)
{
  unsigned __int8 *v2; // rdx
  __int64 result; // rax

  if ( !a1 )
    return 0xFFFFFFFFLL;
  if ( !*(_QWORD *)a1 )
    BUG();
  v2 = *(unsigned __int8 **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 80LL) + 17288LL);
  switch ( a2 )
  {
    case 3:
      result = v2[10];
      break;
    case 16:
      result = v2[12];
      break;
    case 17:
      result = v2[14];
      break;
    case 18:
      result = v2[30];
      break;
    case 19:
      result = v2[32];
      break;
    case 23:
      result = v2[24];
      break;
    default:
      return 0xFFFFFFFFLL;
  }
  return result;
}

