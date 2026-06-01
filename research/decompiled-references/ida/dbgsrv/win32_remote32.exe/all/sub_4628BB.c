/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4628BB
// Address: 0x004628BB

//----- (004628BB) --------------------------------------------------------
char __usercall sub_4628BB@<al>(int a1@<ebx>, int a2@<edi>, unsigned int a3)
{
  if ( byte_4B7505 )
    return 1;
  if ( a3 > 1 )
  {
    sub_4639C5(a1, a2, a3, 5u);
    __debugbreak();
  }
  if ( !sub_4639B9() || a3 )
  {
    dword_4B7508 = -1;
    dword_4B750C = -1;
    dword_4B7510 = -1;
    dword_4B7514 = -1;
    dword_4B7518 = -1;
    dword_4B751C = -1;
  }
  else if ( sub_4772B3((uintptr_t *)&dword_4B7508) || sub_4772B3((uintptr_t *)&dword_4B7514) )
  {
    return 0;
  }
  byte_4B7505 = 1;
  return 1;
}
// 4B7505: using guessed type char byte_4B7505;
// 4B7508: using guessed type int dword_4B7508;
// 4B750C: using guessed type int dword_4B750C;
// 4B7510: using guessed type int dword_4B7510;
// 4B7514: using guessed type int dword_4B7514;
// 4B7518: using guessed type int dword_4B7518;
// 4B751C: using guessed type int dword_4B751C;
