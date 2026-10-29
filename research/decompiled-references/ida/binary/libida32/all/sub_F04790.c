__int64 __fastcall sub_F04790(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1096);
  switch ( *(_DWORD *)(a2 + 40) )
  {
    case 0:
      result = sub_971800(v2, " sw0");
      break;
    case 1:
      result = sub_971800(v2, " sw1");
      break;
    case 2:
      result = sub_971800(v2, " hw0");
      break;
    case 3:
      result = sub_971800(v2, " hw1");
      break;
    case 4:
      result = sub_971800(v2, " hw2");
      break;
    case 5:
      result = sub_971800(v2, " hw3");
      break;
    case 6:
      result = sub_971800(v2, " hw4");
      break;
    case 7:
      result = sub_971800(v2, " hw5");
      break;
    case 8:
      result = sub_971800(v2, " eic");
      break;
    default:
      return result;
  }
  return result;
}

