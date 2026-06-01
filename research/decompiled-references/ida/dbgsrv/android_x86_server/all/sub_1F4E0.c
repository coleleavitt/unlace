/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1F4E0
// Address: 0x0001F4E0

//----- (0001F4E0) --------------------------------------------------------
unsigned int __cdecl sub_1F4E0(int a1, _BYTE *a2, _DWORD *a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // edi
  int v7[6]; // [esp+4h] [ebp-18h] BYREF

  v7[1] = __readgsdword(0x14u);
  if ( a2 )
    *a2 = 0;
  v3 = a3[1];
  if ( (v3 & 0x7F) == 0x7F )
  {
    v4 = v3 >> 16;
    if ( v3 >> 16 )
    {
      if ( (v3 & 0xFF00) == 0x500 || v4 == 128 )
      {
        if ( v4 == 3 )
        {
          ptrace(PTRACE_GETEVENTMSG, *a3, 0, v7);
          v5 = v7[0];
          if ( sub_1FA20() )
            ptrace(PTRACE_SETOPTIONS, v5, 0, 8);
          sub_1F5C0(a1, v7[0], -1, 1);
          if ( !a2 )
            return __readgsdword(0x14u);
        }
        else if ( !a2 || v4 != 128 )
        {
          return __readgsdword(0x14u);
        }
        *a2 = 1;
      }
    }
  }
  return __readgsdword(0x14u);
}
