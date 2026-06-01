/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B5F10
// Address: 0x000B5F10

//----- (000B5F10) --------------------------------------------------------
int __cdecl sub_B5F10(__pid_t pid)
{
  void *v1; // eax
  __time_t v3[4]; // [esp+8h] [ebp-10h] BYREF

  v3[1] = __readgsdword(0x14u);
  v1 = (void *)sub_B4700();
  if ( (unsigned int)(sub_B3D90(v1, v3, pid, 0, -1) + 1) >= 2
    && (v3[0] & 0x7F) != 0
    && ((LOBYTE(v3[0]) + 1) & 0x7E) == 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1150);
    BUG();
  }
  return 0;
}
// 13E34C: using guessed type int under_debugger;
