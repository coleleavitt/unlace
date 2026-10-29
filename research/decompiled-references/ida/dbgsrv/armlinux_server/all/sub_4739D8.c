/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4739D8
// Address: 0x00000000004739D8

//----- (00000000004739D8) ----------------------------------------------------
__int64 *__fastcall sub_4739D8(int a1)
{
  char *v2; // x1

  if ( a1 <= 15 || (unsigned int)(a1 - 61) <= 0x1F )
    return (__int64 *)*(&off_51B190 + a1);
  if ( (a1 & 0xFFFFFFFD) == 0x10 )
    return &qword_4C8F88;
  if ( (unsigned int)(a1 - 129) <= 0x1E || (unsigned int)(a1 - 163) <= 0x1F )
    return (__int64 *)*(&off_51B190 + a1);
  if ( a1 == 161 )
    return &qword_4C8F90;
  v2 = "PC";
  if ( a1 == 162 )
    return (__int64 *)v2;
  sub_41A920("Bad register number passed to arm.get_register_value: %d");
  return nullptr;
}
// 4C8F88: using guessed type __int64 qword_4C8F88;
// 4C8F90: using guessed type __int64 qword_4C8F90;
// 51B190: using guessed type __int64 (*off_51B190)[16];
