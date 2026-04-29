__int64 __fastcall sub_23820(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  __int64 v4; // rax

  if ( under_debugger )
    BUG();
  interr(10532);
  if ( MEMORY[0x8000000F8] )
  {
    if ( MEMORY[0x800000078] )
    {
      if ( MEMORY[0x800000208] == 1 )
      {
        v4 = *(_QWORD *)(a2 + 16);
        if ( v4 )
        {
          if ( *(char *)(a2 + 11) < 0 )
            *v2 = v4;
        }
      }
    }
  }
  return 1;
}
