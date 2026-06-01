_BYTE *__fastcall sub_144C6A0(_QWORD *a1)
{
  _BYTE *result; // rax

  a1[28] = sub_144C630(a1, "__LINE__");
  a1[29] = sub_144C630(a1, "__FILE__");
  a1[30] = sub_144C630(a1, "__DATE__");
  a1[31] = sub_144C630(a1, "__TIME__");
  a1[36] = sub_144C630(a1, "__COUNTER__");
  a1[37] = sub_144C630(a1, "_Pragma");
  a1[63] = sub_144C630(a1, "__FLT_EVAL_METHOD__");
  if ( (*(_BYTE *)(a1[7] + 1LL) & 8) != 0 )
    a1[54] = sub_144C630(a1, "__has_cpp_attribute");
  else
    a1[54] = 0;
  a1[33] = sub_144C630(a1, "__BASE_FILE__");
  a1[32] = sub_144C630(a1, "__INCLUDE_LEVEL__");
  a1[35] = sub_144C630(a1, "__TIMESTAMP__");
  if ( *(char *)a1[7] < 0 )
  {
    a1[39] = sub_144C630(a1, "__identifier");
    a1[38] = sub_144C630(a1, "__pragma");
  }
  else
  {
    *((_OWORD *)a1 + 19) = 0;
  }
  a1[34] = sub_144C630(a1, "__FILE_NAME__");
  a1[42] = sub_144C630(a1, "__has_feature");
  a1[43] = sub_144C630(a1, "__has_extension");
  a1[44] = sub_144C630(a1, "__has_builtin");
  a1[45] = sub_144C630(a1, "__has_constexpr_builtin");
  a1[46] = sub_144C630(a1, "__has_attribute");
  if ( (*(_BYTE *)(a1[7] + 1LL) & 8) != 0 )
    a1[55] = 0;
  else
    a1[55] = sub_144C630(a1, "__has_c_attribute");
  a1[56] = sub_144C630(a1, "__has_declspec_attribute");
  a1[47] = sub_144C630(a1, "__has_embed");
  a1[48] = sub_144C630(a1, "__has_include");
  a1[49] = sub_144C630(a1, "__has_include_next");
  a1[50] = sub_144C630(a1, "__has_warning");
  a1[51] = sub_144C630(a1, "__is_identifier");
  a1[57] = sub_144C630(a1, "__is_target_arch");
  a1[58] = sub_144C630(a1, "__is_target_vendor");
  a1[59] = sub_144C630(a1, "__is_target_os");
  a1[60] = sub_144C630(a1, "__is_target_environment");
  a1[61] = sub_144C630(a1, "__is_target_variant_os");
  a1[62] = sub_144C630(a1, "__is_target_variant_environment");
  a1[52] = sub_144C630(a1, "__building_module");
  result = (_BYTE *)a1[7];
  if ( *((_QWORD *)result + 62) )
  {
    result = sub_144C630(a1, "__MODULE__");
    a1[53] = result;
  }
  else
  {
    a1[53] = 0;
  }
  return result;
}
