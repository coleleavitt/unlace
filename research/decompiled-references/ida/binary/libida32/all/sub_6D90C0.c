unsigned __int64 __fastcall sub_6D90C0(__int64 a1)
{
  _QWORD v2[61]; // [rsp+0h] [rbp-1F8h] BYREF
  unsigned __int64 v3; // [rsp+1E8h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  memset(v2, 0, 0x1E0u);
  v2[1] = 8;
  v2[0] = "CLANG_ARGV";
  v2[5] = "CLANG_SMART_POINTERS";
  v2[10] = "CLANG_APPLY_TINFO";
  v2[15] = "CLANG_PARSE_STATIC_DECLS";
  v2[20] = "CLANG_LOG_WARNINGS";
  v2[25] = "CLANG_LOG_AST";
  v2[30] = "CLANG_LOG_MACROS";
  v2[35] = "CLANG_LOG_PREDEFINED";
  LODWORD(v2[2]) = 50593793;
  v2[6] = 32;
  LODWORD(v2[7]) = 50593793;
  v2[11] = 56;
  LODWORD(v2[12]) = 50593795;
  v2[16] = 76;
  LODWORD(v2[17]) = 262147;
  LODWORD(v2[18]) = 1;
  v2[21] = 76;
  LODWORD(v2[22]) = 262147;
  LODWORD(v2[23]) = 1;
  v2[26] = 76;
  LODWORD(v2[27]) = 262147;
  LODWORD(v2[28]) = 1;
  v2[31] = 76;
  LODWORD(v2[32]) = 262147;
  LODWORD(v2[33]) = 1;
  v2[36] = 76;
  LODWORD(v2[37]) = 262147;
  v2[40] = "CLANG_LOG_UDTS";
  v2[45] = "CLANG_LOG_FILES";
  v2[50] = "CLANG_LOG_ARGV";
  LODWORD(v2[38]) = 1;
  v2[41] = 76;
  LODWORD(v2[42]) = 262147;
  LODWORD(v2[43]) = 1;
  v2[46] = 76;
  LODWORD(v2[47]) = 262147;
  LODWORD(v2[48]) = 1;
  v2[51] = 76;
  LODWORD(v2[52]) = 262147;
  LODWORD(v2[53]) = 1;
  v2[55] = "CLANG_LOG_TARGET_INFO";
  v2[56] = 76;
  LODWORD(v2[57]) = 262147;
  LODWORD(v2[58]) = 1;
  read_config2("idaclang", 1, (__int64)v2, 12, 0, 0, 0, a1);
  return v3 - __readfsqword(0x28u);
}

