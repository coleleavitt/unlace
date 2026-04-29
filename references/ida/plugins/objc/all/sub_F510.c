__int64 __fastcall sub_F510(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = a3;
  if ( *(_BYTE *)(a1[1] + 2216LL) )
  {
    get_segm_name();
    sub_EC40();
  }
  switch ( v3 )
  {
    case 1LL:
      result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 184LL))(a1, a2);
      break;
    case 2LL:
      result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 192LL))(a1, a2);
      break;
    case 3LL:
      result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 232LL))(a1, a2);
      break;
    case 4LL:
      result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 248LL))(a1, a2);
      break;
    case 5LL:
      result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 240LL))(a1, a2);
      break;
    case 6LL:
      result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 200LL))(a1, a2);
      break;
    case 7LL:
      result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 224LL))(a1, a2);
      break;
    case 8LL:
      result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 208LL))(a1, a2);
      break;
    case 9LL:
      result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 216LL))(a1, a2);
      break;
    case 10LL:
      result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 256LL))(a1, a2);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
