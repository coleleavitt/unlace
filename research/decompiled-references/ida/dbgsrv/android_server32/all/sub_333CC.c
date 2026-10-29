/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_333CC
// Address: 0x000333CC

//----- (000333CC) --------------------------------------------------------
const char *__fastcall sub_333CC(__int64 a1)
{
  if ( a1 <= 767 )
  {
    if ( a1 > 511 )
    {
      switch ( a1 )
      {
        case 512LL:
          return "NT_386_TLS";
        case 513LL:
          return "NT_386_IOPERM";
        case 514LL:
          return "NT_X86_XSTATE";
      }
    }
    else if ( (unsigned __int64)(a1 - 256) <= 0xF )
    {
      __asm { ADD             PC, R0 }
    }
  }
  else
  {
    if ( (unsigned __int64)(a1 - 768) <= 0xC )
      __asm { ADD             PC, R4 }
    if ( (unsigned __int64)(a1 - 1024) <= 5 )
      __asm { ADD             PC, R4 }
    if ( a1 == 1189489535 )
      return "NT_PRXFPREG";
  }
  return nullptr;
}
