/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63D10
// Address: 0x00063D10

//----- (00063D10) --------------------------------------------------------
int *__fastcall sub_63D10(int a1, int a2, int a3)
{
  if ( a1 <= 15 || (unsigned int)(a1 - 61) <= 0x1F )
    return (int *)*(&off_D10F0 + a1);
  if ( (a1 & 0xFFFFFFFD) == 0x10 )
    return &dword_9F5CC;
  sub_23528((int)"Bad register number passed to arm.get_register_value: %d", a1, a3, a1 & 0xFFFFFFFD);
  return nullptr;
}
// 9F5CC: using guessed type int dword_9F5CC;
// D10F0: using guessed type int (*off_D10F0)[14];
