/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63B90
// Address: 0x00063B90

//----- (00063B90) --------------------------------------------------------
int *__fastcall sub_63B90(int a1, int a2, int a3)
{
  if ( a1 <= 15 || (unsigned int)(a1 - 61) <= 0x1F )
    return (int *)*(&off_D00F0 + a1);
  if ( (a1 & 0xFFFFFFFD) == 0x10 )
    return &dword_9F490;
  sub_23388((int)"Bad register number passed to arm.get_register_value: %d", a1, a3, a1 & 0xFFFFFFFD);
  return nullptr;
}
// 9F490: using guessed type int dword_9F490;
// D00F0: using guessed type int (*off_D00F0)[14];
