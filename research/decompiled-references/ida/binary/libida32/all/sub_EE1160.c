__int64 __fastcall sub_EE1160(__int64 a1, char a2)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 0:
      result = sub_971800(a1, "parallel");
      break;
    case 1:
      result = sub_971800(a1, "serial");
      break;
    case 2:
      result = sub_971800(a1, "kernels");
      break;
    case 3:
      result = sub_971800(a1, "data");
      break;
    case 4:
      result = sub_971800(a1, "enter data");
      break;
    case 5:
      result = sub_971800(a1, "exit data");
      break;
    case 6:
      result = sub_971800(a1, "host_data");
      break;
    case 7:
      result = sub_971800(a1, "loop");
      break;
    case 8:
      result = sub_971800(a1, "cache");
      break;
    case 9:
      result = sub_971800(a1, "parallel loop");
      break;
    case 10:
      result = sub_971800(a1, "serial loop");
      break;
    case 11:
      result = sub_971800(a1, "kernels loop");
      break;
    case 12:
      result = sub_971800(a1, "atomic");
      break;
    case 13:
      result = sub_971800(a1, "declare");
      break;
    case 14:
      result = sub_971800(a1, "init");
      break;
    case 15:
      result = sub_971800(a1, "shutdown");
      break;
    case 16:
      result = sub_971800(a1, "set");
      break;
    case 17:
      result = sub_971800(a1, "update");
      break;
    case 18:
      result = sub_971800(a1, "wait");
      break;
    case 19:
      result = sub_971800(a1, "routine");
      break;
    case 20:
      result = sub_971800(a1, "<invalid>");
      break;
  }
  return result;
}

