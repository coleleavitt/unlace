_QWORD *__fastcall sub_15A3210(__int64 a1, __int64 a2, char *a3)
{
  __int64 v4; // rax
  _QWORD *result; // rax

  a2 = (unsigned int)a2;
  switch ( (int)a2 )
  {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
      break;
    case 2:
      goto LABEL_20;
    case 7:
      a3 = "(";
      break;
    case 8:
      a3 = ")";
      break;
    case 9:
      a3 = "[";
      break;
    case 10:
      a3 = "]";
      break;
    case 11:
      a3 = "{";
      break;
    case 12:
      a3 = "}";
      break;
    case 13:
      a3 = "<";
      break;
    case 14:
      a3 = ">";
      break;
    case 15:
      a3 = ", ";
      break;
    case 16:
      a3 = ":";
      break;
    case 17:
      a3 = ";";
      break;
    case 18:
      a3 = " = ";
      break;
    case 19:
      a3 = " ";
      break;
    case 20:
      a3 = "\n";
      break;
    default:
      a2 = (unsigned int)a2;
LABEL_20:
      a3 = (char *)&byte_22F0C30;
      break;
  }
  v4 = *(unsigned int *)(a1 + 56);
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 60) )
  {
    sub_2237220(a1 + 48, a1 + 64, v4 + 1, 16);
    v4 = *(unsigned int *)(a1 + 56);
  }
  result = (_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v4);
  *result = a2;
  result[1] = a3;
  ++*(_DWORD *)(a1 + 56);
  return result;
}
