__int64 __fastcall sub_CBFA70(__int64 a1, __int64 a2)
{
  sub_185D2A0(a2, "lia2pb_partial", 1, "(default: false) partial lia2pb conversion.", 0, 0);
  sub_185D2A0(
    a2,
    "lia2pb_max_bits",
    0,
    "(default: 32) maximum number of bits to be used (per variable) in lia2pb.",
    0,
    0);
  return sub_185D2A0(
           a2,
           "lia2pb_total_bits",
           0,
           "(default: 2048) total number of bits to be used (per problem) in lia2pb.",
           0,
           0);
}

