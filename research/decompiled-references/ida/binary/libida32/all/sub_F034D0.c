__int64 __fastcall sub_F034D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1096);
  switch ( *(_DWORD *)(a2 + 40) )
  {
    case 0:
      result = sub_971800(v2, " IRQ");
      break;
    case 1:
      result = sub_971800(v2, " FIQ");
      break;
    case 2:
      result = sub_971800(v2, " SWI");
      break;
    case 3:
      result = sub_971800(v2, " ABORT");
      break;
    case 4:
      result = sub_971800(v2, " UNDEF");
      break;
    case 5:
      result = sub_971800(v2, " Generic");
      break;
    default:
      return result;
  }
  return result;
}

