/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3BCF0
// Address: 0x000000000003BCF0

//----- (000000000003BCF0) ----------------------------------------------------
unsigned __int64 __fastcall sub_3BCF0(__int64 a1, _BYTE *a2, unsigned int *a3)
{
  int v3; // ecx
  int v4; // eax
  unsigned int v5; // r15d
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
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
          if ( (unsigned int)sub_3C1B0(16897) )
            ptrace(PTRACE_SETOPTIONS, v5, 0, 8);
          sub_3BDD0(a1, v7[0], -1, 1);
          if ( !a2 )
            return __readfsqword(0x28u);
        }
        else if ( !a2 || v4 != 128 )
        {
          return __readfsqword(0x28u);
        }
        *a2 = 1;
      }
    }
  }
  return __readfsqword(0x28u);
}
