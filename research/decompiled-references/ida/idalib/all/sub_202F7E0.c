_QWORD *__fastcall sub_202F7E0(_QWORD *a1, int a2)
{
  switch ( a2 )
  {
    case 0:
      sub_202F730(a1, "external");
      break;
    case 1:
      sub_202F730(a1, "available_externally");
      break;
    case 2:
      sub_202F730(a1, "linkonce");
      break;
    case 3:
      sub_202F730(a1, "linkonce_odr");
      break;
    case 4:
      sub_202F730(a1, "weak");
      break;
    case 5:
      sub_202F730(a1, "weak_odr");
      break;
    case 6:
      sub_202F730(a1, "appending");
      break;
    case 7:
      sub_202F730(a1, "internal");
      break;
    case 8:
      sub_202F730(a1, "private");
      break;
    case 9:
      sub_202F730(a1, "extern_weak");
      break;
    case 10:
      sub_202F730(a1, "common");
      break;
  }
  return a1;
}
