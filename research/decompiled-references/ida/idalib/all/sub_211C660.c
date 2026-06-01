void (*__fastcall sub_211C660(__int64 a1, unsigned __int8 **a2))()
{
  unsigned __int8 **v2; // rbx
  __int64 v3; // rax
  void (*v4)(); // kr00_8
  void (*result)(); // rax

  v2 = a2;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 528LL);
  if ( (__int64 (__fastcall *)(__int64, unsigned __int8 **))v3 != sub_211BA70 )
    return (void (*)())((__int64 (__fastcall *)(__int64, unsigned __int8 **))v3)(a1, a2);
  while ( 2 )
  {
    v4 = (void (*)())v3;
    v3 = *(unsigned __int8 *)v2;
    switch ( *(_BYTE *)v2 )
    {
      case 0:
        v3 = sub_211A5A0(a1, v2[2]);
        v2 = (unsigned __int8 **)v2[3];
        continue;
      case 2:
        result = *(void (**)())(*(_QWORD *)a1 + 64LL);
        if ( result != nullsub_1427 )
          result = (void (*)())((__int64 (__fastcall *)(__int64, unsigned __int8 *))result)(a1, v2[2]);
        break;
      case 3:
      case 4:
        v2 = (unsigned __int8 **)v2[2];
        continue;
      case 5:
        result = (void (*)())(*((__int64 (__fastcall **)(unsigned __int8 *, __int64))*(v2 - 1) + 7))(
                               (unsigned __int8 *)v2 - 8,
                               a1);
        break;
      default:
        result = v4;
        break;
    }
    break;
  }
  return result;
}
