__int64 __fastcall sub_E8CED0(__int64 a1, char a2)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 0:
      result = sub_971800(a1, "async");
      break;
    case 1:
      result = sub_971800(a1, "attach");
      break;
    case 2:
      result = sub_971800(a1, "auto");
      break;
    case 3:
      result = sub_971800(a1, "bind");
      break;
    case 4:
      result = sub_971800(a1, "collapse");
      break;
    case 5:
      result = sub_971800(a1, "copy");
      break;
    case 6:
      result = sub_971800(a1, "pcopy");
      break;
    case 7:
      result = sub_971800(a1, "present_or_copy");
      break;
    case 8:
      result = sub_971800(a1, "copyin");
      break;
    case 9:
      result = sub_971800(a1, "pcopyin");
      break;
    case 10:
      result = sub_971800(a1, "present_or_copyin");
      break;
    case 11:
      result = sub_971800(a1, "copyout");
      break;
    case 12:
      result = sub_971800(a1, "pcopyout");
      break;
    case 13:
      result = sub_971800(a1, "present_or_copyout");
      break;
    case 14:
      result = sub_971800(a1, "create");
      break;
    case 15:
      result = sub_971800(a1, "pcreate");
      break;
    case 16:
      result = sub_971800(a1, "present_or_create");
      break;
    case 17:
      result = sub_971800(a1, "default");
      break;
    case 18:
      result = sub_971800(a1, "default_async");
      break;
    case 19:
      result = sub_971800(a1, "delete");
      break;
    case 20:
      result = sub_971800(a1, "detach");
      break;
    case 21:
      result = sub_971800(a1, "device");
      break;
    case 22:
      result = sub_971800(a1, "device_num");
      break;
    case 23:
      result = sub_971800(a1, "deviceptr");
      break;
    case 24:
      result = sub_971800(a1, "device_resident");
      break;
    case 25:
      result = sub_971800(a1, "device_type");
      break;
    case 26:
      result = sub_971800(a1, "dtype");
      break;
    case 27:
      result = sub_971800(a1, "finalize");
      break;
    case 28:
      result = sub_971800(a1, "firstprivate");
      break;
    case 29:
      result = sub_971800(a1, "gang");
      break;
    case 30:
      result = sub_971800(a1, "host");
      break;
    case 31:
      result = sub_971800(a1, "if");
      break;
    case 32:
      result = sub_971800(a1, "if_present");
      break;
    case 33:
      result = sub_971800(a1, "independent");
      break;
    case 34:
      result = sub_971800(a1, "link");
      break;
    case 35:
      result = sub_971800(a1, "no_create");
      break;
    case 36:
      result = sub_971800(a1, "nohost");
      break;
    case 37:
      result = sub_971800(a1, "num_gangs");
      break;
    case 38:
      result = sub_971800(a1, "num_workers");
      break;
    case 39:
      result = sub_971800(a1, "present");
      break;
    case 40:
      result = sub_971800(a1, "private");
      break;
    case 41:
      result = sub_971800(a1, "reduction");
      break;
    case 42:
      result = sub_971800(a1, "self");
      break;
    case 43:
      result = sub_971800(a1, "seq");
      break;
    case 44:
      result = sub_971800(a1, "tile");
      break;
    case 45:
      result = sub_971800(a1, "use_device");
      break;
    case 46:
      result = sub_971800(a1, "vector");
      break;
    case 47:
      result = sub_971800(a1, "vector_length");
      break;
    case 48:
      result = sub_971800(a1, "wait");
      break;
    case 49:
      result = sub_971800(a1, "worker");
      break;
    case 50:
    case 51:
      result = sub_971800(a1, "<invalid>");
      break;
  }
  return result;
}

