/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005D70C
// Address: 0x000000010005D70C

//----- (000000010005D70C) ----------------------------------------------------
__int64 sub_10005D70C()
{
  __int64 _18; // [xsp+18h] [xbp+8h]

  sub_100061050((__int64)&qword_1000A57E8, 1);
  qword_1000A57E8 = (__int64)off_10009F4D0;
  dword_1000A5874 = 0;
  qword_1000A5860 = 0;
  qword_1000A5868 = 0;
  qword_1000A5858 = 0;
  byte_1000A5870 = 0;
  word_1000A5850 = 23946;
  byte_1000A5852 = 0;
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return __cxa_atexit((void (__fastcall *)(void *))sub_10005D10C, &qword_1000A57E8, (void *)&_mh_execute_header);
}
// 10005D790: variable '_18' is possibly undefined
// 10009F4D0: using guessed type __int64 (__fastcall *off_10009F4D0[4])();
// 1000A57E8: using guessed type __int64 qword_1000A57E8;
// 1000A5850: using guessed type __int16 word_1000A5850;
// 1000A5852: using guessed type char byte_1000A5852;
// 1000A5858: using guessed type __int64 qword_1000A5858;
// 1000A5860: using guessed type __int64 qword_1000A5860;
// 1000A5868: using guessed type __int64 qword_1000A5868;
// 1000A5870: using guessed type char byte_1000A5870;
// 1000A5874: using guessed type int dword_1000A5874;
