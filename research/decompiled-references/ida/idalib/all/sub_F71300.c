_QWORD *__fastcall sub_F71300(_QWORD *a1, __int64 a2)
{
  switch ( a2 )
  {
    case 0LL:
      sub_F6EDB0(a1, &byte_22F0C30);
      break;
    case 1LL:
    case 11LL:
      sub_F6EDB0(a1, "__global");
      break;
    case 2LL:
    case 14LL:
      sub_F6EDB0(a1, "__local");
      break;
    case 3LL:
      sub_F6EDB0(a1, "__constant");
      break;
    case 4LL:
    case 15LL:
      sub_F6EDB0(a1, "__private");
      break;
    case 5LL:
      sub_F6EDB0(a1, "__generic");
      break;
    case 6LL:
    case 12LL:
      sub_F6EDB0(a1, "__global_device");
      break;
    case 7LL:
    case 13LL:
      sub_F6EDB0(a1, "__global_host");
      break;
    case 8LL:
      sub_F6EDB0(a1, "__device__");
      break;
    case 9LL:
      sub_F6EDB0(a1, "__constant__");
      break;
    case 10LL:
      sub_F6EDB0(a1, "__shared__");
      break;
    case 16LL:
      sub_F6EDB0(a1, "__sptr __ptr32");
      break;
    case 17LL:
      sub_F6EDB0(a1, "__uptr __ptr32");
      break;
    case 18LL:
      sub_F6EDB0(a1, "__ptr64");
      break;
    case 19LL:
      sub_F6EDB0(a1, "groupshared");
      break;
    case 20LL:
      sub_F6EDB0(a1, "hlsl_constant");
      break;
    case 21LL:
      sub_F6EDB0(a1, "hlsl_private");
      break;
    case 22LL:
      sub_F6EDB0(a1, "hlsl_device");
      break;
    case 23LL:
      sub_F6EDB0(a1, "hlsl_input");
      break;
    case 24LL:
      sub_F6EDB0(a1, "__funcref");
      break;
    default:
      sub_D8B070(
        a1,
        (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf,
        16,
        (__int64)"%u",
        a2 - 25);
      break;
  }
  return a1;
}
