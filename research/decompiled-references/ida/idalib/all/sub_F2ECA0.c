__int64 __fastcall sub_F2ECA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1096);
  switch ( *(_DWORD *)(a2 + 48) )
  {
    case 0:
      result = sub_995540(v2, " add_lvalue_reference");
      break;
    case 1:
      result = sub_995540(v2, " add_pointer");
      break;
    case 2:
      result = sub_995540(v2, " add_rvalue_reference");
      break;
    case 3:
      result = sub_995540(v2, " decay");
      break;
    case 4:
      result = sub_995540(v2, " make_signed");
      break;
    case 5:
      result = sub_995540(v2, " make_unsigned");
      break;
    case 6:
      result = sub_995540(v2, " remove_all_extents");
      break;
    case 7:
      result = sub_995540(v2, " remove_const");
      break;
    case 8:
      result = sub_995540(v2, " remove_cv");
      break;
    case 9:
      result = sub_995540(v2, " remove_cvref");
      break;
    case 0xA:
      result = sub_995540(v2, " remove_extent");
      break;
    case 0xB:
      result = sub_995540(v2, " remove_pointer");
      break;
    case 0xC:
      result = sub_995540(v2, " remove_reference_t");
      break;
    case 0xD:
      result = sub_995540(v2, " remove_restrict");
      break;
    case 0xE:
      result = sub_995540(v2, " remove_volatile");
      break;
    case 0xF:
      result = sub_995540(v2, " underlying_type");
      break;
    default:
      return result;
  }
  return result;
}
