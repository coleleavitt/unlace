__int64 __fastcall sub_211A5A0(__int64 a1, unsigned __int8 *a2)
{
  __int64 result; // rax
  __int64 v4; // kr00_8

  while ( 2 )
  {
    v4 = result;
    result = *a2;
    switch ( *a2 )
    {
      case 0u:
        result = sub_211A5A0(a1, *((_QWORD *)a2 + 2));
        a2 = *((unsigned __int8 **)a2 + 3);
        continue;
      case 2u:
        result = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
        if ( (void (*)())result != nullsub_1427 )
          result = ((__int64 (__fastcall *)(__int64, _QWORD))result)(a1, *((_QWORD *)a2 + 2));
        break;
      case 3u:
      case 4u:
        a2 = *((unsigned __int8 **)a2 + 2);
        if ( *a2 <= 5u )
          continue;
        break;
      case 5u:
        result = (*(__int64 (__fastcall **)(unsigned __int8 *, __int64))(*((_QWORD *)a2 - 1) + 56LL))(a2 - 8, a1);
        break;
      default:
        result = v4;
        break;
    }
    break;
  }
  return result;
}
