void (*__fastcall sub_211BD20(_QWORD *a1, __int64 a2, __int64 a3))()
{
  __int64 v4; // rbx
  void (*result)(); // rax
  __int64 v6; // rdi
  void (*v7)(); // rax

  v4 = a3;
  while ( 2 )
  {
    switch ( *(_BYTE *)v4 )
    {
      case 0:
        sub_211A5A0((__int64)a1, *(unsigned __int8 **)(v4 + 16));
        v4 = *(_QWORD *)(v4 + 24);
        continue;
      case 2:
        v7 = *(void (**)())(*a1 + 64LL);
        if ( v7 != nullsub_1427 )
          ((void (__fastcall *)(_QWORD *, _QWORD))v7)(a1, *(_QWORD *)(v4 + 16));
        break;
      case 3:
      case 4:
        v4 = *(_QWORD *)(v4 + 16);
        if ( *(_BYTE *)v4 <= 5u )
          continue;
        break;
      case 5:
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(v4 - 8) + 56LL))(v4 - 8, a1);
        break;
      default:
        goto LABEL_4;
    }
    break;
  }
LABEL_4:
  result = (void (*)())sub_21233E0(a2);
  v6 = a1[2];
  if ( v6 )
  {
    result = *(void (**)())(*(_QWORD *)v6 + 24LL);
    if ( result != nullsub_1429 )
      return (void (*)())((__int64 (__fastcall *)(__int64, __int64, __int64))result)(v6, a2, a3);
  }
  return result;
}
