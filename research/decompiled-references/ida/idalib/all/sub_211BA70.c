__int64 __fastcall sub_211BA70(__int64 a1, unsigned __int8 **a2)
{
  __int64 result; // rax
  __int64 v4; // kr00_8

  while ( 2 )
  {
    v4 = result;
    result = *(unsigned __int8 *)a2;
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        result = sub_211A5A0(a1, a2[2]);
        a2 = (unsigned __int8 **)a2[3];
        continue;
      case 2:
        result = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
        if ( (void (*)())result != nullsub_1427 )
          result = ((__int64 (__fastcall *)(__int64, unsigned __int8 *))result)(a1, a2[2]);
        break;
      case 3:
      case 4:
        a2 = (unsigned __int8 **)a2[2];
        if ( *(_BYTE *)a2 <= 5u )
          continue;
        break;
      case 5:
        result = (*((__int64 (__fastcall **)(unsigned __int8 *, __int64))*(a2 - 1) + 7))((unsigned __int8 *)a2 - 8, a1);
        break;
      default:
        result = v4;
        break;
    }
    break;
  }
  return result;
}
