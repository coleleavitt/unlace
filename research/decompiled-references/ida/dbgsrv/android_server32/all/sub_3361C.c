/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3361C
// Address: 0x0003361C

//----- (0003361C) --------------------------------------------------------
const char *__fastcall sub_3361C(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 1) <= 0x11 )
    __asm { ADD             PC, R2 }
  if ( a1 == 1179208773 )
    return "NT_FILE";
  if ( a1 == 1397311305 )
    return "NT_SIGINFO";
  return nullptr;
}
