/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A4F4
// Address: 0x0007A4F4

//----- (0007A4F4) --------------------------------------------------------
unsigned int __fastcall sub_7A4F4(int a1, char *s)
{
  const char *v3; // r0
  char *v4; // r1
  void *v6[3]; // [sp+0h] [bp-14h] BYREF
  const char *v7[2]; // [sp+Ch] [bp-8h] BYREF

  if ( a1 )
  {
    if ( s )
    {
      v3 = qstrtok(s, ":", v7);
      if ( v3 )
      {
        v4 = (char *)v3;
        do
        {
          if ( *v4 )
          {
            sub_1B09C((int)v6, v4);
            sub_265B0(a1, v6);
            if ( v6[0] )
            {
              v6[1] = nullptr;
              qfree(v6[0]);
              v6[2] = nullptr;
              v6[0] = nullptr;
            }
          }
          v4 = (char *)qstrtok(nullptr, ":", v7);
        }
        while ( v4 );
      }
    }
  }
  return _stack_chk_guard - (unsigned int)v7[1];
}
