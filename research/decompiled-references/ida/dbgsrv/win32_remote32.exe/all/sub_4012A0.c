/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4012A0
// Address: 0x004012A0

//----- (004012A0) --------------------------------------------------------
BOOL sub_4012A0()
{
  BOOL result; // eax

  result = IsDebuggerPresent();
  byte_4B70F0 = result;
  return result;
}
// 4B70F0: using guessed type char byte_4B70F0;
