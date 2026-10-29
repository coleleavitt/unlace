__int64 __fastcall sub_112D160(_QWORD *a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi

  switch ( a2 )
  {
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 15:
      result = sub_112CD10(a1);
      break;
    case 9:
      result = a1[212];
      if ( !result )
      {
        result = (*(__int64 (__fastcall **)(_QWORD *))*a1)(a1);
        v4 = a1[212];
        a1[212] = result;
        if ( v4 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
          result = a1[212];
        }
      }
      break;
    case 10:
      result = sub_112CF10(a1);
      break;
    case 11:
      result = (__int64)sub_112CF50((__int64)a1);
      break;
    case 12:
    case 13:
    case 14:
    case 20:
      result = a1[214];
      if ( !result )
      {
        result = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
        v5 = a1[214];
        a1[214] = result;
        if ( v5 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
          result = a1[214];
        }
      }
      break;
    case 16:
    case 17:
      result = (__int64)sub_112CFD0((__int64)a1);
      break;
    case 18:
      result = (__int64)sub_112D050((__int64)a1);
      break;
    case 19:
      result = (__int64)sub_112D0D0(a1);
      break;
  }
  return result;
}
